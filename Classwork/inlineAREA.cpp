#include <iostream>
using namespace std;
inline int area(int l, int b){
return l*b;
}
int main(){
    int l,b;
    cout<<"enter the length"<<endl;
    cin>>l;
    cout<<"enteer the breadth"<<endl;
    cin>>b;
    cout<<"the area of the rectangle is:"<< area(l,b)<<endl;
    return 0;

}