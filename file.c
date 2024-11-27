#include<stdio.h>
int main()
{ 
FILE *f1;
char c;
printf("data input\n");
f1=fopen("INPUT.txt","w");
while((c=getchar()) !=EOF)
{putc(c,f1);
}
fclose(f1);
printf("\n data output\n");
f1=fopen("INPUT","r");
while((c=getc(f1)) !=EOF)
{
	printf("%c",c);
}
fclose(f1);
return 0;
}
