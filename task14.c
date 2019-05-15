#include<stdio.h>
void convbin(int);
void convoct(int);
void convhex(int);
int main()
{
	int d,n,i,k,j;
	int b[50],o[50];
	char h[50];
	i=0;
	printf("Enter the number in decimal system:\n");
	scanf("%d",&d);
	convbin(d);
	convoct(d);
	convhex(d);    	
	return 0;
	
}
void convbin(int n)
{
	int i,k;
	int b[50];
	    printf("\nNumber in binary system\n");
		i=0;
		while(n>0)
		{
			b[i]=n%2;
			n=(int)n/2;
			i++;
		}
		for(k=i-1;k>=0;k--)
		{
			printf("%d",b[k]);
		}
	
}
void convoct(int n)
{
	int i,k;
	int o[50];
	printf("\nNumber in octal system\n");
	    i=0;
		
		while(n>0)
		{
			o[i]=n%8;
			n=(int)n/8;
			i++;
		}
		for(k=i-1;k>=0;k--)
		{
			printf("%d",o[k]);
		}
}
void convhex(int n)
{
	printf("\nNumber in hexa system\n");
	int  r;
    int i, j = 0;
    char hexadecimalnum[100];
     while (n != 0)
    {
        r = n % 16;
        if (r < 10)
            hexadecimalnum[j++] = 48 + r;
        else
            hexadecimalnum[j++] = 55 + r;
        n = n/ 16;
    }

    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);		
	
}
