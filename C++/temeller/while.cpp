#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // while(number != 0){
    //     cout << number << endl;
    //     number--;
    // }

    do{
        cout << number << endl;
        number--;
    }while(number != 0);

    return 0;
}