//Chris Sun
//COSC 1320 C++
//hotel occupancy asking the user how many floors of a hotel then asking how many rooms per floor and how many are occupied. 
//outputting to user the percentage of occupied rooms

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//variables
	int roomsOnFloor = 0;					//stores the number of rooms on each floor
	float totalRooms = 0.00;				//stores the total number of rooms
	int totalFloors = 0;					//stores the total number of flores
	int occupiedRoomsOnFloor = 0;			//stores the number of occupied rooms on each floor
	float totalOccupiedRooms = 0.00;		//stores the total number of occupied rooms
	float percentOccupied = 0.00;			//stores the percent of occupied rooms

	//asking the user for the number of floors to start the loop
	cout << "Enter number of floors: ";
	cin >> totalFloors;
	
	while (totalFloors < 1)			//can't start the loop until at least the hotel has 1 or more floors
	{
		cout << "Number of floors must be at least 1. Please re-enter ";		
		cin >> totalFloors;
	}

	//loop to ask the user for how many rooms each floor and how many are occupied
	for (int i = 1; i <= totalFloors; i++)
	{
		if (i != 13)	//skips calculating the 13th floor into the number of rooms 
		{
			cout << "Enter the number of rooms on the floor ";
			cin >> roomsOnFloor;

			while (roomsOnFloor < 10)		//makes sure the number of rooms on each floor is at least 10+
			{
				cout << "Number of rooms on floor must be at least 10. Please re-enter ";
				cin >> roomsOnFloor;
			}
			//asking the user how many rooms are occupied on each floor
			cout << "How many rooms are occupied? ";
			cin >> occupiedRoomsOnFloor;
			totalRooms += roomsOnFloor;
			totalOccupiedRooms += occupiedRoomsOnFloor;
		}
	}
	percentOccupied = (totalOccupiedRooms / totalRooms) * 100;		//calculating the percent of rooms occupied in the hotel

	//outputs all the information back to the user
	cout << "The hotel has total of " << totalFloors << " floors\n";
	cout << "The hotel has total of " << totalRooms << " rooms\n";
	cout << "There are " << totalOccupiedRooms << " rooms occupied\n";
	cout << "There are " << totalRooms - totalOccupiedRooms << " empty rooms\n";
	cout << "Percentage of occupied rooms is " << setprecision(2) << percentOccupied << "%\n";

	return 0;
}
