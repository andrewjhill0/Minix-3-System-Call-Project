testtq : testtq.o
	gcc testtq.o -o testtq

testtq.o : testtq.c
	gcc -c testtq.c 


