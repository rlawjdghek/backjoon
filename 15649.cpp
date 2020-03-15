//#include <iostream>
//using namespace std;
//
//bool visited[8];
//int arr[8];
//int N, M;
//
//
//void dfs(int length) {
//    if (M == length) {
//        for (int i = 0; i < length; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }
//    for (int i = 1; i <= N; i++) {
//        if (visited[i]) {
//            continue;
//        }
//        visited[i] = true;
//        arr[length] = i;
//        dfs(length + 1);
//        visited[i] = false;
//
//    }
//
//}
//
//int main(void) {
//    cin >> N>>M;
//    dfs(0);
//}