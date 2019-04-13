//
//  main.cpp
//  section11_ce22
//
//  Created by Bobby on 4/13/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----
double fahrenheit_to_celsius(double fahrenheit);

double fahrenheit_to_kelvin(double fahrenheit);


double fahrenheit_to_celsius(double fahrenheit) {
  return (5.0/9.0) * (fahrenheit - 32);
}

double fahrenheit_to_kelvin(double fahrenheit) {
  return (5.0/9.0) * (fahrenheit - 32 + 273);
}

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void temperature_conversion(double fahrenheit_temperature) {
  
  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
  //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
  double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
  double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
  
  
  //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
  
  cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----


