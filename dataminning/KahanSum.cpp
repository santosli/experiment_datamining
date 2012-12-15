#include "KahanSum.hpp"

void KahanSum::reset()
{
	sum = 0.0;
	c = 0.0;

}

void KahanSum::add(double value)
{
	double y,t;
	y = value - c;
	t = sum + y;
	c = (t - sum) - y;
	sum = t;
}

double KahanSum::get_sum()
{
	return sum;
}