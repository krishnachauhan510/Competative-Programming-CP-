#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
ll modpow(ll base, ll exp) {
    ll res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // if we need power of base to exp for each step taking mod with some number then we use this 
    // T.C.=O(log(exp))

}
