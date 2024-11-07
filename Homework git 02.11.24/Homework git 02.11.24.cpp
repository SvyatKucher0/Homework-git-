
#include <iostream> 
using namespace std;

int subtraction(int a, int b) {
    return a - b;
}
int add(int a, int b) {
    return a + b;
}
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int choice, a, b;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiply\n";
        cout << "4. Exit\n";
        cout << "Enter number operation: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter 2 numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
        case 1:
            cout << "Result add: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result subtraction: " << subtraction(a, b) << endl;
            break;
        case 3:
            cout << "Result multiply: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Exit\n";
            return 0;
        default:
            cout << "Error: Invalid choice\n";
            break;
        }
    }
}





