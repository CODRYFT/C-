#include <iostream>
#include <string>
using namespace std;

class books {
public:
    int bookid;
    string bookname;

    void intake() {
        cout << "enter the book id";
        cin >> bookid;
        cout << "enter the book name";
        cin >> bookname;
    }

    void display() {
        cout << "the name of the book is " << bookname << endl;
        cout<<"the book id us "<<bookid<< endl;
    }
};
int main(){
    books b;
    b.intake();
    b.display();
    return 0;
}