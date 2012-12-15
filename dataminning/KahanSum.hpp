#ifndef KAHANSUM_H
#define KAHANSUM_H 1

class KahanSum
{
public:
	//KahanSum();

	void reset();

	void add(double value);

	double get_sum();

private:
	double sum;
	double c;
};

#endif