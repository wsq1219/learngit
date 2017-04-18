#include<stdio.h>
int main()
{
	char a[]=" the first time i met her ,i fall in love with her!";
	char b[40];
	
    char *p1=&a,*p2=&b;
	printf("String a is :%s\n",a);
	
	


	for(;*p1!='\0';p1++,p2++)
	{
		*p2=*p1;
	
	
	}
	*p2='\0';
	
	printf("String b is : ");
	p2=b;
    for(;*p2!='\0';p2++)
	{
	    printf("%c",*p2);
	
	
	}
	printf("\n");
	return 0;


}