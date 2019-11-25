#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node *prev;
    int n;
    struct node *next;
}*h,*temp,*temp1,*temp2,*temp4;

void insertComienzo();
void insertFinal();
void insertI();
void imprimirListaInicio();
void imprimirListaFinal(int);
void ordenar();
void buscar();
void update();
void eliminar();

int count = 0;

int main(void){
    int ch;
    h = NULL;
    temp = temp1 = NULL;

    printf("\n1) Insertar al comienzo");
    printf("\n2) Insertar al final");
    printf("\n3) Insertar en la posición del valor i(Primera encontrada)");
    printf("\n4) Eliminar en la posición del valor i(Primera encontrada)");
    printf("\n5) Mostrar desde el principio");
    printf("\n6) Mostrar desde el final");
    printf("\n7) Buscar un elemento");
    printf("\n8) Ordenar la lista");
    printf("\n9) Actualizar un elemento");
    printf("\n10) Salir");

    while (1){
        printf("\nIngrese opción : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertComienzo();
            break;
        case 2:
            insertFinal();
            break;
        case 3:
            insertI();
            break;
        case 4:
            eliminar();
            break;
        case 5:
            imprimirListaInicio();
            break;
        case 6:
            temp2 = h;
            if (temp2 == NULL)
                printf("\nError - Lista vacia");
            else
            {
                printf("\nEl orden invertido de la lista enlazada es: ");
                imprimirListaFinal(temp2->n);
            }
            break;
        case 7:
            buscar();
            break;
        case 8:
            ordenar();
            break;
        case 9:
            update();
            break;
        case 10:
            exit(0);
        default:
            printf("\nElección inexistente");
            break;
        }
    }


    return 0;
}

/* Para crear un nodo vacio*/
void create(){
    int data;

    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\nIngrese el valor al nodo: ");
    scanf("%d", &data);
    temp->n = data;
    count++;
}

/*  Para insertar al comienzo*/
void insertComienzo(){
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}

/*  Para insertar al final*/
void insertFinal(){
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

/* Para insertar en cualquier posición*/
void insertI(){
    int pos, i = 2;

    printf("\nIngrese la posición donde será insertado el nodo: ");
    scanf("%d", &pos);
    temp2 = h;

    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\nPosición para insertar fuera de rango");
        return;
    }
    if ((h == NULL) && (pos != 1))
    {
        printf("\nEn la lista vacia no se puede insertar más que en la primera posición");
        return;
    }
    if ((h == NULL) && (pos == 1))
    {
        create();
        h = temp;
        temp1 = h;
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        create();
        temp->prev = temp2;
        temp->next = temp2->next;
        temp2->next->prev = temp;
        temp2->next = temp;
    }
}

/* Para eliminar un elemento */
void eliminar(){
    int i = 1, pos;

    printf("\nIngrese la posición del nodo a ser eliminado: ");
    scanf("%d", &pos);
    temp2 = h;

    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\nError - Posición a eliminar fuera de rango");
        return;
    }
    if (h == NULL)
    {
        printf("\nError - Lista vacia, no hay elementos que eliminar");
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        if (i == 1)
        {
            if (temp2->next == NULL)
            {
                printf("Nodo eliminado de la lista");
                free(temp2);
                temp2 = h = NULL;
                return;
            }
        }
        if (temp2->next == NULL)
        {
            temp2->prev->next = NULL;
            free(temp2);
            printf("Nodo eliminado de la lista");
            return;
        }
        temp2->next->prev = temp2->prev;
        if (i != 1)
            temp2->prev->next = temp2->next;    /* Esto no será necesario si vale i == 1  */
        if (i == 1)
            h = temp2->next;
        printf("\nNodo eliminado");
        free(temp2);
    }
    count--;
}

/* Traverse desde el comienzo*/
void imprimirListaInicio(){
    temp2 = h;

    if (temp2 == NULL)
    {
        printf("\nLa lista a mostrar esta vacia ");
        return;
    }
    printf("\nElementos de la lista enlazada desde el comienzo: ");

    while (temp2->next != NULL)
    {
        printf(" %d ", temp2->n);
        temp2 = temp2->next;
    }
    printf(" %d ", temp2->n);
}

/* To traverse from end recursively */
void imprimirListaFinal(int i){
    if (temp2 != NULL)
    {
        i = temp2->n;
        temp2 = temp2->next;
        imprimirListaFinal(i);
        printf(" %d ", i);
    }
}

/* Para buscar un elemento de la lista */
void buscar(){
    int data, count = 0;
    temp2 = h;

    if (temp2 == NULL)
    {
        printf("\nError - La lista esta vacía para buscar datos");
        return;
    }
    printf("\nIngrese el valor a buscar: ");
    scanf("%d", &data);
    while (temp2 != NULL)
    {
        if (temp2->n == data)
        {
            printf("\nDato encontrado en la posición %d ",count + 1);
            return;
        }
        else
             temp2 = temp2->next;
            count++;
    }
    printf("\nError - %d no fue encontrado en la lista", data);
}

/* Para actualizar el valor de un nodo en la lista*/
void update(){
    int data, data1;

    printf("\nIngrese el nodo a ser actualizado: ");
    scanf("%d", &data);
    printf("\nIngrese el nuevo dato: ");
    scanf("%d", &data1);
    temp2 = h;
    if (temp2 == NULL)
    {
        printf("\nError - Lista vacia, no hay nodo que actualizar");
        return;
    }
    while (temp2 != NULL)
    {
        if (temp2->n == data)
        {

            temp2->n = data1;
            imprimirListaInicio();
            return;
        }
        else
            temp2 = temp2->next;
    }

    printf("\nError - %d no fue encontado en la lista para actualizarlo", data);
}

/* Para ordenar la lista enlazada */
void ordenar(){
    int x;

    temp2 = h;
    temp4 = h;

    if (temp2 == NULL)
    {
        printf("\nLa lista esta vacia para ordenar");
        return;
    }

    for (temp2 = h; temp2 != NULL; temp2 = temp2->next)
    {
        for (temp4 = temp2->next; temp4 != NULL; temp4 = temp4->next)
        {
            if (temp2->n > temp4->n)
            {
                x = temp2->n;
                temp2->n = temp4->n;
                temp4->n = x;
            }
        }
    }
    imprimirListaInicio();
}
