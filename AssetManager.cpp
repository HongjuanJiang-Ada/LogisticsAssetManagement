#include "AssetManager.h"
#include <cppconn/prepared_statement.h>
#include <string>
#include <iostream>

using namespace std;

// Define the function as a member of AssetManager
void AssetManager::addAsset(const string& name, const string& category, const string& purchase_date) {
    try {
        // Connect to the database
        sql::Connection* con = DatabaseConnection::getConnection();

        // Prepare the SQL statement
        unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO Assets(name, category, purchase_date) VALUES (?, ?, ?)"));

        // Execute the SQL statement
        pstmt->setString(1, name);
        pstmt->setString(2, category);
        pstmt->setString(3, purchase_date); 
        pstmt->executeUpdate();

        cout << "Asset added successfully!" << endl;
    } catch (sql::SQLException &e) {
        cerr << "SQL Error: " << e.what() << endl;
    }
}
