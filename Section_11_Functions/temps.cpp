#include <iostream>
#include <cmath>
using namespace std;

//DO NOT MODIFY THE CODE ABOVE THIS LINE----
//WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----
double fahrenheit_to_celsius(double temp);
double fahrenheit_to_kelvin(double temp);


//WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//DO NOT MODIFY THE CODE BELOW THIS LINE----

void temperature_conversion(double fahrenheit_temperature) {

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    std::cout << "The fahrenheit temperature " << fahrenheit_temperature 
        << " degrees is equivalent to " << celsius_temperature 
        << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

double fahrenheit_to_celsius(double temp) {
    return std::round((5.0 / 9.0) * (temp - 32.0));
}

double fahrenheit_to_kelvin(double temp) {
    return std::round((5.0 / 9.0) * (temp - 32.0) + 273.0);
}

int main() {
    temperature_conversion(89.0);
}
