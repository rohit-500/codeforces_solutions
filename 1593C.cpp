#include <bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[k];
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a, a + k, greater<ll>());
        ll cat = 0;
        ll ans = 0;
        for (ll i = 0; i < k; i++)
        {
            ll x = abs(n - a[i]);
            if (cat < a[i])
            {
                ans++;
            }
            else
            {
                break;
            }
            cat += x;
        }
        cout << ans << endl;
    }
    return 0;
}