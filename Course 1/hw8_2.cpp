#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        double distance;
        cin >> distance;
        double bike, walk;
        bike = distance / 3 + 27 + 23;
        walk = distance / 1.2;
        if (bike > walk)
            cout << "Walk" << endl;
        else if (walk > bike)
            cout << "Bike" << endl;
        else
            cout << "All" <<endl;
    }
    return 0;
}
