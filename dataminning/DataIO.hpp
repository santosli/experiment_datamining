#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include "Vector.hpp"
using namespace std;

#ifndef DATAIO_H
#define DATAIO_H 1

void write_data(string inPath, list<Vector>& inData);

void read_data(string inPath, list<Vector>& outData);

#endif