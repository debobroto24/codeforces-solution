

#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
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


   



void sol(){
  ll n, k; cin>>n>>k;
  vector<ll>v;
  ll kk; 
  for(ll i=1;i<=n;i++){
    cin>>kk;v.push_back(kk);
  }
  ll maxsum = 0;
  ll currSum =0 ; 
  ll totalSum =0;
  for(ll i=0;i<v.size();i++){
    currSum = (v[i]+currSum);
    if(currSum>maxsum)maxsum = currSum;
    if(currSum<0)currSum = 0; 
    totalSum = (totalSum+ v[i])%MOD;
  }

  ll restOfSum = ((totalSum - maxsum)%MOD + MOD)%MOD;
  debug(maxsum);
  debug(totalSum);
  debug((totalSum - maxsum));
  maxsum %= MOD;
  for(ll i=1;i<=k;i++){
    maxsum = (maxsum + maxsum)%MOD;
  }
  cout<<(maxsum+restOfSum)%MOD<<endl;
  debug(totalSum);
  debug(maxsum);
  debug(restOfSum);
  return; 
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin); 
    freopen("output1.txt","w",stdout); 
    freopen("Error.txt", "w", stderr);
#endif
   int t ; cin>>t;
   while(t--){
    sol();
   }

}




