#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int sum=0,n;
    cin>>str;

    for (int i = 0; i < 12; i++)
    {
        if(str[i]=='*'){
            n=i;
            continue;
        }
        if(i%2==0){
            sum+=str[i]-'0';
        }
        else{
            sum+=(str[i]-'0')*3;
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        int temp_sum=sum;
        if(n%2==0){
            temp_sum+=i;
        }
        else{
            temp_sum+=i*3;
        }
        if(str[12]-'0'==(10-(temp_sum%10))||(temp_sum%10==0&&str[12]=='0')){
            cout<<i<<"\n";
            break;
        }
    }

    return 0;
}