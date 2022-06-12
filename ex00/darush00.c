// o = 111
// - = 45
// " " = 32
// | = 124
#include <unistd.h>

void rush(int x, int y)
{
    //int i = x;
    (void)y;
    int n=y;
    char *s = "-o |";
    while(n-->0)
    {
        for(int i=x;i>0;i--)
            if(n==0||n==y-1)write(1, &s[(i==0)+(i==x-1)], 1);
            else write(1, &s[(i==0)+(i==x-1)+2], 1);
        write(1,"\n",1);
    }
}

int main ()
{
    rush(4, 4);
    return (0);
}