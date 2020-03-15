////CCM에을 응용  왜안될까
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    double x1, x2, x3, x4, y1, y2, y3, y4;
//    cin >> x1 >> y1 >> x2 >> y2;
//    cin >> x3 >> y3 >> x4 >> y4;
//
//    double o1, o2, o3, o4;
//    o1 = x1 * y2 - x1 * y3 - x2 * y1 + x3 * y1 + x2 * y3 - x3 * y2;
//    o2 = x1 * y2 - x1 * y4 - x2 * y1 + x4 * y1 + x2 * y4 - x4 * y2;
//    o3 = x3 * y4 - x3 * y1 - x4 * y3 + x1 * y3 + x4 * y1 - x1 * y4;
//    o4 = x3 * y4 - x3 * y2 - x4 * y3 + x2 * y3 + x4 * y2 - x2 * y4;
//
//    if ((min(x1, x2) > max(x3, y4)) || (min(x3,x4) > max(x1,x2)) || (min(y1,y2) > max(y3,y4)) || (min(y3,y4)> max(y1,y2))) {
//        cout << 0 << endl;
//        return 0;
//    }
//    if (o1*o2 <= 0 && o3*o4 <= 0) {
//        cout << 1<<endl;
//        return 0;
//    }
//    else {
//        cout << 0<<endl;
//        return 0;
//    }
//}