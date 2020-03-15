//// failure function을 이용한 KMP
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <string>
//using namespace std;
//
//vector<int> results;
//int counter = 0;
//
//int* makeff(string str) {
//    int str_len = str.length();
//    int* failure_function = new int[str_len]();
//    for (int i = 1, j = 0; i < str_len; i++) {
//        while (j > 0 && str[i] != str[j]) {
//            j = failure_function[j - 1];
//        }
//        if (str[i] == str[j]) {
//            failure_function[i] = ++j;
//        }
//    }
//    return failure_function;
//}
//
//void KMP(string p_text, string p_pattern) {
//    int* failure_func = makeff(p_pattern);
//    int text_size = p_text.length();
//    int pattern_size = p_pattern.length();
//    for (int i = 0, j = 0; i < text_size; i++) {
//        while (j > 0 && p_text[i] != p_pattern[j]) {
//            j = failure_func[j - 1];
//        }
//        if (p_text[i] == p_pattern[j]) {
//            if (j == pattern_size - 1) {
//                counter += 1;
//                j = failure_func[j];
//                results.push_back(i - pattern_size + 2);
//
//            }
//
//            else {
//                j++;
//            }
//        }
//
//    }
//}
//
//int main(void) {
//    string text;
//    string pattern;
//    getline(cin, text);
//    getline(cin, pattern);
//    counter = 0;
//    KMP(text, pattern);
//    cout << counter << "\n";
//    for (int i = 0; i < counter; i++) {
//        cout << results[i] << "\n";
//    }
//
//}
