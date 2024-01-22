#include <gtest/gtest.h>
#include "AssetManager.h"
#include "DatabaseConnection.h"
#include "DatabaseService.h"

using namespace std;

class MockDatabaseService : public DatabaseService {
public:
    MockDatabaseService(DatabaseConnection* dbConn) : DatabaseService(dbConn) {}

    string last_name;
    string last_category;
    string last_purchase_date;

    // Mock the addAssetToDatabase method
    void addAssetToDatabase(const string& name, const string& category, const string& purchase_date) override {
        last_name = name;
        last_category = category;
        last_purchase_date = purchase_date;
    }
};

class AssetManagerTest : public ::testing::Test {
protected:
    AssetManager* assetManager;
    MockDatabaseService* mockDbService;
    DatabaseConnection* dbConn;

    AssetManagerTest() {
        dbConn = new DatabaseConnection();  
        mockDbService = new MockDatabaseService(dbConn);
        assetManager = new AssetManager(mockDbService);
    }

    ~AssetManagerTest() override {
        delete assetManager;
        delete mockDbService;
        delete dbConn;
    }
};

TEST_F(AssetManagerTest, TestAddAsset) {
    // Arrange
    string testName = "TestAsset";
    string testCategory = "TestCategory";
    string testPurchaseDate = "2023-01-01";

    // Act
    assetManager->addAsset(testName, testCategory, testPurchaseDate);

    // Assert
    ASSERT_EQ(testName, mockDbService->last_name);
    ASSERT_EQ(testCategory, mockDbService->last_category);
    ASSERT_EQ(testPurchaseDate, mockDbService->last_purchase_date);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
