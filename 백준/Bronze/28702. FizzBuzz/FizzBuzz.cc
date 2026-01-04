#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> F(3);
    int result;

    for (int j = 0; j < 3; j++) {
        cin >> F[j];
        if(F[j]=="Fizz"||F[j]=="FizzBuzz"||F[j]=="Buzz");
        else{
            result = stoi(F[j])+3-j;
        }
    }

    if(result%15==0){
        cout<<"FizzBuzz"<<endl;
    }
    else if(result%5==0){
        cout<<"Buzz"<<endl;
    }
    else if(result%3==0){
        cout<<"Fizz"<<endl;
    }
    else{
    cout<<result<<endl;
    }
    return 0;
}