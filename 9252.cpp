//#include <iostream>
//#include <string>
//using namespace std;
//
//#define max_len 1001
//string matrix[max_len][max_len];
//
//bool isboundary(int i, int j) {
//    return ((i >= 0 && j < max_len - 1) && (j >= 0 && j < max_len - 1));
//}
//
//string maxstr(string s1, string s2) {
//    int len1 = s1.length();
//    int len2 = s2.length();
//    return len1 > len2 ? s1 : s2;
//}
//
//void findsubset(string s1, string s2, int idx1, int idx2) {
//    if ((s1.substr(0, idx1 + 1)[idx1] == s2.substr(0, idx2 + 1)[idx2]) && (isboundary(idx1,idx2))){
//        matrix[idx1][idx2] = matrix[idx1-1][idx2-1] + s1.substr(0, idx1 + 1)[idx1];
//    }
//    else if(isboundary(idx1, idx2)) {
//        matrix[idx1][idx2] = maxstr(matrix[idx1 - 1][idx2], matrix[idx1][idx2-1]);
//    }
//}
//
//void showdata(int a, int b) {
//    for (int i = 0; i < a; i++) {
//        for (int j = 0; j < b; j++) {
//            cout << matrix[i][j] <<"   ";
//        }
//        cout << endl;
//    }
//}
//
//int main(void) {
//    string str1;
//    string str2;
//
//    cin >> str1;
//    cin >> str2;
//    if (str1[0] == str2[0]) {
//        matrix[0][0] = str1[0];
//    }
//    for (int i = 1; i < str1.length(); i++) {
//        if (str1[i] == str2[0]) {
//            matrix[i][0] = str1[i];
//        }
//        else {
//            matrix[i][0] = matrix[i - 1][0];
//        }
//    }
//    for (int i = 1; i < str2.length(); i++) {
//        if (str1[0] == str2[i]) {
//            matrix[0][i] = str2[i];
//        }
//        else {
//            matrix[0][i] = matrix[0][i - 1];
//        }
//    }
//    for (int i = 1; i < str1.length(); i++) {
//        for (int j = 1; j < str2.length(); j++) {
//            findsubset(str1, str2, i, j);
//        }
//    }
//    cout << matrix[str1.length() - 1][str2.length() - 1].length() << endl;
//    cout << matrix[str1.length() - 1][str2.length() - 1] << endl;
//
//}