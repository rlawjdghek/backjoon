//#include <iostream>
//using namespace std;
//#include <queue>
//
//#define INF 1e+7
//
//int map[801][801];
//int v, e;
//
//int min(int a, int b) {
//    return a < b ? a : b;
//}
//
//int Daic(int start, int end) {
//    int* dist = new int[801];
//    priority_queue<int> pq;
//    int from;
//    for (int i = 0; i < 801; i++) {
//        dist[i] = INF;
//    }
//    dist[start] = 0;
//    pq.push(start);
//    while (!pq.empty()) {
//        from = pq.top();
//        pq.pop();
//
//        for (int i = 1; i <= v; i++) {
//            if (dist[i] > dist[from] + map[from][i]) {
//                dist[i] = dist[from] + map[from][i];
//                pq.push(i);
//            }
//        }
//
//    }
//    int result = dist[end];
//    delete[] dist;
//    return result;
//}
//
//
//void ShowData() {
//    for (int i = 1; i <= v; i++) {
//        for (int j = 1; j <= v; j++) {
//            cout << map[i][j] << "  ";
//        }
//        cout << endl;
//    }
//}
//
//int main(void) {
//    cin >> v >> e;
//    int start, end, weight;
//    int A, B;
//    for (int i = 1; i <= v; i++) {
//        for (int j = 1; j <= v; j++) {
//            if (i == j) {
//                map[i][j] = 0;
//            }
//            else {
//                map[i][j] = INF;
//            }
//        }
//    }
//    for (int i = 0; i < e; i++) {
//        cin >> start >> end >> weight;
//        map[start][end] = weight;
//        map[end][start] = weight;
//    }
//    cin >> A >> B;
//
//
//    int a1 = Daic(1, A);
//    int b1 = Daic(1, B);
//    int ab = Daic(A, B);
//    int an = Daic(A, v);
//    int bn = Daic(B, v);
//
//
//    int result = INF;
//    result = min(a1 + ab + bn, b1 + ab + an);
//    if (result > INF) {
//        cout << -1 << endl;
//    }
//    else {
//        cout << result;
//    }
//
//}