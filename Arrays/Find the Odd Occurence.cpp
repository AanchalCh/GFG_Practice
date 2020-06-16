#include <iostream>
#include <unordered_map>
using namespace std;

void get_result(int a[], int size)
{
    int val=a[0];
    for(int i=1; i<size; i++)
    {
        val = val^a[i];
    }
    cout<<val<<endl;
}

int main() {
    int T;
    cin>>T;
    while(T--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }
    get_result (a,n);
    }
	//code
	return 0;
}
