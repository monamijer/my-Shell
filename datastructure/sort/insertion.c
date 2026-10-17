#include <stdio.h>

void insertionSort(int arr[], int n){
 for(int i=1; i<n; i++){
	int j, key;
	key = arr[i];
	j= i-1;

	while(j >= 0 && arr[j] > key){
	 arr[j+1] = arr[j];
	 j--;
	}
	arr[j+1] = key;
	
 }
}
int main(){
 int arr[] = {31, 17, 66, 98, 10};
 int size = sizeof(arr) / sizeof(arr[0]);

 printf("Array before sort:\n");
 for(int i=0; i<size; i++){
  printf("%d ", arr[i]);
}
 printf("\n");
 insertionSort(arr, size);
 printf("Array after sorting:\n");
 for(int i=0; i< size; i++){
  printf("%d ", arr[i]);
 }
printf("\n");
return 0;
}
