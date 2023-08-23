#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int hundredNotes = 0, fiftyNotes = 0, twentyNotes = 0, oneNotes = 0;

    while (amount > 0) {
        int choice;
        cout << "Choose a denomination - 100 (1), 50 (2), 20 (3), 1 (4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                hundredNotes += amount / 100;
                amount %= 100;
                break;
            case 2:
                fiftyNotes += amount / 50;
                amount %= 50;
                break;
            case 3:
                twentyNotes += amount / 20;
                amount %= 20;
                break;
            case 4:
                oneNotes += amount;
                amount = 0;
                break;
            default:
                cout << "Invalid choice. Please choose a valid denomination." << endl;
        }
    }

    cout << "Number of 100 rupees notes: " << hundredNotes << endl;
    cout << "Number of 50 rupees notes: " << fiftyNotes << endl;
    cout << "Number of 20 rupees notes: " << twentyNotes << endl;
    cout << "Number of 1 rupee notes: " << oneNotes << endl;

    return 0;
}
