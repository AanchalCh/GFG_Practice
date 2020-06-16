#include <iostream>
using namespace std;

void get_result(int a[] , int size)
{
    int max=a[size-1];
    a[size-1] = -1;
    for (int i=size-2; i>=0; i--)
    {
        int temp=a[i];
        a[i]=max;
        if(temp>max)
        max=temp;
    }
    for (int i=0; i<size; i++)
	{
	    cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
	{
	    cin>>a[i];
	}
	get_result (a , n);
	}
	return 0;
}
