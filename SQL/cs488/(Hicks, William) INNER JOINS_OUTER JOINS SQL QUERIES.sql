/* 1 */
SELECT SalesOrderHeader.SalesOrderID, SalesOrderHeader.OrderDate, SalesOrderDetail.ProductID, Product.Name
FROM Sales.SalesOrderHeader INNER JOIN Sales.SalesOrderDetail 
ON SalesOrderHeader.SalesOrderID = SalesOrderDetail.SalesOrderID INNER JOIN Production.Product 
ON SalesOrderDetail.ProductID = Product.ProductID;

/* 2 */
SELECT Product.Name, ProductSubcategory.Name, ProductCategory.Name, ProductModel.Name
FROM Production.Product INNER JOIN Production.ProductSubcategory 
ON Product.ProductSubcategoryID = ProductSubcategory.ProductSubcategoryID INNER JOIN Production.ProductCategory 
ON ProductSubcategory.ProductCategoryID = Production.ProductCategory.ProductCategoryID INNER JOIN Production.ProductModel 
ON Product.ProductModelID = ProductModel.ProductModelID;

/* 3 */
SELECT Product.Name, ProductSubcategory.Name, ProductCategory.Name
FROM Production.Product LEFT OUTER JOIN Production.ProductSubcategory
ON Product.ProductSubcategoryID = ProductSubcategory.ProductSubcategoryID LEFT OUTER JOIN Production.ProductCategory 
ON ProductSubcategory.ProductCategoryID = ProductCategory.ProductCategoryID;

/* 4 */
SELECT SalesOrderHeader.SalesOrderID, SalesOrderDetail.ProductID, Product.Name, SalesOrderDetail.UnitPrice
FROM Sales.SalesOrderHeader INNER JOIN Sales.SalesOrderDetail 
ON SalesOrderDetail.SalesOrderID = SalesOrderHeader.SalesOrderID INNER JOIN Production.Product 
ON SalesOrderDetail.ProductID = Product.ProductID;

/* 5 */
SELECT Product.Name, ProductProductPhoto.ProductPhotoID, ProductPhoto.ThumbNailPhoto, ProductPhoto.ThumbnailPhotoFileName, ProductModel.Name
FROM Production.Product LEFT OUTER JOIN Production.ProductProductPhoto 
ON Product.ProductID = ProductProductPhoto.ProductID LEFT OUTER JOIN Production.ProductPhoto 
ON ProductProductPhoto.ProductPhotoID = ProductPhoto.ProductPhotoID LEFT OUTER JOIN Production.ProductModel 
ON Product.ProductModelID = ProductModel.ProductModelID;

/* 6 */
SELECT SalesOrderHeader.SalesOrderID, SalesOrderHeader.OrderDate, SalesTerritory.Name, SalesOrderDetail.LineTotal
FROM Sales.SalesOrderHeader INNER JOIN Sales.SalesTerritory 
ON SalesOrderHeader.TerritoryID = SalesTerritory.TerritoryID INNER JOIN Sales.SalesOrderDetail
ON SalesOrderHeader.SalesOrderID = SalesOrderDetail.SalesOrderID;

/* 7 */
SELECT Customer.CustomerID, SalesOrderHeader.SalesOrderID, SalesTerritory.Name
FROM Sales.Customer LEFT OUTER JOIN Sales.SalesOrderHeader 
ON Customer.TerritoryID = SalesOrderHeader.TerritoryID LEFT OUTER JOIN Sales.SalesTerritory
ON SalesTerritory.TerritoryID = SalesOrderHeader.TerritoryID;

/* 8 */
SELECT Product.Name, Product.ProductNumber, SalesOrderDetail.OrderQty, SalesOrderHeader.OrderDate
FROM Production.Product INNER JOIN Sales.SalesOrderDetail 
ON Product.ProductID = SalesOrderDetail.ProductID INNER JOIN Sales.SalesOrderHeader 
ON SalesOrderHeader.SalesOrderID = SalesOrderDetail.SalesOrderID;

/* 9 */
SELECT Product.Name, ProductSubcategory.Name, ProductCategory.Name, SalesOrderDetail.LineTotal, SalesOrderDetail.UnitPrice
FROM Production.Product LEFT OUTER JOIN Production.ProductSubcategory
ON Product.ProductSubcategoryID = ProductSubcategory.ProductSubcategoryID LEFT OUTER JOIN Production.ProductCategory
ON ProductSubcategory.ProductCategoryID = ProductCategory.ProductCategoryID LEFT OUTER JOIN Sales.SalesOrderDetail
ON Product.ProductID = SalesOrderDetail.ProductID;

/* 10 */
SELECT SalesOrderHeader.SalesOrderID, SalesOrderHeader.OrderDate, Customer.CustomerID, Product.Name, SalesTerritory.Name
FROM Sales.SalesOrderHeader INNER JOIN Sales.Customer
ON SalesOrderHeader.TerritoryID = Customer.TerritoryID INNER JOIN Sales.SalesTerritory
ON SalesOrderHeader.TerritoryID = SalesTerritory.TerritoryID INNER JOIN Sales.SalesOrderDetail
ON SalesOrderHeader.SalesOrderID = SalesOrderDetail.SalesOrderID INNER JOIN Production.Product
ON SalesOrderDetail.ProductID = Product.ProductID;
