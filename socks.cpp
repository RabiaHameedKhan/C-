#include <iostream>
using namespace std;

int sockMerchant(int n, int ar[]) {
    int count[101] = {0};  
    int pairs = 0;

    for (int i = 0; i < n; i++) {
        count[ar[i]]++;
    }

    for (int i = 1; i <= 100; i++) {
        pairs += count[i] / 2;  
    }

    return pairs;
}

int main() {
    int n;
    cin >> n;  
    int ar[n];

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    cout << sockMerchant(n, ar);
    return 0;
}

