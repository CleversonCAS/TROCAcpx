#include <iostream>
#include "fun.h"
	
	template <class T>
	void troca(T &a,T &b)
	{	
		T aux;
		aux=a;
		a=b;
		b=aux;
	}
