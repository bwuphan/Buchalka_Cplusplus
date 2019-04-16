//
//  main.cpp
//  section11_challenge
//
//  Created by Bobby on 4/15/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

char askUser(vector<int> &vect);
void printNumbers(vector<int> &vect);

int main(int argc, const char * argv[]) {
  char response;

  vector<int> vect {1,2,3};
  do {
    response = askUser(vect);
    cout << "response: " << response << endl;
  } while (response != 'Q');
  
  
  return 0;
}


char askUser(vector<int> &vect) {
  char response;
  cout << "Please select from these choices." << endl;
  cout << "P - Print numbers." << endl;
  cout << "A - Add a number." << endl;
  cout << "M - Display mean of numbers." << endl;
  cout << "S - Display the smallest number." << endl;
  cout << "L - Display the largest number." << endl;
  cout << "Q - Quit." << endl;
  
  cin >> response;
  response = toupper(response);
  
  if (response == 'P') {
    printNumbers(vect);
  }
  
  return response;
}


void printNumbers(vector<int> &vect) {
  cout << "P selected. Array results here: " << endl;
  for (size_t i = 0; i < vect.size(); i++) {
    cout << vect[i] << endl;
  }
}
