#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while (T--)
    {
        int N;
        cin>>N;
        int a[N];
        int count =0 ; int count1=0;
        for (int i =0; i<N; i++)
        {
            cin>>a[i];
            if (a[i]==0)
            count++;
            else
            count1++;
        }
        for (int i=1; i<=count ; i++)
        {
            cout<<0<<" ";
        }
        for (int i=1; i<=count1 ; i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}
