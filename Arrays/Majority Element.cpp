#include <iostream>
#include <unordered_map>
using namespace std;

void get_result(int a[], int size)
{
    unordered_map <int , int> m ;
    for(int i =0;i<size; i++)
    {
        m[a[i]]++;
    }
    int count =0;
    for(auto i:m)
    {
        if(i.second > size/2)
        {
            count=1;
            cout<<i.first<<endl;
            break;
        }
    }
    if(count==0)
    {
        cout<<-1<<endl;
    }
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    get_result(a, n);
	}
	return 0;
}
