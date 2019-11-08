#include "arvore.h"

ArvNo* arv_criano(char c, ArvNo* esq, ArvNo* dir)
{
    ArvNo* p = (ArvNo*) malloc(sizeof(ArvNo));
    p->info = c;
    p->esq = esq;
    p->dir = dir;
    return p;
}

Arv* arv_cria(ArvNo* r)
{
    Arv* a = (Arv*) malloc(sizeof(Arv));
    a->raiz = r;
    return a;
}

int main() {

    Arv* arvore = arv_cria(
            arv_criano('a',
                    arv_criano('b', NULL,
                            arv_criano('d', NULL, NULL)
                            ),
                    arv_criano('c',
                            arv_criano('e', NULL, NULL),
                            arv_criano('f', NULL, NULL)
                            )
                            )
            );

    return 0;
}