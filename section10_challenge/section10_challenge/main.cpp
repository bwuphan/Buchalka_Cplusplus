//
//  main.cpp
//  section10_challenge
//
//  Created by Bobby on 1/16/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string coder (string phrase, int number, bool add) {
  vector <int> asciiVec {};
  string encodedString = "";
  for (size_t i = 0; i < phrase.length(); ++i) {
    int asciiNum {};
    if (add == true) {
      asciiNum = phrase[i] + number;
    } else {
      asciiNum = phrase[i] - number;
    }
    char asciiChar = asciiNum;
    encodedString += asciiChar;
  }
  
  return encodedString;
}


int main(int argc, const char * argv[]) {
  string inputString {};
  cout << "Please input a string to be encoded: " << endl;
  getline(cin, inputString);
  
  int inputNumber;
  cout << "Input a number to use for the encoder: " << endl;
  cin >> inputNumber;
  string encoded = coder(inputString, inputNumber, true);
  string decoded = coder(encoded, inputNumber, false);
  
  cout << "encoded string: " << encoded << endl;
  cout << "decoded string: " << decoded << endl;
  return 0;
}
