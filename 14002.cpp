//#include <iostream>
//#include <stack>
//using namespace std;
//
//#define MAX_LEN 1000005
//
//int arr[3][MAX_LEN];
//
//void ShowDara(int length) {
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < length; j++) {
//            cout <<arr[i][j] << "  ";
//        }
//        cout << endl;
//    }
//}
//
//int main(void) {
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++) {
//        cin >> arr[0][i];
//    }
//    for (int i = 0; i < length; i++) {
//        arr[1][i] = 1;
//        arr[2][i] = 0;
//    }
//    int idx = 0, good_length=1, good_idx=0, best_length = 0,best_idx=0;
//    for (int i = 0; i < length; i++) {
//        good_length = 1;
//        good_idx = -1;
//        for (int j = i-1; j > -1; j--) {
//            if ((arr[0][i] > arr[0][j]) && (good_length <= arr[1][j])) {
//                good_length = arr[1][j] + 1;
//                good_idx = j;
//            }
//            else {
//
//            }
//        }
//        arr[1][i] = good_length;
//        arr[2][i] = good_idx;
//        if (best_length < good_length) {
//            best_length = good_length;
//            best_idx = i;
//        }
//    }
//    stack<int> my_stack;
//    idx = best_idx;
//    while (idx != -1) {
//        my_stack.push(arr[0][idx]);
//        idx = arr[2][idx];
//    }
//    cout << best_length << endl;
//    while (!my_stack.empty()) {
//        cout << my_stack.top() << " ";
//        my_stack.pop();
//    }
//}
