//#include <iostream>
//using namespace std;
//
//#define MAX_LEN 1000001
//int arr[MAX_LEN];
//int arr2[MAX_LEN];
//
//void merge(int start, int mid,int end) {
//    int i, j, k;
//    i = start; j = start; k = mid + 1;
//    while (j <= mid && k <= end) {
//        if (arr[j] > arr[k]) {
//            arr2[i++] = arr[k++];
//        }
//        else {
//            arr2[i++] = arr[j++];
//        }
//    }
//    if (j <= mid) {
//        for (int q = j; q <= mid; q++) {
//            arr2[i++] = arr[q];
//        }
//    }
//    if (k <= end) {
//        for (int q = k; q <= end; q++) {
//            arr2[i++] = arr[q];
//        }
//    }
//    for (int q = start; q <= end; q++) {
//        arr[q] = arr2[q];
//    }
//}
//
//void mergesort(int start, int end) {
//    int mid = (start + end) / 2;
//    if (start < end) {
//        mergesort(start, mid);
//        mergesort(mid + 1, end);
//        merge(start, mid, end);
//
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
//    mergesort(0, n-1);
//    for (int i = 0; i < n; i++) {
//        cout<< arr[i] << "\n";
//    }
//}