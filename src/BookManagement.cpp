//
// Created by abdo on 7/2/25.
//

#include "../include/BookManagement.h"
#include <algorithm>

// BookInventory class implementation
BookManagement::BookManagement() = default;

std::vector<Book>::iterator BookManagement::findBook(int id) {
    return std::find(books.begin() , books.end() , id);
}


bool BookManagement::addBook(const Book &book) {
    auto it = findBook(book.getId());
    if (it  != books.end())
        return false;
    books.push_back(std::move(book));
    return true;
}



bool BookManagement::updateBook(int id, const Book &book) {
    auto it = findBook(id);
    if (it == books.end())
        return false;
    *it = std::move(book);
    return true;
}

const std::vector<Book> &BookManagement::getBooks() const{
    return books;
}


bool BookManagement::removeBook(int id) {
    auto it = findBook(id);
    if (it == books.end())
        return false;
    books.erase(it);
    return true;
}

std::optional<Book> BookManagement::getBook(int id) const {
    auto it = std::find_if(books.begin() , books.end(), [&id](const Book& book) {return id == book.getId();});
    if (it != books.end())
        return *it;
    return std::nullopt;
}


