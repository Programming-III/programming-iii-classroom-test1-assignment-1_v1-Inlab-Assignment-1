#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"


class enclosure{
private :
    animal * animals ;
    int capacity;
    int currentCount ;


public :
    void addanimal(animal*a );
    void displayanimal();

};









#endif
