#ifndef CVOTE_H
#define CVOTE_H


class CVote
{
private:
    int roomID;
    char* username;
    int option;
public:
    CVote();
    ~CVote(){}
    CVote(int rID, char* usrName, int option){
        this->roomID=rID;
        this->username=usrName;
        this->option=option;
    }
    int getRoomId(){return this->roomID;}
    char* getUserName(){return this->username;}
    int getOption(){return this->option;}
};

#endif // CVOTE_H
