#include "Furniture.h"

class Bed : public Furniture {
private:
    std::string size;
    bool headboard;
    bool bunkbed;
    bool waterbed;
    int pillows;

public:
    Bed(std::string n, double p, int q, std::string m, std::string s, int a, std::string si, bool head, bool bunk, bool water, int pill)
        : Furniture(n, p, q, m, s, a), size(si), headboard(head), bunkbed(bunk), waterbed(water), pillows(pill) {}

    //getters
    std::string getSize() const { return size; }
    bool getHeadboard() const { return headboard; }
    bool getBunkbed() const { return bunkbed; }
    bool getWaterbed() const { return waterbed; }
    int getPillows() const { return pillows; }

    //setters
    void setSize(std::string si) { size = si; }
    void setHeadboard(bool head) { headboard = head; }
    void setBunkbed(bool bunk) { bunkbed = bunk; }
    void setWaterbed(bool water) { waterbed = water; }
    void setPillows( int pill) { pillows = pill; }

    void display() const {
        display();
        std::cout << "Bed size: " << size << std::endl;
        std::cout << "Bed has a headboard: " << (headboard ? "Yes" : "No") << std::endl;
        std::cout << "Bed is a bunkbed: " << (bunkbed ? "Yes" : "No") << std::endl;
        std::cout << "Bed is a water bed: " << (waterbed ? "Yes" : "No") << std::endl;
        std::cout << "Number of pillows: " << pillows << std::endl;
    }
};
