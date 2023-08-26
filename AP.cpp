 #include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Term " << i + 1 << " of AP is: " << (3 * i + 7) << endl;
    }

    return 0;
}
