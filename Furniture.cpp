#include <iostream>
#include <string>
#include "Furniture.h"


std::string name;
double price;
int quantity;
std::string material;
std::string style;
int age;

// Constructor to assign inventory ID and increment nextID
Furniture::Furniture(std::string n, double p, int q, std::string m, std::string s, int a)
    : name(n), price(p), quantity(q), material(m), style(s), age(a) {}

// Getters
std::string Furniture::getName() const { return name; }
double Furniture::getPrice() const { return price; }
int Furniture::getQuantity() const { return quantity; }
std::string Furniture::getMaterial() const { return material; }
std::string Furniture::getStyle() const { return style; }
int Furniture::getAge() const { return age; }

// Setters
void Furniture::setName(const std::string& n) { name = n; }
void Furniture::setPrice(double p) { price = p; }
void Furniture::setQuantity(int q) { quantity = q; }
void setMaterial(const std::string& m) { material = m; }
void setStyle(const std::string& s) { style = s; }
void setAge(int a) { age = a; }

// Virtual display method
void Furniture::display() const {
    std::cout << "Name: " << name << ", Price: $" << price
                  << ", Quantity: " << quantity << ", Material: " << material << 
                  ", Style: " << style << ", Age: " << age << std::endl;
}