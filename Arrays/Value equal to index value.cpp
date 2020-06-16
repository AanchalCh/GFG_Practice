#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int count =0;
	    for (int i=0; i<n; i++)
	    {
	        cin>>a[i];
	        if(a[i]==(i+1))
	        {
	        cout<<a[i]<<" ";
	        count=1;
	        }
	    }
	    if(count==0)
	    cout<<"Not Found";
	    cout<<endl;
	}
	return 0;
}
