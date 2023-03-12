#include <stdio.h>
#include <stdlib.h>

int maxx(int a[]);

int main() {
	extern int size;
	int dizi[100],i,max;
	printf("Please enter the Array size= ");
	scanf("%d",&size);
	
	for(i=0; i<size; i++){
		
		printf("Array[%d]= ",i);
		scanf("%d",&dizi[i]);
	}
	
	max=maxx(dizi);
	printf("\nMax element in the Array is: %d",max);
	
	return 0;
}

int size;

int maxx(int a[]){
	
	static int i=0,max=-9999;
	if(i==size)
		return max;
	else{
		if(max<a[i])
			max=a[i];
		i++;
		maxx(a);	
	}		
}

