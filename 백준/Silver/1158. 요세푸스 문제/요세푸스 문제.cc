#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(i+1);
    }
    cout<<"<";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    while(1)
    {
        for (int i = 0; i < k-1; i++)
        {
            int temp = dq.front();
            dq.pop_front();
            dq.push_back(temp);
        }
        if(dq.size() == 1) {
            cout << dq.front();
            break;
        }
        cout << dq.front() << ", ";
        dq.pop_front();
    }
    cout<<">\n";
    return 0;
}