//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#define MAX_LEN 10001
//int parent[MAX_LEN];
//int n_nodes, n_edges;
//int total_weights = 0;
//
//
//
//class edge {
//public:
//    int weight;
//    int from;
//    int to;
//
//    edge(const int& weight1, const int& from1, const int& to1): weight(weight1),from(from1), to(to1){
//        
//    }
//    bool operator<(edge& e) {
//        return weight < e.weight;
//    }
//};
//
//int find(int n) {
//    if (n == parent[n]) {
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
//}
//void showdata(vector<edge> asd) {
//    for (int i = 0; i < n_edges; i++) {
//        cout <<asd[i].from<<asd[i].to<< asd[i].weight << endl;
//    }
//        
//}
//
//int main(void) {
//    cin >> n_nodes >> n_edges;
//    vector<edge> edge_list;
//    int weight, from, to;
//    for (int i = 0; i < n_edges; i++) {
//        cin >> from >> to >> weight;
//        edge_list.push_back({ weight, from, to });
//    }
//    for (int i = 1; i < n_nodes; i++) {
//        parent[i] = i;
//    }
//
//    sort(edge_list.begin(), edge_list.end());
//    for (int i = 0; i < n_edges; i++) {
//        if (find(edge_list[i].from) != find(edge_list[i].to)) {
//            _union(edge_list[i].from, edge_list[i].to);
//            total_weights += edge_list[i].weight;
//        }
//    }
//    
//    cout << total_weights << endl;
//
//
//
//}