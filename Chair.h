#include "Furniture.h"

class Chair : public Furniture {
private:
    bool hasArmrest;
    int numWheels;
    bool spin;
    double seatHeight;

public:

    Chair(std::string n, double p, int q, std::string m, std::string s, int a,  bool armrest, int wheels, bool sp, double height)
        : Furniture(n, p, q, m, s, a), hasArmrest(armrest), numWheels(wheels), spin(sp), seatHeight(height) {}

    bool getHasArmrest() const { return hasArmrest; }
    void setHasArmrest(bool armrest) { hasArmrest = armrest; }
    int getNumWheels() const { return numWheels; }
    void setNumWheels(int wheels) { numWheels = wheels; }
    bool getSpin() const { return spin; }
    void setSpin(bool sp) { spin = sp; }
    double getSeatHeight() const { return seatHeight; }
    void setSeatHeight(double height) { seatHeight = height; }

    void display() const {
    Furniture::display();  // Display inherited attributes
        std::cout << "Armrest: " << (hasArmrest ? "Yes" : "No") << std::endl;
        std::cout << "Number of Wheels: " << numWheels << std::endl;
        std::cout << "Spins: " << (spin ? "Yes" : "No") << std::endl;
        std::cout << "Seat Height " << seatHeight << std::endl;
    }
};
