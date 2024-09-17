#include "Furniture.h"

class Lamp : public Furniture {
private:
    
    std::string color;
    double brightness;
    int numBulbs;
    double height;
    std::string type;


public:
    Lamp(std::string n, double p, int q, std::string m, std::string s, int a, std::string col, double br, int nB, double h, std::string ty)
        : Furniture(n, p, q, m, s, a), color(col), brightness(br), numBulbs(nB), height(h), type(ty) {}

    //getters  
    std::string getColor() const { return color; }
    double getBrightness() const { return brightness; }
    int getNumBulbs() const { return numBulbs; }
    double getHeight() const { return height; }
    std::string getType() const { return type; }

    //setters
    void setColor( std::string col ) { color = col; }
    void setBrightness( double br ) { brightness = br; }
    void setNumBulbs( int nB ) { numBulbs = nB; }
    void setHeight( double h ) { height = h; }
    void setType( std::string ty ) { type = ty; }

    void display() const {
        display();
        std::cout << "Color: " << color << std::endl;
        std::cout << "Brightness: " << brightness << " lumens" <<std::endl;
        std::cout << "Number of Lightbulbs: " << numBulbs << std::endl;
        std::cout << "Lamp height: " << height << std::endl;
        std::cout << "Type of Lamp: " << type << std::endl;
    }
};
