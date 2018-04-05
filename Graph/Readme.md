#Graph 

#bfs 
The C++ implementation uses adjacency list representation of graphs

```cpp
void bfs(int s){
	visited=new bool[V];
	fill_n(visited,V,false);
	lint q;
	q.pb(s);
	visited[s]=true;
	while(!q.empty()){
		int f=q.front();
		visited[f]=true;
		q.pf();
		cout<<f<<endl;
		tr(a[f],it){
			if(!visited[*it]){
				visited[*it]=true;
				q.pb(*it);
			}
		}
	}
	ent;
}
```
