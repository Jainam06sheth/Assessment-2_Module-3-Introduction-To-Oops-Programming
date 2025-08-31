#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string name, orderSummary = "";
    char again;
    int menuChoice, subChoice, quantity, total = 0;

    cout << "--------- Tops Tech. Fast Food ---------" << endl;
    cout << "Please Enter Your Name: ";
    cin >> name;
    cout << "Hello " << name << "!" << endl;

    do {
        cout << "\n--------- Menu ---------" << endl;
        cout << "1) Pizzas      Rs.300" << endl;
        cout << "2) Burgers     Rs.150" << endl;
        cout << "3) Sandwiches  (Submenu)" << endl;
        cout << "4) Rolls       Rs.120" << endl;
        cout << "5) Biryani     Rs.250" << endl;

        cout << "\nEnter your choice (1-5): ";
        cin >> menuChoice;

        stringstream ss;
        ss.str("");
        ss.clear();

        switch (menuChoice) {
            case 1:
                cout << "You selected Pizza. Price Rs.300" << endl;
                cout << "Enter Quantity: ";
                cin >> quantity;
                total += quantity * 300;
                ss << quantity;
                orderSummary += ss.str() + " Pizza(s)\n";
                break;

            case 2:
                cout << "You selected Burger. Price Rs.150" << endl;
                cout << "Enter Quantity: ";
                cin >> quantity;
                total += quantity * 150;
                ss << quantity;
                orderSummary += ss.str() + " Burger(s)\n";
                break;

            case 3:
                cout << "\n--- Sandwich Menu ---" << endl;
                cout << "1) Club Sandwich           Rs.240" << endl;
                cout << "2) Veg. Crispy Sandwich    Rs.160" << endl;
                cout << "3) Extreme Veg Sandwich    Rs.100" << endl;
                cout << "Enter your sandwich choice (1-3): ";
                cin >> subChoice;
                cout << "Enter Quantity: ";
                cin >> quantity;

                ss << quantity;
                if (subChoice == 1) {
                    total += quantity * 240;
                    orderSummary += ss.str() + " Club Sandwich(es)\n";
                } else if (subChoice == 2) {
                    total += quantity * 160;
                    orderSummary += ss.str() + " Veg. Crispy Sandwich(es)\n";
                } else if (subChoice == 3) {
                    total += quantity * 100;
                    orderSummary += ss.str() + " Extreme Veg Sandwich(es)\n";
                } else {
                    cout << "Invalid sandwich choice!" << endl;
                }
                break;

            case 4:
                cout << "You selected Rolls. Price Rs.120" << endl;
                cout << "Enter Quantity: ";
                cin >> quantity;
                total += quantity * 120;
                ss << quantity;
                orderSummary += ss.str() + " Roll(s)\n";
                break;

            case 5:
                cout << "You selected Biryani. Price Rs.250" << endl;
                cout << "Enter Quantity: ";
                cin >> quantity;
                total += quantity * 250;
                ss << quantity;
                orderSummary += ss.str() + " Biryani(s)\n";
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
                continue;
        }

        cout << "\nYour item has been added to the order." << endl;
        cout << "Current Total: Rs." << total << endl;
        cout << "Estimated Delivery Time: 40 Minutes" << endl;

        cout << "\nWould you like to order anything else? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\n--------- Final Order Summary ---------" << endl;
    cout << orderSummary;
    cout << "TOTAL BILL = Rs." << total << endl;
    cout << "Thank you, " << name << "! Have a delicious day!" << endl;

    return 0;
}

