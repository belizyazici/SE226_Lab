#include <iostream>
using namespace std;
#include <algorithm>

string toLowerCase(string l) {
    transform(l.begin(), l.end(), l.begin(), ::tolower);
    return l;
}

string removeSpaces(string r) {
    r.erase(remove(r.begin(), r.end(), ' '), r.end());
    return r;
}

string sortString(string s) {
    sort(s.begin(), s.end());
    return s;
}

bool anagrams(string s1, string s2) {
    s1 = sortString(removeSpaces(toLowerCase(s1)));
    s2 = sortString(removeSpaces(toLowerCase(s2)));

    return s1 == s2;
}

int main() {
    string word = "listen";

    string wordList[] = {"enlists", "google", "inlets", "banana"};
    int n = sizeof(wordList) / sizeof(wordList[0]);

    for (int i = 0; i < n; i++) {
        if (anagrams(word, wordList[i])) {
            cout << wordList[i] << " ";
        }
    }

    return 0;
}
