#include "Furniture.h"

class Sofa : public Furniture {
private:
    int numOfSeats;
    bool cupholder;
    bool recliner;
    std::string upholstery;

public:
    Sofa(std::string n, double p, int q, std::string m, std::string s, int a, int seats, bool cup, bool rec, std::string up)
        : Furniture(n, p, q, m, s, a), numOfSeats(seats), cupholder(cup), recliner(rec), upholstery(up) {}

    int getNumOfSeats() const { return numOfSeats; }
    void setNumOfSeats(int seats) { numOfSeats = seats; }
    bool getCupholder() const { return cupholder; }
    void setCupholder(bool cup) { cupholder = cup; }
    bool getRecliner() const { return recliner; }
    void setRecliner(bool rec) { recliner = rec; }
    void getUp(const std::string& up) { upholstery = up; }
    void setUp(const std::string& up) {upholstery = up; }

    void display() const override {
        Furniture::display();
        std::cout << "Number of Seats: " << numOfSeats << std::endl;
        std::cout << "Is there a Cupholder?: " << (cupholder ? "Yes" : "No") << std::endl;
        std::cout << "Does it recline?: " << (recliner ? "Yes" : "No") << std::endl;
        std::cout << "Upholstery material: " << upholstery << std::endl;
        
    }
};
