#include <iostream>
#include <fstream>
using namespace std;

class bank_acc{
protected:
	int pin;
	int acc_no;
	string Fname,Lname;
	int balance;
	float interest;
	int min_balance;
public:
	//pure virtual funtions
	virtual void withdraw()=0;
	virtual void print_acc_data()=0;
	//reading users data from file
	void get_info(){
		int input;
		ifstream data;
		cout<<"Enter your pin: ";
		cin>>input;
		data.open("D11.txt");
		while (!data.eof()){
			int accNo;
			float new_balance;
			string F_name,L_name;
			data>>pin>>accNo>>F_name>>L_name>>new_balance;
			if (pin==input){
				balance=new_balance;
				acc_no=accNo;
				Fname=F_name;
				Lname=L_name;
			}
			else if(input!=pin){
				cout<<"---Ivalid Pin---"<<endl;
			}
		}
	}
	//function to deposit money
	void make_deposit(){
		int ammount;
		cout<<"Enter the Ammount you want to deposit: ";
		cin>>ammount;
		balance+=ammount;
		cout<<"Your account balance after deposit is: "<<balance<<endl;
	}
};
//Checking Account Class
class checking_acc: public bank_acc{
public:
	int no_of_checks,amount,serviceCharge,check_limit;
	virtual void write_check()=0;
};
//no service Charge checking class
class no_service_charge: public checking_acc{
public:
	//constructor
	no_service_charge(){
		no_of_checks=0;
		interest=0;
		min_balance=10000;
	}
	//function for writing cheque
	void write_check(){
		cout<<"Enter the Ammount to write a check: ";
		cin>>amount;
		if ( amount>balance){
			cout<<"You do not have sufficient Amount to write a check. Re Enter the Ammount"<<endl;
			cin>>amount;
		}
		else {
			cout<<"You Have Successfuly written a check of Rs "<<amount<<endl;
			no_of_checks++;
		}
	}
	//function to withdraw money
	void withdraw(){

		if (balance==0){
			cout<<"Your Account has no balance."<<endl;
		}
		else if(balance<=min_balance){
			cout<<"You do not have enough balance to withdraw from. "<<endl;
		}
		else if(balance>amount){
			balance-=amount;
			interest=(5/100)*balance;
			cout<<"Your account balance after widhdrawl is: "<<balance<<endl;	
			cout<<"The interest on your account balance is Rs "<<interest<<endl;
			balance+=interest;
			cout<<"Your Account Balance including Interest is: "<<balance<<endl;
		}
	}
	//function to print Monthly statements
	void print_acc_data(){
		cout<<"*****Monthly Statement*****"<<endl;
		cout<<"Owner's Name: "<<Fname<<" "<<Lname<<endl;
		cout<<"Account Number: "<<acc_no<<endl;
		cout<<"Account Balance: Rs "<<balance<<endl;
		cout<<"Number of Checks Written: "<<no_of_checks<<endl;
	}
};
// Service Charge Checking class
class service_charge: public checking_acc{
public:
	//constructor
	service_charge(){
		serviceCharge=1000;
		check_limit=5;
		no_of_checks=0;
	}
	//function for Writing Checking
	void write_check(){
		if (no_of_checks<check_limit){
			cout<<"Enter the Ammount to write a check: ";
			cin>>amount;
			if ( amount>balance){
				cout<<"You do not have sufficient Amount to write a check. Re Enter the Ammount"<<endl;
				cin>>amount;
			}
			else {
				cout<<"You Have Successfuly written a check of Rs "<<amount<<endl;
				no_of_checks++;
			}
		}
		else if(no_of_checks>=check_limit){
				cout<<"You Have Already reached the limit of writing checks Each Month"<<endl;
			}
		}
	//function for money withdrawl	
	void withdraw(){

		if (balance==0){
			cout<<"Your Account has no balance."<<endl;
		}
		else if(balance<amount){
			cout<<"You do not have enough balance to withdraw from. "<<endl;
		}
		else if(balance>amount){
			balance-=amount;
			cout<<"Your account balance after widhdrawl  is: "<<balance<<endl;
			balance-=serviceCharge;	
			cout<<"Your account balance after deducting our service charges is: "<<balance<<endl;
		}
	}
	//function for printing Monthly statements
	void print_acc_data(){
		cout<<"*****Monthly Statement*****"<<endl;
		cout<<"Owner's Name: "<<Fname<<" "<<Lname<<endl;
		cout<<"Account Number: "<<acc_no<<endl;
		cout<<"Account Balance: Rs "<<balance<<endl;
		cout<<"Number of Checks Written: "<<no_of_checks<<endl;
	}
};
// High Interest Service Charge Checking class
class high_interest: public no_service_charge{
public:
	//constructor
	high_interest(){
		interest=0;
	}	
	void withdraw(){
		//function for money withdrawl
		if (balance==0){
			cout<<"Your Account has no balance."<<endl;
		}
		else if(balance<=min_balance){
			cout<<"You do not have enough balance to withdraw from. "<<endl;
		}
		else if(balance>amount){
			balance-=amount;
			interest=(14/100)*balance;
			cout<<"Your account balance after widhdrawl is: "<<balance<<endl;	
			cout<<"The interest on your account balance is Rs "<<interest<<endl;
			balance+=interest;
			cout<<"Your Account Balance including Interest is: "<<balance<<endl;
		}
	}

};
//saving account class
class saving_acc: public bank_acc{
public:
	int curr_balance;
	int ammount;
	//constructor
	saving_acc(){
		interest=0;
		curr_balance=0;
	}
	//function for money withdrawl
	 void withdraw(){
	 	cout<<"Enter the Ammount you want to withdraw: ";
	 	cin>>ammount;
	 	if (balance==0){
	 		cout<<"Your Account has no balance"<<endl;
	 	}
	 	else if(ammount>balance){
	 		cout<<"You do not have enough balance to withdraw from. "<<endl;
	 	}
	 	else if(balance>=ammount){
			balance-=ammount;
			interest=(12/100)*balance;
	 		cout<<"Your account balance after widhdrawl is: "<<balance<<endl;
	 		curr_balance=balance+interest;	
		}
	 }
	 //function for printing Monthly Statements
	void print_acc_data(){
		cout<<"------Monthly Statement------"<<endl;
		cout<<"Owner's Name: "<<Fname<<" "<<Lname<<endl;
		cout<<"Account Number: "<<acc_no<<endl;
		cout<<"Account Balance: Rs "<<balance<<endl;
		cout<<"Your Calculated Interest is: Rs "<<interest<<endl;
		cout<<"Account Balance After Adding Iterest: Rs "<<curr_balance<<endl;
	}

};
//high interest Saving Class
class high_interest_saving: public saving_acc{
public:
	//constructor
	high_interest_saving(){
		min_balance=5000;
	}
	//function for money withdrawl
	 void withdraw(){
	 	cout<<"Enter the Ammount you want to withdraw: ";
	 	cin>>ammount;
	 	if (balance==0){
	 		cout<<"Your Account has no balance"<<endl;
	 	}
	 	else if(ammount>balance || balance==min_balance){
	 		cout<<"You do not have enough balance to withdraw from.You Have Already Reached Minimum balance "<<endl;
	 	}
	 	else if(balance>ammount){
			balance-=ammount;
			interest=(15/100)*balance;
	 		cout<<"Your account balance after widhdrawl is: "<<balance<<endl;
	 		curr_balance=balance+interest;	
		}
	 }


};
//certificate of Deposit Class
class certificate_of_deposit: public bank_acc{
public:
	int mat_months,curr_month,penalty,amount;
	//constructor
	certificate_of_deposit(){
		mat_months=0;
		curr_month=2;
		interest=0;
		penalty=40000;
	}
	//setting maturity months
	void set_maturity_months(int months){
		mat_months=months;
	}
	//function for money withdrawl
	void withdraw(){
		if(mat_months>curr_month){
			int input;
			cout<<"Dear User, Your Maturity Period is still Active."<<endl;
			cout<<"If you withdraw money during the maturity Period, You will have to pay a penalty"<<endl;
			cout<<"Penalty Amount: Rs 40000."<<endl;
			cout<<"If you still want to Continue with Process of Withdrawl, Press 1 else Press 2 to Exit: "<<endl;
			cin>>input;
			if(input==1){
				cout<<"Enter the amount you want to withdraw: ";
				cin>>amount;
				 if(balance<amount){
					cout<<"You do not have enough balance to withdraw from. "<<endl;
				 }
				else if(balance>amount){
					balance-=amount;
					balance-=penalty;
					interest=(20/100)*balance;
					balance+=interest;
					cout<<"RS "<<penalty<<" has been deducted from your account "<<endl;
					cout<<"Your account balance after widhdrawl and including interest is: "<<balance<<endl;
				}
				
			}
			else if(input==2){
				cout<<"Thankyou for Continuing with your Maturity Period"<<endl;
			}
		}
		else if(mat_months<=curr_month){
			cout<<"Enter the amount you want to Withdraw: ";
			cin>>amount;
		    if(amount>balance ){
	 			cout<<"You do not have enough balance to withdraw from."<<endl;
	 		}
	 		else if(balance>amount){
				balance-=amount;
				interest=(20/100)*balance;
				balance+=interest;
				cout<<"Interest on your Balance is: "<<interest;
	 			cout<<"Your account balance after widhdrawl and including interest is: "<<balance<<endl;
			}
		 }	
	}
	//printing Monthly statements
	void print_acc_data(){
		cout<<"------Monthly Statement------"<<endl;
		cout<<"Owner's Name: "<<Fname<<" "<<Lname<<endl;
		cout<<"Account Number: "<<acc_no<<endl;
		cout<<"Account Balance: Rs "<<balance<<endl;
		cout<<"Your Calculated Interest is: Rs "<<interest<<endl;
		cout<<"Account Balance After Adding Iterest: Rs "<<balance<<endl;
	}
};
//Main Function for THe Programm
int main(){
	bank_acc *objt;
	checking_acc *obj;
	char option;
	int choice,choice2,month;
	cout<<"--Choose Any One of The Option--"<<endl;
	cout<<"A-Checing Account"<<endl;
	cout<<"B-Saving Account"<<endl;
	cout<<"C-Certificate Of Deposit Account"<<endl;
	cin>>option;
	if(option=='a'){
		cout<<"---Welcome to Your Checking Account---"<<endl;
		cout<<"Press 1 for No Service Charge Checking"<<endl;
		cout<<"Press 2 for Service Charge Checking"<<endl;
		cout<<"Press 3 for High Interest No Service Charge Checking"<<endl;
		cin>>choice;
		if (choice==1){
			no_service_charge Acc;
			obj=&Acc;
			obj->get_info();
			cout<<"Choose the Option"<<endl;
			cout<<"1-Make Deposit"<<endl;
			cout<<"2-Write Check and Withdraw Money"<<endl;
			cout<<"3-Print Monthly Statements"<<endl;
			cin>>choice2;
			if(choice2==1){
				obj->make_deposit();
			}
			else if(choice2==2){
				obj->write_check();
    			obj->withdraw();
			}
			else if(choice2==3){
				obj->print_acc_data();
			}
		}
		if (choice==2){
			service_charge Acc;
			obj=&Acc;
			obj->get_info();
			cout<<"Choose the Option"<<endl;
			cout<<"1-Make Deposit"<<endl;
			cout<<"2-Write Check and Withdraw Money"<<endl;
			cout<<"3-Print Monthly Statements"<<endl;
			cin>>choice2;
			if(choice2==1){
				obj->make_deposit();
			}
			else if(choice2==2){
				obj->write_check();
    			obj->withdraw();
			}
			else if(choice2==3){
				obj->print_acc_data();
			}
		}
		if (choice==3){
			high_interest Acc;
			obj=&Acc;
			obj->get_info();
			cout<<"Choose the Option"<<endl;
			cout<<"1-Make Deposit"<<endl;
			cout<<"2-Write Check and Withdraw Money"<<endl;
			cout<<"3-Print Monthly Statements"<<endl;
			cin>>choice2;
			if(choice2==1){
				obj->make_deposit();
			}
			else if(choice2==2){
				obj->write_check();
    			obj->withdraw();
			}
			else if(choice2==3){
				obj->print_acc_data();
			}
		}

	}
	if(option=='b'){
		cout<<"--Welcome To Your Saving Account--"<<endl;
		cout<<"Press 1 Saving Account"<<endl;
		cout<<"Press 2 High Interest Saving"<<endl;
		cin>>choice;
		if (choice==1){
			saving_acc Acc;
			objt=&Acc;
			objt->get_info();
			cout<<"Choose the Option"<<endl;
			cout<<"1-Make Deposit"<<endl;
			cout<<"2-Withdraw Money"<<endl;
			cout<<"3-Print Monthly Statements"<<endl;
			cin>>choice2;
			if(choice2==1){
				objt->make_deposit();
			}
			else if(choice2==2){
    			objt->withdraw();
			}
			else if(choice2==3){
				objt->print_acc_data();
			}
		}
		if (choice==2){
			high_interest_saving Acc;
			objt=&Acc;
			objt->get_info();
			cout<<"Choose the Option"<<endl;
			cout<<"1-Make Deposit"<<endl;
			cout<<"2-Withdraw Money"<<endl;
			cout<<"3-Print Monthly Statements"<<endl;
			cin>>choice2;
			if(choice2==1){
				objt->make_deposit();
			}
			else if(choice2==2){
    			objt->withdraw();
			}
			else if(choice2==3){
				objt->print_acc_data();
			}
		}

	}
	if(option=='c'){
		certificate_of_deposit Acc;
		objt=&Acc;
		cout<<"Welcome To The CD Account "<<endl;
		objt->get_info();
		cout<<"Enter THe Maturity Period You Would Like For Your Balance: ";
		cin>>month;
		Acc.set_maturity_months(month);
		cout<<"Choose the Option"<<endl;
		cout<<"1-Make Deposit"<<endl;
		cout<<"2-Withdraw Money"<<endl;
		cout<<"3-Print Monthly Statements"<<endl;
		cin>>choice2;
		if(choice2==1){
			objt->make_deposit();
		}
		else if(choice2==2){
   			objt->withdraw();
		}
		else if(choice2==3){
			objt->print_acc_data();
		}
	}
	
	
	return 0;
}