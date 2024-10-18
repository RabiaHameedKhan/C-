#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int wordcount;
    bool inword;

    cout << "Type anything you want to write: ";

 
    while (getline(cin, input)) {
        wordcount = 0;
        inword = false;

       
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == ' ' || input[i] == '\t') {
                inword = false;
            } else if (!inword) {
                wordcount++;
                inword = true;
            }
        }

        cout << "Word count: " << wordcount << endl;
    }

    return 0;
}

