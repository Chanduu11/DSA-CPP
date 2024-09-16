#include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> d >> n;

    int N = 0, s1 = 0, s2 = 0;
    int flag = 0;  

    while (n > 0) {
        if (flag == 0) {
            s1 = s1 + (n % 10);  
        } else {
            s2 = s2 + (n % 10); 
        }
        n = n / 10;  
        N++;  
        flag = !flag;  
    }

    int even, odd;
    if (N % 2 == 0) {
        even = s1;
        odd = s2;
    } else {
        even = s2;
        odd = s1;
    }

    if (d % 2 != 0) {
        cout << even;  
    } else {
        cout << odd; 
    }

    return 0;
}
