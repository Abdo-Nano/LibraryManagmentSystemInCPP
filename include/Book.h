//
// Created by abdo on 7/2/25.
//

#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <vector>
#include "BookInventoryState.h"
#include "BookPublishingInfo.h"


class Book {

private:
    int id{};
    int ISBN{};
    std::string title;
    std::vector<std::string> authors;
    BookPublishingInfo info;
    BookInventoryState state;

public:
    Book() = default;
    Book(int id , int ISBN , std::string title , std::vector<std::string> authors , BookPublishingInfo info,
        BookInventoryState state);

    int getId() const;
    const std::string& getTitle() const;
    std::vector<std::string> getAuthors();
    BookPublishingInfo getPublishingInfo();
    BookInventoryState getInventoryState();
    void printBookDetails();
    bool operator==(int otherId) const;
};



#endif //BOOK_H
