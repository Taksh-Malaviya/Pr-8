/*Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
27    8
125 64*/
#include<stdio.h>

void taksh(){
	
	int a[5][5];
	int *ptr,i,j,n;
	
	
	printf("enter any number :- ");
	scanf("%d",&n);
	
		ptr = &a;	

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("enter array element :- ");
				scanf("%d",&a[i][j]);
	}
}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d  ",(*(ptr+a[i][j]))*(*(ptr+a[i][j]))*(*(ptr+a[i][j])),(ptr+a[i][j]));
		}
		printf("\n");
	}
}
void main(){
	taksh();
}


