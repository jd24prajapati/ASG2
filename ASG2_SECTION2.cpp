/**
This program is written in c++

This program is a test cases for the sin_cos functions
This will test the given angle with sin and later it will compare the actual result 
with the expected result along with all the path it took while getting the result and display it

*/
#include<iostream>
#include "sin_cos.h"
using namespace std;

int main()
{

	bool error;
	int degree, result, expected_result;
	unsigned int path_counter = 0;
	cout<< "\t\t\t\t\t\tPath testing for sin\n\n";
	cout<< "---------------------------------------------------------------------------------------------------------------------------------------"<< endl;;

  // Test case 1
	degree = 40;
	expected_result = 6428;
	get_sin_result(degree, path_counter, expected_result);

  // Test case 2
	degree = 60;
	expected_result = 8660;
	get_sin_result(degree, path_counter, expected_result);

  // Test case 3
	degree = 100;
	expected_result = 9849;
	get_sin_result(degree, path_counter, expected_result);

  // Test case 4
	degree = 170;
	expected_result = -9849;
	get_sin_result(degree, path_counter, expected_result);

  // Test case 5
  degree = 210;
	expected_result = 8660;
	get_sin_result(degree, path_counter, expected_result);

  // Test case 6
	degree = 250;
	expected_result = -9849;
	get_sin_result(degree, path_counter, expected_result);

  // Test case 7
	degree = -60;
	expected_result = 8660;
	get_sin_result(degree, path_counter, expected_result);

  cout<< "\n\n"; 
	cout<< "---------------------------------------------------------------------------------------------------------------------------------------"<< endl;
	cout<< "\n\t\t\t\t\t\tPath testing for cos\n\n";
	cout<< "---------------------------------------------------------------------------------------------------------------------------------------"<< endl;

  // Test case 8
	degree = -50;
	expected_result = 6428;
	get_cos_result(degree, path_counter, expected_result);

  // Test case 9
	degree = -30;
	expected_result = -1736;
	get_cos_result(degree, path_counter, expected_result);

  // Test case 10
	degree = 80;
	expected_result = 1736;
	get_cos_result(degree, path_counter, expected_result);

  // Test case 11
  degree = 30;
	expected_result = 9999;
	get_cos_result(degree, path_counter, expected_result);

  // Test case 12
	degree = 60;
	expected_result = 4999;
	get_cos_result(degree, path_counter, expected_result);

  // Test case 13
	degree = 100;
	expected_result = -1736;
	get_cos_result(degree, path_counter, expected_result);

  // Test case 14
	degree = 500;
	expected_result = -7662;
	get_cos_result(degree, path_counter, expected_result);

	return 0;
}