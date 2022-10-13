/*
 **************************************************
	Object Oriented Programming
	1. Encapsulation
	2. Inheritance
		(1) scope right			[access]		[inherit]
			a. public		|	object				O
			b. protected	|	member	function	O
			c. privacy		|	member	function	X
		(2) inheritance type
			a. public	: all remain the same
			b. protected: all become protected
			c. private	: all become private
		(3) override: same prototype, it's better to add "override"
			-virtual override
			-non virtual override
	3. Polymorphism
		(1) function overload
		(2) operator overload
		(3) virtual function 
			declared in the base class  and 
			is re-defined (Overriden) in the derived class. 
			a. normal virtual function
				has defualt implementation and can be overrided
			b. pure virtual function (abstract class)
				virtual f()=0
				must be overrided in derived class
		(4) template

	Q: pointer issue between base class & derived class
 **************************************************
 */


#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	uint8_t ss[] = "¤¤¤å";
	printf("%s", ss);




	return 0;
}