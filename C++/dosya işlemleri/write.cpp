#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outputFile("example.txt");

    if(outputFile.is_open()){
        outputFile << "Hello, World!\n";
        outputFile << "oemerfaruk.dev c++ dosya işlemleri\n";
        outputFile.close();

        cout << "metin dosyası başarıyla yazıldı..." << endl;
    }else{
        cout << "Dosya açılamadı!" << endl;
    }

    return 0;
}