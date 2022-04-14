#ifndef S1L_HPP
#define S1L_HPP

#include "E1.hpp"

class s1l {
    protected:
        E1* fstNode;
        int _length;
    public:
        s1l(int data);
        s1l(int n,int data[]);
        ~s1l();
        
        void pushBack(int data);
        void pop();
        void assignValue(int index, int data);
        void removeAtIndex(int index); // kell még
        void removeValueOf(int data); // kell még
        int operator[](int index);
        void reverse();
        int length();

};

#endif