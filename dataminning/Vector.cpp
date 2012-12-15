#include "Vector.hpp"
#include "KahanSum.hpp"
#include <iostream>
#include <string>
using namespace std;

extern int n;

Vector::Vector()
{	
	a = (double *)malloc(n * sizeof(double));
	size_a = n;
}

void Vector::fill(double value)
{
	for (int i = 0;i < size_a;i++)
	{
		a[i] = value;
	}
}

double Vector::get(int i)
{
	return a[i];
}

void Vector::set(int i,double value)
{
	a[i] = value;
}

void Vector::add(const Vector& v)
{
	for (int i = 0;i < size_a;i++)
	{
		a[i] += v.a[i];
	}

}

void Vector::sub(const Vector& v)
{
	for (int i = 0; i < size_a ;i++)
	{
		a[i] -= v.a[i];
	}
}

void Vector::mul(double k)
{
	for (int i = 0; i < size_a; i++)
	{
		a[i] *= k;
	}
}

void Vector::inc_mul(const Vector& v,double k)
{
	for (int i = 0; i < size_a; i++)
	{
		a[i] += k*v.a[i];
	}
}

double Vector::dot(const Vector& v)
{
	KahanSum ks;
	ks.reset();
	for (int i = 0; i < size_a; i++)
	{
		ks.add(a[i] * v.a[i]);
	}

	return ks.get_sum();
}

double Vector::square_norm()
{
	KahanSum ks;
	ks.reset();
	for (int i = 0; i < size_a; i++)
	{
		ks.add(a[i] * a[i]);
	}

	return ks.get_sum();
}

double Vector::norm()
{
	return sqrt(square_norm());
}

double Vector::sum()
{
	KahanSum ks;
	ks.reset();
	for (int i = 0;i < size_a; i++)
	{
		ks.add(a[i]);
	}

	return ks.get_sum();
}

double Vector::min()
{
	sort(a, a + size_a);
	return a[0];
}

double Vector::max()
{
	sort(a, a + size_a);
	return a[size_a - 1];
}

void Vector::print()
{
	for (int i = 0; i < size_a; i++)
	{
		if (i != size_a - 1)
		{
			cout << a[i] << ", ";
		}
		else
		{
			cout << a[i] << endl;
		}
		
	}	
}

int Vector::get_size()
{
	return size_a;
}