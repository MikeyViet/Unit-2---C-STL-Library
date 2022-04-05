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
#include <cassert>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <utility>
#include <vector>
using namespace std;

/********************************************************************
 *                      MAIN FUNCTION
 *********************************************************************/
int main() {
	/***************************Vectors***********************************/
	cout << "*********************Vectors*********************" << endl;
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
	vs.push_back("Michael");
	vs.push_back("C++");
	vs.push_back("Shoot Me Now!");

	// display the 3 elements in the vd vector
	cout << "\nValues in vd vector: \n";
	for (double vals : vd) {
		cout << vals << endl;
	}
	cout << "\nAnother way to print values of vd vector: " << endl;
	for (int i = 0; i < vd.size(); i++) {
		cout << vd[i] << endl;
	}

	// display the 3 elements in the vd vector
	cout << "\nValues in vi vector: \n";
	for (int vals : vi) {
		cout << vals << endl;
	}
	cout << "\nAnother way to print values of vi vector: " << endl;
	for (int i = 0; i < vi.size(); i++) {
		cout << vi[i] << endl;
	}

	// display the 3 elements in the vs vector
	cout << "\nValues in vs vector: \n";
	for (string vals : vs) {
		cout << vals << endl;
	}
	cout << "\nAnother way to print values of vs vector: " << endl;
	for (int i = 0; i < vs.size(); i++) {
		cout << vs[i] << endl;
	}

	cout << endl << endl;

	// Instruction 4:
	/********************************************************************
	 *	Combine the 3 class examples from the geeksforgeeks site into one
	 *	program, and instantiate the respective classes in one program
	 *	within in main().  You simple duty: combine these three working
	 *	programs into one working program. Where GeekForGeek calls the
	 *	first example "MyClass", you call it "MyClassVector1" ...
	 *	MyClassVector2, so that all of your examples can be on one file.
	 *	Give GeekForGeek credit in the comments.
	 *
	 *	Note:
	 *		The default access modifier in C++ is private. That is, if
	 *		you do not declare member variables as private, the compiler
	 *		will assume private.
	 *********************************************************************/

	/************************Vector_as_Class_Member***********************/
	// Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/
	// Instanting obj1 of type MyClassVector1 and printing elements on screen
	cout << "**************Vector as a Class Member**************" << endl
		 << endl;
	cout << "The elements inside MyClassVector 1: " << endl;
	vector<int> vec1;
	for (int i = 1; i <= 5; i++)
		vec1.push_back(i);
	MyClassVector1 obj1(vec1);
	obj1.print();

	cout << endl << endl;

	// Continue with MyClassVector2 and MyClassVector3

	// Instanting obj2 of type MyClassVector2 and printing elements on screen
	cout << "The elements inside MyClassVector 2: " << endl;
	vector<int> vec2;
	for (int i = 1; i <= 5; i++)
		vec2.push_back(i);
	MyClassVector2 obj2(vec2);
	obj2.print();

	cout << endl << endl;

	// Instanting obj3 of type MyClassVector3 and printing elements on screen
	cout << "The elements inside MyClassVector 3: " << endl;
	vector<int> vec3;
	for (int i = 1; i <= 5; i++)
		vec3.push_back(i);
	MyClassVector3 obj3(vec3);
	obj3.print();

	cout << endl << endl;

	/************************STL Iterators********************************/
	// Expanding the code from the C++ STL pdf to display 10 elements
	cout << "********************STL Iterators********************" << endl;
	vector<int> vInt(10); // declare vector of type int with 10 elements
	vInt[0] = 23;
	vInt[1] = 1;
	vInt[2] = 65;
	vInt[3] = 287;
	vInt[4] = 17;
	vInt[5] = 901;
	vInt[6] = 7;
	vInt[7] = 365;
	vInt[8] = 76;
	vInt[9] = 33;

	cout << endl;

	// Display the elements of the vector

	int sizevInt = 0;

	vector<int>::iterator it;
	for (it = vInt.begin(); it != vInt.end(); ++it) {
		cout << "The value of the element at index " << ++sizevInt << " is "
			 << *it << endl;
	}

	/****************************Stack***************************/
	// Write comments that help one better understand what the code is doing.
	cout << "\n*************************Stack*************************" << endl
		 << endl;

	stack<int> st;

	st.push(250); // pushing a number on the stack using push() member function
				  // of stack vector

	// the assert() will compare the argument and display error message if it is
	// equal to 0 (False) Only one value was placed on stack so the size should
	// equal to 1 for 1 element on stack
	assert(st.size() == 1);
	// The value 250 was only value placed in stack so that would make it the
	// top of the stack. The top() member function returns the value of the top
	// element.  This should be true.
	assert(st.top() == 250);
	// We are assigning a new value to the top of the stack. Old value is
	// replaced by new.
	st.top() = 75;
	// Since the one value was replaced in the stack, it should be the new top
	// value. Assert() will return true.
	assert(st.top() == 75);
	// pops off the top element. So the vector should be empty now.
	st.pop();
	// The empty() member function of stack checks to see if the stack is empty.
	// If it is empty, then it returns true. This statement is checking to see
	// if it is true = empty.
	assert(st.empty() == true);

	/*****************************Stack****************************/
	// Write the code as presented in: 3. std::set
	// Write comments that help one better understand what the code is doing.
	cout << "\n*****************************Set****************************\n"
		 << endl;
	// this creates the set of integers that are unique
	set<int> iset;
	// Now we need to populate the iset with values with the insert() function
	iset.insert(500);
	iset.insert(23);
	iset.insert(12);
	iset.insert(53);
	iset.insert(6);
	iset.insert(66);

	// The find() is used to find a value in the set. If the value is found, it
	// will return an iterator to the first element of the range. If it is not
	// found, it will return the last element. The following statement searches
	// for a number and inserts it in set if not found.
	if (iset.find(23) != iset.end()) {
		iset.insert(23);
	}

	if (iset.find(45) != iset.end()) {
		iset.insert(45);
	}
	// check the size of the set with size()
	cout << "\nThe size of the set is: " << iset.size() << endl;
	// assert(iset.size() == 6);	//this fails because size is 5
	// assert(iset.size() == 5);	//this passes

	// print out set
	cout << "\nThe values in the set are: " << endl;
	set<int>::iterator it2;
	for (it2 = iset.begin(); it2 != iset.end(); it2++) {
		cout << *it2 << endl;
	}

	// looks like the elements in a set are sorted ascending

	/*****************************Pair Structure****************************/
	// Write the code as presented in: 4. std::pair structure
	// Write comments that help one better understand what the code is doing.
	cout << "\n************************Pair Structure***********************\n"
		 << endl;
	// Structure pair is a container that holds a pair of objects. It will have
	// an object of one type with an object of another type

	// structure pair of 2 strings
	pair<string, string> strstr;
	strstr.first = "Michael";
	strstr.second = "Nguyen";
	cout << "\nThe value of strstr.first is " << strstr.first
		 << " and the value of strstr.second is " << strstr.second << endl;

	// structure pair of integer and string
	pair<int, string> intstr;
	intstr.first = 100;					  // store value in integer part
	intstr.second = "I want this grade!"; // stor value in string part
	cout << "\nThe value in intstr.first is " << intstr.first
		 << " and the value in intstr.second is " << intstr.second << "."
		 << endl;

	// structure pair of string and integer
	pair<string, int> strint;
	strint.first = "I want this many hours of sleep";
	strint.second = 24;

	cout << "\n value in strint.first is: " << strint.first
		 << " and the value in strint.second is: " << strint.second << "."
		 << endl;

	/*****************************Map Insert****************************/
	// Write the code as presented in: 14. std::map::insert
	// Write comments that help one better understand what the code is doing.
	cout << "\n*****************************Map "
			"Insert****************************\n";
	// the insert() enters / inserts new items if they do not exist.
	typedef map<string, int> MapT;
	typedef MapT::const_iterator MapIterT;

	// instantiate an amap object
	MapT amap;
	// create a structure pair of type iterator and bool
	pair<MapIterT, bool> result = amap.insert(make_pair("Michael", 45));
	// check to see if result.second is true
	assert(result.second == true);
	// check to see if value of second is 45 being pointed to by the iterator
	assert(result.first->second == 45);

	// add new elements into the structure pair result
	result = amap.insert(make_pair("Michael", 54));

	// check to see if second is false
	assert(result.second == false);

	// check to see if 45 is still there. The key of Michael was already there,
	// so the 54 did not get inserted into th epari.
	assert(result.first->second == 45);

		/*****************************Map Summary****************************/
	// Write the code as presented in: 16. Map summary
	// Write comments that help one better understand what the code is doing.
		cout << "\n*****************************Map "
			"Summary****************************\n";

	//creating a map of phone book with pair of strings
map<string, string>phone_book;
	//creating first entry
	phone_book["411"] = "Directory";
	//creating second entry
	phone_book["911"] = "Emergency";
	//creating third entry
	phone_book["508-678-2811"] = "BCC";
	//find the number 411 and if not in the map, then create the pair and insert
	if(phone_book.find("411") != phone_book.end()) {
		phone_book.insert(make_pair(string("411"),string("Directory")));
	}
	//check to see if there are three entries in phone book
	assert(phone_book.size() == 3);
	//using an iterator to go through entries, print out each entry
	map<string, string>::const_iterator it3;
	for(it3 = phone_book.begin(); it3 != phone_book.end(); ++it3){
		cout << " " << it3->first << " " << it3->second << endl;
	}
	
	/****Section_Name**** Sort_Algorithm*/
	// Write the code as presented in: 23. sort example

	// Write comments that help one better understand what the code is doing.

	/****Section_Name****Predicate_Algorithm*/
	// Write the code as presented in: 25. count_if and predicate function

	// Write comments that help one better understand what the code is doing.

	return 0;
}