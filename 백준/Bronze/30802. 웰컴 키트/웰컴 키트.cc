#include <bits/stdc++.h> // 모든 표준 라이브러리 포함 (만능 치트키)
using namespace std;

int main() {
    // [1] 입출력 속도 10배 빠르게 (C++ 필수 설정)
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // [2] 변수 선언 (여기서부터 코딩 시작)
    int N,T,P;
    int sum=0,sum_score=0;
    cin>>N;
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cin>>T>>P;
    for(int i=0;i<6;i++){
        if(v[i]%T==0){
            sum=v[i]/T;
        }
        else{
            sum=v[i]/T+1;
        }
        sum_score+=sum;
    }
    cout<<sum_score<<'\n';
    cout<<N/P<<" "<<N%P<<'\n';

    return 0;
}