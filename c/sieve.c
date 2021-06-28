#include<stdio.h>
#include<stdlib.h>

// set all the values to a default
void init(int n, char* data, char value){
	for(int i = 0; i < n; i++)
		data[i] = value;
}

void sieve(int n, char* data){
	// initialize to zeros
	init(n, data, 0);
	
	// go through all the numbers
	for(int i = 2; i < n; i++){
		// if the number is prime print it
		if(data[i] == 0)
			printf("%d ", i);
		// set all the multiples as not prime
		for(int j = i; j < n; j = j + i)
			data[j] = 1;
	}

	printf("\n");
}

int main(int argc, char **argv){
	// get a default value
	int n = 100;
	// read the number to check for primes under
	if(argc == 2)
		n = atoi(argv[1]);

	// get memory for the numbers
	char* data = malloc(sizeof(char) * n);
	
	printf("Primes from 1 to %d\n", n);

	// run the calculations
	sieve(n, data);

	// free up memory
	free(data);

	return 0;
}


