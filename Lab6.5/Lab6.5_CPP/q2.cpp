#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

bool isPalindrome(string s) {
    int l = s.length();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string pList[MAX_SIZE] = {"eye", "may", "yes"};
    string palindrome[MAX_SIZE];
    int count = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (pList[i] == "") {
            break;
        }
        if (isPalindrome(pList[i])) {
            palindrome[count] = pList[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        cout << palindrome[i] << " ";
    }
    cout << endl;
    return 0;
}
