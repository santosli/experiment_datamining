#include "Median.hpp"

void Median::reset()
{
	v.clear();
}

void Median::add(double value)
{
	v.push_back(value);
}

double Median::get_median()
{
	sort(v.begin(),v.end());
	if(v.size() % 2 == 0)
	{
		return (v[v.size()/2]+v[v.size()/2-1])/2;
	}
	else
	{
		return v[v.size()/2];
	}
}