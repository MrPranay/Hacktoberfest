#include<bits/stdc++.h>
using namespace std;
//..hysh
#define int long long int
#define FOR(x,i,e) for(int x=i; x<e; x++)
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define double long double
//.bong



int main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int r1,w1,c1,r2,w2,c2;
		cin>>r1>>w1>>c1;
        cin>>r2>>w2>>c2;
        if ( ((r1>r2) && (w1>w2)) || ((r1>r2) && (c1>c2)) || ((w1>w2) && (c1>c2)) ) cout<<'A'<<endl;
        
        else cout<<'B'<<endl;
	}


	return 0;
}
