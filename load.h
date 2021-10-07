#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <map>
#include <vector>
using namespace std;
class Encript
{
public:
	Encript();
	void LoadMap();
	string Message(const char* ch, string message, string messageEnc);
	map<string, string> theKey;
	map<string, string> revKey;
	vector<string> keys;
	vector<string> values;
};

