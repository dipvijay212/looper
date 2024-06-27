#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	char ar='a';
	do{
		printf("%c\n",ar);
		if(ar%2==0)
		{
			continue;
		}
		else{
			ar=ar+3;
		}
		ar++;
		
		
	}
	while(ar<123);
	
	getch();
}
