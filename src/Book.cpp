//
// Created by abdo on 7/2/25.
//

#include "Book.h"


Book::Book(int id, int ISBN, std::string title, std::vector<std::string> authors,
           BookPublishingInfo info,BookInventoryState state) :
    id(id),
    ISBN(ISBN),
    title(std::move(title)),
    authors(std::move(authors)),
    info(info) ,
    state(state)
{}

int Book::getId() const  {
    return id;
}


const std::string& Book::getTitle() const{
    return title;
}

std::vector<std::string> Book::getAuthors() {
    return authors;
}


void Book::printBookDetails() {
    std::cout << "ID: " << this->getId()
    << ", Title: " << this->getTitle()
    << ", Publisher: " << this->info.getPublisher()
    << std::endl;
}


BookInventoryState Book::getInventoryState() {
    return state;
}

BookPublishingInfo Book::getPublishingInfo() {
    return info;
}

bool Book::operator==(int otherId) const {
    return this->id == otherId;
}
