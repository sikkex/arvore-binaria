#include "arvore.h"

ArvNo* arv_criano (char c, ArvNo* esq, ArvNo* dir)
{
    ArvNo* p = (ArvNo*) malloc(sizeof(ArvNo));
    p->info = c;
    p->esq = esq;
    p->dir = dir;
    return p;
}

Arv* arv_cria (ArvNo* r)
{
    Arv* a = (Arv*) malloc(sizeof(Arv));
    a->raiz = r;
    return a;
}

static void imprime (ArvNo* r, int tab)
{
    for (int i = 0; i < tab; i++) {
        printf("-");
    }
    if (r != NULL) {
        printf("%c\n", r->info);                   /* mostra informação */
        imprime(r->esq, tab + 2);            /* imprime sae (sub árvore da esquerda) */
        printf("\n");
        imprime(r->dir, tab + 2);            /* imprime sad (sub árvore da direita) */
    } else printf("vazio");

}
void arv_imprime (Arv* a)
{
    imprime(a->raiz, 0);                    /* imprime recursivamente a partir da raiz */
}

static void libera (ArvNo* r)
{
    if (r != NULL) {
        libera(r->esq);                           /* libera a sae */
        libera(r->dir);                           /* libera a sad */
        free(r);
    }
}
void arv_libera (Arv* a)
{
    libera(a->raiz);                              /* libera hierarquia de nós */
    free(a);                                      /* libera raiz */
}

int main() {
    printf("\n");

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
    arv_imprime(arvore);

    printf("\n");
    return 0;
}