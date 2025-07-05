//
// Created by abdo on 7/2/25.
//

#ifndef BOOKEDITION_H
#define BOOKEDITION_H
#include  "Category.h"


class BookPublishingInfo {

private:
    std::string publisher;
    Category category;

public:
    BookPublishingInfo();
    BookPublishingInfo(std::string publisher , Category category);
    std::string getPublisher();
};



#endif //BOOKEDITION_H
