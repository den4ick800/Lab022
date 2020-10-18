#include <iostream>
using namespace std;
int main() {
    int x, y, z;
    cout << "Vvedite x,y,z\n";
    cin >> x >> y >> z;
    //Task 1
    if (x % 2 == 1 && y % 2 == 1) { cout << "Condition 1 is true\n"; }
    else cout << "Condition 1 is false\n";
    if ((x < 20 && y > 20) || (x > 20 && y < 20)) { cout << "Condition 2 is true\n"; }
    else cout << "Condition 2 is false\n";
    if (x == 0 || y == 0) { cout << "Condition 3 is true\n"; }
    else cout << "Condition 3 is false\n";
    if (x < 0 && y < 0 && z < 0) { cout << "Condition 4 is true\n"; }
    else cout << "Condition 4 is false\n";
    if ((x % 5 == 0 && y % 5 != 0 && z % 5 != 0) || (x % 5 != 0 && y % 5 == 0 && z % 5 != 0) ||
        (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)) { cout << "Condition 5 is true\n"; }
    else cout << "Condition 5 is false\n";
    if (x > 100 || y > 100 || z > 100) { cout << "Condition 6 is true\n"; }
    else cout << "Condition 6 is false\n";
    //Task 2
    pair<char, char> position;
    pair<char, char> position1;
    cout << "Vvedite position\n";
    cin >> position.first >> position.second;
    cout << "Vvedite position1\n";
    cin >> position1.first >> position1.second;
    if ((position.first == position1.first) || (position.second == position1.second)) { cout << "Ugroza\n"; }
    else cout << "vse ok\n";
    if (abs(position.first - position1.first) == abs(position.second - position1.second)) { cout << "Ugroza\n"; }
    else cout << "vse ok\n";
    if ((abs(position.first - position1.first) < 2) && (abs(position.second - position1.second) < 2)) {
        cout << "Ugroza\n";
    }
    else cout << "vse ok\n";
    if (((position.first == position1.first) || (position.second == position1.second)) ||
        (abs(position.first - position1.first) == abs(position.second - position1.second))) { cout << "Ugroza\n"; }
    else cout << "vse ok\n";
    if (abs(position.first - position1.first) == 1) { cout << "Ugroza\n"; }
    else cout << "vse ok\n";
    if ((abs(position.first - position1.first) == 1) && (abs(position.second - position1.second) == 1)) {
        cout << "Ugroza\n";
    }
    else cout << "vse ok\n";
    //Task3
    int n, p;
    for (int k = 1; k < 10; k++) {
        p = k * 7;
        cout << k << "*7=" << p << endl;
    }
    cout << "Vvedite n\n";
    cin >> n;
    for (int k = 1; k < 10; k++) {
        p = k * n;
        cout << k << "*" << n << "=" << p << endl;
    }
    //Task 4
    int s = 1;
    for (int i = 8; i < 16; i++) {
        s *= i;
    }
    cout << s << endl;
    int a;
    int q = 1;
    cout << "Vvedite a\n";
    cin >> a;
    if (a > 1 && a < 20) {
        for (int i = a; i < 21; i++) {
            q *= i;
        }
        cout << q << endl;
    }
    int b;
    cout<<"Vvedite b\n";
    cin>>b;
    int h = 1;
    if (b > 1 && b < 20) {
        for (int i = 1; i < b + 1;i++){
          h*=i;
        }
       cout<<h<<endl;
    }
    int a1,b1;
    cout<<"Vvedite a and b\n";
    cin>>a1>>b1;
    int r=1;
    if (b>=a){
        for (int i=a1;i<b1+1;i++) {
            r *= i;
        }
        cout<<r;
    }
}