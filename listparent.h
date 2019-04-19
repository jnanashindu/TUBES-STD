#ifndef LISTPARENT_H_INCLUDED
#define LISTPARENT_H_INCLUDED

#include "listrelation.h"

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child

typedef string infotype_parent;
typedef struct elmlistparent *address_parent;

struct elmlistparent {

infotype_parent info;
List_Relasi address;

};




#endif // LISTPARENT_H_INCLUDED
