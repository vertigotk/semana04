#include <iostream>
using namespace std;

int main()
{
    int arreglo[10] = {1,4,5,3,10,20,21,11,66,67};
    // variable de totales
    int total = 0;
    
    //bucle para sumar 
    for (auto i : arreglo) {
        total = total + i;
    }
    
    //muesttro el resultado 
    cout << "el total es:" << total <<endl;
    
}