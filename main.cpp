#include <iostream>
#include "fun.h"
using namespace std;
int main()
{
	int a(12),b(10);
	cout<< "12>>>a " 
		<< a 
		<< "10>>>b "
		<< b
		<< endl;

	void troca(a,b);

	cout<< "12>>> b" 
		<< b 
		<< "10>>> a"
		<< a
		<< endl;
	
	
	
	return 0;
}

