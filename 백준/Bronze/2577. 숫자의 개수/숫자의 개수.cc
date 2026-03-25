#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;
    int sum=a*b*c;
    int arr[10]={0,};
    while(sum>0){
        arr[sum%10]++;
        sum/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}