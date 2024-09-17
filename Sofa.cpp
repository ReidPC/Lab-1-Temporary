#include "Furniture.h"
#include "Sofa.h"

int numOfSeats;
bool cupholder;
bool recliner;
std::string upholstery;

Sofa::Sofa(std::string n, double p, int q, std::string m, std::string s, int a, int seats, bool cup, bool rec, std::string up)
    : Furniture(n, p, q, m, s, a), numOfSeats(seats), cupholder(cup), recliner(rec), upholstery(up) {}
int Sofa::getNumOfSeats() const { return numOfSeats; }
void Sofa::setNumOfSeats(int seats) { numOfSeats = seats; }
bool Sofa::getCupholder() const { return cupholder; }
void Sofa::setCupholder(bool cup) { cupholder = cup; }
bool Sofa::getRecliner() const { return recliner; }
void Sofa::setRecliner(bool rec) { recliner = rec; }
void Sofa::getUp(const std::string& up) { upholstery = up; }
void Sofa::setUp(const std::string& up) {upholstery = up; }

void Sofa::display() const {
    Furniture::display();
    std::cout << "Number of Seats: " << numOfSeats << std::endl;
    std::cout << "Is there a Cupholder?: " << (cupholder ? "Yes" : "No") << std::endl;
    std::cout << "Does it recline?: " << (recliner ? "Yes" : "No") << std::endl;
    std::cout << "Upholstery material: " << upholstery << std::endl;
}
