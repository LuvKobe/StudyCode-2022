class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        
        auto spfa = [&](int u, vector<int> &dis) {
            dis[u] = 0;
            queue<int> que;
            que.push(u);
            vector<bool> inqueue(n, 0);
            inqueue[u] = true;
            
            while (!que.empty()) {
                int f = que.front();
                que.pop();
                inqueue[f] = false;
                int v = edges[f];
                if (v != -1 && dis[f] + 1 < dis[v]) {
                    dis[v] = dis[f] + 1;
                    if (!inqueue[v]) {
                        inqueue[v] = true;
                        que.push(v);
                    }
                }
            }
        };
        
        vector<int> dis1(n+1, 0x3f3f3f3f), dis2(n+1, 0x3f3f3f3f);
        spfa(node1, dis1);
        spfa(node2, dis2);
        
        int ret = -1, maxi = 0x3f3f3f3f;
        for (int i = 0; i < n; i++) {

            if (max(dis1[i], dis2[i]) < maxi) {
                maxi = max(dis1[i], dis2[i]);
                ret = i;
            }
        }
        return ret;
    }
};