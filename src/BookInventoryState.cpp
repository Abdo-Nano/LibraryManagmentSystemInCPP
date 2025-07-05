//
// Created by abdo on 7/2/25.
//

#include "../include/BookInventoryState.h"


BookInventoryState:: BookInventoryState() = default;

BookInventoryState::BookInventoryState(int totalCopies, int availableCopies, Status status):
    totalCopies(totalCopies),
    availableCopies(availableCopies),
    status(status){}

int BookInventoryState::getAvailableCopies() {
    return availableCopies;
}

Status BookInventoryState::getStatus() {
    return status;
}

int BookInventoryState::getTotalCopies() {
    return totalCopies;
}


