#include "DatabaseService.h"
#include <cppconn/prepared_statement.h>
#include <iostream>

using namespace std;

void DatabaseService::addAssetToDatabase(const string& name, const string& category, const string& purchase_date) {
    try {
        // Prepare the SQL statement
        unique_ptr<sql::PreparedStatement> pstmt(dbConn->getConnection()->prepareStatement("INSERT INTO Assets(name, category, purchase_date) VALUES (?, ?, ?)"));
        pstmt->setString(1, name);
        pstmt->setString(2, category);
        pstmt->setString(3, purchase_date); 
        pstmt->executeUpdate();

        cout << "Asset added to database successfully!" << endl;
    } catch (sql::SQLException &e) {
        cerr << "SQL Error: " << e.what() << endl;
    }
}
