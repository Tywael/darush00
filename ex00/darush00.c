#include <unistd.h>
void rush(int x,int y){int n=y;char *s="-o |";while(n-->0){for(int i=x;i>0;i--)if(n==0||n==y-1)write(1,&s[(i==1)||(i==x)],1);else write(1,&s[(i==1)+(i==x)+2],1);write(1,"\n",1);}}

int main ()
{
    rush(0, 0);
    rush(1, 1);
    rush(2, 2);
    rush(3, 3);
    rush(4, 4);
    return (0);
}