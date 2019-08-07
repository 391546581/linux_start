#include<stdio.h>
#include<conio.h>
#include <unistd.h>
#include <signal.h> 

int pipe(int fd[2]);

int main(){
    printf("hello world");
char b;
while(1){
    scanf("%c",&b);
    printf("%c",b);
}

    return 0;

}

 int mkfifo(const char * pathname, mode_t mode);

 int sigaction(int signum,const struct sigaction *act,struct sigaction *oldact);

 

/* 设置SIGINT */
// action.sa_handler = sig_handler;
// sigemptyset(&action.sa_mask);
// sigaddset(&action.sa_mask, SIGTERM);
// action.sa_flags = 0;

 

/* 获取上次的handler, 如果不是忽略动作, 则安装信号 */
// sigaction(SIGINT, NULL, &old_action);
// if (old_action.sa_handler != SIG_IGN) {
//     sigaction(SIGINT, &action, NULL);
// }

 