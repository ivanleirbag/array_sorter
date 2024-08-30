// array de 1 dimension de 100 elementos int, la cantidad de elem utiles
//puede variar entre 5 y 100
//hacer una funcion que ordene los elementos (solo los utiles) de mayor a menor
//para cargar el array incluir stdlib.h para usar la funcion random(1000)
//usar randomize() al inicializar la stdlib.h
//dde mayor a menor

#include <cstdlib>
#include <cstdio>
#include <time.h>

using namespace std;

int const arr_size = 100;
int arr[arr_size];
int *pA = &arr[0];
int N = 1000;

void arr_sorter(int *a, int size);

int main(){

    //------------Inicializo la random seed------------//
    srand(time(0));
    //------------Llenamos el array con valores aleatorios entre 0 y 100-------------//
    for (int i = 0; i < arr_size; i++){
        arr[i] = (rand()%N);
    }
    //-----------Contenido del array sin ordenar---------------/
    for (int i = 0; i<arr_size; i++){
        printf(" %*d", 5, arr[i]);
        if ((i+1)%10 == 0){
            printf("\n");
        }
    }
    printf("\n");

    arr_sorter(pA, arr_size);

    //-----------Contenido del array ordenado---------------/
    for (int i = 0; i<arr_size; i++){
        printf(" %*d", 5, arr[i]);
        if ((i+1)%10 == 0){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}

void arr_sorter(int *a, int size){
    int last = size-1;
    int temp;
    while(last > 0){
        int aux = 0;
        for (int i = 0; i < last; i++){
            if (*(a+i+1) > *(a+i)){
                temp = *(a+i+1);
                *(a+i+1) = *(i+a);
                *(i+a) = temp;
                aux = i;
            }
        }
        last = aux;
    }
    
}