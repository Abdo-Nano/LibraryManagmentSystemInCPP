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
    members.push_back(std::move(member));
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


