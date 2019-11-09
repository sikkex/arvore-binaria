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

static int pertence (ArvNo* r, char c)
{
    if (r == NULL)
        return 0;                                 /* árvore vazia: não encontrou */
    else
        return c==r->info ||
               pertence(r->esq, c) ||
               pertence(r->dir, c);

    /*
        return c==r->info ||
               pertence(r->esq, c) ||
               pertence(r->dir, c);

        é equivalente a:

        if (c == r->info)
            return 1;
        else if (pertence(r->esq, c))
            return 1;
        else
            return pertence(r->dir, c);
     */
}
int arv_pertence (Arv* a, char c)
{
    return pertence(a->raiz, c);
}

static ArvNo* busca (ArvNo* r, char c)
{
    if (r == NULL)
        return NULL;                        /* árvore vazia: não encontramos */
    else if (c == r->info)
        return r;
    else{
        ArvNo* p = busca(r->esq, c);        /* busca na sae */
        if (p != NULL)
            return p;                       /* encontrou na sae */
        else
            return busca(r->dir, c);        /* busca na sad */
    }
}
ArvNo* arv_busca (Arv* a, char c)
{
    return busca(a->raiz, c);
}

/* retorna a altura da árvore, -1 para árvore vazia */
static int max2 (int a, int b)
{
    return (a > b) ? a : b;
}
static int altura (ArvNo* r)
{
    if (r == NULL)
        return -1;
    else
        return 1 + max2(altura(r->esq), altura(r->dir));
}
int arv_altura (Arv* a)
{
    return altura(a->raiz);
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