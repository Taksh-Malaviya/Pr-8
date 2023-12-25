/*
Q.1 Write a Program to find the reverse of a 1D array using a Pointers.
For example,
Input:
Enter the array's size: 5


Enter array elements:
a[0] = 5
a[1] = 9
a[2] = 4
a[3] = 7
a[4] = 3

Output:
Reversed array elements:
3, 7, 4, 9, 5
*/
#include<stdio.h>

void main(){
	
	int a[5];
	int *ptr;
	int i,n;
	
	printf("enter any number :- ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter any number :- ");
		scanf("%d",&a[i]);
	}
	ptr = &a[n-1];
	
	for(i=0; i<n; i++){
		printf("Reversed array elements = %d\n",*ptr--);
		
	}
	
}

