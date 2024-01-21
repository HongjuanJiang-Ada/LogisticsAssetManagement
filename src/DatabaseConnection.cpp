#include "DatabaseConnection.h"

sql::Connection* DatabaseConnection::connection = nullptr;

void DatabaseConnection::initializeConnection (){
    if (connection == nullptr)
    {
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_driver_instance();
        connection = driver->connect("tcp://127.0.0.1:3306", "root", "SQLmy@666");
        connection->setSchema("LogisticsAssetManagement");
    }
}

sql::Connection* DatabaseConnection::getConnection(){
    if (connection == nullptr)
    {
        initializeConnection();
    }
    return connection;
    
}