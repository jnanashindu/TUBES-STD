#include "listchild.h"

void createList(listchildTahanan &L){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    first(L) = NULL;
    last(L) = NULL;
}

address_childtahanan alokasi(int id,string jeniskasus,int masa,string namakasus, int nomersel){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    address_childtahanan P = new elmlist_childTahanan;
    info(P).id = id;
    info(P).jeniskasus = jeniskasus;
    info(P).masa = masa;
    info(P).namakasus = namakasus;
    info(P).nomersel = nomersel;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void dealokasi(address_childtahanan &P){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    delete P;
}

address_childtahanan findElm(listchildTahanan L, int ID){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    address_childtahanan P = first(L);
    while(P != NULL){
        if(info(P).id == ID){
            return P;
        }
        else{
            P = next(P);
        }
    }
    return P;
}

void printInfo(listchildTahanan L){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    address_childtahanan P = first(L);
    if(P == NULL){
        cout<<"[Empty]"<<endl;
    }
    else{
        while(P != NULL){
            cout<<"ID           = "<<info(P).id<<endl;
            cout<<"Nama Kasus   = "<<info(P).namakasus<<endl;
            cout<<"Jenis Kasus  = "<<info(P).jeniskasus<<endl;
            cout<<"Masa Tahanan = "<<info(P).masa<<endl;
            cout<<"Nomer Sel    = "<<info(P).nomersel<<endl;
            P = next(P);
        }
    }
}

void insertFirst(listchildTahanan &L, address_childtahanan P){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    if((first(L) != NULL) &&(last(L) != NULL)){
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
    else{
        first(L) = P;
        last(L) = P;
    }
}
void insertLast(listchildTahanan &L, address_childtahanan P){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    if((first(L) != NULL) &&(last(L) != NULL)){
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
    else{
        first(L) = P;
        last(L) = P;
    }
}
void insertAfter(listchildTahanan &L, address_childtahanan Prec, address_childtahanan P){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    if(Prec != NULL){
        next(P) = next(Prec);
        next(Prec) = P;
        prev(next(P)) = P;
    }
}

void deleteFirst(listchildTahanan &L, address_childtahanan &P){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    if(first(L) != last(L)){
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
    else{
        first(L) = NULL;
        last(L) = NULL;
    }
}

void deleteLast(listchildTahanan &L, address_childtahanan &P){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    if(first(L) != last(L)){
        P = last(L);
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
    }
    else{
        first(L) = NULL;
        last(L) = NULL;
    }
}
void deleteAfter(listchildTahanan &L, address_childtahanan Prec, address_childtahanan &P){
/*Nama  : KOMANG JNANA SHINDU PUTRA
  NIM   : 1301184092
*/
    if(Prec != NULL){
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        prev(P) = NULL;
        next(P) = NULL;

    }
}
