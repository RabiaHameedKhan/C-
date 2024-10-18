#include <iostream>
#include <string>
using namespace std;

int countValleys(int steps, string path) {
    int level = 0;  
    int valley = 0; 
	for (int i = 0; i < steps; i++) {
        if (path[i] == 'U' || path[i] == 'u') {
            level++;
            if (level == 0) {
                valley++;
            }
        } 
        else if (path[i] == 'D' || path[i] == 'd') {
            
            level--;
        }
    }

    return valley;
}

int main() {
    int steps;
    string path;
    cin >> steps;
    cin >> path;
	int result = countValleys(steps, path);
    cout <<result;

    return 0;
}

