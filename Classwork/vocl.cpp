#include <iostream>
using namespace std;
int main(){
char ch;
cout << "Enter a character: ";
cin >> ch;
if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') //inside the ()is the condition for the if statement for volwel check
    cout << ch << " is a vowel.";
else
    cout << ch << " is a consonant.";
    return 0;

}