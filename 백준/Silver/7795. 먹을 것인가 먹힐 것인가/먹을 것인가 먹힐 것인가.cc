#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m,ans=0;
        cin>>n>>m;
        vector<int> a,b;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            a.push_back(val);
        }
        for (int i = 0; i < m; i++)
        {
            int val;
            cin>>val;
            b.push_back(val);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0; i<n; i++){
            int low=0;
            int high=m-1;
            int x=a[i];
            while(low<=high){
                int mid=(low+high)/2;
                if(b[mid]>=x) high=mid-1;
                else low=mid+1;
            }
        ans+=low;
        }
        cout<<ans<<"\n";
    }

    return 0;
}