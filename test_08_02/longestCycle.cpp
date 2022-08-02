class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        // Ⱦɫ����
        vector<int> col(n+1, -1);
       // ����
        int dis[n+1];
        memset(dis, 0x3f, sizeof dis);
        
        auto bfs = [&](int u) -> int {
           // ����Ѿ�Ⱦɫ��˵��֮ǰ��������������ֱ���˳�
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
                
               // ���v���Ѿ�Ⱦɫ��u��˵�����ڻ�
               // ����ÿ�������ֻ��һ�����ȣ�����ÿ���������һ�����ϣ�����ֱ�ӷ���
                if (col[v] == u) {
                    return dis[f] + 1 - dis[v];
                }
                if (col[v] == -1) {
                    col[v] = u;
                    dis[v] = dis[f] + 1;
                    que.push(v);
                // ���v��Ⱦ��������ɫ����u��û�У�˵��u��v����һ�����ϣ�ֱ���˳�
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