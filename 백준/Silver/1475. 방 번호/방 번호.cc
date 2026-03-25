#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,Max;
    cin>>n;
    vector<int> v(10);
    while(n>0){
        if(n%10==9||n%10==6){
            if(v[6]==v[9]) v[6]++;
            else{
                v[9]++;
            }
        }
        else v[n%10]++;
        n/=10;
    }
    Max=v[0];
    for (int i = 1; i < 10; i++)
    {
        Max=max(Max,v[i]);
    }
    cout<<Max<<"\n";

    return 0;
}