//
// Created by abdo on 7/5/25.
//

#include "../include/MemberManagement.h"
#include <algorithm>

MemberManagement::MemberManagement() = default;


std::vector<Member>::iterator MemberManagement::findMember(int id) {
    return std::find(members.begin() , members.end() , id);
}


bool MemberManagement::addMember(const Member &member) {
    if (findMember(member.getId()) != members.end())
        return false;

    auto comp = [](const Member& a, const Member& b) {return a.getId() < b.getId();};
    auto position = std::lower_bound(members.begin() , members.end() , member , comp);
    members.insert(position , member);
    return true;
}


bool MemberManagement::removeMember(int id) {
    auto it = findMember(id);
    if (it == members.end())
        return false;

    members.erase(it);
    return true;
}

bool MemberManagement::updateMember(int id, const std::string& newName) {
    auto it = findMember(id);
    if (it == members.end()) {
        return false;
    }
    it->setName(newName);
    return true;
}

const std::vector<Member>& MemberManagement::getAllMembers() const {
    return members;
}

std::optional<Member> MemberManagement::getMember(int id) const {
    int left = 0;
    int right = members.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (members[mid].getId() == id)
            return members[mid];

        if (members[mid].getId() < id)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return std::nullopt;
}


