#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Robot_part
{
	protected:
	string name;
	int model_number;
	double cost;
	string description;
	//string image_filename;
	public:
	void change_variables();
};

void Robot_part::change_variables()
{
    string name_pt;
    	int model_number_pt;
	double cost_pt;
	string description_pt;
	string image_filename_pt;
	cout<<"Name";
		cin>>name_pt;
		cout<<"Model Number";
		cin>>model_number_pt;
		cout<<"Cost";
		cin>>cost_pt;
		cout<<"Description";
		cin>>description_pt;
		cout<<"Image filename";
		cin>>image_filename_pt;
		
	 name=name_pt;
		model_number=model_number;
	cost=cost_pt;
		description=description_pt;
	//	image_filename=image_filename_pt;
		
}

class Torso
{
int battery_comparments;
int max_arms;
Robot_part torso;
};
class Battery
{
double power_available;
double max_energy;
Robot_part battery;


};
class Arm
{
	double max_power;
	Robot_part arm;
};
class Locomotor
{
	double max_power;
	Robot_part locomotor;
	
};
class Head
{
	double power;
	Robot_part head;
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
public:
void set_variables();
};
void Sales_associate:: set_variables()
{
int id;
string names;
	cout<<"Please Enter Sales Associate name:\n";
	cin>> names;
	cout<<"ID number:\n";
	cin>>id;
	name=names;
	employee_number=id;
	
}

class Customer
{
	string name;
	int customer_number;
	string phone_number;
	string email_address;
public:
	void set_variables();
};
	

void Customer::set_variables()
{
string nam;
string number;
string email;
int numb;
cout<<"Please Enter Customer's Name:\n";
cin>> name;
cout<<"Phone Number:\n";
cin>>number;
cout<<"Email:\n";
cin>>email;
cout<<"Customer number:\n";
cin>>numb;

	name=nam;
	phone_number=number;
	email_address=email;
	customer_number=numb;	
}
	
class Order
{
int order_number;
string date;
Customer customer;
Sales_associate sales_associate;
Robot_model robot_model;
int status;
public:
double robot_cost();
double extended_price ();
void set_variables();
};


class Shop
{
	vector <Order> orders;
	vector <Arm> arm_parts;
	vector <Torso> torso_part;
	vector<Locomotor> locomotor_part;
	vector <Battery> battery_part;
	vector <Robot_model> robot_models;
	vector <Customer> customers;
	vector <Head> head_part;
	vector <Sales_associate> sales_associate;
	public:
	 void create_new_robot_part();
	 
		 
	
		 //Need to implement the individual parts
		  

	 void create_new_robot_model();
	 void create_new_customers();
	
	 void create_new_sales_associate();
	 void create_new_order(Shop shop);	 

	 void save(string filename);
	 void open(string filename);


}; 

void Shop::create_new_robot_model()
{
	
	
	
}


void Shop:: create_new_sales_associate()
{
Sales_associate sal;
	sal.set_variables();
	sales_associate.push_back(sal);
	
	
	
	
}

void Shop:: create_new_order(Shop shop)
{
	
	
	
	
}

void Shop:: save(string filename)
{

	
	

	
	
}

void Shop:: open (string filename)
{
	
	
	
	
}

void Shop::create_new_customers()
{
	 Customer cus;
		 cus.set_variables();
		 customers.push_back(cus);
		 
	
	
}
void Shop::create_new_robot_part()
{
    
 Robot_part pts;
		 pts.change_variables();   
    
}

class View
{
public:
	void get_menu();
	//string get_list_order(Shop shop);
	string get_list_customers(Shop shop);
	//string get_list_associates(Shop shop);
	string get_list_robotmodel();
	string get_list_parts();
};
void View::get_menu()
{
	int i=0;
	 string menu_options[]= {"Quit","Create new robot parts.","Create new robot Model.","Create a new Customer.","Create a new Sales Associate","Create a new order","Save","Load"};
	while (i!=13)
	{
		
		
	
		
		cout<<"( "<<i<<") "<<menu_options[i]<<"\n";
		
	i++;
}
}
/*string View::get_list_order(Shop shop)
{
int i;
	if(shop.orders[0]=="NULL")
	   {
	cout<<"There are no Current Orders";	   
	   }
	 else
	   {
	while(shop.orders[i]!="NULL")
	{
		cout<<"("<<i<<") "<<shop.orders[i];
		i++
}	
	   }
string View::get_list_associates(Shop shop)
	   {
		   int i;
		 while(shop.sales_associate[i]!=NULL)
		 {cout<<"("<<shop.sales_associate[i]<<")";
		  i++;
		 }
		   
		   
		   
	  
		   
	   }*/
class Controller
{
public:
void cmloop();
int exectcom(int com);
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
int Controller::exectcom(int command)
{
	if(command ==0)
	{
		return 0;
	}
	else if(command ==1)
	{
		string name_pt;
	int model_number_pt;
	double cost_pt;
	string description_pt;
	string image_filename_pt;
	cout<<"Name";
		cin>>name_pt;
		cout<<"Model Number:\n";
		cin>>model_number_pt;
		cout<<"Cost:\n";
		cin>>cost_pt;
		cout<<"Description:\n";
		cin>>description_pt;
		cout<<"Image filename:\n";
		cin>>image_filename_pt;
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
		
		shop.create_new_sales_associate();
		
	}
	else if (command==5)
	{
		//get_list_associates(shop);
		shop.create_new_order(shop);
	}

	else
	{
		cout<<"Invalid Command\n";
	}
	
	


}
int main()
{
	Controller control;
	
	control.cmloop();
	
	
	
}
