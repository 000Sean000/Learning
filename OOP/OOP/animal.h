//#pragma once
#include <string>

/* class
* declaration: class A;
* definition:  class A{...}; (member function只需在內部declare，define留到外面做)
*
class B內若要用class A object當member，則class A要先define完整(不能只declare)，
不然程式不知道該如何配置記憶體。
sol: 用class A pointer當member
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


