#include <iostream>
#include <string.h>
using namespace std;
char *numero;
void revstr(char *str){
	int i =0, l=strlen(str);
	char tmp;
	while(i<l){
		tmp = str[i];
		str[i++] = str[--l];
		str[l] = tmp;
	}
}
char * conBase(int n, int b){
	char num [300];
	int j,i=0;
	do{
		j = n%b;
		num[i++] = (j<10) ? (j+'0') : (j+'A'-10);
	}while((n/=b)!=0);
	num[i] = '\0';
	revstr(num);
	return num;
}
bool esPalindromo(char *cadena, int tamano){
    for(int i = 0; i < tamano/2; i++)
        if(cadena[i] != cadena[tamano-i-1])
            return false;
    return true;
}

int main(){
    int cant,num;
    while(cin >> cant >> num){
        int cont = 0;
        ++num;
        while(cant > 0){
            for(int y=2;y<=10;y++){
                numero = conBase(num,y);
                if(esPalindromo(numero,strlen(numero)))
                    cont++;
                if(cont == 2) break;
            }
            if(cont >= 2){
                cout << num << endl;
                cant--;
            }
            cont = 0;
            num++;
        }
    }
}