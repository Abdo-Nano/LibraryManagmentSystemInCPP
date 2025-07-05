//
// Created by abdo on 7/2/25.
//

#ifndef CATEGORY_H
#define CATEGORY_H
#include <iostream>



class Category {

private:
    int id{};
    std::string title;

public:
    Category();
    Category(int id , std::string title);
    int getId();
    std::string getTitle();
};



#endif //CATEGORY_H
