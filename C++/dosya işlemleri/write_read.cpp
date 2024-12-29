#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream file("data.txt", ios::out | ios::in | ios::trunc);

    if(file.is_open()){
        file << "Kahve Kokan Fizikçi ile C++'da dosya işlemleri.\n";
        file << "oemerfaruk.dev ile kahve kokan fizikçi aynı kişidir.\n";

        file.seekg(0);

        string line;
        while(getline(file,line)){
            cout << line << endl;
        }
        file.close();

    }else{
        cout << "Dosya açılamadı..." << endl;
    }

    return 0;
}