#include <stdio.h>
int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    
    if(m>=45) printf("%d %d", h, m-45);
    else if(h>0) printf("%d %d", h-1, 60+(m-45));
    else printf("%d %d", 23, 60+(m-45));
    return 0;
}