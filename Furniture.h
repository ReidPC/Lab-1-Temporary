#include <iostream>
#include <string>

class Furniture {
protected:
    std::string name;
    double price;
    int quantity;
    std::string material;
    std::string style;
    int age;

public:
    // Constructor to assign inventory ID and increment nextID
    Furniture(std::string n, double p, int q, std::string m, std::string s, int a)
        : name(n), price(p), quantity(q), material(m), style(s), age(a) {}

    // Getters
    std::string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    std::string getMaterial() const { return material; }
    std::string getStyle() const { return style; }
    int getAge() const { return age; }

    // Setters
    void setName(const std::string& n) { name = n; }
    void setPrice(double p) { price = p; }
    void setQuantity(int q) { quantity = q; }
    void setMaterial(const std::string& m) { material = m; }
    void setStyle(const std::string& s) { style = s; }
    void setAge(int a) { age = a; }


    // Virtual display method
    virtual void display() const {
        std::cout << "Name: " << name << ", Price: $" << price
                  << ", Quantity: " << quantity << ", Material: " << material << 
                  ", Style: " << style << ", Age: " << age << std::endl;
    }
};
