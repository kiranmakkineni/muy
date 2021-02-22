#include<stdio.h>
int main()
{
	char a[1000],b[1000];
	int i,n,j=0,k,p;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U')
		{
			b[j]=a[i];
			j++;
			a[i]='1';
		}
	}
	k=strlen(b);
	p=k-1;
	for(i=0;i<n;i++)
	{
		if(a[i]=='1')
		{
			a[i]=b[p];
			p--;
		}
	}
	puts(a);
}
