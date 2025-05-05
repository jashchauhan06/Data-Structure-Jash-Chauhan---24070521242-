// Aim : 3.1.1. Write a C program to Sort given elements using Merge sort


void display(int arr[15], int n) {
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void merge(int arr[15], int low, int mid, int high) {
	int temp[high - low + 1];
	int i = low, j = mid + 1, k = 0;
	while(i <= mid && j <= high){
		if(arr[i] <= arr[j]){
			temp[k++] = arr[i++];
		}
		else{
			temp[k++] = arr[j++];
		}
	}
	while(i <= mid){
		temp[k++] = arr[i++];
	}
	while(j <= high){
		temp[k++] = arr[j++];
	}
	for(i = low, k = 0; i <= high; i++, k++){
		arr[i] = temp[k];
	}
}

void splitAndMerge(int arr[15], int low, int high) {
	if(low < high){
		int mid = (high + low) / 2;
		splitAndMerge(arr, low, mid);
		splitAndMerge(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}