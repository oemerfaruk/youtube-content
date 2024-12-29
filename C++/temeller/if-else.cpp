#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Yaşınızı girin: ";
    cin >> age;

    if(age >= 18){
        cout << "Siz bir yetişkinsiniz. " << age << " Yıl önce doğmuşsunuz" << endl;
    }
    else if(age<=0){
        cout << "Sen daha doğmamışsın..." << endl;

    }
    else{
        cout << "Sen bir veletsin. Evine git..." << endl;
    }


    return 0;
}