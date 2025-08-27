#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare variables for user input and billing
    string name;
    char choice, again;
    int menuChoice, subChoice, quantity, total = 0;

    // Welcome message and name input
    cout << "---------Tops Tech. Fast Food---------" << endl;
    cout << "Please Enter Your Name: ";
    cin >> name;
    cout << "Hello " << name << endl;

    // Main ordering loop
    do {
        // Display main menu
        cout << "\nWhat would you like to order?" << endl;
        cout << "\n---------Menu---------" << endl;
        cout << "1) Pizzas" << endl;
        cout << "2) Burgers" << endl;
        cout << "3) Sandwich" << endl;
        cout << "4) Rolls" << endl;
        cout << "5) Biryani" << endl;

        // Take user's menu choice
        cout << "\nPlease Enter your Choice: ";
        cin >> menuChoice;

        // Process menu selection
        switch (menuChoice) {
        case 1:
            // Pizza selected
            cout << "You selected Pizza. Price Rs.300" << endl;
            cout << "Please Enter Quantity: ";
            cin >> quantity;
            total = quantity * 300;
            cout << "\n--------Your Order--------" << endl;
            cout << quantity << " Pizza(s)" << endl;
            break;

        case 2:
            // Burger selected
            cout << "You selected Burger. Price Rs.150" << endl;
            cout << "Please Enter Quantity: ";
            cin >> quantity;
            total = quantity * 150;
            cout << "\n--------Your Order--------" << endl;
            cout << quantity << " Burger(s)" << endl;
            break;

        case 3:
            // Sandwich submenu
            cout << "\n1) Club Sandwich Rs.240" << endl;
            cout << "2) Veg. Crispy Sandwich Rs.160" << endl;
            cout << "3) Extreme Veg Sandwich Rs.100" << endl;

            cout << "\nPlease Enter which Sandwich you would like to have?: ";
            cin >> subChoice;

            cout << "Please Enter Quantity: ";
            cin >> quantity;

            // Handle sandwich selection
            if (subChoice == 1) {
                total = quantity * 240;
                cout << "\n--------Your Order--------" << endl;
                cout << quantity << " Club Sandwich(es)" << endl;
            } else if (subChoice == 2) {
                total = quantity * 160;
                cout << "\n--------Your Order--------" << endl;
                cout << quantity << " Veg. Crispy Sandwich(es)" << endl;
            } else if (subChoice == 3) {
                total = quantity * 100;
                cout << "\n--------Your Order--------" << endl;
                cout << quantity << " Extreme Veg Sandwich(es)" << endl;
            } else {
                // Invalid sandwich option
                cout << "Invalid Sandwich choice!" << endl;
            }
            break;

        case 4:
            // Rolls selected
            cout << "You selected Rolls. Price Rs.120" << endl;
            cout << "Please Enter Quantity: ";
            cin >> quantity;
            total = quantity * 120;
            cout << "\n--------Your Order--------" << endl;
            cout << quantity << " Roll(s)" << endl;
            break;

        case 5:
            // Biryani selected
            cout << "You selected Biryani. Price Rs.250" << endl;
            cout << "Please Enter Quantity: ";
            cin >> quantity;
            total = quantity * 250;
            cout << "\n--------Your Order--------" << endl;
            cout << quantity << " Biryani(s)" << endl;
            break;

        default:
            // Invalid menu choice
            cout << "Invalid Choice! Please try again." << endl;
            continue; // Skip rest of loop and prompt again
        }

        // Display bill and confirmation
        cout << "Your Total Bill is Rs." << total << endl;
        cout << "Your Order Will be delivered in 40 Minutes" << endl;
        cout << "Thank you For Ordering From Tops Tech Fast Food" << endl;

        // Ask if user wants to order again
        cout << "\nWould you like to order anything else? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y'); // Repeat loop if user wants more

    // Exit message
    cout << "\nThank you, " << name << "! Have a nice day!" << endl;

    return 0;
}

