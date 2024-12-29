#include<iostream>
using namespace std;

// void greet(string name){
//     cout << "Merhaba " << name << endl;
// }

int sum(int a, int b){
    // int result = a + b;
    // return result;
    
    return a + b;
}

int main(){
    // string name;
    // cout << "Adınız: ";
    // cin >> name;

    // greet(name);

    int num1, num2;

    cout << "Birinci sayı: ";
    cin >> num1;

    cout << "İkinci sayı: ";
    cin >> num2;

    int result = sum(num1, num2);
    cout << "Toplam: " << result << endl;

    return 0;
}