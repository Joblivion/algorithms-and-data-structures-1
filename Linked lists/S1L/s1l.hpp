#ifndef S1L_HPP
#define S1L_HPP

#include "E1.hpp"

class s1l {
    protected:
        E1* fstNode;
    public:
        s1l(int data);
        s1l(int n,int data[]);
        ~s1l();
        
        void pushBack(int data);
        void pop();
        void remove(int index);
        void removeValue(int key);
        int operator[](int index);
        void reverse();
};

#endif