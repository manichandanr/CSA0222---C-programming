#include<stdio.h>
int main()
{
	int i,m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	for(i=m;i<=n;i=i+(k+1)){
		printf("skipping numbers is %d\n ",i);
	}
	return 0;
}