#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
  pid_t p[argc];
  for(int i=1; i<argc; i++)
  {
    p[i]=fork();
    if(p[i]==0)
    {
      printf("i am child %d with %s\n",getpid(),argv[i]);
      return 0;
    }
  }
  return 0;
}