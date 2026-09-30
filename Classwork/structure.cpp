#include <iostream>
using namespace std;

struct student {
    int application_id;
    string name;
    int age;
    int marks;
    string email;
};

int main() {
    student s1;
    student s2;
    student s3;
    student s4;
    student s5;

    s1.application_id = 1;
    s2.name = "Mandar";
    s3.age = 20;
    s4.marks = 90;
    s5.email = "mandar@example.com";

    cout << "Student  Application ID: " << s1.application_id << endl;
    cout << "Student  Name: " << s2.name << endl;
    cout << "Student  Age: " << s3.age << endl;
    cout << "Student  Marks: " << s4.marks << endl;
    cout << "Student  Email: " << s5.email << endl;
    return 0;
}