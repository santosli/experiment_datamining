#include <iostream>
#include "KahanSum.hpp"
#include "Median.hpp"
#include "Vector.hpp"
#include "DataIO.hpp"
#include "Vector_function.hpp"

using namespace std;


int n;

int main()
{
	cout << "Please enter the size of vector N :" <<endl;
	cin >> n;

	KahanSum ks;
	Median md;
	Vector vc1,vc2,vc3;
	//for (int i = 1;i<=1000;i++)
	//{
		//ks.add(i);
		//md.add(i);
	//}

	//cout << "KahanSum : " << ks.get_sum() << endl;
	//cout << (1 + 1000) * 1000 /2 <<endl;

	//cout << "Median of 1-1000 : " << md.get_median() << endl;

	// vc1.fill(1);
	// cout << "This is vc1 : " << endl;
	// vc1.print();
	
	// vc1.set(1,99);
	// cout << "The value of index 1 is : " << vc1.get(1) << endl;
	// cout << "This is vc1 : " << endl;
	// vc1.print();

	// vc2.fill(2);
	// cout << "This is vc2 : " << endl;
	// vc2.print();
	// vc1.add(vc2);
	// cout << "This is vc1 after add v2: " << endl;
	// vc1.print();

	// vc1.sub(vc2);
	// cout << "This is vc1 after sub v2: " << endl;
	// vc1.print();

	// vc1.mul(2);
	// cout << "This is vc1 after mul 2 : " << endl;
	// vc1.print();

	// vc1.inc_mul(vc2,2);
	// cout << "This is vc1 after inc_mul v2,2 : " << endl;
	// vc1.print();

	// cout << "The dot of vc1 * vc2 is : " << vc1.dot(vc2) << endl;
	// cout << "The square norm of vc1 is : " << vc1.square_norm() <<endl;
	// cout << "The norm of vc1 is : " << vc1.norm() << endl;
	// cout << "The sum of vc1 is : " << vc1.sum() << endl;
	// cout << "The min of vc1 is : " << vc1.min() << endl;
	// cout << "The max of vc1 is : " << vc1.max() << endl;
	list<Vector> lv;
	vc1.fill(1.1);
	vc2.fill(2.2);
	vc3.fill(3.5);
	lv.push_back(vc1);
	lv.push_back(vc2);
	lv.push_back(vc3);

	string inPath = "a.txt";
	//write_data(inPath,lv);

	list<Vector> lv2;
	//read_data(inPath,lv2);

	// list<Vector>::iterator it;

	// for (it = lv2.begin(); it != lv2.end(); it++)
	// {
	// 	for (int j = 0; j < it->get_size(); j++)
	// 	{
	// 		if (j != it->get_size() - 1)
	// 		{
	// 		 cout << it->get(j) << ", ";
	// 		}
	// 		else
	// 		{
	// 			cout << it->get(j) << endl;
	// 		}
	// 	}
	// }
	Vector vc4;
	vc4 = vector_mean(lv);
	cout << "The mean of vectors is : " << endl;
	vc4.print();
	vc4 = vector_median(lv);
	cout << "The median of vectors is :" << endl;
	vc4.print();

	system("pause");
}