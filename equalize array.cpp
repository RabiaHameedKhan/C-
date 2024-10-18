#include <iostream>
using namespace std;

int equalizeArray(int arr[], int n) {
    int max_count = 0;  
    
    for (int i = 0; i < n; i++) {
        int count = 0;  

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;  
            }
        }
        if (count > max_count) {
            max_count = count;
        }
    }
    return n - max_count;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << equalizeArray(arr, n) << endl;

    return 0;
}

