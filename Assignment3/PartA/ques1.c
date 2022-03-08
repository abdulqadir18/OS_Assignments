#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
  char *args[]={"./ques1.sh",NULL};
  execvp(args[0],args);
  printf("end\n");
}