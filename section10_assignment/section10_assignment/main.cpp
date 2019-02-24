//
//  main.cpp
//  section10_assignment
//
//  Created by Bobby on 2/24/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printPyramid(string word, int index) {
  string row {};
  if (index == word.length()) {
    return;
  }
  int numSpaces = word.length() - index + 1;
  for (int i = numSpaces; i <= 0; i--) {
    row += " ";
  }
}

int main(int argc, const char * argv[]) {
  // insert code here...
  string inputWord {};
  cout << "Enter a word." << endl;
  getline(cin, inputWord);
  cout << inputWord;
  return 0;
}
