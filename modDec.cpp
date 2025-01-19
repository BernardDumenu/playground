#include<iostream>
#include<cstdio>

int Pow(int x, int n)
{
	int i=1;
	int p=1;
	if(i==0)
		return 1;
	while(i++<=n)
		p=p*x;
	return p;
}

int RPow(int x, int n)
{
	if(n==0)
		return 0;
	return RPow(x,n-1);
}

int Rev(int x)
{
	int rev=0;
	
	while(x>0)
	{
		int r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	return rev;
}

int ConvDec(int x)
{
	int i=0;
	int dec=0;
	while(x>0)
	{
		int r=x%10;
		dec=dec+(r*Pow(2,i));
		i++;
		x=x/10;
	}
	return dec;
}


int main(void)
{
	printf("%d ", ConvDec(1101));
	return 0;
}
