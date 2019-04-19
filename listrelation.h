#ifndef LISTRELATION_H_INCLUDED
#define LISTRELATION_H_INCLUDED

#include "listparent.h"
#include "listchild.h"

#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define child(P) P->child
#define parent(P) P->parent

typedef struct Relasi *addressRelasi;

struct Relasi{
    addressRelasi next;
    addressRelasi prev;
    address_tahanan parent;
    address_childtahanan child;

};

struct listRelasi{
    addressRelasi first;
    addressRelasi last;
};

void createList(listRelasi &L);
addressRelasi findElm(listRelasi L,address_childtahanan C, address_tahanan P);
void printInfo(listRelasi L);
addressRelasi alokasirelasi(address_childtahanan P, address_childtahanan C);
void dealokasirelasi(addressRelasi &P);
void insertFirst(listRelasi &L, addressRelasi P);
void insertLast(listRelasi &L, addressRelasi P);
void insertAfter(addressRelasi Prec, addressRelasi P);
void deleteFirst(listRelasi &L, addressRelasi &P);
void deleteLast(listRelasi &L, addressRelasi &P);
void deleteAfter(addressRelasi Prec, addressRelasi &P);


#endif // LISTRELATION_H_INCLUDED
