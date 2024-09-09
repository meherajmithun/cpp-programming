
/*
  IN THE NAME OF ALLAH
  Author: Meheraj Mithun
  Bangladesh University Of Businness and Teachnology
*/
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> needs(n);
    for (int i = 0; i < n; ++i) {
        cin >> needs[i];
    }

    queue<int> q;
    for (int i = 0; i < n; ++i) {
        q.push(i);
    }

    int lastChild = -1;
    while (!q.empty()) {
        int child = q.front();
        q.pop();

        needs[child] -= m;
        if (needs[child] > 0) {
            q.push(child);
        } else {
            lastChild = child + 1; 
        }
    }

    cout << lastChild << endl;
    return 0;
}
