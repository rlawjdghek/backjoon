//#include <iostream>
//using namespace std;
//
//#define INF 1e+7
//int map[101][101];
//int v, e;
//void Findmap();
//void ShowData();
//
//int min(int a, int b) {
//    return a < b ? a : b;
//}
//
//int main(void) {
//    cin >> v;
//    cin >> e;
//
//    for (int i = 1; i <= v; i++) {
//        for (int j = 1; j <= v; j++) {
//            if (i == j) {
//                map[i][j] = 0;
//            }
//            else { map[i][j] = INF; }
//        }
//    }
//    int start, end, weight;
//    for (int i = 1; i <= e; i++) {
//        cin >> start >> end >> weight;
//        if (map[start][end] > weight) {
//            map[start][end] = weight;
//        }
//    }
//    Findmap();
//
//    ShowData();
//}
//
//
//void ShowData() {
//    for (int i = 1; i <= v; i++) {
//        for (int j = 1; j <= v; j++) {
//            if (map[i][j] == INF) {
//                cout << 0<<" ";
//            }
//            else {
//                cout << map[i][j] << " ";
//            }
//        }
//        cout << endl;
//    }
//}
//
//void Findmap() {
//    for (int k = 1; k <= v; k++) {
//        for (int i = 1; i <= v; i++) {
//            for (int j = 1; j <= v; j++) {
//                map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
//            }
//        }
//    }
//}