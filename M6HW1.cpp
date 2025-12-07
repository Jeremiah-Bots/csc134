#include <iostream>
using namespace std;
void start();
void chapter2();
void prisonbars();
void cell();
void bucket();
void Hallway();
void bars2();
void chase();
void ending2();
void death();
void intersection(double);
void guards(double);
void wardens(double);
void Cafe();
double key();
double lock(double);
double key2();
double key3();


int main(){
    double choice;
    cout << "Welcome to part 2 of the prison escape" << endl;
    cout << "Input 1 to restart at the begining or 2 to skip straight to the end of part 1" << endl;
    cin >> choice;
    if (choice == 1)
    {
        start();
    }
    else if (choice == 2)
    {
        chapter2();
    }
    else{
        cout << "That is not a valid input try again" << endl;
        main();
    }

}
void start()
{
    int choice; 
  int choice2;
  // ask the question
  cout << "You awake in a gloomy prison cell. With nothing on you but the rags on your back. " << endl;
  cout << "(Move to the prison bars(1) or Explore the cell(2): "; 
  cin >> choice;

  if (1 == choice) {
    prisonbars();
  }
  else if (2 == choice) {
    cell();
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main();  // try again
  }
}
void prisonbars() {
  // this function is called in main if the user chooses 1.
  int key;
  int choice2;
  cout << "You move towards the prison cell. The bars barely wide enough to fit your head through with some force. Nobody is around, not even a guard or other prisoners. There is a lock on the cell. Maybe if you find the key you can get out." << endl;
  cout << "Move back to the middle of the cell(1) " << endl;
  cin >> choice2;
  if (1 == choice2) {
    main();
  }
  else if (0 == choice2) {
    cout << "You should focus on escaping right now." << endl;
  }
}

void cell() {
  // this function is called in main if the user chooses 1.
  int choice3;
  int key;
  cout << "You explore the cell. A stone bed and a bucket not much for the decor but it is for criminals so you cant complain. A glint in the bucket catches your eye, maybe you should check it out. " << endl;
  cout << "Check the bucket (1) or Go back to the middle of the cell(2)" << endl;
  cin >> choice3;
  if (1 == choice3) {
    cout << "You look into the bucket and see a key hidden within the filth" << endl;
    cout << "Grab key (1) or ignore the key (2)" << endl;
    cin >> choice3;
    if (1 == choice3) {
      key = true;
      cout <<" You grab the key and go towards the prisonbars" << endl;
      bars2();
    }
    else if (2 == choice3) {
      cout << "You move away from the bucket in disgust " << endl;
     start();
    }
  }
  else if (2 == choice3) {
    cout << "You go back he middle of the cell" << endl;
   start();
  }
  
}

void bars2() {
    int key = 1;
    if (key == 1) {
        cout << "Open the door with the key" << endl;
        Hallway();
    } else {
        cout << "Something's wrong" << endl;
        main();
    }
}

void Hallway () {
  cout << "You managed to get out the cell it's just a matter of time before you can escape" << endl;
  cout << "You open the prison cell allowing you to enter the dark hallway" << endl;
 chapter2();
}
void chapter2(){
cout << "You had jsut barely managed to escape your cell when you hear in the distant something wet dragging closer and closer to you" << endl;
int count = 1;
while (count <= 15) {
    int run;
        cout << "squelch" << endl;
        cout << "You feel a feeling of dread " << endl;
        cout << "Do you 1.run or 2.hide" << endl;
        cin >> run;
        if (run == 1){
            chase();
        }
        else if (run == 2){
            ending2();
        }
        else if (count == 5){
            death();
        }
        else {
            count++;
        }
        count++;
    }
}
void chase(){
    cout << "Fearing the worst you take it booking it to a connecting hallway" << endl;
    cout << "Getting as far away from the noise you reach an intersection" << endl;
    intersection();
}
void ending2(){
    cout << "You hide from the noise and in your haste you drop the key and closed the cell door" << endl;
    cout << "With no way of opening the cell again you starve to death" << endl;
    cout << "Bad ending" << endl;
    chapter2();
}
void death(){
    cout << "What was chasing you was a slime" << endl;
    cout << "Taking adventage of your feared state it quickly envelopes you" << endl;
    cout << "quickly melting off your skin as you perish and die before you could attain freedom" << endl;
    cout << "Bad ending" << endl;
    main();
}
void intersection(){
    int choice;
    cout << "Where do you want to go?" << endl;
    cout << "1. wardens room" << endl;
    cout << "2. Guards room" << endl;
    cout << "3. Cafeteria" << endl;
    cin >> choice;
    if (choice == 1){
        wardens();
    }
    else if (choice == 2){
        guards();
    }
    else if (choice == 3){
        Cafe();
    }
    else {
        cout << "That is not a valid option try again" << endl;
        intersection();
    }
}
void wardens(double key2)
{
    if (key2 == 1){
        cout << "The wardens door opens and you find that one of the bookshelf is wide open" << endl;
        cout << "A secret door leading into a spiraling abyss awaits" << endl;
        cout << "On second thought you back away from the staircase and look around for a key" << endl;
        cout << "In the desk you found a massive key looks like itll fit in the front gate" << endl;
        cout << "You hear echoes of a battle happening deep within  the staircase" << endl;
        cout << "You leave before it catches you" << endl;
        int key = 1;
        return key;
        intersection();
    }
}
void guards(double key3)
{
    if (key3 == 1){
    cout << "The door opens leading to the guards room" << endl;
    cout << "No weapons or armor is inside and thigns thrown half hazardly" << endl;
    cout << "In the disaster you find a key" << endl;
    int key2 = 1;
    return key2;
    intersection();
    else{
        cout << "The door is locked shut maybe a key is nearby" << endl;
        intersection();
    }
    }
    
}
void cafe(){
    cout << "You enter the cafeteria and the food looks half eaten" << endl;
    cout << "As if they left in a hurry " << endl;
    cout << "You look around and found a key"
    int key3 = 1;
    return key3;
    intersection()l
}
void lock(double key){
    if (key = 1){
        cout << "The lock opens and you are free but for how long?" << endl;
        freedom();
    }
    else {
        cout << "The front gate is still locked maybe the wardens room has the key" << endl;
        intersection();
    }
}
void freedom(){
    cout << "You are free but your ealize that the world you are in is not your own" << endl;
    cout << "A magical world filled with monsters and gods" << endl;
    cout << "Thank you for playing a text based description of session 1 of my dnd campaign" << endl;
    cout << "Good ending" << endl;
}
