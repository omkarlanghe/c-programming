#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#define SHMSZ 100

int main(void)
{
	char c;
	int shmid;
	char *shm, *s;

	key_t key = ftok(".",'a');
	shmid = shmget(key, SHMSZ, IPC_CREAT | 0666);
	shm = shmat(shmid, NULL, 0);
	s = shm;

	for(c = 'a' ; c <= 'z' ; c++)
	{
		*s = c;
		s++;
	}
	
	*s = NULL;
	while(*shm != '*')
		sleep(1);
	exit(0);
}
