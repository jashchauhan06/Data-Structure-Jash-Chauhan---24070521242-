// Aim : 2.1.1. Write a C program to Sort the strings using Bubble Sort Technique

#include<stdio.h>
#include<string.h>
void main() {
	char a[20][20];
	int i, n, j;
	char temp[20];
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter string for a[%d] : ", i);
		scanf(" %s", a[i]);
	}
	printf("Before sorting the strings in the array are\n");
	for(i = 0; i < n; i++){
		printf("String at a[%d] = %s\n", i, a[i]);
	}
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - i - 1; j++){
			if(strcmp(a[j], a[j + 1]) > 0){
				strcpy(temp, a[j]);
				strcpy(a[j], a[j + 1]);
				strcpy(a[j + 1], temp);
			}
		}
	}
	printf("After sorting the strings in the array are\n");
	for(i = 0; i < n; i++){
		printf("String at a[%d] = %s\n",i, a[i]);
	}
}