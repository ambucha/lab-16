// COMSC-210 | Lab 16 | Andrei Buchatskiy
// IDE used : Visual Studio Code

// I pasted in my lab 14 so this will be my starting point

#include <iostream>
#include <iomanip>
using namespace std;

// Const int for the separator
const int SIZE = 20;

// Create the class for colors
class Color {
    // Create three private member variables, red green and blue
    private:
        int red;
        int green;
        int blue;
    // Create public member functions with getters and setters, as well as a print function
    public:
        // Create three constructors, one default, one partial (lets say jsut red), and one full paramater
        Color() {red = 0; green = 0; blue = 0;}
        Color(int r) {red = r; green = 0; blue = 0;}
        Color(int r, int g, int b){red = r; green = g; blue = b;}

        // setters and getters
        int getRed(){return red;}
        void setRed(int r){red = r;}
        int getGreen() {return green;}
        void setGreen(int g) {green = g;}
        int getBlue() {return blue;}
        void setBlue(int b) {blue = b;}

        void print();
};

// print function definition
void Color::print() {
    // gonna create a static int so i can keep track of which color # i am displaying
    static int count = 0;
    count++;
    
    // Display the information and variables given
    cout << "Color #" << count << ":" << endl;
    cout << "\tRed: " << red << endl;
    cout << "\tGreen: " << green << endl;
    cout << "\tBlue: " << blue << endl << endl;
    cout << setfill('-') << setw(SIZE) << '-' << endl << endl;
}

int main(){
    // Define four colors
    Color crimson;
    Color gold;
    Color orchid;
    Color forestGreen;

    // intialize crimson
    crimson.setRed(220);
    crimson.setGreen(20);
    crimson.setBlue(60);

    //initialize gold
    gold.setRed(255);
    gold.setGreen(215);
    gold.setBlue(0);

    //initialize orchid
    orchid.setRed(218);
    orchid.setGreen(112);
    orchid.setBlue(214);

    // initialize Forest green
    forestGreen.setRed(34);
    forestGreen.setGreen(139);
    forestGreen.setBlue(34);

    // Use constructors
    Color defaultColor;
    Color red(255);
    Color lightblue(141, 206, 224);

    // Print the colors
    crimson.print();
    gold.print();
    orchid.print();
    forestGreen.print();
    red.print();
    lightblue.print();
    defaultColor.print();

    return 0;
}