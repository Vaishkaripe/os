#include<stdio.h> 
#include<stdlib.h> 
#include<fcntl.h> 
#include<unistd.h> 
int main() 
{ 
    int fd=open("duplicate.txt",O_WRONLY); 
    if(fd==-1) { 
        write(2, "File not found", 14);
    } else { 
        int dup_fd = dup(fd); 
        write(dup_fd, "Duplcate", 8); 
        write(fd, "Original", 8);
        
    }  
    
}
