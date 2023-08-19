#include <bits/stdc++.h>
using namespace std;

// Graph representation
void adjmatrix()
{
    int n, m;
    cin >> n >> m; // n = how many vertices, m = how many edges
    vector<vector<int>> a(n + 5, vector<int>(n + 5, 0));
    for (int i = 1; i <= (m); i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1; // for weight replace 1 with weight
        a[y][x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}
void adjlist()
{
    int n, m;
    cin >> n >> m;
    vector<int> edge[n + 5];
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << '-';
        for (int j = 0; j < edge[i].size(); j++)
        {
            cout << edge[i][j] << ' ';
        }
        cout << endl;
    }
}
void adjlist_weight()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edge[n + 5];
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        edge[x].push_back({y, w});
        edge[y].push_back({x, w});
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << '-';
        for (int j = 0; j < edge[i].size(); j++)
        {
            cout << edge[i][j].first << ' ' << edge[i][j].second << ',';
        }
        cout << endl;
    }
}

void BFS_adjL()
{ /*
          1
        /   \
      2       3
    /   \    /  \
   4     5  6     7

  */
    int n, qry;
    cin >> n >> qry;
    vector<int> adj_list[n + 1];  // adjacency list ex:
    for (int i = 0; i < qry; i++) // 1 - 2,3
    {                             // 2 - 1,4,5
        int u, v;                 // 3 - 1,6,7
        cin >> u >> v;            // 4 - 2
        adj_list[u].push_back(v); // 5 - 2
        adj_list[v].push_back(u); // 6 - 3
    }                             // 7 - 3
    int src;
    cin >> src;
    vector<int> lvl(n + 1, -1), parent(n + 1);
    lvl[src] = 0; // initially source level is 0
    queue<int> q;
    q.push(src);
    parent[src] = -1;
    int to;
    cin >> to;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj_list[u])
        {
            if (lvl[v] == -1)
            {
                lvl[v] = lvl[u] + 1;
                q.push(v);
                parent[v] = u;
            }
        }
    }
    for (int i = 1; i <= n; i++) // printing level
    {
        cout << lvl[i] << ' ';
    }
    cout << endl;
    for (auto p : parent)
    { // printing parents of indices
        cout << p << ' ';
    }
    vector<int> path;
    while (to != -1)
    { // shortest path
        path.push_back(to);
        to = parent[to];
    }
    for (auto x : path)
    {
        cout << x << ' ';
    }
}

// direction array
const array dx{1, 0, -1, 0};
const array dy{0, 1, 0, -1};
// to check if outside of grid or not
bool check(int x, int y,int n,int m) { return (x >= 0 && y >= 0 && x < n && y < m); }

void BFS_adjM()
{
     int n,m;
    cin >> n ;
    vector<string> grid(n+1);
    pair<int,int> src,dst;
    for(int i=0;i<n;i++){
        cin>>grid[i];
        for(int j=0;j<m;j++){
            if(grid[i][j]=='S'){
                src.first = i,src.second=j;
            }
            if(grid[i][j]=='D'){
                dst.first = i,dst.second = j;
            }
        }
    }
    int lvl[100][100];
    memset(lvl,-1,sizeof(lvl));
    lvl[src.first][src.second]=0;
    queue<pair<int,int>> q;
    q.push(src);

    while (!q.empty())
    {
        pair<int,int> u = q.front();
        q.pop();

        for(int i=0;i<4;i++){
            pair<int,int> v = {u.first+dx[i],u.second+dx[i]};
            if(check(v.first,v.second,n,m) && lvl[v.first][v.second]==-1){
                lvl[v.first][v.second]= lvl[u.first][u.second]+1;
                q.push(v);    
            }
        }
    }

}