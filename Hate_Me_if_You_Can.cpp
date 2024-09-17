#include <stdio.h>
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif /* bitsStdcpp_hpp */
using namespace std;
/*define short pair*/
#define fs first
#define sc second
#define mkp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(a) (a).rbegin(),(a).rend()

/*define iteration*/
#define ed end()
#define bg begin()
#define pb push_back

/*datatype*/
#define ll long long
typedef unsigned long long ull;
typedef long double lld;

/*math*/
#define eps 1e-15;
#define PI acos(-1);
const ll mod = 1e9 + 7;
const ll linf = (ll)1e17;
ll gcd(ll a, ll b){return b == 0 ? a : gcd(b, a % b);}
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) );}

/*container declare */
typedef vector<ll> v ;
typedef vector<v> vv;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;
typedef map<ll,ll> mll;
typedef map<string,ll> msl;
typedef map<ll,v> mlv;
typedef map<string,v> msv;

/*function - bitmask*/
#define lsb(x) ((x) & (-x))
#define nsz(t) __lg(t);
#define isp2(t) i && (i & -i) == i;
#define set_bits(x) __builtin_popcount(x)

/*return value*/
#define sz(x) (ll)x.size()

/*short printer*/
#define nn() cout << '\n';
#define p(x) cout << x << ' ';
#define pn(x) cout << x << '\n';
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/*Loop definaton*/
#define in(a, v) memset(a, v, sizeof(a));
#define f(i, a, b) for (int i = (a); i < (b); ++i)
#define r(i, a, b) for (int i = (a); i >= (b); --i)

#define int ll
#define tif(condition) cout << ((condition) ? "YES\n" : "NO\n")
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    char buffer[256];


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int reverse_full_bits(int x) {
    x = ((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1);
    x = ((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2);
    x = ((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4);
    x = ((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8);
    x = ((x & 0xffff0000) >> 16) | ((x & 0x0000ffff) << 16);
    return x;
}
ll reverse_exist(ll a,ll k){
    ll track=0ll,val=0ll,i=0ll;
    while(k--){
        val=val*10 + a%2;
        a/=2ll;
    }
    
    while(val){
        track+= (val%10)*(1<<i);
        i++;
        val/=10ll;
    }
    
    return track;
}
ll bcnt(ll a){
    int ans =0 ;
    do{
        a = a&(a-1);
        ans++;
    }while((unsigned)a>0);
    return ans;
}
unsigned long long msb(unsigned long long n) {
    for(int idx = 63; idx >= 0; idx--) {
        if((n & (1ll<<idx)) != 0)
            return 1LL << idx;
    }
    return 0;
}
ll dsum(ll num){
    ll sum = 0;
    while(num>0){       
        sum=sum+num%10;    
        num=num/10;    
    } 
    return sum;
}
pair<ll,ll> PowerSet(ll n){
    float p;
    if (n <= 1)
        return {1,1};
    for (int i = 2; i <= sqrt(n); i++) {
        p = log2(n) / log2(i);
        if ((ceil(p) == floor(p)) && p > 1)
            return {i,p};
    }
    return {n,1};
}
ll power(ll a,ll p){
    if(p == 0){
        return 1;
    }
    if(p%2==1){
        return a*power(a*a%mod,( p-1)/2)%mod;
    }else{
        return power((a*a)%mod,p/2)%mod;
    }
}
ll binarySearch(ll arr[], ll l, ll r, ll x){
    if (r >= l) {
        ll mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid+1;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
bool is_sort(ll *arr,ll size){
    ll i=1,a=arr[0];
    while(a<=arr[i] and i<size) a=arr[i],i++;
    if(i == size){
        return true;
    }
    i=1,a=arr[0];
    while(a>=arr[i] and i<size) a=arr[i],i++;
    if(i==size){
        return true;
    }

    return false;
}
bool isfibo(ll n){
    ll num = 5*n*n;
    int a = sqrt(num-4);
    if(a*a == num-4){
        return true;
    }
    a = sqrt(num+4);
    if(a*a == num+4){
        return true;
    }
    return false;
}

bool isPrime(ll n){
    if(n == 1){
        return false;
    }
    if(n%2 == 0 and n != 2){
        return false;
    }
    for(ll i=2;i*i<=n;i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
class solve{
public:
    vector<long long>arr;
    ll n,k=0,ans1=0,ans2=0,ans3=0;
    string a="",b="",s="";
    void arrin(){
        cin >> n;
        arr.resize(n);
        for (ll i = 0; i < n; i++){
            cin >> arr[i];
        }
    }
    void pr(){
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<nl;
    }
    void cr(){
        for(auto i:arr){
            cerr<<i<<" ";
        }
        cerr<<nl;
    }
    void solution();
};
int32_t main(){
    _
    ll tc=1;
    // cin >> tc;
   f(i,1,tc+1){
    // p("Case ")p(i)p(": ")
        solve obj;
        obj.solution();
    }
    return 0;
}
void solve::solution(){
    // arrin();
    
}