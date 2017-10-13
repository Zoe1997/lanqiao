#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			for(int n=0;n<10;n++){
				if(i*100+j*10+n==i*i*i+j*j*j+n*n*n)
					cout<<i*100+j*10+n<<endl;
			}
		}
	}
	return 0;
}
