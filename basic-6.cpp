#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int **sq;
    sq = new int*[n];  
    for(int h=0;h<n;h++) 
		sq[h]=new int[h+1]; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sq[i][j]=1;	
			if(i>1&&j>0)
			{
				sq[i][j]=sq[i-1][j-1]+sq[i-1][j];	
			}
			sq[i][i]=1;
		}
	}
	for(int a=0;a<n;a++)
	{
		for(int b=0;b<a+1;b++)
		{
			cout<<sq[a][b]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
