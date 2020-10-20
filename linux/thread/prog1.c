#include"header.h"
pthread_t tid1,tid2;
void* thread1(void *ptr)
{
	printf("before sleep In thread1\n");
	sleep(5);
	printf("after sleep In thread1\n");
	pthread_exit(NULL);
}
void* thread2(void *ptr)
{
	printf("before sleep In thread2\n");
	sleep(3);
	printf("after sleep In thread2\n");
	pthread_exit(NULL);
}
int main()
{
	//printf("in main\n");
	pthread_create(&tid1,NULL,thread1,NULL);
	pthread_create(&tid2,NULL,thread2,NULL);
	getchar();
	printf("2 threads are created\n");
//	pthread_join(tid1,NULL);
//	pthread_join(tid2,NULL);
//	return 0;
//	printf("main exiting\n");
}
