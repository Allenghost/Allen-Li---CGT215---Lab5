// Allen Li - CGT215 - Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string getCode(string text) {
    vector<char> charVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    string result;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 65 && text[i] <= 90) {
            result += charVector[text[i] - 'A'];
        }
        else if (text[i] >= 97 && text[i] <= 122) {
            char upperCaseLetter = int(text[i]) - 32;
            char upperCaseCode = charVector[upperCaseLetter - 65];
            result += (upperCaseCode + 32);
        }
        else {
            result += text[i];
        }
    }
    return result;
}

int main()
{
    string text;
    cout << "Input text to cypher: ";
    getline(cin, text);
    string result = getCode(text);
    cout << "Encoded Message: " << result;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
