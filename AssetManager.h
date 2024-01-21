#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include <string>
#include "DatabaseConnection.h"

using namespace std;
class AssetManager { //Single Responsibility Principle: AssetManager class is responsible for all database interactions related to assets
public:
    //asset registration
    void addAsset(const string& name, const string& category, const string& purchase_date);

    //asset update

    //asset deletion
};

#endif 