#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[5] << endl;
    arr[4] = 99; 
    cout << "New 5th element: " << arr[4] << endl;

    return 0;
}
