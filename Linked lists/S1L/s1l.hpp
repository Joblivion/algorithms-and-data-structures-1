#ifndef S1L_HPP
#define S1L_HPP

#include "E1.hpp"

class s1l {
    private:
        E1* fstNode;
    public:
        s1l(int data);
        ~s1l();
        // 2nd constructor with array parameter coming up
        void pushBack(int data);
        void pop();
        void remove(int index);
        void removeValue(int key);
        int operator[](int index);
};

#endif