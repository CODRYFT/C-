#include <iostream>
using namespace std;
int main(){

    int n, b, rev;
    cout << "Enter a 3 digit number: ";
    cin >> n;
    b= (n % 10) * 100;
    rev = b;
    n = n / 10;
    rev = rev + (n % 10) * 10;
    n = n / 10;
    rev = rev + n;
    cout << "Reverse = " << rev;
    if(n == rev) //inside the ()is the condition for the if statement for palindrome check
        cout << "The number is a palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}