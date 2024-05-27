#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc, int *argv[]){
	char file[20],sample[20];
	write(1,"File Name:",11);
	scanf("%s",file);
	int fd=open(file,O_RDWR,777);
	lseek(fd,1,SEEK_CUR);
	write(fd,"Hey",3);
	close(fd);
}
