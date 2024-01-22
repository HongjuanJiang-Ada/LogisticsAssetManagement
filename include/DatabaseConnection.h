#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <string>

//This class includes opening and closing of database connection and can also handle connection errors
class DatabaseConnection //Single Responsibility Principle: DatabseConnection class is responsible for managing the connection to the database 
{
public:
    static sql::Connection* getConnection();
private:
    static sql::Connection* connection;
    static void initializeConnection();
};

#endif // DATABASECONNECTION_H