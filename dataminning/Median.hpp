#include <vector>
#include <algorithm>

#ifndef MEDIAN_H
#define MEDIAN_H 1

class Median
{
public:

	void reset();

	void add(double value);

	double get_median();

private:
	std::vector<double> v;
};

#endif