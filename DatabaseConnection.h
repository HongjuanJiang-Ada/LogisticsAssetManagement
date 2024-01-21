#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <string>

class DatabaseConnection
{
public:
    static sql::Connection* getConnection();
private:
    static sql::Connection* connection;
    static void initializeConnection();
};

#endif // DATABASECONNECTION_H