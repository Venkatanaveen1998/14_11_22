#include <stdio.h>
#include <string.h>
int mystrchr(char *src,char ch)
{
	int n=strlen(src);
	int i,cnt;
	for(i=0;i<n;i++)
	{
	    cnt=0;
	    for(int j=0;j<32;j++)
	    {
		if((src[i]<<j)==(ch<<j))
		cnt++;
		if(cnt==31) { printf("the character was found = %c position = %d",src[i],i+1); }
	    }
	}

}
int main()
{
    char str[]="Helloworld",ch;
    printf("enter which element u want to be search \n");
    scanf("%c",&ch);
    mystrchr(str,ch);
}
