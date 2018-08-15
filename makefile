all: teste 
teste :	main.o	imp.o	
		g++	-o	teste	main.o	imp.o
main.o:	main.cpp
		c++	-c	main.cpp
imp.o:	imp.cpp
		g++	-c	imp.cpp	
clean:
	rm	-rf	*.o
mrproper:	clean
	rm	-rf	teste	

