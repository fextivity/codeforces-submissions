#include<bits/stdc++.h>
using namespace std;
#define int		long long
#define double	long double
#define pb		push_back
#define pob		pop_back
#define mp		make_pair
#define fi		first
#define se		second
#define pque	priority_queue
#define endl	'\n'
typedef vector <int> 	vi;
typedef pair <int, int> ii;
typedef vector <vi > 	vvi;
typedef vector <ii > 	vii;

const int N = 1e6 + 5, mod = 1e9 + 7, inf = 1e18 + 7;

int n, cnt = 0, rem, t = 1, mxt;
int a[N];

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	rem = n;
	if (n == 2){
	    cout << "1 2";
	    return 0;
	}
	if (n == 1){
	    cout << "1";
	    return 0;
	}
	//mxt = (floor(log2(n)) << 1);
    while (rem){
        if (rem == 1){
            t /= 2;
            cout << (n / t) * t;
            //cout << ' ' << t << '_' << rem << "_A";
            return 0;
        }
        for (int i = 0; i < ceil(1.0 * rem / 2); i++){
            cout << t << ' ';
        }
        cnt += ceil(1.0 * rem / 2);
        rem = n - cnt;
        t *= 2;
    }
}

/*

*/