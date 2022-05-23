#include <stdio.h>

#define size 5

int main(){
	//a
	int arr[size] = (1, 2, 3, 4, 5);
	
	//b
	int *ptr;

	//c
	ptr = &arr[0];

	//d
	for (int i; i < size; i++){
		printf ("%d", *ptr+i);
	}

	//e
	for (int i; i < size; i++){
		printf ("%d", *(arr+i));
	}

	//f.1
	arr[1];
	
	//f.2
	*(arr+1);

	//f.3
	*ptr+1;

	//f.4
	ptr[i];

	//g
	//ptr+2 references address 2508 and contains the value 3

	return 0;
}

