//#include <iostream>
//using namespace std;
//#include <queue>
//#include <stack>
//
//#define MAX_LEN int(1e+7)
//
//int arr[MAX_LEN];
//
//int main(void) {
//    int target;
//    cin >> target;
//    for (int i = 1; i < target + 1; i++) {
//        arr[i] = -1;
//    }
//    queue<int> dq;
//    dq.push(1);
//    int temp;
//    while (true) {
//        temp = dq.front();
//        dq.pop();
//        if (arr[2 * temp] == -1) {
//            arr[2 * temp] = temp;
//            dq.push(2 * temp);
//        }
//        if (arr[3 * temp] == -1) {
//            arr[3 * temp] = temp;
//            dq.push(3 * temp);
//        }
//        if (arr[temp + 1] == -1) {
//            arr[temp + 1] = temp;
//            dq.push(temp + 1);
//        }
//        if ((2 * temp == target) || (3 * temp == target) || (temp + 1 == target)) {
//            break;
//        }
//
//    }
//    queue<int> my_queue;
//    temp = target;
//    int count = 0;
//    while (true) {
//        my_queue.push(temp);
//        if (temp == 1) {
//            break;
//        }
//        temp = arr[temp];
//        count += 1;
//        
//    }
//    cout << count << endl;
//    while (!my_queue.empty()) {
//        cout << my_queue.front()<<" ";
//        my_queue.pop();
//    }
//}