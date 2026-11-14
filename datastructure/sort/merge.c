#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right){
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	int L[n1], R[n2];
	for(i=0; i< n1; i++) L[i] = arr[left + i];
	for(j=0; j< n2; j++) R[i] = arr[right+1+j];

	i=0;
	j=0;
	k=left;

	while(i<n1 && j<n2){
	  arr[k++]=(L[i]<=R[j])? L[i++]: R[j++];
	}
	while(i<n1) arr[k++] = L[i++];
	while(j<n2) arr[k++] = R[j++];

}
void merge_sort(int arr, int left, int right){
	if(left<right){
		int mid = left + (right - 1)/2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid+1, right);
		merge(arr, left, mid, right);
	}
}
