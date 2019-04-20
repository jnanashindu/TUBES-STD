#ifndef LISTCHILD_H_INCLUDED
#define LISTCHILD_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define last(L) L.last
#define prev(P) P->prev
#define next(P) P->next
#define info(P) P->info
//#define child(P) P->child

typedef struct elmlist_childTahanan *address_childtahanan;

struct infotype_childTahanan{
    int id;
    int masa;
    int nomersel;
    string namakasus;
    string jeniskasus;
};

struct elmlist_childTahanan{
    infotype_childTahanan info;
    address_childtahanan next;
    address_childtahanan prev;
};

struct listchildTahanan{
    address_childtahanan first;
    address_childtahanan last;
};

void createList(listchildTahanan &L);
address_childtahanan alokasi(int id,string kasus,int masa,string namakasus, int nomersel);
void dealokasi(address_childtahanan &P);
address_childtahanan findElm(listchildTahanan L, int x);
void printInfo(listchildTahanan L);
void insertFirst(listchildTahanan &L, address_childtahanan P);
void insertLast(listchildTahanan &L, address_childtahanan P);
void insertAfter(listchildTahanan &L, address_childtahanan Prec, address_childtahanan P);
void deleteFirst(listchildTahanan &L, address_childtahanan &P);
void deleteLast(listchildTahanan &L, address_childtahanan &P);
void deleteAfter(address_childtahanan Prec, address_childtahanan &P);

#endif // LISTCHILD_H_INCLUDED
