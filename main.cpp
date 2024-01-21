#include "AssetManager.h"
#include <mysql_driver.h>
#include <mysql_connection.h>

int main() {
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;

    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect("tcp://127.0.0.1:3306", "root", "SQLmy@666");
    con->setSchema("LogisticsAssetManagement");

    AssetManager manager;
    manager.addAsset("Laptop", "Electronics", "2020-01-01");
    return 0;
}