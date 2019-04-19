#ifndef LISTCHILD_H_INCLUDED
#define LISTCHILD_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child

typedef struct elmlist_childTahanan *address_childtahanan;

struct infotype_childTahanan{
    int id;
    int masatahanan;
    int nomersel;
    string namakasus;
    string jeniskasus;
};

struct childTahanan{
    infotype_childTahanan info;
    address_childtahanan next;
};

struct listchildTahanan{
    address_childtahanan first;
};

void createList(listchildTahanan &L);
address_childtahanan alokasi(int id,string kasus,int masa,string namakasus, int nomersel);
void dealokasi(address_childtahanan &P);
address_childtahanan findElm(listchildTahanan L, infotype_childTahanan x);
void printInfo(listchildTahanan L);
void insertFirst(listchildTahanan &L, address_childtahanan P);
void insertLast(listchildTahanan &L, address_childtahanan P);
void insertAfter(address_childtahanan Prec, address_childtahanan P);
void deleteFirst(listchildTahanan &L, address_childtahanan &P);
void deleteLast(listchildTahanan &L, address_childtahanan &P);
void deleteAfter(address_childtahanan Prec, address_childtahanan &P);

#endif // LISTCHILD_H_INCLUDED
