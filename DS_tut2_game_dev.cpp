//Game Development
/*Write a game development program that implements the Bubble Sort algorithm.
The program will simulate a simple game where the player can input a set of numbers, and the numbers will be sorted using Bubble Sort to simulate a "level-up" scenario where the player's scores are sorted in ascending order.*/
#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, j, temp;

    cout << "Enter number of scores: ";
    cin >> n;

    cout << "\nEnter the scores: " << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nYour scores are: ";
    for (i = 0; i < n; i++) {
        cout << " " << arr[i];
    }

    // Bubble Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < (n - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\n\nSwapping complete" << endl << "Here are the sorted scores: ";
    for (i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    return 0;
}
