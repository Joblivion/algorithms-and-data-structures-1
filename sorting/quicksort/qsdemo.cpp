#include "quicksort.hpp"
#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "how many numbers?" << endl;
    cin >> n;

    int input[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input,0,n);

    cout << "your numbers sorted:" << endl << endl;

    for (int i = 0; i < n; i++) {
        cout << input[i] << endl;
    }

    return 0;
}