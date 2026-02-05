#include <iostream>
using namespace std;

int main() {
    int n, key, ch;
    int a[10];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Linear Search\n2. Binary Search\n";
    cout << "Enter choice: ";
    cin >> ch;

    cout << "Enter element to search: ";
    cin >> key;

    switch(ch) {

        case 1: // Linear Search
            for(int i = 0; i < n; i++) {
                if(a[i] == key) {
                    cout << "Element found at position " << i + 1;
                    return 0;
                }
            }
            cout << "Element not found";
            break;

        case 2: { // Binary Search
            int low = 0, high = n - 1, mid;

            while(low <= high) {
                mid = (low + high) / 2;

                if(a[mid] == key) {
                    cout << "Element found at position " << mid + 1;
                    return 0;
                }
                else if(a[mid] < key)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            cout << "Element not found";
            break;
        }

        default:
            cout << "Wrong choice";
    }

    return 0;
}
