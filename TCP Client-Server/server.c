#include <netdb.h> 
#include <netinet/in.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <sys/types.h> 
#define MAX 100
#define PORT 8080 
#define SA struct sockaddr 
  
void chatBi(int sock) 
{ 
    char buffer[MAX]; 
    int n; 
    for (;;) { 
        bzero(buffer, MAX); 
        read(sock, buffer, sizeof(buffer)); 
        printf("Client message: %sServer response: ", buffer); 
        bzero(buffer, MAX); 
        n = 0; 
        while ((buffer[n++] = getchar()) != '\n'); 
        write(sock, buffer, sizeof(buffer)); 
        if (strncmp("Exit", buffer, 4) == 0) { 
            printf("Server out\n"); 
            break; 
        } 
    } 
} 


int main() 
{ 
    int sock, connfd, len; 
    struct sockaddr_in servaddr, cli; 

    sock = socket(AF_INET, SOCK_STREAM, 0); 
    if (sock == -1) { 
        printf("Socket failed\n"); 
        exit(0); 
    } 
    else
        printf("Socket created.\n"); 
    bzero(&servaddr, sizeof(servaddr)); 
  
    servaddr.sin_family = AF_INET; 
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY); 
    servaddr.sin_port = htons(PORT); 
  
    if ((bind(sock, (SA*)&servaddr, sizeof(servaddr))) != 0) { 
        printf("Socked bind failed.\n"); 
        exit(0); 
    } 
    else
        printf("Socket binded\n"); 
  
    if ((listen(sock, 5)) != 0) { 
        printf("Error on client lecture\n"); 
        exit(0); 
    } 
    else
        printf("Waiting for the client\n"); 
    len = sizeof(cli); 
  
    connfd = accept(sock, (SA*)&cli, &len); 
    if (connfd < 0) { 
        printf("Server doesnt accept the client\n"); 
        exit(0); 
    } 
    else
        printf("Server connects the client\n"); 
  
    chatBi(connfd); 
    close(sock); 
} 