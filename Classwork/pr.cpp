#include <iostream>
using namespace std;
int main(){
int p, c, m ,a;
    cout << "Enter the marks in PCM: ";
    cin >> p >> c >> m;
    a = ((p + c + m)/300)*100;
    if(a>=90 && a<=100)
        cout << "Grade O";
    else if(a>=80 && a<90)
        cout << "Grade B";
    else if(a>=70 && a<80)
        cout << "Grade C";
    else if(a>=60 && a<70)
        cout << "Grade D";
    else 
        cout << "you have failed";
return 0;

}