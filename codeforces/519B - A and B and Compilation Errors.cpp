#include <bits/stdc++.h>

using namespace std;

#ifdef __GNUC__
typedef long long LL;
typedef unsigned long long ULL;
#else
typedef __int64 LL;
typedef unsigned __int64 ULL;
#endif
typedef unsigned UI;

#define PI 3.14159265358979323846264338327950
#define RADIAN PI / 180

#define MEM( x, y ) memset( x, y, sizeof( x ) )
#define READ( file ) freopen( file, "r", stdin )
#define WRITE( file ) freopen( file, "w", stdout )

#define PB( x ) push_back( x )
#define PF( x ) push_front( x )
#define pii pair<int, int>
#define pll pair<LL, LL>

#define ndl ( '\n' )

#define what_is(x) cerr << #x << " = " << x << endl;

// Debugs
template <class T> inline void debug( T x )
{ cout << "x = " << x << endl; }
template <class T1, class T2> inline void debug( T1 x, T2 y )
{ cout << "x = " << x << ", y = " << y << endl; }
template <class T1, class T2, class T3> inline void debug( T1 x, T2 y, T3 z )
{ cout << "x = " << x << ", y = " << y << ", z = " << z << endl; }

// Powers
template <class T> inline T sqr( T x ) { return x*x; }
template <class T> inline T cube( T x ) { return x*x*x; }
template <class T> inline T quad( T x ) { return x*x*x*x; }

// Bit Manipulation
template <class T> inline T setBit( T n, T pos ) { return n = n | ((T)1<<pos); }
template <class T> inline T resetBit( T n, T pos ) { return n = n & ~((T)1<<pos); }
template <class T> inline bool checkBit( T n, T pos ) { return n & ((T)1<<pos); }

// GCD, LCM
template <class T> inline T GCD( T a, T b ) { if( a < 0 ) return GCD( -a , b );
    if( b < 0 ) return GCD( a, -b ); return ( b == 0 ) ? a : GCD( b, a%b ); }
template <class T> inline T LCM( T a, T b ) { if( a < 0 ) return LCM( -a, b );
    if( b < 0 ) return LCM( a, -b ); return a * ( b / GCD( a, b ) ); }

// Prime
template <class T> inline bool isPrime( T n ) { if( n <= 1 ) return false;
    for( T i = 2; i*i <= n; i++ ) if( n % i == 0 ) return false; return true; }

// Various
template <class T> inline T abso( T x ) { return x >= 0 ? x : -x; }
template <class T> inline T mod( T n, T m ) { return ( n%m + m ) % m; }
template <class T> inline T bigmod(T b, T p, T m) { if(p == 0) return 1;
	if(p%2 == 1) return ((b%m) * (bigmod(b, p-1, m)%m))%m;
	else { T tmp = bigmod(b, p/2, m)%m; return (tmp*tmp)%m; } }

//int dx[] = {0, 0, +1, -1};
//int dy[] = {+1, -1, 0, 0};

#define EPS 1e-9
#define INF 1000000000

// Template ends, coding starts

#define MX 100010

vector <int> v1, v2, v3;

int main()
{
//    READ( "in.txt" );
//    WRITE( "out.txt" );
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        v1.PB(x);
    }

    for(int i = 0; i < n-1; i++) {
        cin >> x;
        v2.PB(x);
    }

    for(int i = 0; i < n-2; i++) {
        cin >> x;
        v3.PB(x);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());

    int ans1, ans2;
    for(int i = 0; i < n; i++) {
        if(i == n-1) {
            ans1 = v1[i];
            break;
        }
        if(v1[i] != v2[i]) {
            ans1 = v1[i];
            break;
        }
    }

    for(int i = 0; i < n-1; i++) {
        if(i == n-2) {
            ans2 = v2[i];
            break;
        }
        if(v2[i] != v3[i]) {
            ans2 = v2[i];
            break;
        }
    }

    cout << ans1 << endl << ans2 << endl;

    return 0;
}
