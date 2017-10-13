#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10];
    int b[10];
    int c[10];
    for(int i=0;i<10;i++)
    {
        a[i]=i;
        b[i]=i;
	      c[i]=i;
    }
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
	          for(int h=0;h<10;h++)
	          {
		            if(a[i]*2+b[j]*2+c[h]==n)
		            cout<<a[i]<<b[j]<<c[h]<<b[j]<<a[i]<<endl;
	          }
        }
    }
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
	          for(int h=0;h<10;h++)
	          {
	    	        if(a[i]*2+b[j]*2+c[h]*2==n)
		            cout<<a[i]<<b[j]<<c[h]<<c[h]<<b[j]<<a[i]<<endl;
	          }
        }
    }
	  return 0;
}
