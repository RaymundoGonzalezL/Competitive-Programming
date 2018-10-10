#include <iostream>
using namespace std;
int bubble_sort(int a[],int length){
    int i,j;
    int tmp;
    int swaps = 0;
    for(i=length;i>0;i--){
        for(j=0;j<i-1;j++){
            if(a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                swaps++;
            }
        }
    }
    return swaps;
}
int main(){
    int casos,casos2;
    cin >> casos;
    while(casos--){
        cin >> casos2;
        int arreglo[casos2];
        for(int x=0;x<casos2;x++)
            cin >> arreglo[x];
        cout << "Optimal train swapping takes " << bubble_sort(arreglo,casos2) << " swaps.\n";
    }
}
