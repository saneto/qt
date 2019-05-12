/*#include "ClientTcp.h"
#include <stdio.h>
#include <iostream>
using namespace std;
TcpClient::TcpClient(unsigned short port,const char* Ip)
{
    WSAStartup(MAKEWORD(2,0), &WSAData);
    if((sock = socket( AF_INET , SOCK_STREAM ,  IPPROTO_TCP))==-1)
    {
        perror("erreur2");

    }
    to.sin_family = AF_INET;
    to.sin_addr.s_addr = inet_addr (Ip);
    to.sin_port = htons(port);
    this->ServConnect();
}
void TcpClient::ServConnect()
{
    if (connect( sock ,(SOCKADDR *)& to , sizeof(to)) == -1 )
    {
        perror("erreur -2");
    }
    this->ServSend();
}
void TcpClient::ServSend()
{
    char *mess="nomEquipeA%scoreEqA%nomEquipeB%scoreEqb%\0";
    if (send( sock ,mess, strlen(mess),0) == -1 )
    {
        perror("erreur -3");
    }
    this->ServRecv();
}
void TcpClient::ServRecv()
{
    char m[50]="\0";
    if(recv(sock ,m,50,0 ) == -1 )
    {
        perror("erreur -5");
    }
    cout<<m<<endl;
}
TcpClient::~TcpClient()
{
    closesocket(sock);
    WSACleanup();
}
*/
