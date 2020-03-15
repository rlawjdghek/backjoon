//#include <iostream>
//#include <vector>
//using namespace std;
//
//#define MAX_LEN 100001
//vector<int> tree[MAX_LEN];
//int subsize[MAX_LEN];
//
//
//int maketree(int start,int layer) {
//    subsize[start] = 1;
//    for (auto i : tree[start]) {
//        if (layer == i) continue;
//        subsize[start] += maketree(i, start);
//        
//    }
//    return subsize[start];
//}
//
//int main(void) {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    int n_nodes, root, q;
//    cin >> n_nodes >> root >> q;
//    int from, to;
//    for (int i = 0; i < n_nodes - 1; i++) {
//        cin >> from >> to;
//        tree[from].push_back(to);
//        tree[to].push_back(from);
//    }
//    maketree(root, 0);
//    int temp;
//    for (int i = 0; i < q; i++) {
//        cin >> temp;
//        cout << subsize[temp] <<"\n";
//    }
//}