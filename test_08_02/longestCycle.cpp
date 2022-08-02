class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        // 染色数组
        vector<int> col(n+1, -1);
       // 距离
        int dis[n+1];
        memset(dis, 0x3f, sizeof dis);
        
        auto bfs = [&](int u) -> int {
           // 如果已经染色，说明之前被遍历过，可以直接退出
            if (col[u] != -1) return -1;
            col[u] = u;
            dis[u] = 0;
            
            queue<int> que;
            que.push(u);
            
            while (!que.empty()) {
                int f = que.front();
                que.pop();
                int v = edges[f];
                if (v == -1) continue;
                
               // 如果v点已经染色了u，说明存在环
               // 由于每个点最多只有一个出度，所以每个点最多在一个环上，可以直接返回
                if (col[v] == u) {
                    return dis[f] + 1 - dis[v];
                }
                if (col[v] == -1) {
                    col[v] = u;
                    dis[v] = dis[f] + 1;
                    que.push(v);
                // 如果v点染了其他颜色，而u点没有，说明u和v不在一个环上，直接退出
                }else break;
            }
            return -1;
        };
        
        int ret = -1;
        for (int i = 0; i < n; i++) {
            ret = max(ret, bfs(i));
        }
        return ret;
    }
};