//#include <iostream>
//using namespace std;
//
//int map[401][401];
//int v, e;
//#define INF 100000
//
//void ShowMap();
//void Findmap();
//int min(int a, int b) {
//    return (a < b ? a : b);
//}
//
//int main(void) {
//    int start, end, weight;
//    cin >> v >> e;
//    for (int i = 0; i < 401; i++) {
//        for (int j = 0; j < 401; j++) {
//            map[i][j] = INF;
//        
//        }
//    }
//
//    for (int i = 0; i < e; i++) {
//        cin >> start >> end >> weight;
//        map[start][end] = weight;
//    }
//
//
//    Findmap();
//
//    int min_cycle = INF;
//
//    for (int i = 1; i <= v; i++) {
//        min_cycle = min(min_cycle,map[i][i]);
//    }
//
//
//    if (min_cycle == INF) {
//        cout << -1 << endl;
//    }
//    else {
//        cout << min_cycle << endl;
//    }
//
//}
//
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
//
//void ShowMap() {
//    for (int i = 1; i < v+1; i++) {
//        for (int j = 1; j < v+1; j++) {
//            cout << map[i][j]<<"  ";
//        }
//        cout << endl;
//    }
//}