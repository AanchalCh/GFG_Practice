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
	    int arr[n];
	    int sum= (n*(n+1))/2;
	    int sum_calc=0;
	    for(int i=0; i<n-1;i++)
	    {
	        cin>>arr[i];
	        sum_calc=sum_calc+arr[i];
	    }
	    int result = (sum-sum_calc);
	    cout<<result<<endl;
	}
	
	return 0;
}
