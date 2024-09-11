#include <iostream>
using namespace std;

string solve(int n, int arr[]) {
    string s = "";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            s += "even ";
        } else {
            s += "odd ";
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string result = solve(n, arr);
    cout << result << endl;

    return 0;
}
