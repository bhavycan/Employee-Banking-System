

SET AUTOCOMMIT ON;

/*branch Table: done by Yash shah */
CREATE TABLE  branch(
    branch_id INT NOT NULL,
    branch_name VARCHAR2(25) NOT NULL,
    branch_city VARCHAR2(35) NOT NULL,
    branch_state VARCHAR2(35) NOT NULL,
    assets VARCHAR(25) NOT NULL,
    CONSTRAINT PK_branchid PRIMARY KEY(branch_id) 
);

/***************************************************************************************************************/

/*employee Table: */
CREATE TABLE employee(
    employee_id INT NOT NULL,
    employee_name  VARCHAR(20) NOT NULL, 
    employee_number VARCHAR(20) NOT NULL,
    branch_id INT NOT NULL,
    CONSTRAINT pk_employeeid PRIMARY KEY (employee_id)
);

/***************************************************************************************************************/ 

/*checkingaccount Table: */
CREATE TABLE checkingaccount(
    account_number INT NOT NULL,
    interest_rate INT NOT NULL,
    customer_name VARCHAR(40) NOT NULL,
    customer_country VARCHAR(40) NOT NULL,
    customer_id INT NOT NULL,
    CONSTRAINT chekingaccount_pk PRIMARY KEY (account_number)
);

/***************************************************************************************************************/

/*savingaccount Table: */
CREATE TABLE savingaccount(
    account_number INT NOT NULL,
    interest_rate INT NOT NULL,
    customer_name VARCHAR(40) NOT NULL,
    customer_country VARCHAR(40) NOT NULL,
    customer_id INT NOT NULL,
    CONSTRAINT savingaccount_pk PRIMARY KEY (account_number)
);

/***************************************************************************************************************/

/*account Table: */
CREATE TABLE account(
    account_number INT NOT NULL,
    account_balance VARCHAR2(15),
    account_date VARCHAR(25),
    account_type VARCHAR(20),
    userid INT NOT NULL,
    password VARCHAR(15) NOT NULL,
    CONSTRAINT pk_account_number PRIMARY KEY (account_number)
);

/***************************************************************************************************************/

/*customer Table:  */
CREATE TABLE customer(
    customer_id  INT NOT NULL,
    customer_FName VARCHAR2(20) NOT NULL,
    customer_LName VARCHAR2(20) NOT NULL,
    customer_address VARCHAR2(30) NOT NULL,
    customer_city VARCHAR2(20),
    customer_country VARCHAR2(20),
    branch_id INT NOT NUll,
    account_number INT NOT NULL,
    loan_number INT NOT NULL,
    CONSTRAINT pk_custId PRIMARY KEY (customer_id),
);

/***************************************************************************************************************/

/*UserLogin Table: */
CREATE TABLE UserLogin(
userid INT NOT NULL,
passsword VARCHAR(40),
customer_id INT NOT NULL,
customer_name VARCHAR(40)

);

/***************************************************************************************************************/

/*Loan Table */
CREATE TABLE loan(
   loan_number INT NOT NULL,
   loan_amount VARCHAR2(20),
   payment_date VARCHAR(20),
   payment_number INT NOT NULL,
   CONSTRAINT pk_loannumber PRIMARY KEY(loan_number)  
);

/***************************************************************************************************************/

/*Payment */
CREATE TABLE payment(
 payment_number INT NOT NULL,
 payment_amount  VARCHAR2(10),
 payment_date DECIMAL NOT NULL,
  CONSTRAINT pk_paymentnumber PRIMARY KEY (payment_number)
);

/***************************************************************************************************************/

/*inserting into checking account table */
INSERT ALL 
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1001,2,'Ramesh','Canada',1)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1002,3,'Suresh','Canada',2)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1003,4,'Ram','Canada',3)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1004,2,'Shyam','US',4)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1005,0,'Shahrukh','UK',5)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1006,2,'Jamison','Canada',6)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1007,1,'Lord','Canada',7)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1008,0,'Nicholas','India',8)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1009,2,'James','Canada',9)
INTO checkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(1010,3,'Paras','Canada',10)
 SELECT * FROM dual;
    
    SELECT * FROM checkingaccount;

/***************************************************************************************************************/

/*inserting into saving account table */
INSERT ALL 
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2001,2,'Mike','Canada',11)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2002,3,'Lee','Canada',12)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2003,4,'Vicky','Canada',13)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2004,2,'Riya','US',14)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2005,0,'Priya','UK',15)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2006,2,'Sita','Canada',16)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2007,1,'Gita','Canada',17)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2008,0,'Angela','India',18)
INTO savingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2009,2,'Leela','Canada',19)
INTO savkingaccount(account_number,interest_rate,customer_name,customer_country,customer_id)
VALUES(2010,3,'Sarah','UAE',20)
 SELECT * FROM dual;
    
    SELECT * FROM checkingaccount;

/***************************************************************************************************************/


