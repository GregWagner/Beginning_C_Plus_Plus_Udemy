#include <iostream>

constexpr double PI {3.14159};

double calc_area_circle(double radius) {
    return PI * radius * radius;
}

double calc_vol_cylinder(double r, double h) {
    return calc_area_circle(r) * h;
}

void area_circle() {
    double radius {};
    std::cout << "\nEtner the radius of the circle: ";
    std::cin >> radius;

    std::cout << "The area of circle with radius " << radius 
        << " is: " << calc_area_circle(radius) << '\n';
}

void volume_cylinder() {
    double height {};
    double radius {};
    std::cout << "\nEnter the height and radius of the cylinder: ";
    std::cin >> height >> radius;

    std::cout << "The volume of a cylinder with radius " << radius
        << " and height of " << height << " is: " 
        << calc_vol_cylinder(radius, height) << '\n';
}

int main() {
    area_circle();
    volume_cylinder();
}
