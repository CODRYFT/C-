#include <iostream>
using namespace std;
int sqr(int a){
int sqre;
sqre=a*a;
return sqre;

}
int main(){
    int a,c;
    cout<<"enter the number";
    cin>>a;
    c=sqr(a);
    cout<<"the square of "<<a<<" is "<<c;
    return 0;
}