#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=8;
    int *p=(int*)&i;
    printf("%d��ʮ��������ʽ��%p\n",i,*p);
    i=-8;
    p=(int*)&i;
    printf("%d��ʮ��������ʽ��%p\n",i,*p);
    return 0;
}
