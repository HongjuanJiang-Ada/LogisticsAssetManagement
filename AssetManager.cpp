#include "AssetManager.h"
#include <sql.h>
#include <sqlext.h>
#include <iostream>
using namespace std;

void AssetManager::addAsset(const string& name, const string& category) {
    // ODBC connection and SQL insert logic
    SQLHENV env;
    SQLHDBC dbc;
    SQLHSTMT stmt;
    SQLRETURN ret; // ODBC return code

    // Allocate environment handle
    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
    SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void *)SQL_OV_ODBC3, 0);

    // Allocate connection handle
    SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);

    // Connect to the database
    SQLDriverConnect(dbc, NULL, (SQLCHAR*)"DSN = LogisticsAssetManagement;", SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);

    // Prepare SQL statement
    string query = "INSERT INTO assets (name, category) VALUES (?, ?)";
    SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
    SQLPrepare(stmt, (SQLCHAR*)query.c_str(), SQL_NTS);

    //Bind parameters
    SQLBindParameter(stmt, 1, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_VARCHAR, 0, 0, (SQLCHAR*)name.c_str(), 0, NULL);
    SQLBindParameter(stmt, 2, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_VARCHAR, 0, 0, (SQLCHAR*)category.c_str(), 0, NULL);

    // Execute SQL statement
    ret = SQLExecute(stmt);

    // Handle errors
    if (ret == SQL_ERROR || ret == SQL_SUCCESS_WITH_INFO)
    {
        // Handle error: Retrieve error details and print or log them
        // Example: SQLGetDiagRec(...);
        cerr << "Error connecting to the database." << endl;
    } else {
        cout << "Successfully connected to the database." << endl;
    }
    
    // Free resources
    SQLFreeHandle(SQL_HANDLE_STMT, stmt);
    SQLDisconnect(dbc);
    SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    SQLFreeHandle(SQL_HANDLE_ENV, env);
}