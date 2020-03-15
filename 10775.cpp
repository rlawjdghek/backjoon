//#include <iostream>
//using namespace std;
//
//#define MAX_LEN 100001
//
//int gate[MAX_LEN];
//
//int main(void) {
//    int n_gates;
//    int n_planes;
//    int plane;
//    int counter = 0;
//    int idx;
//    int post_idx;
//    cin >> n_gates;
//    cin >> n_planes;
//    for (int i = 1; i < MAX_LEN; i++) {
//        gate[i] = i;
//    }
//    for (int i = 0; i < n_planes; i++) {
//        cin >> plane;
//        idx = plane;
//        if (gate[plane] ==plane) {
//            gate[plane] -=1;
//            counter += 1;
//
//        }
//        else {
//            while (true) {
//                post_idx = idx;
//                idx = gate[idx];
//                if (idx == 0) {
//                    cout << counter;
//                    return 0;
//                }
//                if (gate[idx] == idx) {
//                    gate[idx] -= 1;
//                    gate[post_idx] = gate[idx];
//                    counter += 1;
//                    break;
//                }
//                
//            }
//
//        }
//        
//
//    }
//    cout << counter;
//}