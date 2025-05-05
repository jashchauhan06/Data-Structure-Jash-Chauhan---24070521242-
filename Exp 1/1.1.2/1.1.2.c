// Aim : 1.1.2. Write a C program to Search a Key element using Binary search Technique


#include<stdio.h>
void main() {
	int a[20], i, j, n, key, flag = 0, low, high, mid, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter element for a[%d] : ", i);
		scanf("%d",&a[i]);
	}
	printf("Enter key element : ");
	scanf("%d", &key);

	for(i = 0; i < n - 1; i ++){
		for (j = i + 1; j < n; j++){
			if (a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("After sorting the elements in the array are\n");
	for (i = 0; i < n; i++){
		printf("Value of a[%d] = %d\n", i , a[i]);
	}
	low = 0;
	high = n - 1;
	
	while (low <= high){
		mid = (low + high) / 2;

		if (a[mid] == key) {
		printf("The key element %d is found at the position %d\n", key, mid);
			return;
		}
		else if(a[mid] < key){
}