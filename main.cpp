/********************************************************************
 *  Assignment: Unit 2
 *  Title:      C++ Standard Library
 *  Student:    Michael Nguyen
 *  Teacher:    Tyson McMillan
 *  Date:       03/25/2022
 *
 *  Description: This program has three vectors already made for user.
 *		User is asked to manipulate the data and add three elements and
 *		display elements to screen. The goal of the assigment is to give
 *		us hands on coding using vector templates from the C++ Standard
 *
 *
 *********************************************************************/

/********************************************************************
 *	Dr_T Unit 2 COSC-1437 Starter
 *
 *	Task: To create a single main.cpp that contains code samples and
 *		implementations of each of the following topics.
 *
 *	Top level solution folder: C_STL_Library_YourLastName
 *********************************************************************/
#include "Input_Validation_Extended.h"
#include "functions.h"
#include <algorithm>
#include <iostream>
#include <vector>

#include <string>
using namespace std;

/********************************************************************
 *                      MAIN FUNCTION
 *********************************************************************/
int main() {
	/****Section_Name***Vectors*/
	// Write the base code for: 5. std::vector example
	vector<double> vd; // vd elments are floating point numbers
	vector<int> vi;	// vi elements are integer numbers
	vector<string> vs; // vs elements are string objects

	// Expand this code to:

	// Instruction 1 - add 3 elements to the vd vector
	vd.push_back(1);
	vd.push_back(2);
	vd.push_back(3);
	vd.push_back(55.4);

	// expanded code to push back 3 elements to the vd vector
	vd.push_back(35);
	vd.push_back(72);
	vd.push_back(13);

	// Instruction 2 - add 3 elements to the vi vector
	// expanded code to push back 3 elements to the vi vector
	vi.push_back(17);
	vi.push_back(100);
	vi.push_back(64);

	// Instruction 3 - add 3 elements to the vs vector
	// expanded code to push back 3 elements to the vi vector

	// display the 3 elements in the vd vector
	cout << "\nValues in vd: \n";
	for (double vals : vd) {
		cout << vals << endl;
	}
	cout << "\nAnother way to print values of vd vector: " << endl;
	for (int i = 0; i < vd.size(); i++) {
		cout << vd[i] << endl;
	}

	// display the 3 elements in the vd vector
	cout << "\nValues in vi: \n";
	for(int vals : vi){
		cout << vals << endl;
	}
	
	cout << "\nAnother way to print values of vi vector: " << endl;
	for (int i = 0; i < vi.size(); i++){
		cout << vi[i] << endl;
	}

	// display the 3 elements in the vs vector

	/****Section_Name***Vector_as_Class_Member*/
	// Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

	cout << "\nVector_as_Class_Member" << endl;
	vector<int> vec;
	for (int i = 1; i <= 5; i++)
		vec.push_back(i);
	MyClassVector1 obj(vec);
	obj.print();

	// Continue with MyClassVector2 and MyClassVector3

	/****Section_Name***STL_Iterators*/

	/****Section_Name*** Stack*/

	// Write comments that help one better understand what the code is doing.

	/****Section_Name**** Set*/
	// Write the code as presented in: 3. std::set

	// Write comments that help one better understand what the code is doing.

	/****Section_Name****Pair_Structure*/
	// Write the code as presented in: 4. std::pair structure

	// Write comments that help one better understand what the code is doing.

	/****Section_Name**** Map_Insert*/
	// Write the code as presented in: 14. std::map::insert

	// Write comments that help one better understand what the code is doing.

	/****Section_Name****Map_Summary*/
	// Write the code as presented in: 16. Map summary

	// Write comments that help one better understand what the code is doing.

	/****Section_Name**** Sort_Algorithm*/
	// Write the code as presented in: 23. sort example

	// Write comments that help one better understand what the code is doing.

	/****Section_Name****Predicate_Algorithm*/
	// Write the code as presented in: 25. count_if and predicate function

	// Write comments that help one better understand what the code is doing.

	return 0;
}