//
//  main.cpp
//  section13_challenge
//
//  Created by Bobby on 6/2/19.
//  Copyright © 2019 Bobby. All rights reserved.
//

#include <iostream>


using namespace std;

void print(int *array, size_t size) {
  for (size_t i = 0; i < size; ++i) {
    cout << array[i] << " ";
  }
}

int main(int argc, const char * argv[]) {
  // insert code here...
  const size_t array1_size{5};
  const size_t array2_size{3};
  
  int array1[] {1,2,3,4,5};
  int array2[] {10,20,30};
  
  cout << "Array 1: ";
  print (array1, array1_size);
  
  cout << "Array 2: ";
  print(array2, array2_size);
  
  
  return 0;
}
