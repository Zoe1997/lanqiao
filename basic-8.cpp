#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int b[10];
    for(int i=0;i<10;i++)
    {
        a[i]=i;
        b[i]=i;
    }
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<a[i];
            cout<<b[j]<<b[j];
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
