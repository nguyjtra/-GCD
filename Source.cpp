#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = a % b;
        a = b;
        b = temp;

    }
    return a;
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << gcd(gcd(a, b), gcd(c, d)) << " " << lcm(lcm(a, b), lcm(c, d));
    return 0;
}
