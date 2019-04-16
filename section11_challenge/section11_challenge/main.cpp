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

char askUser();
void printNumbers(int &arr);

int main(int argc, const char * argv[]) {
  char response;

  vector<int> vect {};
  do {
    response = askUser();
    cout << "response: " << response << endl;
    cout << (response == 'Q');
  } while (response != 'Q');
  
  
  return 0;
}

char askUser() {
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
  
  return response;
}
