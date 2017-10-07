#include<iostream>
using namespace std;
int main()
{
    int a[2],b[2],c[2],d[2],e[2];
    for(int i=0;i<2;i++){
        a[i]=i;
        b[i]=i;
        c[i]=i;
        d[i]=i;
        e[i]=i;
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int h=0;h<2;h++){
                for(int m=0;m<2;m++){
                    for(int n=0;n<2;n++){
                        cout<<a[i]<<b[j]<<c[h]<<d[m]<<e[n]<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
