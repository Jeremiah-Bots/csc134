// CSC 134
// M6HW1 - Gold
// Hart
// 5/13/2026

#include <iostream>
using namespace std;

int hasMap = 0;
int hasCrystal = 0;
int hasCompass = 0;

void start();
void caveEntrance();
void camp();
void tunnel();
void hiddenDoor();
void crossroads();
void caveDepths();
void caveIn();
void monsterAttack();
void ruins();
void library();
void armory();
void shrine();
void sealedGate();
void escape();

int main() {
    int choice;
    cout << "Welcome to The Lost Caverns Adventure!" << endl;
    cout << "Press 1 to start from the beginning or 2 to skip to Chapter 2." << endl;
    cin >> choice;

    if (choice == 1)
        start();
    else if (choice == 2)
        caveDepths();
    else {
        cout << "Invalid input, try again." << endl;
        main();
    }

    return 0;
}

void start() {
    int choice;

    cout << "You wake up inside a forgotten cave deep beneath the mountains." << endl;
    cout << "A weak torch flickers nearby while cold air rushes through the tunnels." << endl;
    cout << "Go toward the cave entrance(1) or inspect the abandoned camp(2): ";

    cin >> choice;

    if (choice == 1)
        caveEntrance();
    else if (choice == 2)
        camp();
    else {
        cout << "That is not a valid choice." << endl;
        start();
    }
}

void caveEntrance() {
    int choice;

    cout << "You approach the blocked cave entrance." << endl;
    cout << "Large rocks seal the exit shut. A strange symbol is carved into the wall." << endl;
    cout << "You may need a special item to escape." << endl;

    cout << "Return to the center of the cave(1): ";
    cin >> choice;

    if (choice == 1)
        start();
    else
        cout << "You should focus on surviving first." << endl;
}

void camp() {
    int choice;

    cout << "You inspect the abandoned camp." << endl;
    cout << "Broken supplies and old bedrolls litter the area." << endl;
    cout << "Inside a backpack, you notice an old map." << endl;

    cout << "Take the map(1) or leave it(2): ";
    cin >> choice;

    if (choice == 1) {
        hasMap = 1;
        cout << "You take the map and discover a hidden tunnel nearby." << endl;
        hiddenDoor();
    }
    else if (choice == 2) {
        cout << "You leave the map behind." << endl;
        start();
    }
    else
        start();
}

void hiddenDoor() {
    if (hasMap == 1) {
        cout << "Using clues from the map, you uncover a hidden stone door!" << endl;
        tunnel();
    }
    else {
        cout << "You don't know how to open the hidden path." << endl;
        start();
    }
}

void tunnel() {
    cout << "The hidden tunnel leads deeper underground." << endl;
    cout << "Strange noises echo through the darkness." << endl;

    caveDepths();
}

void caveDepths() {
    cout << "As you explore deeper, you hear heavy footsteps approaching." << endl;

    int count = 1;

    while (count <= 15) {
        int choice;

        cout << "THUD... THUD..." << endl;
        cout << "The cave shakes slightly." << endl;
        cout << "Do you 1.run or 2.hide: ";

        cin >> choice;

        if (choice == 1) {
            crossroads();
            break;
        }
        else if (choice == 2) {
            caveIn();
            break;
        }
        else if (count == 5) {
            monsterAttack();
            break;
        }
        else
            count++;
    }
}

void crossroads() {
    cout << "You sprint away from the noise and arrive at an underground crossroads." << endl;

    ruins();
}

void caveIn() {
    cout << "You hide behind a rock formation." << endl;
    cout << "Unfortunately, the unstable cave collapses around you." << endl;
    cout << "You are trapped forever beneath the mountain." << endl;
    cout << "Bad Ending." << endl;

    main();
}

void monsterAttack() {
    cout << "A giant cave beast crashes through the darkness!" << endl;
    cout << "Before you can react, it attacks." << endl;
    cout << "Your adventure ends here." << endl;
    cout << "Bad Ending." << endl;

    main();
}

void ruins() {
    int choice;

    cout << "Where do you want to explore?" << endl;
    cout << "1. Ancient Library" << endl;
    cout << "2. Forgotten Armory" << endl;
    cout << "3. Crystal Shrine" << endl;
    cout << "4. Sealed Exit Gate" << endl;

    cin >> choice;

    if (choice == 1)
        library();
    else if (choice == 2)
        armory();
    else if (choice == 3)
        shrine();
    else if (choice == 4)
        sealedGate();
    else {
        cout << "Invalid choice, try again." << endl;
        ruins();
    }
}

void library() {
    cout << "Dusty bookshelves fill the ancient library." << endl;
    cout << "Among the ruins, you discover a glowing crystal." << endl;

    hasCrystal = 1;

    ruins();
}

void armory() {
    cout << "You enter the forgotten armory." << endl;
    cout << "Rusty weapons line the walls." << endl;
    cout << "Inside a chest, you find an enchanted compass." << endl;

    hasCompass = 1;

    ruins();
}

void shrine() {
    cout << "The crystal shrine pulses with magical energy." << endl;
    cout << "At the center lies a sacred map fragment." << endl;

    hasMap = 1;

    ruins();
}

void sealedGate() {
    if (hasMap == 1 && hasCrystal == 1 && hasCompass == 1) {
        cout << "The magical gate unlocks!" << endl;
        escape();
    }
    else {
        cout << "The gate remains sealed." << endl;
        cout << "You still need three sacred relics." << endl;

        ruins();
    }
}

void escape() {
    cout << "The gate opens to the surface world." << endl;
    cout << "Sunlight blinds you as you step outside for the first time in years." << endl;
    cout << "Behind you, the mountain rumbles and collapses forever." << endl;
    cout << "You survived the Lost Caverns!" << endl;
    cout << "Good Ending." << endl;
}