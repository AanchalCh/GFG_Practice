#include<iostream>
#include <algorithm>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n; int a[n];
        for (int i =0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        sort (a, a+n);
        int diff=+2147483647;
        for (int i=0 ; i<n-1; i++)
        {
            if (a[i+1] - a[i] < diff) 
            diff = a[i+1] - a[i];
        }
        cout<<diff<<endl; 
    }
	return 0;
}
