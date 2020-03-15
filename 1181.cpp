//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<string> asd;
//
//bool comp(string s1, string s2) {
//    if (s1.length() == s2.length()) {
//        return s1 < s2;
//    }
//    return s1.length() < s2.length();
//
//}
//
//bool find(string s) {
//    for (int i = 0; i < asd.size(); i++) {
//        if (s == asd[i]) return true;
//    }
//    return false;
//}
//
//int main(void) {
//    int m;
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string temp;
//    cin >> m;
//    for (int i = 0; i < m; i++) {
//        cin >> temp;
//        if (!find(temp)) asd.push_back(temp);
//        
//    }
//    sort(asd.begin(), asd.end(),comp);
//    for (int i = 0; i < asd.size(); i++) {
//        cout << asd[i]<<"\n";
//    }
//}