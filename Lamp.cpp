#include "Furniture.h"
#include "Lamp.h"

std::string color;
double brightness;
int numBulbs;
double height;
std::string type;



Lamp::Lamp(std::string n, double p, int q, std::string m, std::string s, int a, std::string col, double br, int nB, double h, std::string ty)
    : Furniture(n, p, q, m, s, a), color(col), brightness(br), numBulbs(nB), height(h), type(ty) {}

//getters  
std::string Lamp::getColor() const { return color; }
double Lamp::getBrightness() const { return brightness; }
int Lamp::getNumBulbs() const { return numBulbs; }
double Lamp::getHeight() const { return height; }
std::string Lamp::getType() const { return type; }

//setters
void Lamp::setColor( std::string col ) { color = col; }
void Lamp::setBrightness( double br ) { brightness = br; }
void Lamp::setNumBulbs( int nB ) { numBulbs = nB; }
void Lamp::setHeight( double h ) { height = h; }
void Lamp::setType( std::string ty ) { type = ty; }

void Lamp::display() const {
    display();
    std::cout << "Color: " << color << std::endl;
    std::cout << "Brightness: " << brightness << " lumens" <<std::endl;
    std::cout << "Number of Lightbulbs: " << numBulbs << std::endl;
    std::cout << "Lamp height: " << height << std::endl;
    std::cout << "Type of Lamp: " << type << std::endl;
}
