#include <iostream>
using namespace std;
class students{
public:
    int application_id;
    string name;
    int age;
    int marks;
    string email;
};
int main(){

    students s;
    s.application_id = 1;
    s.name = "Mandar";
    cout<< "Enter the age of the student: ";
    cin>>s.age ;
    s.marks = 90;
    s.email = "mandar@example.com";
    cout<< "Student  Application ID: " << s.application_id << endl;
    cout<< "Student  Name: " << s.name << endl;
    cout<< "Student  Age: " << s.age << endl;
    cout<< "Student  Marks: " << s.marks << endl;
    cout<< "Student  Email: " << s.email << endl;
    return 0;
}