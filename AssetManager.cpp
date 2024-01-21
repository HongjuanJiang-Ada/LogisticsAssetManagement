#include "AssetManager.h"
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <string>
#include <iostream>

using namespace std;

// Define the function as a member of AssetManager
void AssetManager::addAsset(const string& name, const string& category, const string& purchase_date) {
    try {
        // Connect to the database
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "SQLmy@666"));
        con->setSchema("LogisticsAssetManagement");

        std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO Assets(name, category, purchase_date) VALUES (?, ?, ?)"));
        pstmt->setString(1, name);
        pstmt->setString(2, category);
        pstmt->setString(3, purchase_date);
        pstmt->executeUpdate();
    } catch (sql::SQLException &e) {
        std::cerr << "SQL Error: " << e.what() << std::endl;
    }
}
