#include "E1.hpp"
#include "s1l.hpp"
#include <iostream>

using namespace std;

int main() {

    s1l myList(33);
    myList.pushBack(1);
    myList.pushBack(10);
    myList.pushBack(101);

    cout << myList[0] << endl;
    cout << myList[1] << endl;
    cout << myList[2] << endl;
    cout << myList[3] << endl;

    return 0;
}
