#include<stdio.h> 
#include<unistd.h>

int main() 
{
  pid_t id = fork();

  if(id == 0)
  {
    while(1)
    {
      printf("我是子进程，我在运行，pid：%d,ppid：%d\n",getpid(),getppid());
      sleep(1);
    }
  }
  else if(id > 0) 
  {
    while(1)
    {
      printf("我是父进程，我在运行，pid：%d,ppid：%d\n",getpid(),getppid());
      sleep(1);
    }
  }
  return 0;
}

