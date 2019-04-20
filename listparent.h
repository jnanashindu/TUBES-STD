#ifndef LISTPARENT_H_INCLUDED
#define LISTPARENT_H_INCLUDED

//#include "listrelation.h"

#include <iostream>
using namespace std;

#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info

typedef struct Tahanan *address_tahanan;

struct infotype_tahanan {
    string nametahanan;
    string asaltahanan;
    int id;
    int umur;
    int NIK;
    string jeniskelamin;
};

struct Tahanan {
    infotype_tahanan info;
    address_tahanan next;
    address_tahanan prev;
};

struct listTahanan{
    address_tahanan first;
    address_tahanan last;
};

void createList(listTahanan &L);
address_tahanan alokasi(string asal,int idtahanan,string nama, string kelamin, int umur, int NIK);
void insertFirst(listTahanan &L, address_tahanan P);
void insertAfter(listTahanan &L, address_tahanan Prec, address_tahanan P);
void insertLast(listTahanan &L, address_tahanan P);
void deleteFirst(listTahanan &L, address_tahanan &P);
void deleteLast(listTahanan &L, address_tahanan &P);
void deleteAfter(listTahanan &L, address_tahanan Prec, address_tahanan &P);
void dealokasi(address_tahanan &P);
address_tahanan findElm(listTahanan L, int X);
void printInfo(listTahanan L);

#endif // LISTPARENT_H_INCLUDED
