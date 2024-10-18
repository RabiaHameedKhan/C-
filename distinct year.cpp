#include <iostream>
#include <string>
using namespace std;

bool distinctDigit(int year){
    int digits[10] = {0};
    string year_in_str = to_string(year);

    for (int i = 0; i < year_in_str.length(); i++) {
        int d = year_in_str[i] - '0';  
        
        if (digits[d] > 0) {
            return false; 
        }
        digits[d]++;  
    }
    
    return true; 
}

int main(){
    int y;
    cin >> y; 

    while (true) {
        y++;  
        if (distinctDigit(y)) {
            cout << y;
            break;  
        }
    }
    
    return 0;
}

