#include<iostream>
#include <iomanip>

using namespace std;

/** These functions compute the sine and cosine of an angle
    expressed in degrees. The result will be
    an integer representing the sine or cosine as
    ten-thousandths. For example, a result of 7071 represents
    7071e-4 or 0.7071.
*/

// Forward declarations
int sin0to45(int);
int sin45to90(int);
int polyEval(int, int[], int);

/** Compute the sine of an angle in degrees.
    @param x The angle in degrees
    @return The sine of x
*/
int sin(int x) {
  if (x < 0) {
    x = -x;
    // error = 1;
    cout<< "Path: 1"<<  endl;
    // return 525;
  }
  x = x % 360;
  if (0 <= x && x <= 45) {
    cout<< "Path: 2"<<  endl;
    // error = 0;
    return sin0to45(x);
  }
  else if (45 <= x && x <= 90) {
    cout<< "Path: 3"<<  endl;
    // error = 0;
    return sin45to90(x);
  }
  else if (90 <= x && x <= 180) {
    cout<< "Path: 4"<<  endl;
    // error = 0;  
    return sin(180 - x);
  }
  else {
    cout<< "Path: 5"<<  endl;
//    error = 0;  
   return -sin(x - 180);
  }
}

/** Compute the cosine of an angle in degrees.
    @param x The angle in degrees
    @return The cosine of x
*/
int cos(int x) {
  cout<< "Path: 7"<<  endl;

  return sin(x + 90);
}

/** Compute the sine of an angle in degrees
    between 0 and 45.
    pre: 0 <= x < 45
    @param x The angle
    @return The sine of x
*/
int sin0to45(int x) {
  // Code to compute sin(x) for x between 0 and 45 degrees
  // Evaluate a polynomial optimized for this range.
  int coef[] = {
    -81, -277, 1747900, -1600};
  return polyEval(x, coef, 4) / 10000;
}

/** Compute the sine of an angle in degrees
    between 45 and 90.
    pre: 45 <= x <= 90
    @param x The angle
    @return The sine of x
*/
int sin45to90(int x) {
  // Code to compute sin(x) for x between 45 and 90 degrees
  // Evaluate a polynomial optimized for this range.
  int coef[] = {
    336, -161420, 75484, 999960000};
  return polyEval(90 - x, coef, 4) / 100000;
}

/** Function to evaluate a polynomial
    @param x The point at which the polynomial is to be evaulated
    @param coef The array of coefficients
    @param n The number of coefficients (degree + 1)
    @return x^n-1*coef[0] + x^n-2*coef[1] + ... x*coef[n-2] + coef[n-1]
*/
int polyEval(int x, int coef[], int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    result *= x;
    result += coef[i];
  }
  return result;
}

// Function     :   display
// TITLE        :   Main file for Section 2 of Assignment 2
// Author       :   Jaydeep Prajapati (Student Id : 200468915)
// FOR COURSE   :   CS 700
// DATE         :   12th October 2021

/**
display

Purpose: Print the given content
Parameter(s): 
   <1> int degree: Angle for sine and cosine 
   <2> int result: Result of sine or cosine function of the given degree 
   <3> bool error: Is there is error or not  
   <4> int path_counter: Counter for all paths
   <5> int expected_result: Expected result of the equation 
Precondition(s): N/A
Returns: N/A 
         
Side effect: N/A
*/
void display(int degree, int result, bool error, unsigned int path_counter, int expected_result)
{
	cout<< "Path count : "<< left<< setw(5)<< path_counter<< "Degree : "<< left<< setw(8)<< degree<< "Actual result : "<< left<< setw(10)<< result<< "Expected : "<< left<< setw(10)<< expected_result<< "Error : "<< left<< setw(5)<< error<< endl<< "\n";;
  cout<< "-----------------------------------------------------------------------------------------------"<<endl;
}

// Function     :   verify
// TITLE        :   Main file for Section 2 of Assignment 2
// Author       :   Jaydeep Prajapati (Student Id : 200468915)
// FOR COURSE   :   CS 700
// DATE         :   12th October 2021

/**
verify

Purpose: Verify the actual and expected result of sine and cosine angle
Parameter(s): 
   <1> int actual_result: The actual result of sine or cosine angle  
   <2> int expected_result: Expected result of sine or cosine angle  
Precondition(s): N/A
Returns: true if there is an error, false otherwise
         
Side effect: N/A
*/
bool verify(int actual_result, int expected_result)
{
	if(actual_result != expected_result)
		return true;
	return false;
}

// Function     :   get_sin_result
// Author       :   Jaydeep Prajapati (Student Id : 200468915)
// FOR COURSE   :   CS 700
// DATE         :   12th October 2021

/**
get_sin_result
 
Purpose: Count the sine value of given angle
Parameter(s): 
    <1> int degree: An angle for which cosine   
    <2> int path_counter: Counter for all paths
    <3> int expected_result: Expected result of sine or cosine angle
Precondition(s): N/A
Returns: N/A
          
Side effect: N/A
*/
void get_sin_result(int degree, unsigned int &path_counter, int expected_result)
{
	bool is_error;
	int result = sin(degree);
	++path_counter;
	is_error = verify(result, expected_result);

	display(degree, result, is_error, path_counter,expected_result);
	
}

// Function     :   get_cos_result
// TITLE        :   Main file for Section 2 of Assignment 2
// Author       :   Jaydeep Prajapati (Student Id : 200468915)
// FOR COURSE   :   CS 700
// DATE         :   13th October 2021

/**
get_cos_result
 
Purpose: Count the cosine value of given angle
Parameter(s): 
   <1> int degree: An angle for which cosine   
   <2> int path_counter: Counter for all paths
   <3> int expected_result: Expected result of sine or cosine angle
Precondition(s): N/A
Returns: N/A
          
Side effect: N/A
*/
void get_cos_result(int degree, unsigned int &path_counter, int expected_result)
{
	bool is_error;
	int result = cos(degree);
	++path_counter;
	is_error = verify(result, expected_result);

	display(degree, result, is_error, path_counter,expected_result);
	
}

