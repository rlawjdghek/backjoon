//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//#include <queue>
//#include <stack>
//#include <vector>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//int a[50] = { 0 };
//
//void merge(int low, int mid, int high) {
//    int i, j, k, b[50];
//    i = low, j = low, k = mid + 1;
//    cout << i << " " << j << " " << k << " " << endl;
//    while (j <= mid && k <= high) {
//        if (a[j] < a[k]) { 
//            b[i] = a[j]; 
//            j++; 
//        }
//        else { 
//            b[i] = a[k]; 
//            k++; 
//        }
//        i++;
//    }
//    if (j > mid) {
//        for (int q = k; q <= high; q++) {
//            b[i] = a[q];
//            i++;
//        }
//
//    }
//    else {
//        for (int q = j; q <= mid; q++) {
//            b[i] = a[q];
//            i++;
//        }
//    }
//    for (int q = low; q <= high; q++) {
//        a[q] = b[q];
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
//    for (int i = 0; i <= 4; i++) {
//        cin >> a[i];
//    }
//    merge_sort(0, 4);
//    for (int i = 0; i <= 4; i++) {
//        cout << a[i];
//    }
//}