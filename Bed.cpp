#include "Furniture.h"
#include "bed.h"

std::string size;
bool headboard;
bool bunkbed;
bool waterbed;
int pillows;

Bed::Bed(std::string n, double p, int q, std::string m, std::string s, int a, std::string si, bool head, bool bunk, bool water, int pill)
    : Furniture(n, p, q, m, s, a), size(si), headboard(head), bunkbed(bunk), waterbed(water), pillows(pill) {}

//getters
std::string Bed::getSize() const { return size; }
bool Bed::getHeadboard() const { return headboard; }
bool Bed::getBunkbed() const { return bunkbed; }
bool Bed::getWaterbed() const { return waterbed; }
int Bed::getPillows() const { return pillows; }

//setters
void Bed::setSize(std::string si) { size = si; }
void Bed::setHeadboard(bool head) { headboard = head; }
void Bed::setBunkbed(bool bunk) { bunkbed = bunk; }
void Bed::setWaterbed(bool water) { waterbed = water; }
void Bed::setPillows( int pill) { pillows = pill; }

void Bed::display() const {
    display();
    std::cout << "Bed size: " << size << std::endl;
    std::cout << "Bed has a headboard: " << (headboard ? "Yes" : "No") << std::endl;
    std::cout << "Bed is a bunkbed: " << (bunkbed ? "Yes" : "No") << std::endl;
    std::cout << "Bed is a water bed: " << (waterbed ? "Yes" : "No") << std::endl;
    std::cout << "Number of pillows: " << pillows << std::endl;
}
