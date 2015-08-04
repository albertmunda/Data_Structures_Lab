#include <stdio.h>
#include <stdlib.h>

void duplicate(int arr[], int length){
	int *count = (int*)calloc(sizeof(int),length-2);
	int i;
	for(i=0;i<length;i++){
		if(count[arr[i]]==1)
			printf(" %d ",arr[i]);
		else
			count[arr[i]]++;
	}
}
int main(){
	int arr[]={5,10,10,2,1,4,2,5};
	int arr_length=sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,arr_length);
	return 0;
}
