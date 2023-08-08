#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

  pid_t ret = fork();
  if(ret == 0)
  {
    while(1)
    {
      printf("我是一个子进程，我的pid是:%d,我的父进程是：%d\n",getpid(),getppid());
      sleep(1);
    }
  }
  else if(ret > 0)
  {
    while(1)
    {
      printf("我是一个父进程，我的pid是：%d,我的父进程是：%d\n",getpid(),getppid());
      sleep(2);
    }
  }
  else
  {}
//  while(1)
//  {
//    printf("hello process, 我已经是一个进程了，我都pid是: %d ,我的父进程是: %d\n",getpid(),getppid());
//    sleep(1); 
//  }
  return 0;
}
