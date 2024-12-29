#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main(){
    ifstream inputFile("example.txt");

    if(inputFile.is_open()){
        stringstream buffer;
        buffer << inputFile.rdbuf();
        string content = buffer.str();

        cout << "Dosya içeriği:\n"<<content << endl;

        inputFile.close();
        
    }else{
        cout << "Dosya açılamadı!" << endl;
    }

    return 0;
}