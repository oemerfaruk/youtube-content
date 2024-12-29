#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream inputFile("example.txt");

    if(inputFile.is_open()){
        string line;

        while(getline(inputFile, line)){
            cout << line << endl;
        }

        inputFile.close();
        
    }else{
        cout << "Dosya açılamadı!" << endl;
    }

    return 0;
}