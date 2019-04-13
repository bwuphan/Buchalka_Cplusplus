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
  if (index == word.length()) {
    return;
  }
  string row {};
  int numSpaces = word.length() - (index + 1);
  for (int i = numSpaces; i > 0; i--) {
    row += " ";
  }
  for (int i = 0; i < index; i++) {
    row += word[i];
  }
  for (int i = index; i >= 0; i--) {
    row += word[i];
  }
  for (int i = numSpaces; i > 0; i--) {
    row += " ";
  }
  cout << row << endl;
  index++;
  printPyramid(word, index);
}

int main(int argc, const char * argv[]) {
  // insert code here...
  string inputWord {};
  cout << "Enter a word." << endl;
  getline(cin, inputWord);
  printPyramid(inputWord, 0);
  return 0;
}
