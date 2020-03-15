//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//#include <queue>
//#include <string>
//using namespace std;
//
//#define INF int(1e+9)
//#define MAX_LEN 1001
//
//vector<pair<int, int>> map[MAX_LEN];
//int dist[MAX_LEN];
//string trace[MAX_LEN];
//int counter[MAX_LEN];
//
//string i_to_s(int n) {
//    char qwe[10];
//    sprintf(qwe, "%d", n);
//    string asd= qwe;
//    return asd;
//}
//
//void findroute(int start) {
//    int from,to,weight;
//    int count = 1;
//    priority_queue<pair<int,int>> pq;
//    pq.push(make_pair(0,start));
//    trace[start] = i_to_s(start);
//    counter[start] = count;
//    dist[start] = 0;
//    while (!pq.empty()) {
//        from = pq.top().second;
//        pq.pop();
//        for (int i = 0; i < map[from].size(); i++) {
//            weight = map[from][i].first;
//            to = map[from][i].second;
//            if (dist[to] >= dist[from] + weight) {
//                dist[to] = dist[from] + weight;
//                trace[to] = trace[from] + " " + i_to_s(to);
//                counter[to] = counter[from] + 1;
//                pq.push(make_pair(-weight, to));
//
//            }
//        }
//    }
//
//}
//
//void showdata() {
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < map[i].size(); j++) {
//            cout << "start : " << i << endl;
//            cout << "weight : " << map[i][j].second << endl;
//            cout << "end :  " << map[i][j].first << endl;
//        }
//    }
//    
//}
//
//int main(void) {
//    int v, e;
//    cin >> v;
//    cin >> e;
//    int start, end, weight;
//    for (int i = 0; i < e; i++) {
//        cin >> start >> end >> weight;
//        map[start].push_back({ make_pair(weight, end) });
//    }
//
//    cin >> start >> end;
//    for (int i = 1; i < v+1; i++) {
//        trace[i] = "";
//        dist[i] = INF;
//        counter[i] = 0;
//    }
//   findroute(start);
//    cout << dist[end] << endl;
//    cout << counter[end] << endl;
//    cout << trace[end] << endl;
//}