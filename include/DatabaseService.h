#ifndef DATABASESERVICE_H //header guards
#define DATABASESERVICE_H

#include "DatabaseConnection.h"
#include <string>

using namespace std;

class DatabaseService{ //Perform specific database operations (like CRUD operations)
public: 
    DatabaseService(DatabaseConnection* DatabaseConnection) : dbConn(DatabaseConnection){}

    //virtual to allow it to be overriden by a mock class
    virtual void addAssetToDatabase(const string& name, const string& category, const string& purchase_date);

private:
    DatabaseConnection* dbConn; //Pointer to DatabaseConnection
};


#endif 