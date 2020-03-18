#include <iostream>
#include <random>

#include "generateRandomNumber.h"



double generateRandomNumber(double start_range, double end_range) {
	
	//Set up random device, seed, and range of possible output values
	std::random_device rd;
	std::mt19937 mt(rd());
	
	//This rng is unlikely to hit the end range number, which we need.
	//Add 1 to end range, for manual range checking later
	double end_range_amended;
	end_range_amended = end_range + 1;
	std::uniform_real_distribution<double> dist(start_range, end_range_amended);
	
	double temp_number;
	double final_number;
	
	//Eliminate the decimal precision and ensure all start and end ranges can correctly be used
	temp_number = dist(mt);
	
	if (temp_number > end_range)
		{
			temp_number = end_range;
		}
	
	final_number = temp_number;
	return final_number;
}
