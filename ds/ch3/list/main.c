#include "linked_list.h"
int main()
{
    int i;
    int a[] = {1,2,3,4,5,6,7,8,9};
    List l = initList();
    for(i=0;i<9;i++)
        append(l,*(a+i));
    printList(l);
}
