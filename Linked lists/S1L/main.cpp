#include "E1.hpp"
#include "s1l.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "-- Testing S1L-s --" << endl;

    int elements[4] = {1,2,3,4};
    s1l myList(4,elements);

    myList.pushBack(1);
    myList.pushBack(10);
    myList.pushBack(101);
    myList.pop();
    myList.pop();

    cout << myList[0] << endl;
    cout << myList[1] << endl;
    cout << myList[2] << endl;
    cout << myList[3] << endl;
    cout << myList[4] << endl;
    cout << "length: " << myList.length() << endl << endl;

    myList.reverse();
    myList.pop();
    myList.pop();
    myList.assignValue(1,999);

    cout << myList[0] << endl;
    cout << myList[1] << endl;
    cout << myList[2] << endl;

    cout << "length: " << myList.length() << endl << endl;

    cout << "-- Testing Sets --" << endl;


    return 0;
}
