#include <stdio.h>

void insertionSort(int arr[], int n){
 int i,j,key;
 for(i=1; i<n; i++){
	key = arr[i];
	j = i - 1;
	while(j >= 0 && arr[j]> key){
	  arr[j+1] = arr[j];
	  j--;
	}
	arr[j+1] = key;
 }
}
void printArray(int arr[], int n){
  for(int i=0; i<n; i++){
	printf("%d ", arr[i]);
  }
  printf("\n");
}
int main(){
 int arr[]= {20, 10, 11, 13, 34};
 int n = sizeof(arr)/sizeof(arr[0]);

 printf("there is the array before sorting:\n");
 printArray(arr, n);
 insertionSort(arr,n);
 printf("there is the array after sorting:\n");
 printArray(arr, n);
 return 0;
}
