#include <netdb.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/socket.h> 
#define MAX 100
#define PORT 8080 
#define SA struct sockaddr 

void chatBi(int sock) 
{ 
    char buffer[MAX]; 
    int n; 
    for (;;) { 
        bzero(buffer, sizeof(buffer)); 
        printf("Message: "); 
        n = 0; 
        while ((buffer[n++] = getchar()) != '\n'); 
        write(sock, buffer, sizeof(buffer)); 
        bzero(buffer, sizeof(buffer)); 
        read(sock, buffer, sizeof(buffer)); 
        printf("Server response: %s", buffer); 
        if ((strncmp(buffer, "Exit", 4)) == 0) { 
            printf("Client out\n"); 
            break; 
        } 
    } 
} 
  
int main() 
{ 
    int sock, connfd; 
    struct sockaddr_in servaddr, cli; 
  
    sock = socket(AF_INET, SOCK_STREAM, 0); 
    if (sock == -1) { 
        printf("Socket failed\n"); 
        exit(0); 
    } 
    else
        printf("Socket created\n"); 
    bzero(&servaddr, sizeof(servaddr)); 
  
    // assign IP, PORT 
    servaddr.sin_family = AF_INET; 
    servaddr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
    servaddr.sin_port = htons(PORT); 
  
    // connect the client socket to server socket 
    if (connect(sock, (SA*)&servaddr, sizeof(servaddr)) != 0) { 
        printf("Connection failed\n"); 
        exit(0); 
    } 
    else
        printf("Connected to server\n"); 
  
    chatBi(sock); 
    close(sock); 
} 