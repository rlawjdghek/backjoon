////다른사람 풀이보면 다 틀렷는데 맞췄다고 되어있음 특히 L R연산이 잘못되어 있다. 이걸 맞게 고치면 시간초과
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <queue>
//#include <cstdio>
//using namespace std;
//
//#define MAX_LEN 10000
//
//string arr[MAX_LEN];
//
//bool isboundary(int n) {
//    return ((n < MAX_LEN) && (n >= 0));
//}
//int D(int num) {
//    return (2 * num) % 10000;
//}
//int S(int num) {
//    if (num == 0)
//        return 9999;
//    return num - 1;
//}
//
//int L(int a) {
//    return (a % 1000) * 10 + (a / 1000);
//}
//
//
//int R(int num) {
//    int result = 0;
//    int mul[4] = { 100, 10, 1, 1000 };
//    int j = 0;
//
//    for (int i = 1000; i > 0; i /= 10) {
//        result += num / i * mul[j++];
//        num = num % i;
//    }
//    return result;
//}
//
//int main(void) {
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        int qwe[MAX_LEN];
//        for (int i = 0; i < MAX_LEN; i++) {
//            qwe[i] = 0;
//        }
//        int start, target;
//        cin >> start >> target;
//        for (int i = 0; i < MAX_LEN; i++) {
//            arr[i] = "";
//        }
//        int from = start;
//        queue<int> my_queue;
//        my_queue.push(from);
//        qwe[from] = 1;
//        while (true) {
//            from = my_queue.front();
//            my_queue.pop();
//            cout << from << endl;
//            if (isboundary(S(from))) {
//                if (qwe[S(from)] ==0) {
//                    qwe[S(from)] = 1;
//                    arr[S(from)] = arr[from] + "S";
//                    my_queue.push(S(from));
//                }
//            }
//            cout << from << endl;
//            if (isboundary(L(from))) {
//                if (qwe[L(from)] ==0) {
//                    qwe[L(from)] = 1;
//                    arr[L(from)] = arr[from] + "L";
//                    my_queue.push(L(from));
//                }
//            }
//            cout << from << endl;
//            if (isboundary(R(from))) {
//                if (qwe[R(from)] ==0) {
//                    qwe[R(from)] = 1;
//                    arr[R(from)] = arr[from] + "R";
//                    my_queue.push(R(from));
//                }
//            }
//            cout << from << endl;
//            if (isboundary(D(from))) {
//                if (qwe[D(from)] ==0) {
//                    qwe[D(from)] = 1;
//                    arr[D(from)] = arr[from] + "D";
//                    my_queue.push(D(from));
//                }
//            }
//            if (D(from) == target || S(from) == target || L(from) == target || R(from) == target) {
//                break;
//            }
//            
//
//        }
//        cout << arr[target] << endl;
//    }
//    int asd = 1;
//    int qwe = L(asd);
//    cout << qwe;
//}

