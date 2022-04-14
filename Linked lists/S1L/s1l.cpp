#include "E1.hpp"
#include "s1l.hpp"
#include <iostream>

s1l::s1l(int data) {
    fstNode = new E1;
    fstNode->next = NULL;
    fstNode->key = data;
}

s1l::s1l(int n, int data[]) {
    fstNode = new E1;
    fstNode->next = NULL;
    fstNode->key = data[0];

    for (int i = 1; i < n; i++) {
        pushBack(data[i]);
    }
}

s1l::~s1l()
{
    E1 *p;
    E1 *q;
    p = fstNode;

    while(p->next) {
        q = p->next;
        delete p;
        p = q;
    }
    delete p;
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

void s1l::pop()
{
    E1 *helperNode;
    helperNode = fstNode;

    if (helperNode->next == NULL) {
        // Exception handling instead!
        std::cerr << "Can't pop from one-element list" << std::endl;
    } else {
        while (helperNode->next->next) {
            helperNode = helperNode->next;
        }
        delete helperNode->next;
        helperNode->next = NULL;
    }
}

void s1l::assignValue(int index, int data)
{
    E1 *helperNode;
    helperNode = fstNode;

    for (int i = 1; i <= index; i++) {
        helperNode = helperNode->next;
    }

    helperNode->key = data;
}

void s1l::removeAtIndex(int index)
{
    E1 *helperNode;
    helperNode = fstNode;

    for (int i = 0; i < index; i++) {
        helperNode = helperNode->next;
    }


}

void s1l::removeValueOf(int data)
{
    E1 *helperNode;
    helperNode = fstNode;

    while (helperNode->next && helperNode->key != data) {
        helperNode = helperNode->next;
    }

    if (helperNode->key == data) {
        //remove node
    } else {
        // Exception handling instead!
        std::cerr << "Data is was not found in the list" << std::endl;
    }
}

int s1l::operator[](int index)
{
    // Kéne exception handling túlindexelésre
    
    E1 *helperNode;
    helperNode = fstNode;

    for (int i = 1; i <= index; i++) {
        helperNode = helperNode->next;
    }

    return helperNode->key;
}

void s1l::reverse()
{
    E1* p;
    E1* q;

    p = fstNode;
    fstNode = NULL;

    while (p) {
        q = p;
        p = p->next;
        q->next = fstNode;
        fstNode = q;
    }
}

int s1l::length()
{
    E1 *helperNode;
    helperNode = fstNode;
    _length = 1;

    while (helperNode->next) {
        helperNode = helperNode->next;
        _length++;
    }
    return _length;
}