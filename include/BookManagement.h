//
// Created by abdo on 7/2/25.
//

#ifndef BOOKINVENTORY_H
#define BOOKINVENTORY_H
#include <vector>
#include "Book.h"



class BookManagement {

private:
    std::vector<Book> books;
    std::vector<Book>::iterator findBook(int id);
public:
    BookManagement();
    bool addBook(const Book& book);
    bool updateBook(int id , const Book& book);
    bool removeBook(int id);
    const std::vector<Book>& getBooks() const;
};



#endif //BOOKINVENTORY_H
