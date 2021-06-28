#include<stdio.h>
#include<stdlib.h>

void init(int n, char* data, char value){
	for(int i = 0; i < n; i++)
		data[i] = value;
}

void sieve(int n, char* data){
	init(n, data, 0);
	
	for(int i = 2; i < n; i++){
		if(data[i] == 0)
			printf("%d ", i);
		for(int j = i; j < n; j = j + i)
			data[j] = 1;
	}

	printf("\n");
}

int main(int argc, char **argv){
	int n = 100;
	if(argc == 2)
		n = atoi(argv[1]);

	char* data = malloc(sizeof(char) * n);
	
	printf("Primes from 1 to %d\n", n);

	sieve(n, data);

	free(data);

	return 0;
}


