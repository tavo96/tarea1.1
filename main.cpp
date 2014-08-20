// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
using namespace std;


//devuelve el primer elemento de "mi_cola"
string getPrimerElemento(queue<string> mi_cola)

{

    return mi_cola.front(); //Funcion que devuelve el primer elemento
}

//devuelve la cantidad de elementos de "mi_cola"
int getTamano(queue<string> mi_cola)
{
    return mi_cola.size();//Funcion que devuleve el tamaño de la cola
}

//devuelve true si "str" esta dentro de "mi_cola" de lo contrario devuelve false
bool existeEnCola(queue<string> mi_cola, string str)
{
    for(int i=0; i<mi_cola.size(); i++){ //ciclo que recorre la cola
        if (mi_cola.front()==str){//buscamos el elemento str
            return true;
        }
        mi_cola.pop();
     }


    return false;
}

//devuelve el elemento mayor de "mi_cola"
int getMayor(queue<int> mi_cola)
{
    int m=-9999; //creamois una variable para ir comparando los elementos de la cola
    while(mi_cola.empty()==false) //cuando mi cola esta vacia retornamos falso
    {
         if(mi_cola.front()>m) //si el valor de la cola es mayor a m int se remplazara por el valor de la cola
         {
              m=mi_cola.front();
          }
         mi_cola.pop();
    }
    return m; //devolvemos el numero mayor
}

//devuelve el elemento menor de "mi_cola"
int getMenor(queue<int> mi_cola)
{
    int m=10000;      //creamois una variable para ir comparando los elementos de la cola
    while(mi_cola.empty()==false) //cuando mi cola esta vacia retornamos falso
    {
         if(mi_cola.front()<m)//si el valor de la cola es menor a m int se remplazara por el valor de la cola
         {
              m=mi_cola.front();
          }
         mi_cola.pop();
    }
    return m;//retornamos el numero menor
}

//devuelve el promedio de todos los elementos de "mi_cola"
float getPromedio(queue<float> mi_cola)
{
    float c= mi_cola.size(),t=0; //creamos 2 variables c que tiene el tamaño de la cola y t como variable temporal



    while(mi_cola.empty()==false)//cuando mi cola esta vacia retornamos falso
    {
        t= t + mi_cola.front(); //sumamos los elementos de mi cola

        mi_cola.pop();
    }
    return t/c;//retornamos la suma y lo dividimos con el tamaño

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
