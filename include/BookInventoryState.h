//
// Created by abdo on 7/2/25.
//

#ifndef BOOKINVENTORYRECORD_H
#define BOOKINVENTORYRECORD_H

enum Status {
    available,
    checkedout,
    reserved,
    lost,
};


class BookInventoryState {
private:

    int totalCopies{};
    int availableCopies{};
    Status status{};

public:

    BookInventoryState();
    BookInventoryState(int totalCopies , int availableCopies , Status status);
    int getTotalCopies();
    int getAvailableCopies();
    Status getStatus();
};



#endif //BOOKINVENTORYRECORD_H
