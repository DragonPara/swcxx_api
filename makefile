prof=-fprofile-swperf
main:main.o slave.o
	swg++ -mhybrid main.o slave.o -o main
main.o:main.cpp
	swg++ -mhost main.cpp -c
slave.o:slave.cpp
	swg++ -msimd -mslave slave.cpp -c
clean:
	rm *.o main
