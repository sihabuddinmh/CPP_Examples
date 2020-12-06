#include <iostream>//Header File.
using namespace std;
/*All the elements of the standard C++ library are declare
within what is called a namespace. The namespace with the name std */
int FindMax(int array[], int array_size);/*Function prototype to find maximum.*/
double FindAvg(int array[], int array_size);/*Function prototype to find average.*/
int main()
/*Above line corresponds to the beginning of the definition of the main function.*/
{
	int array[] = { 0 };//Array initialization.
	int array_size;// int., to know the size of array
	cout << "PROGRAM TO FIND MAXIMUM AND AVERAGE." << endl << endl;
	cout << "Enter the size of the array." << endl;
	//Asking the user to input the size of the array.
	cin >> array_size;//Input the size of array.
	cout << "Enter the numbers." << endl;//Asking the user to enter values
	for (int i = 0; i < array_size; i++)//For loop for multiple inputs.
		cin >> array[i];//Inputs the values.
	cout << "The maximum value is: " << FindMax(array, array_size) << endl << endl;
	//Outputs the maximum.
	cout << "The average value is: " << FindAvg(array, array_size) << endl << endl;
	//Outputs the average.
	system("pause");
	/*To keep the screen on the monitor after execution,
	without it the screen disappears after execution*/
	return 0;//The return statement causes the main function to finish.
}
int FindMax(int array[], int array_size)
/*Precondition: The function takes an array of type integer and of size 10 as parameters.*/
/*Postcondition: The function returns the maximum value back to the main function.*/
{
	int Max = array[0];/*Initializing the value of Max as the first element of array.*/
	for (int i = 1; i < array_size; i++)/*for loop to compare each element of the array with Max.*/
	{
		if (Max < array[i])// if condition
			Max = array[i];  //Max changes value if it satisfy the condition
	}
	return Max;//returns the value of max.
}
double FindAvg(int array[], int array_size)
//Precondition: The function takes an array of type integer and of size 10 as parameters . 
/*Postcondition: The function returns the average for these values in the array back to the
main function.*/
{
	int sum = 0;//initializing the value of sum as 0.
	for (int i = 0; i < array_size; i++)/*for loop to add up all the values of the elements.*/
	{
		sum = sum + array[i];//adding up the total to sum.
	}
	double avg = double(sum) / array_size;// finding the average.
	return avg;// returns average.
}