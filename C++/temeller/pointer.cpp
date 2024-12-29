#include<iostream>
using namespace std;

int main(){
    int age = 27;
    int* point = &age;

    cout << "Değişken: " << age << endl;
    cout << "Değişkenin adresi: " << &age << endl;
    cout << "Pointerın tuttuğu adres: " <<  point << endl;
    cout << "Pointerın gösterdiği değer: " << *point << endl;


    return 0;
}