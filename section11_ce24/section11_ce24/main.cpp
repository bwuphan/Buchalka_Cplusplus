//
//  main.cpp
//  section11_ce24
//
//  Created by Bobby on 4/14/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----
int find_area(int length) {
  return length * length;
};

double find_area(double length, double width) {
  return length * width;
}


//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void area_calc() {
  
  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
  //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
  
  int square_area = find_area(2);
  double rectangle_area = find_area(4.5, 2.3);
  
  
  //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
  
  cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----













