#include <stdio.h>

void bubbleSort(int arr[], int n){
  int tmp, i, j;
  for(i=0; i<n-1; i++){
	for(j=0; j<n-i-1; j++){
	 if(arr[j] > arr[j+1]){
	  tmp = arr[j];
	  arr[j]=arr[j+1];
	  arr[j+1]=tmp;
	 }
	}
  }
}
void printArray(int arr[], int n){
  for(int i=0; i<n; i++){
	printf("%d ", arr[i]);
  }
  printf("\n");
}
int main(){
  int arr[] = { 5, 7, 10, 2, 0, 1, 23, 4 };
  int n = sizeof(arr)/sizeof(arr[0]);

  printf("Array before sorting:\n");
  printArray(arr, n);
  bubbleSort(arr, n);
  printf("Array after bubble sort:\n");
  printArray(arr, n);
  
  return 0;
}
