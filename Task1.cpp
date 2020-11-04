#include "stdafx.h"
#include <iostream>
#include"math.h"
using namespace std;
#include <string>;


template <typename T>
T MODE(T Array[])
{



	int Frequent_Index = 0;
	int Largest = 0;
	int MODE[5] = { 0, 0, 0, 0, 0 };

	for (int i = 1; i < 5 - 1; i++)
		for (int l = 0; l < 5; l++)
		{
		if (Array[i] == Array[l])
		{
			MODE[i]++;
		}

		}
	//In the loop, we are checking each character present in the loop whether it is same or not,if same then the MODE loop is incremented.

	for (int j = 0; j < 5; j++)
	{
		if (Largest<MODE[j])
		{
			Largest = MODE[j];
			Frequent_Index = j;
		}
	}
	//This Loop finds the index in which the most frequent character is present as the most greatest one will be greater than the 0 stored in MODE array.

	return Array[Frequent_Index];

	
	

}


int main()

{
	string Array[5];
	cout << "Enter the characters of the string array" << endl;
	for (int i = 0; i < 5; i++)    // Inputting
	{
		getline(cin,Array[i]);
	}
	cout << "/////////////////////////////////////" << endl;
	int array[5];
	cout << "Enter the elements of the integer array" << endl;
	for (int i = 0; i < 5; i++) // Inputting
	{
		cin >> array[i];
	}
	cout << "/////////////////////////////////////" << endl;


	cout << "The MODE of the entered array is " << MODE(array) << endl; // Calling the function
	cout << "/////////////////////////////////////" << endl;  // Calling the function
	cout << "The MODE of the array is " << MODE(Array) << endl;


	


}