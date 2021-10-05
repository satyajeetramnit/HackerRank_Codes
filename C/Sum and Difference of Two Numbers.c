#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,m,n;
    scanf("%d%d",&a,&b);
    double c,d,x,y;
    scanf("%lf%lf",&c,&d);
    
    m=a+b;
    n=a-b;
    x=c+d;
    y=c-d;
    
    printf("%d %d\n%.1lf %.1lf",m,n,x,y);
    return 0;
}
