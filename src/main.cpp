#include "AssetManager.h"
#include "DatabaseConnection.h"
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

//Function prototype
tuple<string, string, string> getAssetDetails();

int main() {
    // Create a DatabaseConnection instance
    DatabaseConnection dbConn;

    //get asset details from the user
    auto [name, category, purchase_date] = getAssetDetails();

    // Create an instance of AssetManager with the datbase connection and add the asset
    AssetManager manager(&dbConn);
    manager.addAsset(name, category, purchase_date);

    return 0;
}

//Function definition
tuple<string, string, string> getAssetDetails(){
    string name, category, purchase_date;

    cout << "Please enter the asset name: ";
    getline(cin, name);

    cout << "Please enter the asset category: ";
    getline(cin, category);

    cout << "Please enter the asset purchase date (YYYY-MM-DD): ";
    getline(cin, purchase_date);

    return {name, category, purchase_date};
}