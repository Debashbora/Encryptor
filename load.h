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
	
	void LoadMap();
	string Message(const char* ch,const string& message,const string& messageEnc);
	map<string, string> theKey;
	map<string, string> revKey;
	vector<string> keys;
	vector<string> values;
};

