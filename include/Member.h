//
// Created by abdo on 7/5/25.
//

#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>


class Member {
private:
    int id{};
    std::string name;

public:
    Member();
    Member(int id , const std::string& name);
    int getId() const ;
    const std::string& getName() const ;
    void setName(const std::string& newName );
    bool operator ==(int otherId) const;
};



#endif //MEMBER_H
