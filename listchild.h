#ifndef LISTCHILD_H_INCLUDED
#define LISTCHILD_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child

typedef string infotype_childtahanan;
typedef struct elmlist_childtahanan *address_childtahanan;

struct elmlist_childtahanan{
    infotype_childtahanan info;
    address_childtahanan next;
};

struct List_child{
    address_childtahanan first;
};

void createList(List_child &L);
address_child alokasi(infotype_child x);
void dealokasi(address_child &P);
address_child findElm(List_child L, infotype_child x);
void printInfo(List_child L);
void insertFirst(List_child &L, address_child P);
void insertLast(List_child &L, address_child P);
void insertAfter(address_child Prec, address_child P);
void deleteFirst(List_child &L, address_child &P);
void deleteLast(List_child &L, address_child &P);
void deleteAfter(address_child Prec, address_child &P);

#endif // LISTCHILD_H_INCLUDED
