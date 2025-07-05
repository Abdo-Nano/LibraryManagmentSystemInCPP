//
// Created by abdo on 7/2/25.
//

#include "../include/BookPublishingInfo.h"

BookPublishingInfo::BookPublishingInfo() = default;

BookPublishingInfo::BookPublishingInfo(std::string publisher, Category category):
    publisher(std::move(publisher)),
    category(category) {}


std::string BookPublishingInfo::getPublisher() {
    return this->publisher;
}
