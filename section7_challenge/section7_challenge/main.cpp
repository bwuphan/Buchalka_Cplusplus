//
//  main.cpp
//  section7_challenge
//
//  Created by Bobby on 12/3/18.
//  Copyright © 2018 Bobby. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void coutVector(vector<int> vect) {
  for (int i = 0; i < vect.size(); ++i) {
    cout << vect.at(i) << endl;
  }
  cout << endl;
}

void cout2dVector(vector<vector <int>> vect) {
  for (int i = 0; i < vect.size(); ++i) {
    for (int j = 0; j < vect.size(); ++j) {
      cout << vect.at(i).at(j) << endl;
    }
  }
  cout << endl;
}

int main(int argc, const char * argv[]) {
  vector<int> vector1;
  vector<int> vector2;
    
  vector1.push_back(10);
  vector1.push_back(20);
  
  vector2.push_back(100);
  vector2.push_back(200);
  
  vector<vector<int>> vector_2d;
  
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);
  
  coutVector(vector1);
  
  cout2dVector(vector_2d);
  
  vector1[0] = 1000;
  
  cout2dVector(vector_2d);
  
  coutVector(vector1);
  return 0;
}
