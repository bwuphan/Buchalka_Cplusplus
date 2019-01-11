//
//  main.cpp
//  section8_challenge
//
//  Created by Bobby on 1/10/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
  // insert code here...
  std::cout << "Hello, World!\n";
  return 0;
}

vector<int> getChange(int centsRemain, vector<int> change) {
  if (centsRemain == 0) {
    return change;
  }
  if (centsRemain >= 25) {
    change[0] += 1;
  } else if (centsRemain >= 10) {
    change[1] += 1;
  } else if (centsRemain >= 5) {
    change[2] += 1;
  } else {
    change[3] += 1;
  }
  return getChange(centsRemain, change);
}
