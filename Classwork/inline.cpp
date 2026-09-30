#include <iostream>
using namespace std;
inline int sum(int a , int b){
return(a+b);
};
int main(){
    int a=5;
    int b=10;
    int c= sum( a , b);
    cout<<"the addition is "<<c<<endl;
    return 0;

}