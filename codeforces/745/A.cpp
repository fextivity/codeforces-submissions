#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define pque priority_queue
#define endl '\n'
#define For(i, a, b) for (int i = a; i < b; i++)
#define ForE(i, a, b) for (int i = a; i <= b; i++)
#define Ford(i, a, b) for (int i = a; i > b; i--)
#define FordE(i, a, b) for (int i = a; i >= b; i--)

#define PrintV(x) for (int i = 0; i < x.size(); i++) cout << x[i] << ' ';
#define PrintVl(x) for (int i = 0; i < x.size(); i++) cout << x[i] << endl;
#define Ptest(a) return cout << a << endl, 0;
#define isvowel(a) (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y')

typedef vector <int> vi;
typedef pair <int, int> ii;
typedef vector <vi > vvi;
typedef vector <ii > vii;

const int N = 1e5 + 5, mod = 1e9 + 7, inf = 1e18 + 7;

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    int n, ans = 0;
    cin >> s;
    n = s.length();
    string a[n];
    For(i, 0, n){
        bool ck = 0;
        For(j, 0, ans){
            if (s == a[j]){
                ck = 1;
                break;
            }
        }
        if (!ck){
            a[ans] = s;
            ans++;
        }
        char x = s[n - 1];
        s = s.substr(0, n - 1);
        s = x + s;
    }
    cout << ans;
}

/*
----------------------------------+
INPUT:                            |
==============================    |

==============================    |
----------------------------------+
OUTPUT:                           |
==============================    |

==============================    |
----------------------------------+
*/