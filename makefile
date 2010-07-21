run : funPoint.o
	g++ -o run funPoint.o
funPoint.o : funPoint.cpp
	g++ -c funPoint.cpp
clean :
	rm run funPoint.o
