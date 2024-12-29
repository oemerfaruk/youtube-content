#include<iostream>
using namespace std;

int main(){
    char grade;

    cout <<"Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Mükemmel!" << endl;
            break;
        case 'B':
            cout << "İyi iş" << endl;
            break;
        case 'C':
            cout << "Ortalama" << endl;
            break;
        case 'D':
            cout << "Çalışmalısınız" << endl;
            break;
        case 'F':
            cout << "Kaldınız" << endl;
            break;
        default:
            cout << "Geçersiz not girdiniz." << endl;
    }

    return 0;
}