#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int shmid;
	key_t key;
	char *shm, *s;

	key = ftok(".",'a');
	shmid = shmget(key, 27, 0666);
	shm = shmat(shmid, NULL, 0);
	for(s = shm ; *s != NULL ; s++)
	{
		printf("%c",*s);
	}
	*shm = '*';
	exit(0);
}
