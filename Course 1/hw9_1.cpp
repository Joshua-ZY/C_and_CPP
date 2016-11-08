#include <iostream>
using namespace std;

int main() {
    char charlis[80];
    cin.getline(charlis, 80);
    int counta = 0, counte = 0, counti = 0, counto = 0, countu = 0;
    for (int i = 0; i < 90; i++){
        switch (charlis[i]){
            case 'a': counta++; break;
            case 'e': counte++; break;
            case 'i': counti++; break;
            case 'o': counto++; break;
            case 'u': countu++; break;

        }
    }
    cout << counta << ' ' << counte << ' ' << counti << ' ' << counto << ' ' << countu << endl;
}
