/*
Grant Stoebner
MS549
Project #1

Estimate ~8 hrs

Actual -- ~20 hrs.

designing and understanding the Unit Testing took longer that expected.  I had to do a little more research on how to design a functional test.
Also - I was traveling for spring break, I travel with a MacBook so figuring out an easy way to compile and run the code while still being able to bring it back into VS
when I returned home.

*/

#include <iostream>
#include <string>
#include <cassert>
using namespace std;


// Mock-up function for unit testing
bool isValidChoice(int choice) {
    return choice >= 1 && choice <= 3;
}

// Function to test choice validation (Unit Test)
void testChoiceValidation() {
    assert(isValidChoice(1) == true);
    assert(isValidChoice(2) == true);
    assert(isValidChoice(3) == true);
    assert(isValidChoice(0) == false);
    assert(isValidChoice(4) == false);
    cout << "Choice validation tests passed." << endl;
}

int main() {
    
    // Run unit tests
    testChoiceValidation();

    bool notDone = true;
    int choice = 0;


    cout << "Welcome To The Mysterious Forest\n" << endl;

    cout << "You find yourself standing at the edge of a dense forest. The "
        "trees loom tall and dark, their branches swaying in the wind. As "
        "you peer into the shadows, you feel a sense of both excitement "
        "and apprehension."
        << endl;

    while (notDone) {
        

        cout << "\nDo you: \n" << endl;
        cout << "1. Enter the forest cautiously? " << endl
            << "2. Call out to see if anyone is nearby? " << endl
            << "3. Turn back and head home?\n" << endl;

        cout << "Enter your choice: ";

        cin >> choice;

        // Validate choice is between 1 and 3
        while (choice < 1 || choice > 3) {
            cout << "Invalid choice. Please enter 1, 2, or 3: ";
            cin.clear(); // Clear any error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input buffer
            cin >> choice;
        }

        if (choice == 1) {
            cout << "\nYou venture into the forest, treading lightly on the thick carpet of fallen leaves. \n\n"
                "Suddenly, the path forks. \n\n 1. Do you go left towards the sound of running water, or \n 2. right, following a faint trail of smoke?\n" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            // Validate choice is between 1 and 3
            while (choice < 1 || choice > 2) {
                cout << "Invalid choice. Please enter 1, or 2: ";
                cin.clear(); // Clear any error flags
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input buffer
                cin >> choice;
            }

            if (choice == 1) {
                cout << "\nFollowing the sound of water, you discover a clear stream with water pure enough to drink. "
                    "You've found a safe spot to rest and refill your water supply." << endl;
            }
            else {
                cout << "\nThe trail of smoke leads you to a small, abandoned campsite. "
                    "There's no one around, but you find useful supplies and a map of the forest." << endl;
            }

            notDone = false;
        }

        else if (choice == 2) {
            cout << "\nYour call echoes through the trees. After a moment, an enigmatic figure emerges from the shadows. "
                "They offer you a choice: \n\n (1) Seek the ancient tree to find your fortune or \n (2) follow the river to escape the forest \n\n What do you choose?\n" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            // Validate choice is between 1 and 3
            while (choice < 1 || choice > 2) {
                cout << "Invalid choice. Please enter 1, or 2: ";
                cin.clear(); // Clear any error flags
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input buffer
                cin >> choice;
            }

            if (choice == 1) {
                cout << "\nYou journey deep into the forest and find the ancient tree. It's said to grant wisdom to those who ask. "
                    "What question will you ask the ancient tree?" << endl;
            }
            else {
                cout << "\nYou follow the river and eventually find a way out of the forest, taking with you the lessons of the wilderness." << endl;
            }

            notDone = false;
        }

        else {
            cout << "\nJust as you start to turn back, a sudden rustling in the bushes catches your attention. "
                "Curiosity gets the better of you, and you decide to investigate. It turns out to be a lost puppy. \n"
                "\n (1) Do you take the puppy and continue home or \n (2) try to find its owner by venturing into the forest\n" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            // Validate choice is between 1 and 3
            while (choice < 1 || choice > 2) {
                cout << "Invalid choice. Please enter 1, or 2: ";
                cin.clear(); // Clear any error flags
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input buffer
                cin >> choice;
            }

            if (choice == 1) {
                cout << "\nYou take the puppy home, where it quickly becomes part of your family. "
                    "Who knew your adventure would end with a new friend?" << endl;
            }
            else {
                cout << "\nYou and the puppy venture into the forest to find its owner, leading you to unexpected adventures." << endl;
            }

            notDone = false;
        }
    }
    return 0;
}
