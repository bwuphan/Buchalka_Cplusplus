//
//  main.cpp
//  section11_challenge
//
//  Created by Bobby on 4/15/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
using namespace std;

string askUser();


int main(int argc, const char * argv[]) {
  string response = "";
  while (response != "Q") {
    response = askUser();
  }
  
  return 0;
}

string askUser() {
  string response = "";
  cout << "Please select from these choices." << endl;
  cout << "P - Print numbers." << endl;
  cout << "A - Add a number." << endl;
  cout << "M - Display mean of numbers." << endl;
  cout << "S - Display the smallest number." << endl;
  cout << "L - Display the largest number." << endl;
  cout << "Q - Quit." << endl;
  
  cin >> response;
  return response;
}
