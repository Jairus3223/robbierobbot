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
	double max_power;
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
class Customer
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
Robot_model robot_model;
int status;
public:
double robot_cost();
double extended_price ();
};


class Shop
{
	vector <Order> orders;
	vector <Robot_part> robot_parts;
	vector <Robot_model> robot_models;
	vector <Customer> customers;
	vector <Sales_associate> sales_associate;
	public:
	 void create_new_robot_part(Robot_part pts);
	 void create_new_robot_model();
	 void create_new_customers(Customer cus);
	 void create_new_sales_associate(Sales_associate Sal);
	 void create_new_order();
	 void save(string filename);
	 void open(string filename);


}; 
void Shop::create_new_robot_part(string nam,int mod, double cos,string de,string file,)
{
	Robot_part pts;
	pts.name=nam;
 pts.model_number=mod;
 pts.cost=cos;
 pts.description=de;
 pts.file_name=file;
	
	
	robot_parts.push_back(pts);
	
}

void Shop::create_new_robot_model()
{
	
	
	
}

void Shop::create_new_customers(string name,int numb,string phone,string email)
{
Customer cus;
	cus.name=name;
	cus.customer_number=numb;
	cus.phone_number=phone;
	cus.email_address=email;
customers. push_back(cus);
	
	
	
	
}
void Shop:: create_new_sales_associate(Sales_associate sal)
{

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


class View
{
public:
	string get_menu();
	string get_list_order(Shop shop);
	string get_list_customers(Shop shop);
	string get_list_associates(Shop shop);
	string get_list_robotmodel();
	string get_list_parts();
};
string View::get_menu()
{
	int i=0;
	 string menu_options[]= {"Create new robot parts.","Create new robot Model.","Create a new Customer.","Create a new Sales Associate","Create a new order","List orders","List Customers","List Sales Associate", "List Robot Models","List robot parts","Save","Load","Quit"};
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
		   
		   
		   
		*/   
		   
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
	else if(command ==1)
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
		shop.create_new_robot_part(name_pt,model_number_pt,cost_pt,description_pt,image_filename_pt);
	}
	else if (command==2)
	{
		
		shop.create_new_robot_model();
		
	}
	else if (command==3)
	{
		string name;
string number;
string email;
int numb;
		cout<<"Please Enter Customer's Name";
	cin>> name;
	cout<<"Phone Number?";
	cin>>number;
	cout<<"Email?";
	cin>>email;
	cout<<" Customer number";
	cin>>numb;

		shop.create_new_customers(name,numb,number,email);
	}
	
	else if (command==4)
	{int id;
string name;
	cout<<"Please Enter Sales Associate name";
	cin>> name;
	cout<<"ID number?";
	cin>>id;
		
		shop.create_new_sales_associate(name,id);
		
	}
	else if (command==5)
	{
		get_list_associates(shop);
		shop.create_new_order();
	}
	/*else if(command==6)
	{
		view.get_list_order(shop);
		
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
	*/
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
