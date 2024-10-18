#include <iostream>
using namespace std;

int pickingNumbers(int a[], int n) {
  int frequency[100] = {0};
     for (int i = 0; i < n; i++) {
        frequency[a[i]]++;
    }
     int maxLength = 0;
     for (int i = 0; i < 99; i++) {
       int currentLength = frequency[i] + frequency[i + 1];
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() {
    int n;
    cin >> n;
     int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int result = pickingNumbers(a, n);
    cout<<result;
    
    return 0;
}

