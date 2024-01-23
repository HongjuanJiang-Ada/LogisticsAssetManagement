#include "AssetManager.h"
#include "DatabaseConnection.h"
#include "DatabaseService.h"
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

//Function prototype
tuple<string, string, string> getAssetDetails();

int main() {
    DatabaseConnection dbConn;// Create and setup the Database Connection
    DatabaseService dbService(&dbConn); // Create an instance of DatabaseService with the datbase connection

    //get asset details from the user
    auto [name, category, purchase_date] = getAssetDetails();

    AssetManager manager(&dbService); //Pass the DatabaseService instance to the AssetManager
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