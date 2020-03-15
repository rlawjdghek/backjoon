//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <stack>
//using namespace std;
//
//#define MAX_LEN int(1e+6)
//
//int arr[MAX_LEN + 1];
//
//bool isboundary(int i) {
//    return ((i <= MAX_LEN/10) && (i >= 0));
//}
//
//void findsister(int start,int target) {
//    int from = start;
//    queue<int> my_queue;
//    my_queue.push(from);
//    int count = 0;
//    while (true) {
//        from = my_queue.front();
//        count += 1;
//        if (from == target) {
//            break;
//        }
//        my_queue.pop();
//        /*cout << "중간점검 from " << from << endl;*/
//        if (arr[from - 1] == -1 && isboundary(from-1)) {
//            arr[from - 1] = from;
//            my_queue.push(from - 1);
//        }
//        if (arr[from + 1] == -1 && isboundary(from +1)) {
//            arr[from + 1] = from;
//            my_queue.push(from + 1);
//        }
//        if (arr[from * 2] == -1 && isboundary(from *2)) {
//            arr[from * 2] = from;
//            my_queue.push(from * 2);
//        }
//
//    }
//}
//
//int main(void) {
//    int sumin, sister;
//    cin >> sumin >> sister;
//    if (sumin == sister) {
//        cout << 1 << endl;
//        cout << sumin;
//    }
//    else {
//        for (int i = 0; i < MAX_LEN + 1; i++) {
//            arr[i] = -1;
//        }
//        findsister(sumin, sister);
//        /*for (int i = sumin; i <= sister; i++) {
//            cout << arr[i]<<" ";
//        }
//
//        cout << endl << endl << endl;*/
//
//
//        int to = sister;
//        stack<int> s_result;
//        s_result.push(to);
//        while (true) {
//            to = arr[to];
//            s_result.push(to);
//            if (to == sumin) {
//                break;
//            }
//        }
//        cout << s_result.size() - 1 << endl;
//        while (!s_result.empty()) {
//            cout << s_result.top() << " ";
//            s_result.pop();
//        }
//    }
//}