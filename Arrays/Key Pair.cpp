#include<iostream>
#include <unordered_map>
using namespace std;

void get_result (int a[], int N , int X)
{
     unordered_map <int , int> m;
	    for (int i=0; i<N ; i++)
	    {
	        m[a[i]]++;
	    }
	    for (int i=0; i<N ; i++)
	    {
	        int temp = X-a[i];
	        if (m.find(temp)!=m.end() && m[temp]!=i)
	        {
	            cout<<"Yes"<<endl;
	            return;
	        }
	    }
	    cout<<"No"<<endl;
}

int main()
 {
	//code
	int T;
	cin>>T;
	while (T--)
	{
	    int N, X;
	    cin>>N>>X;
	    int a[N];
	    for (int i=0; i<N; i++)
	    {
	        cin>>a[i];
	    }
	    get_result (a, N, X);
	}
	return 0;
}
