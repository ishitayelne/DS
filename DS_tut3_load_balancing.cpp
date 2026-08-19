//Load Balancing:
/*For example, imagine you have a set of servers that handle requests for a web application.
The key to load balancing is using the hash value of a client's IP address or a request ID to determine which server should handle the request.
The hash function is typically designed so that the data is evenly distributed across the servers, ensuring that no single server is overloaded.
Write a program of a load balancing system using hashing, where a basic hash table for mapping incoming requests to a set of servers.*/
#include <iostream>
using namespace std;

int main() {
    int n, i, j, key, MAX = 10;
    int hashT[10];
    int arr[10];

    // Initialize hash table
    for(i = 0; i < MAX; i++) {
        hashT[i] = 0;
    }

    // 1. No of elements in array
    cout << "Enter no of requests: ";
    cin >> n;
    cout << "\n";

    // 2. Entering request IDs
    cout << "Enter request IDs:" << endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 3. Displaying requests
    cout << "\nRequests are: ";
    for(i = 0; i < n; i++) {
        cout << " " << arr[i];
    }

    // 4. Hashing and assigning requests to servers
    for(i = 0; i < n; i++) {
        key = arr[i];
        j = key % MAX;

        while(hashT[j] != 0) {
            j = (j + 1) % MAX;
        }

        hashT[j] = key;
    }

    // 5. Displaying server and request allocation
    cout << "\n\nServer Allocation:" << endl;

    for(i = 0; i < MAX; i++) {
        if(hashT[i] == 0) {
            cout << "Server " << i << " --> Empty" << endl;
        }
        else {
            cout << "Server " << i << " --> Request " << hashT[i] << endl;
        }
    }

    return 0;
}
