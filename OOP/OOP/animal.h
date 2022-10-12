#pragma once
#include <string>
using namespace std;
class animal	// (parent class / base class)
{
public:
	int publicV;
	string name; 
	int legs;
	string food;
	void move(void);
protected:
	int protectedV;
private:
	int privateV;
};

