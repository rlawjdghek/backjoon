//#include <iostream>
//#include <map>
//#include <vector>
//#include <string>
//using namespace std;
//
//struct Node {
//    map<string, Node> child;
//}root;
//
//
//void insert(Node& p_node, vector<string>& p_vec, int floor = 0) {
//    if (p_vec.size() == floor) return;
//    if (!p_node.child.count(p_vec[floor])) {
//        p_node.child[p_vec[floor]] = Node();
//
//    }
//    insert(p_node.child[p_vec[floor]], p_vec, floor + 1);
//
//}
//
//
//void dfs(Node& root, int floor = 0) {
//    for (auto i : root.child) {
//        for (int j = 0; j < floor; j++) {
//            cout << "--";
//        }
//        cout << i.first << endl;
//        dfs(i.second, floor + 1);
//    }
//}
//
//
//int main(void) {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int k; cin >> k;
//        vector<string> room_list(k);
//        for (int j = 0; j < k; j++) {
//            cin >> room_list[j];
//        }
//        insert(root, room_list);
//    }
//
//    dfs(root);
//}