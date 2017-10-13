#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *f=new int [n];
	for(int i=0;i<n;i++)
		cin>>f[i];
	int m;
	cin>>m;
	int sum=0;
	for(int j=0;j<n;j++)
	{
		if(f[j]==m)
		{
			sum=sum+1;
			cout<<j+1<<endl;
			break;
		}
		else
			sum=sum+0;
	}
	if(sum==0)
		cout<<"-1"<<endl;
	return 0;
}
