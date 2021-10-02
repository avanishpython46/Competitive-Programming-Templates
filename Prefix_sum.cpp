#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        v.pb(x);
    }
    vector<int> pf(n);
    pf[0] = v[0];
    for (int i=1;i<n;i++){
        pf.push_back(pf[i-1]+v[i]);
    }
    return 0;
}
