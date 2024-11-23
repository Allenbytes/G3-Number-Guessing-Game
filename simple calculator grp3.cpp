#include <iostream>
#include <conio.h>  
using namespace std;

int main() {
    int num1, num2;
    double sum;
    int addType;
    
    do {

        
        cout << "Do you want to: \n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Divide\n";
        cout << "4. Multiply\n";
        cout << "Enter the operation number (1-4): ";
        cin >> addType;
        if (addType < 1 || addType > 4) {
            cout << "Error: Invalid choice. Please try again.\n";
            
        }
        
    } while (addType < 1 || addType > 4);
    cout << "Type a number: ";
    cin >> num1;
    cout << "Type a second number: ";
    cin >> num2;


    if (addType == 1) {
        sum = num1 + num2;
    }
    else if (addType == 2) {
        sum = num1 - num2;
    }
    else if (addType == 3) {
        sum = num1 / num2;
    }
    else if (addType == 4) {
        sum = num1 * num2;
    }
		
    cout << "Your total is: " << sum << endl;
	
    return 0;
}

