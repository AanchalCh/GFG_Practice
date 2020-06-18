#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int arr[N];
        for (int i=0; i<N; i++)
        {
            cin>>arr[i];
        }
        int len=1; int count=0;
        for(int i=0; i<N-1; i++)
        {
            if(arr[i]<arr[i+1])
            len++;
            else
            {
            count+=(len*(len-1))/2;
            len=1;
            }
        }
        //when array has been completely traversed and len++ was last statement exectued to check if len>1
        if(len>1)
        count+= (len*(len-1))/2; 
        
        cout<<count<<endl;
    }
	//code
	return 0;
}
