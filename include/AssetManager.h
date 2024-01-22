#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <string>
#include "DatabaseService.h"

using namespace std;
class AssetManager { //Single Responsibility Principle: AssetManager class is responsible for all database interactions related to assets
public:
    AssetManager(DatabaseService* dbService) : dbService(dbService){}
    //asset registration
    void addAsset(const string& name, const string& category, const string& purchase_date);

private:
    //pointer to the DatabaseService
    DatabaseService* dbService; 
};

#endif 