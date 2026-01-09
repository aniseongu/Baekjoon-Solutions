#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m,max=0;
    cin>>n>>m;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin>>height[i];
    }
    sort(height.begin(), height.end());
    long long low=0;
    long long high = height[n-1];
    while(low<=high){
        long long sum=0;
        long long cut =(low+high)/2;
        for (int i = 0; i < n; i++)
        {
            if(height[i]-cut>0){
                sum+=height[i]-cut;
            }
        }
        if(sum>=m){
            max=cut;
            low=cut+1;
        } else {
            high = cut -1;
        }
    }
    cout<<max<<"\n";
    
    return 0;
}