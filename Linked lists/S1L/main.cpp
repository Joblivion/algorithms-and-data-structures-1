#include "E1.hpp"
#include "s1l.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "-- Testing S1L --" << endl;

    int elements[4] = {1,2,3,4};
    s1l myList(4,elements);

    myList.pushBack(1);
    myList.pushBack(10);
    myList.pushBack(101);

    cout << myList[0] << endl;
    cout << myList[1] << endl;
    cout << myList[2] << endl;
    cout << myList[3] << endl;
    cout << myList[4] << endl;
    cout << myList[5] << endl;
    cout << myList[6] << endl << endl;

    myList.reverse();

    cout << myList[0] << endl;
    cout << myList[1] << endl;
    cout << myList[2] << endl;
    cout << myList[3] << endl;
    cout << myList[4] << endl;
    cout << myList[5] << endl;
    cout << myList[6] << endl << endl;

    cout << "-- Testing Set implemented with S1L --" << endl;


    return 0;
}
