//#include <iostream>
//using namespace std;
//
//#define MAX_LEN 201
//int map[MAX_LEN][MAX_LEN];
//int uni_arr[MAX_LEN];
//int schedule[1001];
//
//int find(int x) {
//    if (x == uni_arr[x]) return x;
//    else return uni_arr[x] = find(uni_arr[x]);
//}
//
//void uni(int x, int y) {
//    if (x == y) return;
//    else {
//        x = find(x);
//        y = find(y);
//        if (x > y) uni_arr[x] = y;
//        else uni_arr[y] = x;
//    }
//}
//
//
//void showdata(int n) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << map[i][j];
//        }
//        cout << endl;
//    }
//}
//
//int main(void) {
//    int num_city;
//    int num_schedule;
//    int temp;
//    cin >> num_city;
//    cin>> num_schedule;
//
//  
//  
//
//    for (int i = 1; i <= num_city; i++) {
//        uni_arr[i] = i;
//    }
//
//
//    for (int i = 1; i <= num_city; i++) {
//        for (int j = 1; j <= num_city; j++) {
//            cin >> temp;
//            if (temp == 1) {
//                uni(i, j);
//            }
//        }
//    }
//    for (int i = 0; i < num_schedule; i++) {
//        cin >> schedule[i];
//    }
//
//
//    int parent = find(schedule[0]);
//    for (int i = 1; i < num_schedule; i++) {
//        if (parent != find(schedule[i])) {
//            cout << "NO" << endl;
//            return 0;
//        }
//    }
//    cout << "YES" << endl;
//    return 0;
//
//}