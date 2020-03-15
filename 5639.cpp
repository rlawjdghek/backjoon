//#include <iostream>
//#include <vector>
//using namespace std;
//
//#define MAX_LEN 1000001
//
//int preorder[MAX_LEN];
//
//void postorder(const int& start, const int& end) {
//    if (start > end) return;
//
//
//    int root = preorder[start];
//    int right = end;
//
//    while (root < preorder[right]) {
//        right--;
//    }
//
//    postorder(start+1, right);
//    postorder(right+1, end);
//
//    cout << root << endl;
//
//}
//
//int main(void) {
//    int temp;
//    int counter = 0;
//    while (cin>>temp) {
//        preorder[counter++] = temp;
//    }
//    postorder(0, counter - 1);
//}