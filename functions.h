/********************************************************************
 *  Header file to hold all the function prototypes and definitions
 *
 *  Assignment: Unit 2
 *  Title:      C++ Standard Library
 *  Student:    Michael Nguyen
 *  Teacher:    Tyson McMillan
 *  Date:       03/29/2022
 *********************************************************************/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <algorithm> 
#include <string>

using namespace std;

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};


#endif