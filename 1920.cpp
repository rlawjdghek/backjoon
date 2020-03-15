//#include <iostream>
//
//using namespace std;
//
//
//int arr[100001];
//int length;
//
//
//
//
//bool find(int target) {
//    int start = 0;
//    int end = length - 1;
//    while (start <= end) {
//        int mid = (start + end) / 2;
//        if (arr[mid] == target) return true;
//        else if (arr[mid] > target) end = mid-1;
//        else start = mid+1;
//    }
//    return false;
//}
//
//void merge(int low, int mid, int high) {
//    int i, j, k, b[100001];
//    i = low, j = low, k = mid + 1;
//    while (j <= mid && k <= high) {
//        if (arr[j] < arr[k]) { b[i] = arr[j]; j++; }
//        else { b[i] = arr[k]; k++; }
//        i++;
//    }
//    if (j > mid) {
//        for (int q = k; q <= high; q++) {
//            b[i] = arr[q]; i++;
//        }
//
//    }
//    else {
//        for (int q = j; q <= mid; q++) {
//            b[i] = arr[q]; i++;
//            
//        }
//    }
//    for (int q = low; q <= high; q++) {
//        arr[q] = b[q];
//    }
//}
//
//void merge_sort(int start, int end) {
//    int mid;
//    if (start < end) {
//        mid = (start + end) / 2;
//        merge_sort(start, mid);
//        merge_sort(mid + 1, end);
//        merge(start, mid, end);
//    }
//}
//
//
//
//int main(void) {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> length;
//    for (int i = 0; i < length; i++) {
//        cin >> arr[i];
//    }
//    merge_sort(0, length - 1);
//    int asd,temp;
//    cin >> asd;
//    for (int i = 0; i < asd; i++) {
//        cin >> temp;
//        if (find(temp)) cout << 1<<"\n";
//        else cout << 0 << "\n";
//    }
//}