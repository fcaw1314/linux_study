#include <stdio.h>
#include <unistd.h>
int main()
{
  pid_t ret = fork();
  if(ret == 0)
  {
    while(1)
    {
    printf("我是子进程，我的pid是:%d ，我的父进程是：%d\n",getpid(),getppid());
    sleep(1);
     }
  }
  else if(ret >0)
  {
    while(1)
    {
    printf("我是父进程，我的pid是:%d,我的父进程是：%d\n",getpid(),getppid());
    sleep(1);
     }
  }
//  int count = 0;
//  while(1)
//  {
//    printf("我在运行吗？?,%d\n",count++);
//    sleep(1);
//  }
}
