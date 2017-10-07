    #include<iostream>
    using namespace std;
    int main()
    {
        int n,a=1,b=1,c;
        cin>>n;
        if(n==1||n==2)
            c=1;
        for(int i=3; i<=n; i++)
        {
            c=(a+b)%10007;
            a=b;
            b=c;
        }
        cout<<c<<endl;
        return 0;
    }
