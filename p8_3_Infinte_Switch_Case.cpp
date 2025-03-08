/* 
Suppose if we are stuck in a switch case within an infinite loop,
then the way we will get out of it using break inside the switch case, 
and a condition break (flag) to get out of the while loop
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    bool exitLoop = false; // Flag to control the loop

    while (true) { // Infinite loop
        int choice;
        cout << "\nMenu:\n";
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You chose Option 1.\n";
                break; // Exit the switch, return to while loop

            case 2:
                cout << "You chose Option 2.\n";
                break;

            case 3:
                cout << "Exiting the loop.\n";
                exitLoop = true; // Set the flag to exit the loop
                break;

            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }

        if (exitLoop) {
            break; // Exit the infinite loop
        }
    }

    cout << "Program terminated.\n";
    return 0;
}

// __________________________________________________________________

// USING exit()
#include <iostream>
#include <cstdlib> // Required for exit()
using namespace std;

int main() {
    while (true) { // Infinite loop
        int choice;
        cout << "\nMenu:\n";
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You chose Option 1.\n";
                break; // Exit the switch and continue the loop

            case 2:
                cout << "You chose Option 2.\n";
                break;

            case 3:
                cout << "Exiting the program.\n";
                exit(0); // Terminate the program immediately

            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    }

    // This line will never be executed if `exit()` is called
    cout << "Program terminated.\n";
    return 0;
}
