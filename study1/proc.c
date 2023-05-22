#include "proc.h"


#define SIZE 102
#define STYLE '='
#define ARR ">"

void process()
{
  const char *lable = "|/-\\";
   char bar[SIZE];
    memset(bar, '\0', sizeof(bar));
    int i = 0;
    while( i <= 100 )
    {
        printf("[\033[42;32;31m%-100s\033[0m][%d%%][%c]\r", bar, i, lable[i%4]);
        fflush(stdout);
        bar[i++] = STYLE;
      
        usleep(100000);//usleep是微秒，1秒等于1000000微秒
    }
    printf("\n");
}
