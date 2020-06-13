// { Driver Code Starts
#include <stdio.h>
#include <iostream>
#include <stdlib.h> // for abs()
#include <limits.h> // for INT_MAX
using namespace std;
long long minDist(long long arr[], long long n, long long x, long long y);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) cin >> a[i];
        long long x, y;
        cin >> x >> y;
        cout << minDist(a, n, x, y) << endl;
    }
    return 0;
}// } Driver Code Ends


/*Complete the function below*/
long long minDist(long long arr[], long long n, long long x, long long y) {
    // add code here. 
    int p=-1 ; int mindist = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if(p!=-1 && arr[i]!=arr[p])
            {
                mindist = min (mindist , abs(i-p));
            }
            p=i;
        }
    }
    if (mindist==INT_MAX)
    {
        return -1;
    }
    return mindist;
    
}
