#include<iostream>
using namespace std;

int main()
{
    int n;
    int *f;
    cin>>n;
    f=new int[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(f[i]>f[j])
            {
                int temp=f[i];
                f[i]=f[j];
                f[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<f[i]<<" ";
    }
}
