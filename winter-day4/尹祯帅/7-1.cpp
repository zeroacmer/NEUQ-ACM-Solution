#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,e,i,k,j;
	while(~scanf("%d%d",&n,&e))
	{

	long long tu[105][105];
	memset(tu,9999,sizeof(tu));
	while(e--) 
	{
		int a,b;
		long long c;
		cin>>a>>b>>c;
		tu[a][b]=c; 
		tu[b][a]=c;
	}
	for(i=0;i<n;i++) tu[i][i] = 0;
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(k=0;k<n;k++)
	if(tu[j][k]>tu[j][i]+tu[i][k]) tu[j][k]=tu[j][i]+tu[i][k];
	long long dis[105];
	memset(dis , 0 , sizeof(dis));
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	dis[i]+=tu[i][j];
	long long sum = 999999;
	int num ;
	for(i=0;i<n;i++) 
	if(dis[i]<sum)
	{
		sum = dis[i];
		num = i;
	}
	cout<<num<<'\n';
	}
	return 0;
} 
