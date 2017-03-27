#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Torso
{
int battery_comparments;
int max_arms;
};
class Battery
{
double power_available;
double max_energy;



};
class Arm
{
	double max_power
};
class Locomotor
{
	double max_power;
	
	
};
class Head
{
	double power;
};
class Robot_part
{
	protected:
	string name;
	int model_number;
	double cost;
	string description;
	string image_filename;
	
	
};

class Robot_model
{
	string name;
	int model_number;
	Robot_part torso;
	Robot_part head;
	Robot_part locomotor;
	Robot_part arm;
	Robot_part battery;
	public:
	double cost();
	double max_speed();
	double max_batter_life();
};
class Sales_associate
{
	
string name;
	int employee_number;
};
class customer
{
	string name;
	int customer_number;
	string phone_number;
	string email_address;
};
	
	
class Order
{
	int order_number;
	string date;
Customer customer;
Sales_associate sales_associate;
Robot_model Robot_model;
int status;
public:
double robot_cost();
double extended_price ();
};


class Shop
{
	Order orders;
	Robot_parts robot_parts;
	Robot_model robot_models;
	 Customer customers;
	 Sales_associate sales_associate;
	public:
	 void create_new_robot_part();
	 void create_new_robot_model();
	 void create_new_customers();
	 void create_new_sales_associate();
	 void create_new_order();
	 void save(string filename);
	 void open(string filename);


}; 
void Shop::create_new_robot_part()
{
	
	
}

void Shop::create_new_robot_model()
{
	
	
	
}

void Shop::create_new_customers()
{
	cout<<"Please Enter Customer's Name";
	cin>> customers.name;
	cout<<"Phone Number?";
	cin>>customers.phone_number;
	cout<<"Email?"
	cin>>customers.email_address;
	cout<<" Customer number";
	cin>>customers.customer_number;
	
	
	
	
}
void Shop:: create_new_associate()
{
	cout<<"Please Enter Sales Associate name";
	cin>> sales_associate.name;
	cout<<"ID number?";
	cin>>sales_associate.phone_number;
	
	
	
	
	
}

void Shop:: create_new_order()
{
	
	
	
	
}

void Shop:: Save(string filename)
{
	
	
	
	
}

void Shop:: Load (string filename)
{
	
	
	
	
}


class View
{
	string get_menu();
	string get_list_order();
	string get_list_customers();
	string get_list_associates();
	string get_list_robotmodel();
	string get_list_parts();
};
string View::get_menu()
{
	int i=0;
	vector <string> menu_options= "Create new robot parts.","Create new robot Model.","Create a new Customer.","Create a new Sales Associate","Create a new order","List orders","List Customers","List Sales Associate", "List Robot Models","List robot parts","Save","Load","Quit";
	while (i!=13)
	{
		
		if (i=12)
		{
			
			cout<<"(0) "<<menu_options[i];
		}
		else
		{
		
		cout<<"( "<<i<<") "<<menu_options[i];
		}
	
}

class Controller
{
public:
void cmloop();
void exectcom(int com);
View view;
Shop shop;
};
void Controller::cmloop()
{
	int ind = -1;
while(ind !=0)
{
	
	view.get_menu();
cin>>ind;
cin.ignore();
exectcom(ind);
}	
}
void Controller::exectcom(int command)
{
	if(command ==0)
	{
		return;
	}
	else if(command ==1
	{
		
		shop.create_new_robot_part();
	}
	else if (command==2)
	{
		
		shop.create_new_robot_model();
		
	}
	else if (command==3)
	{
		
		shop.create_new_customers();
		
	}
	
	else if (command==4)
	{
		
		shop.create_new_associate();
		
	}
	else if (command==5)
	{
		
		
		shop.create_new_order();
	}
	else if(command==6)
	{
		
		
	}
	else if (command==7)
	{
		
		
	}
	else if (command==8)
	{


	}
	else if (command==9)
	{
		
		
	}
	else if (command==10)
	{


	}
	else if (command==11)
	{
		
		
		
	}
	else if( command==12)
	{
		
		
		
	}
	else
	{
		cout<<"Invalid Command";
	}
	
	
}


int main()
{
	Controller control;
	
	control.cmloop();
	
	
	
}
