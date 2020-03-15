//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//int arr_set[1000001];
//
//int find(int x) {
//    if (x == arr_set[x]) {
//        return x;
//    }
//    else {
//        return arr_set[x] = find(arr_set[x]);
//    }
//}
//    
//
//int main(void) {
//    int n_num, n_state;
//    scanf("%d %d", &n_num, &n_state);
//    for (int i = 0;i< n_num+1; i++) {
//        arr_set[i] = i;
//    }
//
//    int a, b, c;
//
//    for (int i = 0; i < n_state; i++) {
//        scanf("%d %d %d", &a, &b, &c);
//        if (a == 0) {
//            b = find(b);
//            c = find(c);
//            if (b > c) {
//                arr_set[b] = c;
//            }
//            else if (b < c) {
//                arr_set[c] = b;
//            }
//        }
//        else if(a==1) {
//            if (b == c) {
//                cout << "YES" << endl;
//                continue;
//            }
//            b = find(b);
//            c = find(c);
//            if (b == c) cout << "YES" << endl;
//            else cout << "NO" << endl;
//        }
//    }
//    return 0;
//}