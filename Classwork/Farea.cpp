#include <iostream>
using namespace std;
int intake(int l, int b){
int ar=0;
ar=l*b;
return ar;
}
int main(){

    int a,b,c;
    cout<<"enter the length and breadth of the rectangle";
    cin>>a>>b;
    c=intake(a,b);
    cout<<"the area is  "<<c;
    return 0;
}