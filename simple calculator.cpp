#include <iostream>
#include <string>
using namespace std;

// hii ndo part ya kuiambia venye itafanya maths!!!! 
void performAction(string action, int x, int y) {
    if (action == "addition") {
        cout << "The addition is: " << x + y << endl;
    } else if (action == "subtraction") {
        cout << "The subtraction is: " << x - y << endl;
    } else if (action == "division") {
        if (y != 0) {
            cout << "The division is: " << x / y << endl;
        } else {
            cout << "WEWE NI FALAAA!!..:Unadivide aje number by zero??!!" << endl;
        }
    } else if (action == "multiplication") {
        cout << "The multiplication is: " << x * y << endl;
    } else {
        cout << "Kua serious!!." << endl;
    }
}

int main() {
    int x, y;
	string action;
    // part ya Action sasa ...unachagua kenye itafanya!!!!!!!
    cout<<"choose an action.. only one! : addition , subtraction , division or multiplication"<<endl;
    cin>> action;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;
    performAction(action, x, y);
    return 0;
}

