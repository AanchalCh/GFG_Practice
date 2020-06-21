#include<iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long unsigned n1,n2,i;
        cin>>n1>>n2;
        long long unsigned a[n1],b[n2];
        for(i=0;i<n1;i++){
            cin>>a[i];
        }
        unordered_map<long long unsigned,long long unsigned>m;
        for(i=0;i<n2;i++){
            cin>>b[i];
            m[b[i]]++;
                         }
                         
         for(i=0;i<n1;i++){
            if(m.find(a[i])==m.end())
            cout<<a[i]<<" ";
        }
         cout<<endl;                
    }
	//code
	return 0;
}
