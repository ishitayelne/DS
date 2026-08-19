//Organizing cards in a hand
/*Application: When playing card games, players often use an approach similar to insertion sort to  organize their cards.
They pick one card at a time and insert it into the correct position in their hand, maintaining a sorted sequence.
Write a program that demonstrates how to organize (sort) cards in a hand using insertion sort.*/
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    cout << "\nOrganizing Cards Using Insertion Sort:\n";
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        cout << "After inserting card " << key << ": ";
        for (int k = 0; k <= i; k++) {
            cout << arr[k] << " ";
        }
        cout << "\n\n";
    }
}

int main() {
    int n;
    cout << "Enter number of cards: ";
    cin >> n;

    int arr[n];
    cout << "Enter the card values:\n";
    for (int i = 0; i < n; i++) {
        cout << "Card " << i + 1 << ": ";
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Final Sorted Hand:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
