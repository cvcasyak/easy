#include "easy.h"
#include <iostream>
using namespace std;
void itc_name (){
    cout<<"Angelina";
}
void itc_fio (){
    itc_name();
    cout<<" "<< "Yakovleva"<<" "<<"Sergeevna";
}
int itc_abc(int num){
    int rez;
    if (num < 0){
        return num;
    }
    else{
        rez = num * -1;
        return rez;
    }
}
double itc_fabs(double num){
    double rez;
       if (num < 0){
        return num;
       }
       else{
            rez = num * -1;
            return rez;
       }
}
int itc_revnbr(int num){
     int rez = 0;
     while (num != 0){
        rez = rez * 10 + num % 10;
        num /= 10;
     }
     return rez;
}
