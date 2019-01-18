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

string coder (string phrase, int number, bool decode) {
  vector <int> asciiVec {};
  string encodedString = "";
  for (size_t i = 0; i < phrase.length(); ++i) {
    int asciiNum {};
    if (decode == true) {
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
  string input {};
  cout << "Please input a string to be encoded: " << endl;
  getline(cin, input);
  
  string encoded = coder(input, 2, true);
  string decoded = coder(encoded, 2, false);
  cout << encoded << endl << decoded;
  return 0;
}
