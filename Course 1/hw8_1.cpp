#include <iostream>

using namespace std;

int main(){
    int a; int num; int sum = 0;
    cin >> a;
    for (int i = 0; i < 5; i++){
        cin >> num;
        if (num < a)
            sum += num;
    }
    cout << sum << endl;
    return 0;
}
