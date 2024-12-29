#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outputFile("example.txt", ios::app);

    if(outputFile.is_open()){
        outputFile << "Yeni bir satır eklendi!\n";
        outputFile.close();

        cout << "metin dosyası başarıyla yazıldı..." << endl;
    }else{
        cout << "Dosya açılamadı!" << endl;
    }

    return 0;
}