#include "Furniture.h"
#include "Chair.h"

bool hasArmrest;
int numWheels;
bool spin;
double seatHeight;

Chair::Chair(std::string n, double p, int q, std::string m, std::string s, int a,  bool armrest, int wheels, bool sp, double height)
    : Furniture(n, p, q, m, s, a), hasArmrest(armrest), numWheels(wheels), spin(sp), seatHeight(height) {}
bool Chair::getHasArmrest() const { return hasArmrest; }
void Chair::setHasArmrest(bool armrest) { hasArmrest = armrest; }
int Chair::getNumWheels() const { return numWheels; }
void Chair::setNumWheels(int wheels) { numWheels = wheels; }
bool Chair::getSpin() const { return spin; }
void Chair::setSpin(bool sp) { spin = sp; }
double Chair::getSeatHeight() const { return seatHeight; }
void Chair::setSeatHeight(double height) { seatHeight = height; }

void Chair::display() const {
    Furniture::display();  // Display inherited attributes
    std::cout << "Armrest: " << (hasArmrest ? "Yes" : "No") << std::endl;
    std::cout << "Number of Wheels: " << numWheels << std::endl;
    std::cout << "Spins: " << (spin ? "Yes" : "No") << std::endl;
    std::cout << "Seat Height " << seatHeight << std::endl;
}

