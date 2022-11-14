#include <stdio.h>
#include <string.h>
void mystrrev(char *src)
{
	int n=strlen(src);
	int i,j;
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		src[i]=src[i]^src[j];
		src[j]=src[i]^src[j];
		src[i]=src[i]^src[j];
	}

}
int main()
{
    char str[]="Helloworld";
    mystrrev(str);
    printf("%s ",str);
   
}

