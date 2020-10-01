#include<bits/stdc++.h>
using namespace std;
#define loop(x,n) for(int x = 0; x < n; ++x)
typedef long long int ll;
bool find(int a[],int n,int k){
    map<int,int>mp;
	loop(i,n){
	mp[a[i]%k]++;
	}
	for(int i=0;i<n;i++){
	    int rem=a[i]%k;
	    if(rem==0){
	        if(mp[rem]%2!=0)
	        return false;
	    }
	    else if(2*rem==k){
	         if(mp[rem]%2!=0)
	        return false;
	    }
	    else if (mp[rem]!=mp[k-rem])
	    return false;
	    }
	return true;
}
int main()
 {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	cin>>n;
	int a[n];
	loop(i,n)
	cin>>a[i];
	cin>>k;
	if(find(a,n,k))
	cout<<"True"<<endl;
	else
	cout<<"False"<<endl;
	}
	return 0;
}