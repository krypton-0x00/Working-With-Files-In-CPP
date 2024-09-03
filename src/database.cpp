#include "include/database.h"

 
void Database::write(){
    std::ofstream db;
    db.open("db/lists.sl");
    //check if the file is open
    if(db.is_open()){
        db<< "1\n";
    }else{
        std::cout<<"Cannot open the file! \n";
    }


    db.close();
};
void Database::read(){
    std::string line;
    std::ifstream db;
    db.open("db/lists.sl");
    if(db.is_open()){

        while(getline(db,line,'\n')){  //file buffer, each item as string, delimeter

            std::cout<<line<<std::endl;

        }

    }else{
        std::cout<<"Cannot Read the file \n";
    }

};