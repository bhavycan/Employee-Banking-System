/******************************************************************************************

Group 14 :Online Banking System
Members :
Name: Jay Chaudhari Email: jpchaudhari@myseneca.ca			  Student Id: 147268205
Name: Bhavy Patel   Email: bppatel16@myseneca.ca			  Student Id: 121048219
Name:Yash Shah		Email: yvshah@myseneca.ca			      Student Id: 103985214
Milestone 2
DATE: 02-04-2022

*******************************************************************************************/

#include<iostream>
#include<iomanip>
#include<occi.h>

using oracle::occi::Environment;
using oracle::occi::Connection;
using namespace oracle::occi;
using namespace std;


//******************************************************************************************

struct Customer
{
	int custID;
	string firstName;
	string lastName;
	string address;
	string city;
	string country;
	int branchId;
	int accNum;
	int loanNum;
};

int findCustomer(Connection* conn, int customerId);
void displayCustomer(Connection* conn, struct Customer customer);
void displayAllCustomer(Connection* conn);

//******************************************************************************************

struct Employee
{
	int empId;
	string name;
	string empNum;
	int branchId;
};

int findEmployee(Connection* conn, int empId);
void displayEmployee(Connection* conn, struct Employee employee);
void displayAllEmployee(Connection* conn);

//******************************************************************************************

struct Check
{
	int accNum;
	int interestRate;
	string cusName;
	string country;
	int cusId;
};

int findChecking(Connection* conn, int check);
void displayAllChecking(Connection* conn);

//******************************************************************************************

struct Saving
{
	int accNum;
	int interestRate;
	string cusName;
	string country;
	int cusId;
};
int findSaving(Connection* conn, int save);
void displayAllSaving(Connection* conn);

//******************************************************************************************

struct Account
{
	int accNum;
	string balance;
	string date;
	string accType;
	int userId;
	string pass;
};
int findAccount(Connection* conn, int acc);
void displayAccount(Connection* conn, Account account);
void displayAllAccount(Connection* conn);

//******************************************************************************************

struct Branch
{
	int branchId;
	string name;
	string city;
	string state;
	string assets;
};
int findBranch(Connection* conn, int branch);
void displayAllBranch(Connection* conn);

//******************************************************************************************

