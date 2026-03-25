#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    list<char> P;
    list<char>::iterator t=P.begin();

    int n;
    cin>>n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        P.clear();
        t=P.begin();

        for(int j=0;j<v[i].length();j++){
            if(v[i][j]=='<'){
                if(t!=P.begin()) t--;
            }
            else if(v[i][j]=='>'){
                if(t!=P.end()) t++;
            }
            else if(v[i][j]=='-') {
                if(t!=P.begin()) {
                t--;
                t=P.erase(t);
                }
            }
            else {
                t=P.insert(t,v[i][j]);
                t++;
            }
        }
        for(char c:P){
            cout<<c;
        }
        cout<<'\n';
    }

    return 0;
}