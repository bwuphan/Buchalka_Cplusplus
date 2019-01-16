//
//  main.cpp
//  stringsExercise1
//
//  Created by Bobby on 1/15/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
  string unformatted_full_name {"StephenHawking"};
  
  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
  //----WRITE YOUR CODE BELOW THIS LINE----
  string first_name (unformatted_full_name, 0, 7);
  string last_name = unformatted_full_name.substr(7);
  cout << first_name << endl;
  cout << last_name << endl;
  
  string formatted_full_name = first_name + last_name;
  formatted_full_name.insert(7, " ");
  
  //----WRITE YOUR CODE ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
  cout << formatted_full_name;
  return 0;
}
