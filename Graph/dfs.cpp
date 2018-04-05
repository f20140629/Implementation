#include<iostream>
#include<vector>
#include<stack>
#include<list>
#include<stack>
#include<string>
#include<algorithm>
#include<functional>
#include<utility>  

using namespace std;

#define tr(container,it)  for( typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define mp make_pair
#define repeat(a,b,i) for(int i=a;i<b;i++)
#define var(x) int x;cin>>x
#define pb push_back
#define fi first
#define se second

#define PRINT
#define DONE

typedef vector<int> vint;
typedef list<int> lint;
typedef stack<int> sint;

bool *visited;
vint *a;
int V;
int E;

// dfs starts here
void _dfs(int v){
	cout<<v<<" ";
	visited[v]=true;
	tr(a[v],it){
		if(!visited[*it])
			_dfs(*it);
	}
}

// for traversing a connected component
void dfs(int start){
	visited=new bool[V];
	fill_n(visited,V,false);
	_dfs(start);
}

void dfs(){
	visited=new bool[V];
	fill_n(visited,V,false);
	repeat(0,V,i){
		if(!visited[i])
			_dfs(i);
	}
}

int main(){

	cin>>V;
	cin>>E;
	a=new vint[V];
	repeat(0,E,i){
		var(u);
		var(v);
		a[u].pb(v);
		//a[v].pb(u);
	}
	var(start);
	dfs(start);	
}
