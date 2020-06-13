#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n; int m;
        cin>>n;
        cin>>m;
        unordered_map<int,int> mm;
        for(int i=0;i<n; i++)
        {
            int temp;
            cin>>temp;
            if(mm.find(temp)!=mm.end())
            {
                mm[temp]++;
            }
            else
            {
                mm[temp]=1;
            }
        }
        int ans=0;
        for (int i =0; i<m; i++)
        {
            int temp;
            cin>>temp;
            if(mm.find(temp)!=mm.end())
            {
                ans++;
                mm.erase(temp);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
