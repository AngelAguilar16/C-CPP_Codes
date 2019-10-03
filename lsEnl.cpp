#include <iostream>
#include <conio.h>

using namespace std;
void insertarL(Nodo *&, int);

struct nodo{
    int dato;
    Nodo *sig;
}

void insertarL(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux->dato < n)){
        aux2 = aux1;
        aux1 = aux1->sig;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->sig = nuevo_nodo;
    }

    nuevo_nodo->sig = aux1;

    cout<<"\tElemento "<<n<<" insertado a lista correctamente\n";
}

int main(){
    Nodo *lista = NULL;
    
    int dato;

    cout<<"Digite un valor: ";
    cin>>dato;
    insertarL(lista, dato);

    getch();
    return 0;
}