/*insertting data into  account table*/
INSERT ALL 
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
    VALUES(1001,'500.80','04/05/2015','Checking',501,'Ramesh@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1002,'5000.50','02/03/2015','Checking',502,'Suresh@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1003,'600.80','04/05/2015','Checking',503,'Ram@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
  VALUES(1004,'800.80','04/05/2015','Checking',504,'Shyam@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1005,'900.80','04/05/2015','Checking',505,'Sahrukh@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1006,'1000.80','04/05/2015','Checking',506,'Jaminson@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1007,'580.80','08/08/2018','Checking',507,'Lord@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1008,'5600.80','02/10/2017','Checking',508,'Nicholas@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1009,'5000.80','03/24/2013','Checking',509,'James@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(1010,'580.80','07/25/2015','Checking',510,'paras@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2001,'400.80','08/14/2013','Saving',511,'Mike@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2002,'4000.80','09/10/2011','Saving',512,'Lee@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2003,'658.80','08/07/2015','Saving',513,'Vicky@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2004,'782.80','12/05/2010','Saving',514,'Riya@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2005,'9856.80','11/11/2019','Saving',515,'Priya@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2006,'985.80','08/10/2018','Saving',516,'Sita@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2007,'7852.80','07/06/2015','Saving',517,'Gita@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2008,'500.80','09/12/2010','Saving',518,'Angela@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
     VALUES(2009,'859.80','08/26/2011','Saving',519,'Leela@123')
    INTO account (account_number, account_balance, account_date, account_type,userid,password)
    VALUES(2010,'759.80','07/27/2015','Saving',520,'Sarah@123')
    SELECT * FROM dual;
    
    SELECT * FROM account;

/***************************************************************************************************************/

/*insertting data into branch table*/    
    INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('17', 'SC Downtown', 'Toronto', 'Ontario', 'YES');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('18', 'SC Citycenter', 'Brampton', 'Ontario', 'NO');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('32', 'SC Riverside', 'Scarborough', 'Ontario', 'YES');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('39', 'SC Northyork', 'Barrie', 'Ontario', 'YES');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('7', 'SC west', 'PerrySound', 'Ontario', 'NO');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('23', 'SC Lakeside', 'Northyork', 'Ontario',  'NO');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('52', 'SC talktown', 'Calgary', 'Alberta',  'NO');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('21', 'SC Manmid', 'Halifax', 'NovoScotia', 'YES');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('80', 'SC Morningside', 'Winnipeg', 'Manitoba', 'YES');
INSERT INTO Branch (branch_id, branch_name, branch_city, branch_state, assets) 
VALUES ('91', 'SC southeast', 'Moncton', 'NewBrunswick','NO');
    SELECT * FROM dual;
    
    SELECT * FROM branch;
    
    
/***************************************************************************************************************/    
    
    /*insertting data into employee table*/
    INSERT ALL
    INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (101, 'Robert', '7895682314' ,17)
        INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (102, 'John','9025978650',18)
        INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (103, 'Richard','4589632578',25 )
    INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (104, 'McDonald','7895684235',52 )
     INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (105, 'Biden', '7893256789',7) 
    INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (106, 'Jaspreet','7845236589',21 )
    INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (107, 'Bhavy','7824596823',39 )
    INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (108, 'Yash', '7852345698',32)
     INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (109, 'Jay','8945678523',80)
    INTO employee(employee_id,employee_name,employee_number,branch_id)
    VALUES (110, 'Lavnasur','7821659863' ,91)
    SELECT * FROM dual;
    COMMIT;
    
    /***************************************************************************************************************/

    /*insertting data into  customer table*/
    INSERT ALL 
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)     
     VALUES(1,'Ramesh', 'Patel', '124 byto ','Toronto','Canada',17,1001,9001)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(2,'Suresh', 'Patel', '1254 goto ','Toronto','Canada',18,1002,9002)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(3,'Ram', 'Patel', '126 loeo ','Barrie','Canada',39,1003,9003)
       INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(4,'Shyam', 'Patel', '124 boy ','Newyork','US',32,1004,9004)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(5,'Sahrukh', 'Patel', '124 girl ','Washington','US',52,1005,9005)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(6,'Jamison', 'Patel', '124 whynot ','Parry Sond','Canada',7,1006,9006)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(7,'Lord', 'Patel', '124 runaway ','Toronto','Canada',17,1007,9007)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(8,'Nicholos', 'Patel', '124 shakal ','Gujarat','Canada',18,1008,9008)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(9,'James', 'white', '124 RRR ','London','Canada',23,1009,9009)
       INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(10,'Paras', 'shah', '124 Bahubali ','Toronto','Canada',52,1010,9010)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(11,'Mick', 'Harvey', '124 Captain','Toronto','Canada',21,2001,9011)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(12,'Lee', 'chaudhari', '124 Iornman ','Toronto','Canada',80,2002,9012)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(13,'Vikcy', 'james', '124 bbb ','Toronto','Canada',91,2003,9013)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(14,'Riya', 'richard', '124 ccc ','Washington D.C','US',91,2004,9014)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(15,'Priya', 'hindman', '124 lololo ','London','UK',32,2005,9015)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(16,'Sita', 'smith', '124 golmaal ','Toronto','Canada',39,2006,9016)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(17,'Gita', 'Patel', '124 bruhh ','Toronto','Canada',18,2007,9017)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(18,'Angela', 'Patel', '124 nope ','Bihar','India',7,2008,9018)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(19,'Leela', 'shah', '124 yup ','Toronto','Canada',23,2009,9019)
     INTO customer (customer_id, customer_FName, customer_LName, customer_address, customer_city, customer_country, branch_id, account_number, loan_number)
       VALUES(20,'Sarah', 'chaudhari', '124 good ','Dubai','UAE',52,2010,9020)
     SELECT * FROM dual;
     COMMIT;

