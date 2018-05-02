#include "cregistercommand.h"
#include <QString>
#include "registerdialog.h"

CRegisterCommand::CRegisterCommand(){}
CRegisterCommand::~CRegisterCommand(){}

void CRegisterCommand::execute(){
    //std::cout << "Register Command created!\n";
    RegisterDialog* reg= new RegisterDialog();
    //RegisterDialog registerr;
    reg->exec();

    QString mesaj;
    mesaj.append("2;");
    mesaj.append(reg->user);
    mesaj.append(";");
    mesaj.append(reg->passwd);

    char* cstr;
    cstr = new char [mesaj.size()+1];
    sprintf(cstr,"%s",(const char *)mesaj.toStdString().c_str());
    message=cstr;



}

const char* CRegisterCommand::returnMessage()
{
    return message;
}


