//#pragma once
#include <string>

/* class
* declaration: class A;
* definition:  class A{...}; (member function�u�ݦb����declare�Adefine�d��~����)
*
class B���Y�n��class A object��member�A�hclass A�n��define����(����udeclare)�A
���M�{�������D�Ӧp��t�m�O����C
sol: ��class A pointer��member
*/

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


