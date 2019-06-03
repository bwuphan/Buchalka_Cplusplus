//
//  main.cpp
//  section12__challenge
//
//  Created by Bobby on 5/26/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  int *p;
  cout << p << endl;
  cout << &p << endl;
  cout << sizeof p << endl;
  p = nullptr;
  cout << p << endl;
  std::cout << "Hello, World!\n";
  return 0;
}
