#include "DataIO.hpp"

void write_data(string inPath, list<Vector>& inData)
{
	ofstream file;
	file.open(inPath);
	list<Vector>::iterator it;

	for (it = inData.begin(); it != inData.end(); it++)
	{
		for (int j = 0; j < it->get_size(); j++)
		{
			if (j != it->get_size() - 1)
			{
				file << it->get(j) << ", ";
			}
			else
			{
				file << it->get(j) << endl;
			}
		}
	}

	file.close();
}

void read_data(string inPath, list<Vector>& outData)
{
	ifstream file;

	file.open(inPath);

	char buf[200];
	while(file.getline(buf, 200) != NULL)
	{
		//cout << buf << endl;
		const char *d = " ,";
		char *p;
		p = strtok(buf,d);

		Vector vc;
		int pos = 0;
		
		while(p)
		{
			vc.set(pos++,atof(p));
			//cout << p;
			p = strtok(NULL, d);
		}

		// for (int i = 0; i < vc.get_size(); i++)
		// {
		// 	cout << vc.get(i);
		// }
		// cout << endl;

		outData.push_back(vc);
	}	

	file.close();
}