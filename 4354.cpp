//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int* make_ff(string word) {
//    int length = word.length();
//    int* fail_func = new int[length]();
//    for (int i = 1, j = 0; i < length; i++) {
//        while (j > 0 && word[i] != word[j]) {
//            j = fail_func[j - 1];
//
//        }
//        if (word[i] == word[j]) {
//            fail_func[i] = ++j;
//        }
//    }
//    return fail_func;
//
//}
//
//int main(void) {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string temp;
//    while (true) {
//        getline(cin, temp);
//        if (temp[0] == '.') {
//            return 0;
//        }
//        if (temp.length() ==0) {
//            cout << 0 << endl;
//        }
//        else {
//            if (make_ff(temp)[temp.length() - 1] % (temp.length() - make_ff(temp)[temp.length() - 1])) {
//                cout << 1 << endl;
//                continue;
//            }
//            cout << temp.length() / (temp.length() - make_ff(temp)[temp.length() - 1]) << "\n";
//        }
//    }
//}
