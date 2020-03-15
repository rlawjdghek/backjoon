//#include <string>
//#include <iostream>
//#include <queue>
//using namespace std;
//
//#define MAX_VERTEX 1003
//#define INF 987654321
//
//int map[MAX_VERTEX][MAX_VERTEX];
//string trace[MAX_VERTEX];
//int dist[MAX_VERTEX];
//int counter[MAX_VERTEX];
//
//
//string i_to_s(int n) {
//    char qwe[10];
//    sprintf(qwe, "%d", n);
//    string asd= qwe;
//    return asd;
//}
//
//void findroute(int start) {
//    int from,weight;
//    int count = 1;
//    priority_queue<pair<int,int>> pq;
//    pq.push({ 0,start });
//    trace[start] = i_to_s(start);
//    counter[start] = count;
//    while (!pq.empty()) {
//        weight = -pq.top().first;
//        from = pq.top().second;
//        pq.pop();
//        for (int i = 0; i < MAX_VERTEX; i++) {
//            if (map[from][i] + dist[from] < dist[i]) {
//                dist[i] = map[from][i] + dist[from];
//                trace[i] = trace[from] + " " + i_to_s(i);
//                pq.push({ -map[from][i], i });
//                counter[i] = counter[from] + 1;
//            }
//        }
//    }
//}
//
//
//void showdata() {
//    for (int i = 0; i < MAX_VERTEX; i++) {
//        cout << dist[i] << endl;
//    }
//}
//int main(void) {
//    int v, e;
//    cin >> v;
//    cin >> e;
//    int start, end, weight;
//    for (int i = 0; i < MAX_VERTEX; i++) {
//        dist[i] = INF;
//        trace[i] = "";
//        for (int j = 0; j < MAX_VERTEX; j++) {
//            map[i][j] = INF;
//        }
//    }
//    for (int i = 0; i < e; i++) {
//        cin >> start >> end >> weight;
//        map[start][end] = weight;
//    }
//    cin >> start >> end;
//    dist[start] = 0;
//    findroute(start);
//    
//    cout << dist[end] << endl;
//    cout << counter[end] << endl;
//    cout << trace[end];
//}