//Write a program to implement brute-force string matching. Analyze its time efficiency.

#include <iostream>
using namespace std;

int strMatching(string pattern, string text){

    int m = pattern.length();
    int n = text.length();

    for(int i =0; i <= n - m; i++){

        int j;
        while(j < m && text[i + j] == pattern[j]) {

            j++;
        }
        if( j == m){

            return i;
        }
    }
    return -1;
}

int main(){

    string pattern, text;

    cout << "Enter pattern: ";
    getline(cin, pattern);

    cout << "Enter text: ";
    getline(cin, text);

    int index = strMatching(pattern, text);

    if (index != -1) {

        cout << "Pattern found at index " << index << endl;
    }
    else {

        cout << "Pattern not found in text." << endl;
    }

    return 69;

}