#include <iostream>
using namespace std;
int main(){
int a;
cout << "Enter a number: ";
cin >> a;
if (a % 2 == 0) 
    cout << a << " is an even number.";
else //else does not have a condition, it is executed when the if condition is false
    cout << a << " is an odd number.";

return 0;
}