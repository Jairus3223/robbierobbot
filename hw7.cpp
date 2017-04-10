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
	cout<<"Name\n";
		getline(cin,name_pt);
	cin.ignore();
		cout<<"Model Number\n";
	cin>>model_number_pt;
		cout<<"Cost\n";
	cin.ignore();
cin>>cost_pt;
cin.ignore();
		cout<<"Description\n";
		
	getline(cin,description_pt);
	cin.ignore();
		cout<<"Image filename\n";
		getline(cin,image_filename_pt);
		cin.ignore();
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
public:
void change_variable(Robot_part t);
};
void Torso::change_variable(Robot_part t)
{
	
cout<<"Max number of Arms\n";
cin>>max_arms;	
torso=t;	
cout<<"How many battery comparments?";
	cin>>battery_comparments;

}


class Battery
{
double power_available;
double max_energy;
Robot_part battery;
public:
	void change_variable(Robot_part t)
	{
	    
	    	
cout<<"How much power remains?\n";
cin>>power_available;	
battery=t;
cout<<"What is max power?\n";
	cin>>max_energy;
	
	
	    
	    
	}

};


	
	
	
	

class Arm
{
	double max_power;
	Robot_part arm;
public: 
	void change_variable(Robot_part t)
	{
	    cout<<"How much power in part?\n";
cin>>max_power;	
arm=t;	
	   	    
	}
};

class Locomotor
{
	double max_power;
	Robot_part locomotor;
	public:
	void change_variable(Robot_part t)
	{
	    cout<<"Max Power in part?\n";
cin>>max_power;	
locomotor=t;	}

};

	
class Head
{
	double power;
	Robot_part head;
	public:
void change_variable(Robot_part t)
{
    cout<<"How much power in part?\n";
cin>>power;	
head=t;	}
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
void set_variables()
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
};




class Customer
{
	string name;
	int customer_number;
	string phone_number;
	string email_address;
public:
	void set_variables()
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
	customer_number=numb;	}
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
void set_variables(int order_numbers,string dates,Customer cus, Sales_associates t, Robot_model rob)
{
	order_number=order_numbers;
	date=dates;
	customer=cus;
	
	sales_associate=t;
	robot_model=rob;
	
	
}

	
		
		
		
	
	
	

};


class Shop
{
	vector <Order> orders;
	vector <Arm> arm_parts;
	vector <Torso> torso_parts;
	vector<Locomotor> locomotor_parts;
	vector <Battery> battery_parts;
	vector <Robot_model> robot_models;
	vector <Customer> customers;
	vector <Head> head_parts;
	vector <Sales_associate> sales_associate;
	public:
	 void create_new_robot_part();
	 
		 
	
		 //Need to implement the individual parts
		  

	 void create_new_robot_model();
	 void create_new_customers();
	
	 void create_new_sales_associate();
	 void create_new_order();	 

	 void save(string filename);
	 void open(string filename);


}; 

void Shop::create_new_robot_model()
{}


void Shop:: create_new_sales_associate()
{
Sales_associate sal;
	sal.set_variables();
	sales_associate.push_back(sal);
	
	
	
	
}

void Shop:: create_new_order(int order_numbers,string dates,Customer cus, Sales_associates t, Robot_model rob)
{
	Order order;
	order.change_variable(int order_numbers,string dates,Customer cus, Sales_associates t, Robot_model rob);
	orders.push_back(order);
	
	
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
	
	int i;
	int com;
	string menu[]={"Battery","Locomotor","Torso","Head","Arm"};
while(i!=5)
{
	cout<<"("<<i<<" ) "<<menu[i]<<"\n";
    i++;
}
cin>>com;
	if(com==0)
	{
		Battery b;
		b.change_variable(pts);
		battery_parts.push_back(b);
	}
	else if(com==1)
	{
		
		Locomotor a;
		a.change_variable(pts);
		locomotor_parts.push_back(a);
		
	}
	
	else if(com==2)
		
	{
		Torso c;
		c.change_variable(pts);
		torso_parts.push_back(c);
		
	}
	else if (com==3)
		
	{
		Head d;
		d.change_variable(pts);
		head_parts.push_back(d);
		
	}
	else if (com==4)
	{
		Arm e;
		e.change_variable(pts);
		arm_parts.push_back(e);
	}
	
	else
	{cout<<"Invalid Part";
	 
	}
	
	
}
class View
{
public:
	void get_menu();
	//string get_list_order(Shop shop);
	void get_list_customers(vector <Customer>customer);
	void get_list_associates(vector <Sales_associate> sales_associate);
	void get_list_robotmodel(vector <Robot_model>robot_models);
	string get_list_parts();
};
void View::get_menu()
{
	int i=0;
	 string menu_options[]= {"Quit","Create new robot parts.","Create new robot Model.","Create a new Customer.","Create a new Sales Associate","Create a new order","Save","Load"};
	while (i!=8)
	{
		cout<<"( "<<i<<") "<<menu_options[i]<<"\n";
	i++;
}
}
void View::get_list_robot_models(vector <Robot_model> robot_models)
	   {
		   int i;
		 while(robot_models[i].name!=NULL)
		 {
		 cout<<"("<<i") "<<robot_models[i].name<<"/n";
		 i++
		 }	   
	   }


void View::get_list_associates(vector <Sales_associate> sales_associate)
	   {
		   int i;
		 while(sales_associate[i].name!=NULL)
		 {
		 cout<<"("<<i") "<<sales_associate[i].name<<"/n";
		 i++
		 }	   
	   }

void View::get_list_customers(vector <Customer> customer)
	   {
		   int i;
		 while(customer[i].name!=NULL)
		 {
		 cout<<"("<<i") "<<customer[i].name<<"/n";
		 i++
		 }	   
	   }



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
	
		shop.create_new_robot_part();
	}
	else if (command==2)
	{
		
		shop.create_new_robot_model();
		
	}
	else if (command==3)
	{
int command;
		int order_number;
		string date;
	cout<<"Please enter the order number\n";
	cin>>order_number;
	cout<<"Please enter the date\n";
	getline(cin,date);
	
	cout<<"Which customer\n";
	view.get_list_customers(shop.customers);
	cin>>command;
	Customer cus = shop.customer[command];
	cout<<"What sales associate";
		view.get_list_associates(shop.associates);
		cin>>command;
	Sales_associate sal=shop.sales_associate[command]; 	
	
	
	
	
	cout<<"What Robot model";
	view.get_list_robotmodel(shop.robot_models);
	cin>>command;
Robot_model rob= shop.robot_model[command];
		shop.create_new_order(order_number,date,cus,sal,rob);
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
