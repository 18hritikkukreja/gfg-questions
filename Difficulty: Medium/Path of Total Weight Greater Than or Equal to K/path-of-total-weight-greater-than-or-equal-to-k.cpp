class Solution {
  public:
  bool dfs(int node,vector<vector<pair<int,int>>>&adj,vector<bool>&vis,int sum,int k)
  {
      vis[node]=true;
      
      for(auto it : adj[node])
      {
          int v = it.first;
          int w = it.second;
          if(!vis[v])
          {
             int newsum = sum+w;
              if(newsum>=k)
              return true;
             if(dfs(v,adj,vis,newsum,k))
             return true; 
          }
      }
      vis[node] = false;
      return false;
  }
  
    bool pathMoreThanK(int V, vector<vector<int>>& edges, int k) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
            
        }
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++)
        { 
            if(!vis[i])
            {
                int sum=0;
          if(dfs(i,adj,vis,sum,k))
          return true;
            }
        } 
        return false;
    }
};