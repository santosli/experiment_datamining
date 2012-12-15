#include <algorithm>
using namespace std;


#ifndef VECTOR_H
#define VECTOR_H 1

class Vector
{
public:
	Vector();
	
	void fill(double value);

	double get(int i);

	void set(int i,double value);

	void add(const Vector& v);

	void sub(const Vector& v);

	void mul(double k);

	void inc_mul(const Vector& v,double k);

	double dot(const Vector& v);

	double square_norm();

	double norm();

	double sum();

	double min();

	double max();

	void print();

	int get_size();


	/* data */
private:
	double *a;
	int size_a;
};

#endif