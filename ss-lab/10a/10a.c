#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t child_pid;
child_pid = fork();
if (child_pid > 0)
{
printf("This is the parent process: %d. Sleep for a minute\n",getpid());
sleep (60);
}
else
{
printf("This is the child process: %d. Exit immediately\n",getpid());
exit(0);
}
system("ps -e -o pid,ppid,stat,cmd");
return 0;
}
