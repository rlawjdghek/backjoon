//#include <iostream>
//#include <vector>
//using namespace std;
//
//#define MAX_LEN 26
//vector<pair<int, bool>> tree[MAX_LEN];
//
//
//void preorder(int root){
//    cout << char(root + 'A');
//    if (tree[root].size() == 2) {
//        preorder(tree[root][0].first);
//        preorder(tree[root][1].first);
//    }
//    else if (tree[root].size() && tree[root][0].second) {
//        preorder(tree[root][0].first);
//    }
//    else if (tree[root].size()) {
//        preorder(tree[root][0].first);
//    }
//}
//
//void postorder(int root) {
//    if (tree[root].size() == 2) {
//        postorder(tree[root][0].first);
//        postorder(tree[root][1].first);
//    }
//    else if (tree[root].size() && tree[root][0].second) {
//        postorder(tree[root][0].first);
//    }
//    else if (tree[root].size()) {
//        postorder(tree[root][0].first);
//    }
//    cout << char(root + 'A');
//}
//
//
//void inorder(int root) {
//    if (tree[root].size() == 2) {
//        inorder(tree[root][0].first);
//        cout << char(root + 'A');
//        inorder(tree[root][1].first);
//    }
//    else if (tree[root].size() && tree[root][0].second) {
//        inorder(tree[root][0].first);
//        cout << char(root + 'A');
//    }
//    else if (tree[root].size()) {
//        cout << char(root + 'A');
//        inorder(tree[root][0].first);
//    }
//    else {
//        cout << char(root + 'A');
//    }
//}
//int main(void) {
//    int n_nodes;
//    cin >> n_nodes;
//    char parent, left_child, right_child;
//    for (int i = 0; i < n_nodes; i++) {
//        cin >> parent >> left_child >> right_child;
//        if (left_child != '.') {
//            tree[parent - 'A'].push_back({ left_child - 'A', true });
//        }
//        if (right_child != '.') {
//            tree[parent - 'A'].push_back({ right_child - 'A', false });
//        }
//    }
//    preorder(0);
//    cout << endl;
//    inorder(0);
//    cout << endl;
//    postorder(0);
//}