//
//  main.cpp
//  section11_ce25
//
//  Created by Bobby on 4/14/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
string print_guest_list(const string [], size_t);
void clear_guest_list(string [], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {
  
  string guest_1 {"Larry"};
  string guest_2 {"Moe"};
  string guest_3 {"Curly"};
  
  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
  //----WRITE THE FUNCTION CALLS BELOW THIS LINE----
  
  
  print_guest_list(guest_list, guest_list_size);
  clear_guest_list(guest_list, guest_list_size);
  print_guest_list(guest_list, guest_list_size);
  
  
  //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
  
  //----WRITE THE FUNCTION BODY BELOW THIS LINE----
  for (size_t i{0}; i < guest_list_size; ++i) {
    cout << guest_list[i] << endl;
  }
  
  return typeid(guest_list).name();
  //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
  
  //----WRITE THE FUNCTION BODY BELOW THIS LINE----
  for (size_t i{0}; i < guest_list_size; ++i) {
    guest_list[i] = " ";
  }
  
  
  //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}
