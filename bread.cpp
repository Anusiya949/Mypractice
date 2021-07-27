#include<bits/stdc++.h>
using namespace std;
struct bread
{
	long l;
	long b;
};
int main()
{   int i,k,n;
long high,val;
	bread b[1001];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>b[i].l>>b[i].b;
	for(k=0;k<n;k++)
	{   high=1;
		val=b[k].l*b[k].b;
		for(i=1;i<=int(sqrt(val));i++)
		{
			if(val%(i*i)==0)
			high=i;
		}
		cout<<high;
		cout<<"\n"<<val/(high*high);
	}
}
