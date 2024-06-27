#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int total;
    int last=n%10;
    do{
    	n=n/10;
	}while(n>=10);
	int first=n;
	total=first+last;
    printf("the sum of digits is %d",total); 
    return 0;
    
}
