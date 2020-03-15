//#include <iostream>
//#include <vector>
//using namespace std;
//#define MAX_LEN 100001
//
//int in[MAX_LEN];
//int post[MAX_LEN];
//int in_idx[MAX_LEN];
//void my_func(int in_start, int in_end, int post_start, int post_end) {
//    if (in_start > in_end || post_start > post_end) {
//        return;
//    }
//    int root = post[post_end];
//    cout << root<<" ";
//    my_func(in_start, in_idx[root] - 1, post_start, post_start+in_idx[root]-in_start -1);
//    my_func(in_idx[root] + 1, in_end, post_start + in_idx[root] - in_start , post_end - 1);
//}
//
//int main(void) {
//    int num;
//    cin >> num;
//    int temp;
//
//    for (int i = 0; i < num; i++) {
//        cin >> in[i];
//    }
//    for (int i = 0; i < num; i++) {
//        cin >> post[i];
//    }
//    for (int i = 0; i < num; i++) {
//        in_idx[in[i]] = i;
//
//    }
//    my_func(0, num - 1, 0, num - 1);
//    cout << endl;
//}