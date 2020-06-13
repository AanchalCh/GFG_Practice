#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n; int m;
	    cin>>n;
	    cin>>m;
	    int a[n]; int b[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    int arr[m+n];
	    for (int i=0;i<m+n; i++)
	    {
	        if(i<n){
	            arr[i]=a[i];
	        }
	        else
	        {
	            arr[i]=b[i-n];
	        }
	    }
	    sort(arr , arr+m+n);
	    int count =0;
	    for (int i =0 ; i<m+n-1 ; i++)
	    {
	        if (arr[i]!=arr[i+1]){
	            count++;
	        }
	    }
	    cout<<count+1<<endl;
	}
	return 0;
}
