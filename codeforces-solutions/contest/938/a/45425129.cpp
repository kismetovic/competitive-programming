#include<stdio.h>
char str[100005];
int main(void)
{
	int i;
	scanf("%*d%s", str+1);
	for(i=1;str[i]!=0;i++)
	{
		if((str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y') && (str[i-1]=='a' || str[i-1]=='e' || str[i-1]=='i' || str[i-1]=='o' || str[i-1]=='u' || str[i-1]=='y'))
			continue;
		printf("%c", str[i]);
	}
	puts("");
	return 0;
}