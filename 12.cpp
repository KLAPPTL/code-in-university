#include <stdio.h>
int main()
{
    char i,j,k;   /*i��a�Ķ��֣�j��b�Ķ��֣�k��c�Ķ���*/
    for(i='x';i<='z';i++)
    for(j='x';j<='z';j++)
    {
        if(i!=j)
        for(k='x';k<='z';k++)
        {
            if(i!=k && j!=k)
            {
                if(i!='x' && k!='x'&& k!='z')
                printf("order is a--%c\t b--%c\t c--%c\n",i,j,k);
            }
        }
    }
    return 0;
}