#include "AssetManager.h"
#include <string>
#include <iostream>

using namespace std;

// Define the function as a member of AssetManager
void AssetManager::addAsset(const string& name, const string& category, const string& purchase_date) {
    //logic business related to asset registration
    //delegate the database operation to the DatabaseService
    dbService->addAssetToDatabase(name, category, purchase_date);
}
