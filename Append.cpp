#include <iostream>
#include <string>
using namespace std;
void processString(string& str, int num) {
    int strLength = str.length();
    if (num > strLength) {
        str.append(num - strLength, '#');
    } else {
        str.erase(num, string::npos);
    }
}
int main() {
    string inputStr;
    int num;
    cout << "Enter a string: ";
    getline(cin, inputStr);
    cout << "Enter a number: ";
    cin >> num;
    processString(inputStr, num);
    cout << "Modified string: " << inputStr << endl;
    return 0;
}
