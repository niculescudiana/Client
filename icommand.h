#ifndef ICOMMAND_H
#define ICOMMAND_H


class ICommand
{

public:
 virtual void execute()=0;
// virtual ~ICommand()=0;
  virtual const char* returnMessage()=0;
};

#endif // ICOMMAND_H
