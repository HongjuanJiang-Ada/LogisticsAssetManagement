#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <string>
#include "DatabaseConnection.h"

using namespace std;
class AssetManager { //Single Responsibility Principle: AssetManager class is responsible for all database interactions related to assets
public:
    AssetManager(DatabaseConnection* dbConnection) : dbConn(dbConnection){}
    //asset registration
    void addAsset(const string& name, const string& category, const string& purchase_date);

private:
    //pointer to the DatabaseConnection object
    DatabaseConnection* dbConn; //Dependency Inversion Principle: AssetManager class depends on DatabaseConnection abstraction
};

#endif 