#include <bits/stdc++.h> // 모든 표준 라이브러리 포함 (만능 치트키)
using namespace std;

int main() {
    // [1] 입출력 속도 10배 빠르게 (C++ 필수 설정)
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<a+b-c<<"\n";
    cout<<stoi(to_string(a)+to_string(b))-c<<"\n";

    return 0;
}