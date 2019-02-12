#include <iostream>
#include <vector>
#include <cmath>
#include <array>


/**
* \file hw_fixed.cc
* \brief function that is passed in an array of integers and calculates the standard deviation of those number.
* \param v the array of integers being passed in
* \param n an integer
* \return function returns the standard deviation of the numbers passed in as a double.
*/


double deviation2( int* v, int n)
{
	double sum = 0;
	//add the integers in array to get sum
	for(int i = 0; i <= sizeof(*v) - 1; i++)
	{
		sum += v[i];
	}
	//calculate mean of integers in array
	double mean = sum / sizeof(*v);
	double stddev = 0;
	for(size_t i = 0; i <= sizeof(*v) -1; i++)
	{
		 stddev = stddev + (v[i] - mean) * (v[i] - mean);
	}
	stddev /= sizeof(*v);

	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
		//return standard deviation
	return sqrt(stddev);
}
