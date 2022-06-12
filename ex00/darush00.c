#include <unistd.h>
void rush(x, y){char *s="-o |";for(int n=y;n>0;n--){s=(n==y-1)?s+2:s;s=(n==1&y>1)?s-2:s;for(int i=x;i>0;i--)write(1,&s[(i==1)|(i==x)],1);write(1,"\n",1);}}
int main ()
{   
    int x;
    int y = 0;
    while (y++ < 5){
        x = 0;
        while (x++ < 5)
            rush(x, y);}
    return (0);
}