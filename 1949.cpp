//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define MAX_LEN 10001
//
//bool visit[MAX_LEN];
//int person[MAX_LEN];
//vector<int> map[MAX_LEN];
//
//int dfs(int start, bool isgood) {
//    int ans = 0;
//    visit[start] = true;
//    for (int i = 0; i < map[start].size(); i++) {
//        int next = map[start][i];
//        if (!visit[next]) {
//            if (isgood) {
//                ans += dfs(next, 0);
//            }
//            else {
//                ans += max(dfs(next, 0), dfs(next, 1) + person[next]);
//            }
//        }
//    }
//    visit[start] = false;
//    return ans;
//}
//
//int main(void) {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n_villages, temp;
//    cin >> n_villages;
//    for (int i = 1; i <= n_villages; i++) {
//        cin >> temp;
//        person[i] = temp;
//        visit[i] = false;
//    }
//
//    int from, to;
//    for (int i = 0; i < n_villages - 1; i++) {
//        cin >> from >> to;
//        map[from].push_back(to);
//        map[to].push_back(from);
//    }
//
//    cout << max(dfs(1, 0), dfs(1, 1) + person[1]);
//
//}