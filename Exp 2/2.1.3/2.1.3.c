// Aim : 2.1.3. C program to Sort the elements using Insertion Sort Technique

#include<stdio.h>
void main() {
	int a[20], i, n, j, temp, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter element for a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	printf("Before sorting the elements in the array are\n");
	for(i = 0; i < n; i++){
		printf("Value of a[%d] = %d\n",i,a[i]);
	}
	for(pos = 1; pos < n; pos++){
		temp = a[pos];
		for(j = pos; j > 0; j--){
			if(a[j - 1] > temp){
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}

	printf("After sorting the elements in the array are\n");
	for(i = 0; i < n; i++){
		printf("Value of a[%d] = %d\n",i, a[i]);
	}
}