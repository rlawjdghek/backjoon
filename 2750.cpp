//#include <iostream>
//using namespace std;
//
//int arr[1001];
//
//
//void swap(int& num1, int& num2) {
//    int temp = num1;
//    num1 = num2;
//    num2 = temp;
//}
//
//void bubble(int length) {
//    for (int i = 0; i < length-1; i++) {
//        for (int j = 1; j < length-i; j++) {
//            if (arr[j - 1] > arr[j]) {
//                swap(arr[j - 1], arr[j]);
//            }
//        }
//    }
//}
//
//int main(void) {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    bubble(n);
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << endl;;
//;   }
//}