int main(void)
{
	Environment* env = nullptr;
	Connection* conn = nullptr;
	string str;
	string usr = "dbs211_221f27";
	string pass = "28349213";
	string srv = "myoracle12c.senecacollege.ca:1521/oracle12c";
	struct Customer customer;
	struct Employee employee;
	struct Account account;
	try
	{
		env = Environment::createEnvironment(Environment::DEFAULT);
		conn = env->createConnection(usr, pass, srv);

		cout << "GROUP 14 || DBS211NFF - NFFL || DATE: 02 - 04 - 2022 ||  " << endl;
		cout << "Name: Jay Chaudhari\tEmail: jpchaudhari@myseneca.ca\tStudent Id: 147268205\nName: Yash Shah       \tEmail: yvshah@myseneca.ca\tStudent Id: 103985214\nName: Bhavy Patel\tEmail: bppatel16@myseneca.ca\tStudent Id: 121048219" << endl;
		int input = 0;
		do
		{
			cout << "\n\t\t\t\t|=====================================|";
			cout << "\n\t\t\t\t| WELCOME TO OUR ONLINE BANKING SYSTEM|";
			cout << "\n\t\t\t\t|                                     |";
			cout << "\n\t\t\t\t|=====================================|";
			cout << "\n\t\t\t\t| Select From the Following options:  |";			//coding part done by:
			cout << "\n\t\t\t\t|-------------------------------------|";			
			cout << "\n\t\t\t\t|1. Find Customer                     |";			// Jay Chaudhari 		 
			cout << "\n\t\t\t\t|2. Find Employee                     |";			// Jay Chaudhari
			cout << "\n\t\t\t\t|3. Find Checking Account             |";			// Bhavy Patel
			cout << "\n\t\t\t\t|4. Find Saving Account               |";			// Bhavy Patel
			cout << "\n\t\t\t\t|5. Find Account                      |";			// Yash shah
			cout << "\n\t\t\t\t|6. Find Branch                       |";			// Yash shah
			cout << "\n\t\t\t\t|7. Display Customer                  |";			// Jay Chaudhri
			cout << "\n\t\t\t\t|8. Display Employee                  |";			// Bhavy Patel
			cout << "\n\t\t\t\t|9. Display Account                   |";			// Yash shah
			cout << "\n\t\t\t\t|10. Display All Customer             |";			// Jay Chaudhari
			cout << "\n\t\t\t\t|11. Display All Employee             |";			// Jay chaudhari
			cout << "\n\t\t\t\t|12. Display All Checking Account     |";			// Bhavy Patel
			cout << "\n\t\t\t\t|13. Display All Saving Account       |";			// Bhavy Patel
			cout << "\n\t\t\t\t|14. Display All Account              |";			// Yash shah
			cout << "\n\t\t\t\t|15. Display All Branch               |";			// Yash shah
			cout << "\n\t\t\t\t|-------------------------------------|";
			cout << "\n\t\t\t\t|0. Exit                              |";
			cout << "\n\t\t\t\t|=====================================|";
			cout << "\n Enter Your Choice: ";
			cin >> input;
			if (input == 1)
			{
				cout << "\n Entering choice to find an customer";
				int cust;
				cout << "\n Enter Customer Number: ";
				cin >> cust;
				if (findCustomer(conn, cust) == 1)
				{
					cout << "\nValid Customer Number\n";
				}
				else
				{
					cout << "\nInvalid Customer Number\n";
				}
			}
			else if (input == 2)
			{
				cout << "\n Entering choice to find an employee";
				int emp;
				cout << "\n Enter Employee Number: ";
				cin >> emp;
				if (findEmployee(conn, emp) == 1)
				{
					cout << "\nValid Employee Number\n";
				}
				else
				{
					cout << "\nInvalid Employee Number\n";
				}
			}
			else if (input == 3)
			{
				cout << "\n Entering choice to find an Checking Account";
				int check;
				cout << "\n Enter Checking Account Number: ";
				cin >> check;
				if (findChecking(conn, check) == 1)
				{
					cout << "\nValid Checking Account Number\n";
				}
				else
				{
					cout << "\nInvalid Checking Account Number\n";
				}
			}
			else if (input == 4)
			{
				cout << "\n Entering choice to find a Saving Account";
				int save;
				cout << "\n Enter Saving Account Number: ";
				cin >> save;
				if (findSaving(conn, save) == 1)
				{
					cout << "\nValid Saving Account Number\n";
				}
				else
				{
					cout << "\nInvalid Saving Account Number\n";
				}
			}
			else if (input == 5)
			{

				cout << "\n Entering choice to find in an Account";
				int acc;
				cout << "\n Enter Account Number: ";
				cin >> acc;
				if (findAccount(conn, acc) == 1)
				{
					cout << "\nValid Account Number\n";
				}
				else
				{
					cout << "\nInvalid Account Number\n";
				}
			}
			else if (input == 6)
			{
				cout << "\n Entering choice to find in Branch";
				int branch;
				cout << "\n Enter Branch Number: ";
				cin >> branch;
				if (findBranch(conn, branch) == 1)
				{
					cout << "\nValid Branch Number\n";
				}
				else
				{
					cout << "\nInvalid Branch Number\n";
				}
			}
			else if (input == 7)
			{
				cout << "\nEntering choice to display an Customer";
				displayCustomer(conn, customer);
			}
			else if (input == 8)
			{
				cout << "\nEntering choice to display all employees\n";
				displayEmployee(conn,employee);
			}
			else if (input == 9)
			{
				cout << "\nEntering choice to display all employees\n";
				displayAccount(conn,account);
			}
			else if (input == 10)
			{
				cout << "\nEntering choice to display all customer\n";
				displayAllCustomer(conn);
			}
			else if (input == 11)
			{
				cout << "\nEntering choice to display all employees\n";
				displayAllEmployee(conn);
			}
			else if (input == 12)
			{
				cout << "\nEntering choice to display all employees\n";
				displayAllChecking(conn);
			}
			else if (input == 13)
			{
				cout << "\nEntering choice to display all employees\n";
				displayAllSaving(conn);
			}
			else if (input == 14)
			{
				cout << "\nEntering choice to display all employees\n";
				displayAllAccount(conn);
			}
			else if (input == 15)
			{
				cout << "\nEntering choice to display all employees\n";
				displayAllBranch(conn);
			}
			} while (input != 0);

			Statement* stmt = conn->createStatement();
			ResultSet* rs = stmt->executeQuery("SELECT customer_id, customer_fname, customer_lname, customer_address, customer_city, customer_country, branch_id, account_number, loan_number FROM customer ORDER BY customer_id");

			conn->terminateStatement(stmt);
			env->terminateConnection(conn);
			Environment::terminateEnvironment(env);
		}
		catch (SQLException& sqlExcp)
		{
			cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
		}
		return 0;
	}

	//******************************************************************************************

	int findCustomer(Connection * conn, int customerId) 
	{
		Statement* stmt = conn->createStatement();
		ResultSet* rs = stmt->executeQuery("SELECT customer_id, customer_fname, customer_lname, customer_address, customer_city, customer_country, branch_id, account_number, loan_number FROM customer WHERE customer_id =" + to_string(customerId));
		if (rs->next())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//******************************************************************************************

	void displayCustomer(Connection * conn, Customer customer)
	{
		int ecode;
		bool correctCode = false;
		do
		{
			cout << "\nEnter Customer ID: ";
			cin >> ecode;
			if (!cin || findCustomer(conn, ecode) != 1)
			{
				correctCode = false;
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "\nInvalid Customer number\n";
			}
			else
			{
				correctCode = true;
				cout << "\nValid Input";
				cout << "\nSearch in table ..." << endl;
				try
				{
					Statement* stmt2 = conn->createStatement();
					ResultSet* rs2 = stmt2->executeQuery("SELECT customer_id, customer_fname, customer_lname, customer_address, customer_city, customer_country, branch_id, account_number, loan_number FROM customer WHERE customer_id=" + to_string(ecode));
					while (rs2->next())
					{
						cout << "\n-------------- Customer Information --------------" << endl;

						customer.custID = rs2->getInt(1);
						customer.firstName = rs2->getString(2);
						customer.lastName = rs2->getString(3);
						customer.address = rs2->getString(4);
						customer.city = rs2->getString(5);
						customer.country = rs2->getString(6);
						customer.branchId = rs2->getInt(7);
						customer.accNum = rs2->getInt(8);
						customer.loanNum = rs2->getInt(9);
						cout << "\n";
						cout << "Customer Id: ";
						cout << customer.custID;

						cout << "\n";
						cout << "Customer First Name: ";
						cout << customer.firstName;

						cout << "\n";
						cout << "Customer Last Name: ";
						cout << customer.lastName;

						cout << "\n";
						cout << "Customer address: ";
						cout << customer.address;

						cout << "\n";
						cout << "Customer city: ";
						cout << customer.city;

						cout << "\n";
						cout << "Customer country: ";
						cout << customer.country;

						cout << "\n";
						cout << "Customer branch id: ";
						cout << customer.branchId;

						cout << "\n";
						cout << "Customer account Number: ";
						cout << customer.accNum;

						cout << "\n";
						cout << "Custome Loan num: ";
						cout << customer.loanNum << endl;
					}
				}
				catch (SQLException& sqlExcp)
				{
					cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
				}
			}
		} while (correctCode == false); 
	}

	//******************************************************************************************

	void displayAllCustomer(Connection * conn)
	{
		try
		{
			Statement* stmt3 = conn->createStatement();
			ResultSet* rs2 = stmt3->executeQuery("SELECT customer_id, customer_fname, customer_lname, customer_address, customer_city, customer_country, branch_id, account_number, loan_number FROM customer");
			cout.width(10);
			cout.setf(ios::left);
			cout << "#custId";
			cout.unsetf(ios::left);
			cout << " ";
			cout.width(15);
			cout.setf(ios::left);
			cout << "FirstName";
			cout.width(12);
			cout.setf(ios::left);
			cout << "LastName";

			cout.width(14);
			cout.setf(ios::left);
			cout << "address";
			//cout << " ";
			cout.width(20);
			cout.setf(ios::left);
			cout << "city";
			//cout << " ";
			cout.width(30);
			cout.setf(ios::left);
			cout << "country";
			cout.width(17);
			cout.setf(ios::left);
			cout << "branch id";
			cout.width(12);
			cout.setf(ios::left);
			cout << "accNumber";
			cout.width(15);
			cout.setf(ios::left);
			cout << "loan number" << endl;
			cout.unsetf(ios::left);
			Customer cust;
			while (rs2->next())
			{
				cust.custID = rs2->getInt(1);
				cust.firstName = rs2->getString(2);
				cust.lastName = rs2->getString(3);
				cust.address = rs2->getString(4);
				cust.city = rs2->getString(5);
				cust.country = rs2->getString(6);
				cust.branchId = rs2->getInt(7);
				cust.accNum = rs2->getInt(8);
				cust.loanNum = rs2->getInt(9);

				cout << " ";
				cout.width(10);
				cout.setf(ios::left);
				cout << cust.custID;
				cout.unsetf(ios::left);
				cout.width(15);
				cout.setf(ios::left);
				cout << cust.firstName;
				cout.unsetf(ios::left);

				cout.width(12);
				cout.setf(ios::left);
				cout << cust.lastName;
				cout.unsetf(ios::left);

				cout.width(14);
				cout.setf(ios::left);
				cout << cust.address;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << cust.city;
				cout.unsetf(ios::left);

				cout.width(30);
				cout.setf(ios::left);
				cout << cust.country;
				cout.unsetf(ios::left);

				cout.width(17);
				cout.setf(ios::left);
				cout << cust.branchId;
				cout.unsetf(ios::left);

				cout.width(12);
				cout.setf(ios::left);
				cout << cust.accNum;
				cout.unsetf(ios::left);

				cout.width(15);
				cout.setf(ios::left);
				cout << cust.loanNum;
				cout.unsetf(ios::left);
				cout << endl;
			}
		}
		catch (SQLException& sqlExcp)
		{
			cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
		}
	}


	//******************************************************************************************


	int findEmployee(Connection * conn, int emp) 
	{
		Statement* stmt = conn->createStatement();
		ResultSet* rs = stmt->executeQuery("SELECT * From employee Where employee_id=" + to_string(emp));
		if (rs->next())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//******************************************************************************************

	void displayEmployee(Connection * conn, Employee employee)
	{
		int ecode;
		bool correctCode = false;
		do
		{
			cout << "\nEnter employee number: ";
			cin >> ecode;
			if (!cin || findEmployee(conn, ecode) != 1)
			{
				correctCode = false;
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "\nInvalid Employee number\n";
			}
			else
			{
				correctCode = true;
				cout << "\nValid Input";
				cout << "\nSearch in table ..." << endl;
				try
				{
					Statement* stmt2 = conn->createStatement();
					ResultSet* rs2 = stmt2->executeQuery("SELECT * FROM employee where employee_id =" + to_string(ecode));
					while (rs2->next())
					{
						cout << "\n-------------- Employee Information --------------" << endl;
						employee.empId = rs2->getInt(1);
						employee.name = rs2->getString(2);
						employee.empNum = rs2->getString(3);
						employee.branchId = rs2->getInt(4);
						cout << "\n";
						cout << "Employee Id: ";
						cout << employee.empId;

						cout << "\n";
						cout << "Employee First Name: ";
						cout << employee.name;

						cout << "\n";
						cout << "Employee Employee Number: ";
						cout << employee.empNum;

						cout << "\n";
						cout << "Employee Branch ID: ";
						cout << employee.branchId << endl;
					}
				}
				catch (SQLException& sqlExcp)
				{
					cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
				}
			}
		} while (correctCode == false);  
	};

	//******************************************************************************************


	void displayAllEmployee(Connection * conn)
	{
		try
		{
			Statement* stmt3 = conn->createStatement();
			ResultSet* rs2 = stmt3->executeQuery("SELECT * FROM employee");
			cout.width(10);
			cout.setf(ios::left);
			cout << "EmployeeID";
			cout.unsetf(ios::left);
			cout << " ";
			cout.width(15);
			cout.setf(ios::left);
			cout << "Name";
			cout.unsetf(ios::left);
			cout.width(12);
			cout.setf(ios::left);
			cout << "EmpNum";
			cout.unsetf(ios::left);
			cout.width(20);
			cout.setf(ios::left);
			cout << "Branch ID";
			cout.unsetf(ios::left);
			cout << endl;
			Employee employee;
			while (rs2->next())
			{
				employee.empId = rs2->getInt(1);
				employee.name= rs2->getString(2);
				employee.empNum = rs2->getString(3);
				employee.branchId = rs2->getInt(4);

				cout << " ";
				cout.width(10);
				cout.setf(ios::left);
				cout << employee.empId;
				cout.unsetf(ios::left);
				cout.width(15);
				cout.setf(ios::left);
				cout << employee.name;
				cout.unsetf(ios::left);

				cout.width(12);
				cout.setf(ios::left);
				cout << employee.empNum;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << employee.branchId;
				cout.unsetf(ios::left);
				cout << endl;
			}
		}
		catch (SQLException& sqlExcp)
		{
			cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
		}
	}

	//******************************************************************************************



	int findChecking(Connection * conn, int Check) 
	{
		Statement* stmt = conn->createStatement();
		ResultSet* rs = stmt->executeQuery("select *from checkingaccount where account_number =" + to_string(Check));
		if (rs->next())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//******************************************************************************************


	void displayAllChecking(Connection * conn)
	{
		try
		{
			Statement* stmt3 = conn->createStatement();
			ResultSet* rs2 = stmt3->executeQuery("SELECT * FROM checkingaccount");
			cout.width(10);
			cout.setf(ios::left);
			cout << "AccountNo ";
			cout.unsetf(ios::left);
			cout << " ";
			cout.width(15);
			cout.setf(ios::left);
			cout << "InterestRate";
			cout.unsetf(ios::left);
			cout.width(12);
			cout.setf(ios::left);
			cout << "CussNum";
			cout.unsetf(ios::left);
			cout.width(20);
			cout.setf(ios::left);
			cout << "Country";
			cout.width(15);
			cout.setf(ios::left);
			cout << "CustomerId";
			cout.unsetf(ios::left);
			cout << endl;
			Check checking;
			while (rs2->next())
			{
				checking.accNum = rs2->getInt(1);
				checking.interestRate = rs2->getInt(2);
				checking.cusName = rs2->getString(3);
				checking.country = rs2->getString(4);
				checking.cusId = rs2->getInt(5);

				cout << " ";
				cout.width(10);
				cout.setf(ios::left);
				cout << checking.accNum;
				cout.unsetf(ios::left);
				cout.width(15);
				cout.setf(ios::left);
				cout << checking.interestRate;
				cout.unsetf(ios::left);

				cout.width(12);
				cout.setf(ios::left);
				cout << checking.cusName;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << checking.country;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << checking.cusId;
				cout.unsetf(ios::left);
				cout << endl;
			}
		}
		catch (SQLException& sqlExcp)
		{
			cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
		}
	}

	//******************************************************************************************

	int findSaving(Connection * conn, int save)
	{
		Statement* stmt = conn->createStatement();
		ResultSet* rs = stmt->executeQuery("SELECT * From savingaccount Where account_number=" + to_string(save));
		if (rs->next())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//******************************************************************************************

	void displayAllSaving(Connection* conn)
	{
		try
		{
			Statement* stmt3 = conn->createStatement();
			ResultSet* rs2 = stmt3->executeQuery("SELECT * FROM savingaccount");
			cout.width(10);
			cout.setf(ios::left);
			cout << "AccountNo ";
			cout.unsetf(ios::left);
			cout << " ";
			cout.width(15);
			cout.setf(ios::left);
			cout << "InterestRate";
			cout.unsetf(ios::left);
			cout.width(12);
			cout.setf(ios::left);
			cout << "CussNum";
			cout.unsetf(ios::left);
			cout.width(20);
			cout.setf(ios::left);
			cout << "Country";
			cout.width(15);
			cout.setf(ios::left);
			cout << "CustomerId";
			cout.unsetf(ios::left);
			cout << endl;
			Saving saving;
			while (rs2->next())
			{
				saving.accNum = rs2->getInt(1);
				saving.interestRate= rs2->getInt(2);
				saving.cusName= rs2->getString(3);
				saving.country= rs2->getString(4);
				saving.cusId = rs2->getInt(5);

				cout << " ";
				cout.width(10);
				cout.setf(ios::left);
				cout << saving.accNum;
				cout.unsetf(ios::left);
				cout.width(15);
				cout.setf(ios::left);
				cout << saving.interestRate;
				cout.unsetf(ios::left);

				cout.width(12);
				cout.setf(ios::left);
				cout << saving.cusName;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << saving.country;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << saving.cusId;
				cout.unsetf(ios::left);
				cout << endl;
			}
		}
		catch (SQLException& sqlExcp)
		{
			cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
		}
	}

	//******************************************************************************************

	int findAccount(Connection * conn, int acc)
	{
		Statement* stmt = conn->createStatement();
		ResultSet* rs = stmt->executeQuery("SELECT * FROM account WHERE account_number=" + to_string(acc));
		if (rs->next())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//******************************************************************************************

	void displayAccount(Connection* conn, Account account)
	{
		int ecode;
		bool correctCode = false;
		do
		{
			cout << "\nEnter Payment number: ";
			cin >> ecode;
			if (!cin || findAccount(conn, ecode) != 1)
			{
				correctCode = false;
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "\nInvalid Account number\n";
			}
			else
			{
				correctCode = true;
				cout << "\nValid Input";
				cout << "\nSearch in table ..." << endl;
				try
				{
					Statement* stmt2 = conn->createStatement();
					ResultSet* rs2 = stmt2->executeQuery("select *from account where account_number =" + to_string(ecode));
					while (rs2->next())
					{
						cout << "\n-------------- Account Information --------------" << endl;
						account.accNum = rs2->getInt(1);
						account.balance = rs2->getString(2);
						account.date = rs2->getString(3);
						account.accType = rs2->getString(4);
						account.userId = rs2->getInt(5);
						account.pass= rs2->getString(6);
						cout << "\n";
						cout << "Account No: ";
						cout << account.accNum;

						cout << "\n";
						cout << "Account Balance: ";
						cout << account.balance;

						cout << "\n";
						cout << "Account Creating Date: ";
						cout << account.date;

						cout << "\n";
						cout << "Account Type: ";
						cout << account.accType;

						cout << "\n";
						cout << "User ID: ";
						cout << account.userId;

						cout << "\n";
						cout << "Account Password: ";
						cout << account.pass << endl;
					}
				}
				catch (SQLException& sqlExcp)
				{
					cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
				}
			}
		} while (correctCode == false); 
	}

	//******************************************************************************************

	void displayAllAccount(Connection* conn)
	{
		try
		{
			Statement* stmt3 = conn->createStatement();
			ResultSet* rs2 = stmt3->executeQuery("SELECT * FROM account");
			cout.width(10);
			cout.setf(ios::left);
			cout << "AccountNo ";
			cout.unsetf(ios::left);
			cout << " ";
			cout.width(15);
			cout.setf(ios::left);
			cout << "Balance";
			cout.unsetf(ios::left);
			cout.width(12);
			cout.setf(ios::left);
			cout << "Date";
			cout.unsetf(ios::left);
			cout.width(20);
			cout.setf(ios::left);
			cout << "accountType";
			cout.width(15);
			cout.setf(ios::left);
			cout << "userID";
			cout.unsetf(ios::left);
			cout.width(15);
			cout.setf(ios::left);
			cout << "Password";
			cout.unsetf(ios::left);
			cout << endl;
			Account account;
			while (rs2->next())
			{
				account.accNum = rs2->getInt(1);
				account.balance= rs2->getString(2);
				account.date = rs2->getString(3);
				account.accType = rs2->getString(4);
				account.userId = rs2->getInt(5);
				account.pass = rs2->getString(6);

				cout << " ";
				cout.width(10);
				cout.setf(ios::left);
				cout << account.accNum;
				cout.unsetf(ios::left);
				cout.width(15);
				cout.setf(ios::left);
				cout << account.balance;
				cout.unsetf(ios::left);

				cout.width(12);
				cout.setf(ios::left);
				cout << account.date;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << account.accType;
				cout.unsetf(ios::left);

				cout.width(15);
				cout.setf(ios::left);
				cout << account.userId;
				cout.unsetf(ios::left);

				cout.width(15);
				cout.setf(ios::left);
				cout << account.pass;
				cout.unsetf(ios::left);
				cout << endl;
			}
		}
		catch (SQLException& sqlExcp)
		{
			cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
		}
	}

	//******************************************************************************************

	int findBranch(Connection * conn, int branch)
	{
		Statement* stmt = conn->createStatement();
		ResultSet* rs = stmt->executeQuery("SELECT * FROM branch WHERE branch_id=" + to_string(branch));
		if (rs->next())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	//******************************************************************************************

	void displayAllBranch(Connection* conn)
	{
		try
		{
			Statement* stmt3 = conn->createStatement();
			ResultSet* rs2 = stmt3->executeQuery("SELECT * FROM branch");
			cout.width(10);
			cout.setf(ios::left);
			cout << "Branch ID";
			cout.unsetf(ios::left);
			cout << " ";
			cout.width(15);
			cout.setf(ios::left);
			cout << "Name";
			cout.unsetf(ios::left);
			cout.width(12);
			cout.setf(ios::left);
			cout << "City";
			cout.unsetf(ios::left);
			cout.width(20);
			cout.setf(ios::left);
			cout << "State";
			cout.width(15);
			cout.setf(ios::left);
			cout << "Assets";
			cout.unsetf(ios::left);
			cout << endl;
			Branch branch;
			while (rs2->next())
			{
				branch.branchId = rs2->getInt(1);
				branch.name = rs2->getString(2);
				branch.city = rs2->getString(3);
				branch.state = rs2->getString(4);
				branch.assets= rs2->getString(5);

				cout << " ";
				cout.width(10);
				cout.setf(ios::left);
				cout << branch.branchId;
				cout.unsetf(ios::left);
				cout.width(15);
				cout.setf(ios::left);
				cout << branch.name;
				cout.unsetf(ios::left);

				cout.width(12);
				cout.setf(ios::left);
				cout << branch.city;
				cout.unsetf(ios::left);

				cout.width(20);
				cout.setf(ios::left);
				cout << branch.state;
				cout.unsetf(ios::left);

				cout.width(15);
				cout.setf(ios::left);
				cout << branch.assets;
				cout.unsetf(ios::left);
				cout << endl;
			}
		}
		catch (SQLException& sqlExcp)
		{
			cout << sqlExcp.getErrorCode() << ": " << sqlExcp.getMessage();
		}
	}

	//******************************************************************************************