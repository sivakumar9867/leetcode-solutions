class Solution {
public:
    int minActivationCost(vector<vector<int>>& edges, vector<int>& values) {
        int n = values.size();
        vector<int> parity(n);
        for (int i = 0; i < n; i++) {
            parity[i] = __builtin_popcount(values[i]) % 2;
        }
        vector<vector<pair<int, int>>> adj(n);
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        long long ans = LLONG_MAX;
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            if (parity[u] == parity[v]) {
                ans = min(ans, (long long)w);
            }
        }
        for (int i = 0; i < n; i++) {
            if (parity[i] != 0) {
                continue;
            }

            long long first = LLONG_MAX;
            long long second = LLONG_MAX;

            for (auto &edge : adj[i]) {
                int neighbor = edge.first;
                int cost = edge.second;
                if (parity[neighbor] != 1) {
                    continue;
                }
                if (cost < first) {
                    second = first;
                    first = cost;
                }
                else if (cost < second) {
                    second = cost;
                }
            }
            if (second != LLONG_MAX) {
                ans = min(ans, first + second);
            }
        }

        return ans == LLONG_MAX ? -1 : (int)ans;
    }
};