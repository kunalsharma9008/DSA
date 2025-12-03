//Print Minimum Element from Stack.
#include<stdio.h>
#define SIZE 5

int main(){
	int stack[SIZE]={40,10,30,20,50};
	int min = stack[0];
	int i;
     for(i=1;i<SIZE;i++){
		if(stack[i]<min)
		min =stack[i];
	}
	printf("Minimum element in stack : %d\n",min);
	return 0;
	
}
