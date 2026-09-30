#include <iostream>
#include <string>
using namespace std;

class student {
public:
string studentid;
int roll_no;
string division;
int percentage;

inline void input(){
cout<<"enter your id"<<endl;
cin>> studentid;
cout<<"enter the roll.no"<<endl;
cin>>roll_no;
cout<<"enter the division"<<endl;
cin>>division;
cout<<"enter your percentage"<<endl;
cin>>percentage;


}
inline void display(){

    cout<<"student id  "<<studentid<<endl;
    cout<<"roll.no  "<<roll_no<<endl;
    cout<<"division  "<<division<<endl;
    cout<<"percentage  "<<percentage<<endl;
}
};
int main(){
student s;
s.input();
s.display();
return 0;

}