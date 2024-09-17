#include "Furniture.h"
#include "Table.h"

int numOfLegs;
std::string shape;
std::string use;
bool storage;


Table::Table(std::string n, double p, int q, std::string m, std::string s, int a, int legs, std::string sh, std::string u, bool stor)
    : Furniture(n, p, q, m, s, a), numOfLegs(legs), shape(sh), use(u), storage(stor) {}
int Table::getNumOfLegs() const { return numOfLegs; }
void Table::setNumOfLegs(int legs) { numOfLegs = legs; }
std::string Table::getShape() const { return shape; }
void Table::setShape(std::string sh) { shape=sh; }
std::string Table::getUse() const { return use; }
void Table::setUse(std::string u) { use=u; }
bool Table::getStorage() const { return storage; }
void Table::setStorage(bool stor) { storage = stor; }

void Table::display() const {
    Furniture::display();
    std::cout << "Number of Legs: " << numOfLegs << std::endl;
    std::cout << "Shape: " << shape << std::endl;
    std::cout << "Use: " << use << std::endl;
    std::cout << "Storage Compartment: " << storage << std::endl;
}
