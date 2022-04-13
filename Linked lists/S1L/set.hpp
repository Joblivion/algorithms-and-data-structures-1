#ifndef SET_HPP
#define SET_HPP

#include "s1l.hpp"

class set: public s1l {
    // A pushBack() más lesz. Tartozni fog hozzá egy keresés, hogy a set 
    // növekvő maradjon.
    public:
        E1* findInSet(int data);
        void insertIntoSet(int data);
        void deleteFromSet(int data);
};

#endif