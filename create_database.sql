CREATE DATABASE LogisticsAssetManagement;

USE LogisticsAssetManagement;

CREATE TABLE assets (
    asset_id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    category VARCHAR(255) NOT NULL,
    purchase_date DATE
);
