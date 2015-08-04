#include <stdio.h>
#include <stdlib.h>

void array_reversal_using_additional_buffer(){
	int arr[] = {1,2,23,3,4,4,7,8,9,10};
	int arr_length = sizeof(arr)/sizeof(arr[0]);
	int arr_rev[arr_length];
	int i,j;
	
	puts("Original array:");
	for(i=0,j=(arr_length-1);i<arr_length & j>=0;i++,j--){
		printf("%d ",arr[i]);
		arr_rev[i]=arr[j];
	}
	printf("\n");
	
	puts("Reverse array:");
	for(i=0;i<arr_length;i++){
		printf("%d ",arr_rev[i]);
	}
	printf("\n");
}

void array_reversal_using_swap_technique(){
	int arr[] = {1,2,23,3,4,4,7,8,9,10};
	int arr_length = sizeof(arr)/sizeof(arr[0]);
	int arr_rev[arr_length];
	int i,j,temp;
	
	int last_index = arr_length-1;
	for(i=0;i<arr_length/2;i++){
		temp = arr[i];
		arr[i] = arr[last_index];
		arr[last_index--] = temp;
	}
	puts("Reversed array:");
	for(i=0;i<arr_length;i++){
		printf("%d ",arr[i]);
	}
	puts("");
}

void array_reversal_using_pointers(int* arr,int arr_length){
	
	int *arr_rev=(int*)malloc(sizeof(int)*arr_length);
	int i,j;
	
	puts("Original array:");
	for(i=0,j=(arr_length-1);i<arr_length & j>=0;i++,j--){
		printf("%d ",*(arr+i));
		*(arr_rev+i)=*(arr+j);
	}
	printf("\n");
	
	puts("Reverse array:");
	for(i=0;i<arr_length;i++){
		*(arr+i)=*(arr_rev+i);
		printf("%d ",*(arr+i));
	}
	free(arr_rev);
	printf("\n");
}


void array_reversal_recursive_way(){
	
}
int main(){
	int arr[] = {1,2,23,3,4,4,7,8,9,10};
	int arr_length = sizeof(arr)/sizeof(arr[0]);
	array_reversal_using_pointers(arr,arr_length);	
	
	return 0;
}