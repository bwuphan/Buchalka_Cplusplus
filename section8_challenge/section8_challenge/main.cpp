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

vector<int> getChange(int centsRemain, vector<int> change = {0,0,0,0,0}) {
  if (centsRemain <= 0) {
    return change;
  }
  
  if (centsRemain >= 100) {
    change[0] += 1;
    centsRemain -= 100;
  } else if (centsRemain >= 25) {
    change[1] += 1;
    centsRemain -= 25;
  } else if (centsRemain >= 10) {
    change[2] += 1;
    centsRemain -= 10;
  } else if (centsRemain >= 5) {
    change[3] += 1;
    centsRemain -= 5;
  } else {
    change[4] += 1;
    centsRemain -= 1;
  }
  
  return getChange(centsRemain, change);
}

int main(int argc, const char * argv[]) {
  int change = 0;
  
  cout << "Enter change you need in cents : ";
  cin >> change;
  
  vector<int> finalChange = getChange(change);
  
  cout << "Dollars  : " << finalChange[0] << endl;
  cout << "Quarters : " << finalChange[1] << endl;
  cout << "Dimes    : " << finalChange[2] << endl;
  cout << "Nickels  : " << finalChange[3] << endl;
  cout << "Pennies  : " << finalChange[4] << endl;
  return 0;
}
