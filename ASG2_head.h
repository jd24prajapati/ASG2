using namespace std;


// Function     :   print_array
// Author       :   Jaydeep Prajapati (Student Id : 200468915)
// FOR COURSE   :   CS 700
// DATE         :   8th October 2021

/**
print_array

Purpose: Print the content of the given array
Parameter(s): 
   <1> int size: Size of the executed array 
   <2> double s1_result: Actual array which is going to display 
Precondition(s): N/A
Returns: N/A 
         
Side effect: N/A
*/
void print_array(int size, double s1_result[][10])
{
	cout<< "Size :"<< size<<"\t\t\tAll time is in second(s)"<< endl;
	cout<< "\n";

	// Displaying the random, sorted, and inverse time of 10 array
	// Display the headers of table
	cout<<left<< setw(13)<< "Array/Time"<< left<< setw(3)<< "|";
	for(unsigned int col=0; col<10; col++)
		cout<<"Array "<<left<< setw(3)<< col+1<<  " ";
	cout<< "\n\n";

	// Display the content of tabe
	for(unsigned int row=0; row<3; row++)
	{
		if(row == 0)
			cout<<left<< setw(13)<< "Random time"<< left<< setw(3)<< "|";
		if(row == 1)
			cout<<left<< setw(13)<< "Sorted time"<< left<< setw(3)<< "|";
		if(row == 2)
			cout<<left<< setw(13)<< "Inverse time"<< left<< setw(3)<< "|";
		for(unsigned int col=0; col<10; col++)
		{
			cout<< left<< setw(9)<< s1_result[row][col]<< " ";
		}
		cout<< "\n";
	}
	cout<< "\n\n";
	cout<< "--------------------------------------------------------------------------------------------------------"<< endl;

}