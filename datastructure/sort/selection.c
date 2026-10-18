#include <stdio.h>

void selectionSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
   for(int j=i+1; j<n; j++){
	if(arr[j]< arr[i]){
	 int tmp = arr[i];
	 arr[i] = arr[j];
	 arr[j]=tmp;
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
  int arr[] = {12, 21, 13, 32, 16, 18};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("the array before selection sort:\n");
  printArray(arr, n);
  selectionSort(arr, n);
  printf("the array after selection sort:\n");
  printArray(arr, n);
  return 0;
}
