#ifndef LISTPARENT_H_INCLUDED
#define LISTPARENT_H_INCLUDED

#include "listrelation.h"

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child


typedef struct Tahanan *address_tahanan;

struct infotype_tahanan {
    string nametahanan, asaltahanan;
    id int;
};

struct Tahanan {
    infotype_tahanan info;
    address_tahanan next;
    List_Relasi child;
};

struct listTahanan{
    address_tahanan first;
};

void createList(listTahanan &L);
address_tahanan alokasi(infotype_tahanan.asaltahanan asal, infotype_tahanan.id idtahanan, infotype_tahanan.nametahanan nama);
void insertFirst(listTahanan &L, address_tahanan P);
void insertAfter(listTahanan &L, address_tahanan Prec, address_tahanan P);
void insertLast(listTahanan &L, address_tahanan P);
void deleteFirst(listTahanan &L, address_tahanan &P);
void deleteLast(listTahanan &L, address_tahanan &P);
void deleteAfter(listTahanan &L, address_tahanan Prec, address_tahanan &P);
void dealokasi(address_tahanan &P);
address_tahanan findElm(listTahanan L, infotype_tahanan.id X);
void printInfo(listTahanan L);

#endif // LISTPARENT_H_INCLUDED
