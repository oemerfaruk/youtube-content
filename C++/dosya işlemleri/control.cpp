#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("merhaba.txt");

    if(file.is_open()){
        cout << "Dosya Bulundu!" << endl;
        file.close();
        
    }else{
        cout << "Dosya Bulunamadı!" << endl;
    }

    return 0;
}