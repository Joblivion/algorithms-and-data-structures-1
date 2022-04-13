#include "E1.hpp"
#include "s1l.hpp"
#include <iostream>

s1l::s1l(int data) {
    fstNode = new E1;
    fstNode->next = NULL;
    fstNode->key = data;
}

s1l::~s1l()
{
    E1 *p;
    E1 *q;
    p = fstNode;

    while(p->next) {
        q = p->next;
        delete(p);
        p = q;
    }
    delete(p);
}

void s1l::pushBack(int data)
{
    E1 *helperNode;
    helperNode = fstNode;

    while (helperNode->next) {
        helperNode = helperNode->next;
    }

    E1 *newNode = new E1;
    newNode->next = NULL;
    newNode->key = data;
    helperNode->next = newNode;        
}


int s1l::operator[](int index)
{
    E1 *helperNode;
    helperNode = fstNode;

    for (int i = 1; i <= index; i++) {
        helperNode = helperNode->next;
    }

    return helperNode->key;
}