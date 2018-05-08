#ifndef CCLIENT_H
#define CCLIENT_H
#include "socket.h"
#include "cvote.h"
#include "command_factory.h"
#include <iostream>


class CClient
{
public:
  std::string username;
  std::string password;
  socket mp_socket;
  CVote* Vote;
  int command_number;
  //Command_Factory* CommandFactory;

public:
    CClient();
    ~CClient(){}
    void startClient();
    CClient(std::string username, std::string){}
    void sendVote(CVote* Vote){}
    void getRooms(std::string roomList){}
  //  void commandHandler();

};

#endif // CCLIENT_H
