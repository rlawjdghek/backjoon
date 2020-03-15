//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define MAX_LEN 300001
//int n_planets;
//int parent[MAX_LEN];
//
//class PLANET {
//public:
//    int x;
//    int y;
//    int z;
//    int num;
//
//};
//
//class EDGE {
//public:
//    int weight;
//    int from;
//    int to;
//};
//
//bool compx(PLANET& e1, PLANET& e2) {
//    return e1.x < e2.x;
//}
//bool compy(PLANET& e1, PLANET& e2) {
//    return e1.y < e2.y;
//}
//bool compz(PLANET& e1, PLANET& e2) {
//    return e1.z < e2.z;
//}
//
//bool comp(EDGE& e1, EDGE& e2) {
//    return e1.weight < e2.weight;
//}
//
//
//int find(int n) {
//    if (parent[n] == n) {
//        return n;
//    }
//    return parent[n] = find(parent[n]);
//}
//
//void _union(int a, int b) {
//    a = find(a);
//    b = find(b);
//    if (a > b) {
//        parent[a] = b;
//    }
//    else {
//        parent[b] = a;
//    }
//
//}
//
//int main(void) {
//    cin >> n_planets;
//    int a, b, c;
//    vector<PLANET> map;
//    vector<EDGE> edge_map;
//    for (int i = 1; i <= n_planets; i++) {
//        cin >> a >> b >> c;
//        map.push_back({ a,b,c,i });
//        parent[i] = i;
//    }
//    
//    sort(map.begin(), map.end(), compx);
//    for (int i = 1; i < n_planets; i++) {
//        edge_map.push_back({ abs(map[i].x - map[i - 1].x), map[i - 1].num, map[i].num });
//    }
//    sort(map.begin(), map.end(), compy);
//    for (int i = 1; i < n_planets; i++) {
//        edge_map.push_back({ abs(map[i].y - map[i - 1].y), map[i - 1].num , map[i].num });
//    }
//    sort(map.begin(), map.end(), compz);
//    for (int i = 1; i < n_planets; i++) {
//        edge_map.push_back({ abs(map[i].z - map[i - 1].z), map[i - 1].num, map[i].num });
//    }
//    sort(edge_map.begin(), edge_map.end(), comp);
//    int total_weight = 0;
//    int count_edge = 0;
//    int idx = 0;
//    while (count_edge < n_planets-1) {
//        if (find(edge_map[idx].from) != find(edge_map[idx].to)) {
//            _union(edge_map[idx].from, edge_map[idx].to);
//            count_edge += 1;
//            total_weight += edge_map[idx].weight;
//        }
//        idx += 1;
//    }
//    cout << total_weight;
//}