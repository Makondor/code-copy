#include "singlelinkedlist.h"
int main()
{
    ElementType a[] = {2,5,3,0,8,4,9,7,1,6};
    int i, arrlen = sizeof(a)/sizeof(ElementType);
    // ======= Init ======
    printf("Init list.\n");
    List l = initList();
    // ======= Inserting ======
    printf("Inserting");
    for(i = 0; i < arrlen; i++){
        printf(" %d", a[i]);
        insertToEnd(l,a[i]);
    }
    printf("\n");
    // ======= Print ======
    print(l);
    printf("\n");
    return 0;
}
