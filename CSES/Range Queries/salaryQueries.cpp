/******************************************
*    AUTHOR:         JULIAN FERRES        *
*    INSTITUITION:   FIUBA                *
******************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
#define FIN                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define forr(i, a, b) for (int i = (a); i < (int)(b); i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(), (c).end()
#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGV(v, n)                  \
    forn(i, n) cout << v[i] << " "; \
    cout << endl
#define esta(x, c) ((c).find(x) != (c).end())
#define RAYA cerr << "===============================" << endl
#define MOD 1000000007
#define MAXN 200005
#define INF 1e18

int main()
{
    FIN;
    multiset<ll> s;
    int n, q;
    cin >> n >> q;
    ll a[MAXN];
    forn(i, n)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    forn(i, q)
    {
        char type;
        cin >> type;
        if (type == '!')
        {
            ll k, x;
            cin >> k >> x;
            ll value = a[k];
            auto it = s.find(value);
            s.erase(it);
            s.insert(x);
            a[k] = x;
        }
        else
        {
            ll a, b;
            cin >> a >> b;
            a--;
            auto d = distance(s.upper_bound(a-1),s.upper_bound(b));
            cout << d << endl;
            

        }
    }

    return 0;
}