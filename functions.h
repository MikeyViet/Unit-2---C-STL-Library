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
/********************************************************************
 *                      FUNCTION PROTOTYPE
 *********************************************************************/
void displayVector();

/********************************************************************
 *                      CLASS DEFINITION
 *********************************************************************/
//  Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added

// This object is instantiated by assigning it in a constructor. It is not passed by reference
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

//  Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added

// This object is instantiated by using the initializer list
class MyClassVector2 {
    vector<int> vec;
 
public:
    MyClassVector2(vector<int> v) : vec(v)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

//  Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added

// This object is instantiated by assigning to construct but it is passed by reference. The references MUST BE INITIALIZED USING THE INITIALIZER LIST.
class MyClassVector3 {
    vector<int>& vec;
 
public:
    // this is the right way to assign
    // the reference of stl container
    MyClassVector3(vector<int>& arr)
        : vec(arr)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

/********************************************************************
 *                      FUNCTION DEFINITION
 *********************************************************************/
#endif