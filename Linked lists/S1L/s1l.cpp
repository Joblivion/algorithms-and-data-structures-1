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
    // Kéne exception handling túlindexelésre
    
    E1 *helperNode;
    helperNode = fstNode;

    for (int i = 1; i <= index; i++) {
        helperNode = helperNode->next;
    }

    return helperNode->key;
}

void s1l::reverse() {
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