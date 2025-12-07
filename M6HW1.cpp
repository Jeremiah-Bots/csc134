#include <iostream>
using namespace std;

// Global variables for keys
int hasKey1 = 0;
int hasKey2 = 0;
int hasKey3 = 0;

// Function declarations
void start();
void chapter2();
void prisonbars();
void cell();
void Hallway();
void bars2();
void chase();
void ending2();
void death();
void intersection();
void wardens();
void guards();
void cafe();
void lock();
void freedom();

int main() {
    int choice;
    cout << "Welcome to part 2 of the prison escape" << endl;
    cout << "Input 1 to restart at the beginning or 2 to skip straight to the end of part 1" << endl;
    cin >> choice;
    if (choice == 1)
        start();
    else if (choice == 2)
        chapter2();
    else {
        cout << "That is not a valid input, try again" << endl;
        main();
    }
    return 0;
}

// The intro (cell or prisonbars)
void start() {
    int choice;
    cout << "You awake in a gloomy prison cell. With nothing on you but the rags on your back." << endl;
    cout << "Move to the prison bars(1) or Explore the cell(2): ";
    cin >> choice;
    if (choice == 1)
        prisonbars();
    else if (choice == 2)
        cell();
    else {
        cout << "That's not a valid choice, please try again." << endl;
        start();
    }
}

// Bars without the key
void prisonbars() {
    cout << "You move towards the prison bars. The bars are barely wide enough to fit your head through with some force. Nobody is around. There is a lock on the cell. Maybe if you find the key you can get out." << endl;
    cout << "Move back to the middle of the cell(1): ";
    int choice2;
    cin >> choice2;
    if (choice2 == 1)
        start();
    else
        cout << "You should focus on escaping right now." << endl;
}

// Get the key in cell, then go to bars2
void cell() {
    int choice3;
    cout << "You explore the cell. A stone bed and a bucket, not much for decor, but it is for criminals so you can't complain. A glint in the bucket catches your eye, maybe you should check it out." << endl;
    cout << "Check the bucket(1) or Go back to the middle of the cell(2): ";
    cin >> choice3;
    if (choice3 == 1) {
        cout << "You look into the bucket and see a key hidden within the filth." << endl;
        cout << "Grab key(1) or ignore the key(2): ";
        cin >> choice3;
        if (choice3 == 1) {
            hasKey1 = 1;
            cout << "You grab the key and go towards the prison bars." << endl;
            bars2();
        } else if (choice3 == 2) {
            cout << "You move away from the bucket in disgust." << endl;
            start();
        } else
            start();
    } else if (choice3 == 2) {
        cout << "You go back to the middle of the cell." << endl;
        start();
    } else
        start();
}

// Use key1 to get out
void bars2() {
    if (hasKey1 == 1) {
        cout << "You unlock the door with the key and open it!" << endl;
        Hallway();
    } else {
        cout << "You don't have the key." << endl;
        start();
    }
}

void Hallway() {
    cout << "You managed to get out of the cell. It's just a matter of time before you can escape." << endl;
    cout << "You open the prison cell allowing you to enter the dark hallway." << endl;
    chapter2();
}

// The sequence in the hallway
void chapter2() {
    cout << "You had just barely managed to escape your cell when you hear in the distance something wet dragging closer and closer to you." << endl;
    int count = 1;
    while (count <= 15) {
        int run;
        cout << "squelch" << endl;
        cout << "You feel a feeling of dread." << endl;
        cout << "Do you 1.run or 2.hide: ";
        cin >> run;
        if (run == 1) {
            chase();
            break;
        } else if (run == 2) {
            ending2();
            break;
        } else if (count == 5) {
            death();
            break;
        } else
            count++;
    }
}

void chase() {
    cout << "Fearing the worst, you take off booking it to a connecting hallway." << endl;
    cout << "Getting as far away from the noise, you reach an intersection." << endl;
    intersection();
}

void ending2() {
    cout << "You hide from the noise and in your haste you drop the key and closed the cell door." << endl;
    cout << "With no way of opening the cell again, you starve to death." << endl;
    cout << "Bad ending." << endl;
    start();
}

void death() {
    cout << "What was chasing you was a slime." << endl;
    cout << "Taking advantage of your feared state, it quickly envelopes you." << endl;
    cout << "Quickly melting off your skin as you perish and die before you could attain freedom." << endl;
    cout << "Bad ending." << endl;
    main();
}

// The intersection chooses rooms, picking up keys
void intersection() {
    int choice;
    cout << "Where do you want to go?" << endl
         << "1. Wardens room" << endl
         << "2. Guards room" << endl
         << "3. Cafeteria" << endl;
    cin >> choice;
    if (choice == 1)
        wardens();
    else if (choice == 2)
        guards();
    else if (choice == 3)
        cafe();
    else {
        cout << "That is not a valid option, try again." << endl;
        intersection();
    }
}

// Wardens room logic - pick up big key
void wardens() {
    cout << "The wardens door opens and you find that one of the bookshelves is wide open." << endl;
    cout << "A secret door leading into a spiraling abyss awaits." << endl;
    cout << "On second thought, you back away from the staircase and look around for a key." << endl;
    cout << "In the desk you found a massive key, looks like it'll fit in the front gate." << endl;
    hasKey2 = 1;
    cout << "You leave before it catches you." << endl;
    intersection();
}

// Guards room logic - pick up small key
void guards() {
    cout << "The door opens leading to the guards room." << endl;
    cout << "No weapons or armor inside and things thrown haphazardly." << endl;
    cout << "In the disaster you find a small key." << endl;
    hasKey3 = 1;
    intersection();
}

// Cafeteria logic - pick up another key
void cafe() {
    cout << "You enter the cafeteria and the food looks half eaten." << endl;
    cout << "As if they left in a hurry." << endl;
    cout << "You look around and found another key." << endl;
    hasKey1 = 1;
    intersection();
}

// Try to open the last lock
void lock() {
    if (hasKey2 == 1 && hasKey3 == 1 && hasKey1 == 1) {
        cout << "The lock opens and you are free! But for how long?" << endl;
        freedom();
    } else {
        cout << "The front gate is still locked, it requires 3 keys maybe it's somewhere else." << endl;
        intersection();
    }
}

void freedom() {
    cout << "You are free but you realize that the world you are in is not your own." << endl;
    cout << "A magical world filled with monsters and gods." << endl;
    cout << "Thank you for playing a text-based description of session 1 of my DND campaign." << endl;
    cout << "Good ending." << endl;
}