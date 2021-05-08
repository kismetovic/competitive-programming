#include<cstdio>

int main()
{
	int n,sum=0,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&t);
			if(i==j||(i+j)==(n+1)||(i==(n+1)/2)||(j==(n+1)/2)){sum+=t;}
		}
	printf("%d",sum);
}