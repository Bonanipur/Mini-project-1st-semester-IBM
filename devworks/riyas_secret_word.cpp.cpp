#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true;

    for (int i = 0; i < word.length() / 2; i++) {
        if (word[i] != word[word.length() - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}

