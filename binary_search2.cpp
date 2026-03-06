#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of array elements you want to insert" << endl;
    cin >> n;

    int* arr = new int[n];  

    cout << "Enter Array elements (in sorted order)" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter Target you want to search" << endl;
    cin >> target;

    int beg = 0;
    int end = n - 1;
    int loc = -1;

    while (beg <= end) {
        int mid = (beg + end) / 2;

        if (target == arr[mid]) {
            loc = mid;
            break;
        } 
        else if (target > arr[mid]) {
            beg = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }

    if (loc != -1) {
        cout << "Position of " << target << " is " << loc << endl;
    } else {
        cout << "Search unsuccessful" << endl;
    }

    
    return 0;
}

