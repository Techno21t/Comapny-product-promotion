#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;


void Logo(){
    std::cout << "Loading Please Wait";
    for (int i =1; i<=3; ++i){
        Sleep(1000);
        cout << "." <<flush;
        Sleep(1000);
        cout << "." <<flush;
        Sleep(1000);
        cout << "." <<flush;
        Sleep(1000);
        cout << "\b\b\b   \b\b\b" <<flush;
    }
    system("clear");

}

int main(){
    Logo();


}