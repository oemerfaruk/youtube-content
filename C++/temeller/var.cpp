#include<iostream>
using namespace std;

int main(){
    int age = 25;
    float pi = 3.14;
    char grade = 'A';
    bool isAdult = true;

    cout << "Yaş: " << age << endl;
    cout << "Pi: " << pi << endl;

    float result = age / pi;

    cout << "Sonuç: " << result << endl;

    cout << "Yetişkin mi? " << (isAdult ? "Evet" : "Hayır") << endl;

    return 0;
}