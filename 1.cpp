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
    if (num < 0){
        return -num;
    }
    return num;
}
double itc_fabs(double num){
       if (num < 0){
        return -num;
       }
       return num;
}
int itc_revnbr(int num){
     int pol = 0;
     while (num != 0){
        pol = pol * 10 + num % 10;
        num /= 10;
     }
     return pol;
}
