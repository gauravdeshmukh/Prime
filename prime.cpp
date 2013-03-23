#include <iostream>

int arr[10000];

#define set(i) (arr[i>>5]|=(1<<(i&31)))
#define is_prime(i) (arr[i>>5]&(1<<(i&31)))

using namespace std;

int main()
{
	
	for(int i=1;i<320000;i++)
	{
		if(!is_prime(i))
		{
			int k=2*i+1;
			for(int j=(2*i*i+2*i);j<320000;j+=k) set(j);
		}
	}
	for(int i=1;i<320000;i++) if(!is_prime(i)) cout<<(2*i+1)<<" ";
	cout<<endl;
}
