#include <iostream>
#include <string>
using namespace std;

void reverseSentence(string s, int index) {
    if (index < 0)
        return;

    cout << s[index];
    reverseSentence(s, index - 1);
}

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Reversed sentence: ";
    reverseSentence(sentence, sentence.length() - 1);

    cout << endl;

    return 0;
}
