////KMP �˰��򿡼� failure function�� ���ҋ� ���� ���λ�� ���̻簡 ���� �ִ� ���̸� �̿�
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int* makeff(string pattern) {
//    int length = pattern.length();
//    int* fail_func = new int[length+1]();
//    for (int i = 1, j = 0; i < length; i++) {
//        while (j > 0 && pattern[i] != pattern[j]) {
//            j = fail_func[j - 1];
//        }
//        if (pattern[i] == pattern[j]) {
//            fail_func[i] = ++j;
//        }
//    }
//    return fail_func;
//}
//
//int main(void) {
//    int length;
//    string str;
//    cin >> length;
//    cin >> str;
//    int* fail_func = makeff(str);
//    cout << length - fail_func[length-1];
//
//}
