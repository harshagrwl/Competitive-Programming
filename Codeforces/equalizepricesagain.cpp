#include <bits/stdc++.h>

using namespace std ;
#define M 1000000007
#define loop(i,n) for(int i = 0;i < int(n);i++)
#define All(c) c.begin(), c.end()
#define RALL(c) c.rbegin(), c.rend()
#define each(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)

typedef long long ll;
typedef vector<int>::iterator vitr ;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int a[n];
        loop(i,n){
            cin>>a[i];
        }
        double sum = 0;
        loop(i,n){
            sum += a[i];
        }
        int ans = ceil(sum/n);
        cout<<ans<<"\n";
    }
}