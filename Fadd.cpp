#include <iostream>
using namespace std;

int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b,c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    c=sum(a,b);
    cout<<"the sum of "<<a<<" and "<<b<<" is "<<c;
    return 0;
}
    