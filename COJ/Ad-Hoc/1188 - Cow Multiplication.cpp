#include <iostream>
#include <string.h>
int main(){
    char num1[100],num2[100];
    std::cin >> num1 >> num2;
    int arreglo1[strlen(num1)],sum=0;;
    int arreglo2[strlen(num2)];
    for(int x=0;x<strlen(num1);x++)
        arreglo1[x] = num1[x]-'0';
    for(int y=0;y<strlen(num2);y++)
        arreglo2[y] = num2[y]-'0';
    for(int x=0;x<strlen(num1);x++){
        for(int y=0;y<strlen(num2);y++){
            sum+=arreglo1[x]*arreglo2[y];
        }
    }
    std::cout << sum;
}
