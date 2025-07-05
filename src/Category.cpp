//
// Created by abdo on 7/2/25.
//

#include "../include/Category.h"

Category::Category(int id, std::string title): id(id), title(std::move(title)) {}


Category::Category() = default;

int Category::getId() {
    return id;
}

std::string Category::getTitle() {
    return title;
}


