#include <iostream>
using namespace std;

int main() {
    int arr[50], n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n1.Traverse  2.Insert  3.Delete  4.Search  5.Update  6.Sort  0.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1:   // Traverse
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;

        case 2: { // Insert
            int pos, val;
            cin >> pos >> val;
            for (int i = n; i > pos; i--)
                arr[i] = arr[i - 1];
            arr[pos] = val;
            n++;
            break;
        }

        case 3: { // Delete
            int pos;
            cin >> pos;
            for (int i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];
            n--;
            break;
        }

        case 4: { // Search
            int key;
            cin >> key;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Found at index " << i << endl;
                    break;
                }
            }
            break;
        }

        case 5: { // Update
            int pos, val;
            cin >> pos >> val;
            arr[pos] = val;
            break;
        }

        case 6: { // Sort
            for (int i = 0; i < n - 1; i++)
                for (int j = i + 1; j < n; j++)
                    if (arr[i] > arr[j])
                        swap(arr[i], arr[j]);
            break;
        }

        case 0:
            break;
        }
    } while (choice != 0);

    return 0;
}
