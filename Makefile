all: hw3

clean: 
	rm hw3

hw3: hw3.c
	gcc hw3.c -o hw3 

run:
	./hw3 ls -l