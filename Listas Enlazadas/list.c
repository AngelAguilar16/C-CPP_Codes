#include <stdio.h>
#include <stdlib.h>
 
typedef struct snodo{ 
    int valor;
    struct snodo *sig; 
}tnodo; 
 
typedef tnodo *tpuntero; 
 
void insertarEnLista (tpuntero *head, int e);
void imprimirLista (tpuntero head);
void borrarLista (tpuntero *head);
 
int main(){
    int e,op;
    tpuntero head; 
    head = NULL; 
    while(op != 4){
        printf("\n\n\t\tMenu\n\n");
        printf("1) Ingresar datos\n");
        printf("2) Mostrar datos\n");
        printf("3) Eliminar datos\n");
        printf("4) Salir\n");
        printf("Ingresa tu opcion: ");
        scanf("%d", &op);
        switch (op){
            case 1:
                printf("Ingrese elementos, -1 para terminar: ");
                scanf("%d",&e);
        
                while(e!=-1){
                    insertarEnLista (&head, e);
                    printf ("Ingresado correctamente el valor %d", e);
                    printf ("\n");
                    printf("Ingrese elementos, -1 para terminar: ");
                    scanf("%d",&e);
                }
                break;
            case 2:
                printf ("\nSe imprime la lista: ");
                imprimirLista (head);
                break;
            case 3:
                printf("Ingrese elemento a borrar: ");
                scanf("%d",&e);
                borrarDato(e);
                break;

            default:
                break;
        }
    }
     
    printf ("\n");
    return 0;
}
 
 
void insertarEnLista (tpuntero *head, int e){
    tpuntero nuevo;
    nuevo = malloc(sizeof(tnodo));
    nuevo->valor = e;
    nuevo->sig = *head;
    *head = nuevo;
}
 
void imprimirLista(tpuntero head){
    while(head != NULL){
        printf("%4d",head->valor);
        head = head->sig;
    }
}
 
void borrarLista(tpuntero *head){ 
    tpuntero actual;
  
    while(*head != NULL){
        actual = *head;
        *head = (*head)->sig;
        free(actual);
    }
}

void borrarDato(tpuntero *head){
    tpuntero actual;

    if(*head != NULL){
        actual = *head;
        *head = (*head)->sig;
        free(actual);
    }
}
