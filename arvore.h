#include <stdlib.h>
#include <stdio.h>

// TAD para representar a árvore por completo.
typedef struct arvno ArvNo;
struct arvno {
    char info;
    ArvNo* esq;
    ArvNo* dir;
};

// TAD para o ponteiro que aponta para a raiz.
typedef struct arv Arv;
struct arv {
    ArvNo* raiz;
};

ArvNo* arv_criano (char c, ArvNo* esq, ArvNo* dir);
Arv* arv_cria (ArvNo* r);
void arv_imprime (Arv* a);
void arv_libera (Arv* a);
int arv_pertence (Arv* a, char c);
ArvNo* arv_busca (Arv* a, char c);
