#include "Vector_function.hpp"
extern int n;

Vector vector_mean(list<Vector>& inData)
{
	Vector vc;
	list<Vector>::iterator it;
	vc.fill(0);

	for (it = inData.begin(); it != inData.end(); it++)
	{
		vc.add(*it);
	}

    vc.mul((double)1/inData.size());

	return vc;
		
}

Vector vector_median(list<Vector>& inData)
{
	Vector vc;
	Median md;
	list<Vector>::iterator it;
	for (int i = 0; i < n; i++)
	{
		md.reset();
		for (it = inData.begin(); it != inData.end(); it++)
		{
			md.add(it->get(i));
		}
		vc.set(i,md.get_median());
	}
	
	return vc;
}