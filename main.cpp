#include <iostream>

using namespace std;

int main(int argC, char *argv[]){
    cout<< argC<< endl;
    for (int i = 0; i< argC; i++){
        cout<< argv[i]<< endl;
    }
    cout <<"hola mundo"<< endl;
}