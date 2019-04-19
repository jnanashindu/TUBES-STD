#include "listparent.h"

void createList(listTahanan &L){

    first(L) = NULL;
    next(P) = NULL;

}
address_tahanan alokasi(infotype_tahanan.asaltahanan asal, infotype_tahanan.id idtahanan, infotype_tahanan.nametahanan nama){

    address_tahanan P;
    P = new Tahanan;
    info(P).asaltahanan = asal;
    info(P).id = idtahanan;
    info(P).namatahanan = nama;
    next(P) = NULL;
    createList(child(P));
    return P;
}
void insertFirst(listTahanan &L, address_tahanan P){

    if (first(L) == NULL){
        first(L) = P;
        next(P) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}
void insertAfter(listTahanan &L, address_tahanan Prec, address_tahanan P){


}
void insertLast(listTahanan &L, address_tahanan P);
void deleteFirst(listTahanan &L, address_tahanan &P);
void deleteLast(listTahanan &L, address_tahanan &P);
void deleteAfter(listTahanan &L, address_tahanan Prec, address_tahanan &P);
void dealokasi(address_tahanan &P);
address_tahanan findElm(listTahanan L, infotype_tahanan.id X);
void printInfo(listTahanan L);
