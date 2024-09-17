#include "Furniture.h"

class Table : public Furniture {
private:
    int numOfLegs;
    std::string shape;
    std::string use;
    bool storage;


public:
    Table(std::string n, double p, int q, std::string m, std::string s, int a, int legs, std::string sh, std::string u, bool stor)
        : Furniture(n, p, q, m, s, a), numOfLegs(legs), shape(sh), use(u), storage(stor) {}
    int getNumOfLegs() const { return numOfLegs; }
    void setNumOfLegs(int legs) { numOfLegs = legs; }
    std::string getShape() const { return shape; }
    void setShape(std::string sh) { shape=sh; }
    std::string getUse() const { return use; }
    void setUse(std::string u) { use=u; }
    bool getStorage() const { return storage; }
    void setStorage(bool stor) { storage = stor; }

    void display() const {
        display();
        std::cout << "Number of Legs: " << numOfLegs << std::endl;
        std::cout << "Shape: " << shape << std::endl;
        std::cout << "Use: " << use << std::endl;
        std::cout << "Storage Compartment: " << storage << std::endl;
    }
};
