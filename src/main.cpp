#include <iostream>
#include <memory>
#include "../include/Book.h"
#include "../include/BookManagement.h"
#include "../include/Category.h"
#include "../include/Member.h"
#include "../include/MemberManagement.h"


int main() {
    // 1. Create Publishing Info (publisher + category)
    BookPublishingInfo gatsbyInfo("Scribner", Category( 1, "Fiction"));
    BookPublishingInfo cleanCodeInfo("Prentice Hall", Category(2, "Programming"));

    // 2. Create Inventory States (copies + status)
    BookInventoryState gatsbyState(5, 3, Status::available);
    BookInventoryState cleanCodeState(3, 1, Status::available);

    // 3. Create Books
    Book book1(
        1,                      // id
        9780743273565,          // ISBN
        "The Great Gatsby",     // title
        {"F. Scott Fitzgerald"},// authors
        gatsbyInfo,             // publishing info
        gatsbyState             // inventory state
    );

    Book book2(
        2,
        9780132350884,
        "Clean Code",
        {"Robert C. Martin"},
        cleanCodeInfo,
        cleanCodeState
    );

    // 4. Test Inventory
    std::unique_ptr<BookManagement> inventory = std::make_unique<BookManagement>();
    inventory->addBook(book1);
    inventory->addBook(book2);
    inventory->updateBook(1 , book2);
    std::cout << "=== All Books ===" << std::endl;
    for (const auto item : inventory->getBooks()) {
        std::cout << item.getTitle() << std::endl;
    }
    // 5. Test Accessors
    std::cout << "\n=== Accessing Decomposed Data ===" << std::endl;
    std::cout << "Book 1 Publisher: " << book1.getPublishingInfo().getPublisher() << std::endl;
    std::cout << "Book 2 Available Copies: " << book2.getInventoryState().getAvailableCopies() << std::endl;

    std::cout << "\n=== Testing Members ===" << std::endl;



    return 0;
}