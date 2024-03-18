#include <iostream>
using namespace std;
void itc_num_print(int ch){
    cout << ch;
}
int itc_len_num(long long number){
    if(number == 0){
        return 1;
    }
    int rez = 0;
    while(number != 0){
        number /= 10;
        rez++;
    }
    return rez;
}
