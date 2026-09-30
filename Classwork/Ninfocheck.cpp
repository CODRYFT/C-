#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the number: "<<endl;
    cin >> a;
int sign= (a>0) - (a<0);
switch (sign){
    case 1:
        cout<<"the number is positive"<<endl;
        break;
        case -1:
        cout<<"the number is negative"<<endl;
        break;
}
int oe= a%2 ;
switch (oe){
    case 0:
        cout<<"the number is even"<<endl;
        break;
        case 1:
        cout<<"the number is odd"<<endl;
        break;


    }
    return 0;
}