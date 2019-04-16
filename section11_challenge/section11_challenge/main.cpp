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

char askUser(vector<int> &vect);
void printNumbers(const vector<int> &vect);
void addNumber(vector<int> &vect);
void displayMean(const vector<int> &vect);
void displaySmallest(const vector<int> &vect);
void displayLargest(const vector<int> &vect);

int main(int argc, const char * argv[]) {
  char response;

  vector<int> vect {1,2,10,-1};
  do {
    response = askUser(vect);
    cout << "response: " << response << endl;
  } while (response != 'Q');
  
  
  return 0;
}


char askUser(vector<int> &vect) {
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
  
  if (response == 'P') {
    printNumbers(vect);
  } else if (response == 'A') {
    addNumber(vect);
  } else if (response == 'M') {
    displayMean(vect);
  } else if (response == 'S') {
    displaySmallest(vect);
  } else if (response == 'L') {
    displayLargest(vect);
  }
  
  return response;
}


void printNumbers(const vector<int> &vect) {
  cout << "P selected. Array results here: " << endl;
  for (size_t i = 0; i < vect.size(); i++) {
    cout << vect[i] << endl;
  }
}


void addNumber(vector<int> &vect) {
  cout << "Enter a number: ";
  
  int newNum;
  cin >> newNum;
  vect.push_back(newNum);
}


void displayMean(const vector<int> &vect) {
  double total = 0.0;
  for (size_t i = 0; i < vect.size(); i++) {
    total += vect[i];
  }
  
  double vectSize = vect.size();
  double mean = total / vectSize;
  cout << "Mean: " << mean << endl;
}


void displaySmallest(const vector<int> &vect) {
  if (vect.size() > 0) {
    int smallest = vect[0];
    for (size_t i = 1; i < vect.size(); i++) {
      if (vect[i] < smallest) {
        smallest = vect[i];
      }
    }
    cout << "The smallest is: " << smallest << endl;
  } else {
    cout << "The vector is empty." << endl;
  }
}


void displayLargest(const vector<int> &vect) {
  if (vect.size() > 0) {
    int largest = vect[0];
    for (size_t i = 1; i < vect.size(); i++) {
      if (vect[i] > largest) {
        largest = vect[i];
      }
    }
    cout << "The largest is: " << largest << endl;
  } else {
    cout << "The vector is empty." << endl;
  }
}
