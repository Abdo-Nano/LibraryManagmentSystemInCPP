//
// Created by abdo on 7/5/25.
//

#ifndef MEMBERMANAGEMENT_H
#define MEMBERMANAGEMENT_H
#include <iostream>
#include <vector>
#include <memory>
#include <optional>

#include "Member.h"


class MemberManagement {

private:
    std::vector<Member> members;
    std::vector<Member>::iterator findMember(int id);
public:
    MemberManagement();
    bool addMember(const Member& member);
    bool removeMember(int id);
    bool updateMember(int id , const std::string& newName);
    std::optional<Member> getMember(int id) const;
    const std::vector<Member>& getAllMembers() const;
};




#endif //MEMBERMANAGEMENT_H
