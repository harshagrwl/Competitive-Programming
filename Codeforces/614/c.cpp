 /* **********@harsh_agr********** */

#include<bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
typedef long l;
 
#define pii pair<int,int>
#define pli pair<long,int>
#define pil pair<int,long>
#define pll pair<long,long>
 
#define vi vector<int>
#define vll vector<ll>
#define vul vector<ull>
#define vii vector<pii>
#define vvi vector<vector<int>>
#define vvii vector<vector<pii>>
#define vvl vector<vector<l>>
#define vs vector<string>
#define mii map<int,int>
#define msi map<string,int>

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define lp(i,n) 	for(int i=0;i<n;i++)
#define lpd(i,n)    	for(int i=n;i>=0;i--)
#define lp1(itr,start,stop)     for(int itr=start;itr<stop;itr++)
#define lpd1(itr,start,stop)     for(int itr=start;itr>stop;itr--)
#define W(itr) while(itr--)
#define mp(a,b) make_pair(a,b) 
#define last(a) (a)[((a).size())-1]
#define pb(b) push_back(b)
#define f first
#define s second
#define M 1000000007  
 
using namespace std;

int main(){ 
   ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   int n,q;
   cin>>n>>q;
   
   
   int t[3][n+1];
   while(q--){
   	int d[3][n+1] = {0};
   	int a,b;
   	cin>>a>>b;
   	if(d[a][b]==0){
   		t[a][b] = 1;	
   	}
   	else{
   		t[a][b] = 0;
   	
   	}
   	if(a==1){
   		if(b == 1){
   			cout<<"No"<<endl;
   		}
   		else if(b == n){
   			if(d[2][n-1] == 1 || d[2][n] == 1){
   				cout<<"No"<<endl;
   			}
   			else{
   				cout<<"Yes"<<endl;
   			}
   		}
   		else{
   			if(d[2][b-1]==1 || d[2][b]==1 || d[2][b+1]==1){
   				cout<<"No"<<endl;
   			}
   			else{
   				cout<<"Yes"<<endl;
   			}
   		}
   	}
   	else if(a==2){
   		if(b == 1){
   			if(d[1][1] == 1 || d[1][2] == 1){
   				cout<<"No"<<endl;
   			}
   			else{
   				cout<<"Yes"<<endl;
   			}
   		}
   		else if(b == n){
   			cout<<"No"<<endl;
   		}
   		else{
   			if(d[1][b-1]==1 || d[1][b]==1 || d[1][b+1]==1){
   				cout<<"No"<<endl;
   			}
   			else{
   				cout<<"Yes"<<endl;
   			}
   		}
   	}

   }
   return 0;
}
 