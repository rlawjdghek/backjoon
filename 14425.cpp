//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main(void) {
//    int N, M;
//    cin >> N >> M;
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    string temp;
//    map<string, int> string_list;
//    for (int i = 0; i < N; i++) {
//        cin >> temp;
//        string_list.insert({ temp, 0 });
//    }
//    int count = 0;
//    for (int i = 0; i < M; i++) {
//        cin >> temp;
//        if (string_list.count(temp)) {
//            count += 1;
//        }
//    }
//    cout << count << endl;
//}