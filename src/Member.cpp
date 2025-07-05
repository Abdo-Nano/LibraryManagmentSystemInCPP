//
// Created by abdo on 7/5/25.
//

#include "../include/Member.h"





Member::Member() = default;

Member::Member(int id ,const std::string& name) : id(id) , name(name){}


int Member::getId() const {
    return id;
}

void Member::setName(const std::string &newName) {
    name = newName;
}

const std::string& Member::getName() const {
    return this->name;
}

bool Member::operator==(int otherId) const {
    return id == otherId;
}
