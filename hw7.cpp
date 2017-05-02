#include <iostream>
#include <vector>
#include <string>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/fl_ask.H>
using namespace std;
class Robot_part
{
	protected:
	string name;
	int model_number;
	double cost;
	string description;
	public:
	void change_variables();
	string get_name()
	{
		return name;
	}
	double get_cost()
	{
		return cost;
	}
};

void Robot_part::change_variables()
{
    string name_pt;
    	int model_number_pt;
	double cost_pt;
	string description_pt;
	string image_filename_pt;
	string e="Name\n";
		name_pt=(fl_input(e.c_str(),0));
	
		string m="Model Number\n";
	model_number_pt=atoi(fl_input(m.c_str(),0));
		string p="Cost\n";
	cost=atoi(fl_input(p.c_str(),0));
	


		string d="Description\n";
		description_pt=(fl_input(d.c_str(),0));
	
			
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
string get_name()
{
	return torso.get_name();
	
}
void get_rob_part(Robot_part t)
{
	t= torso;
	
}
/*void cost(double co)
{
	co= torso.get_cost();
}*/
};
void Torso::change_variable(Robot_part t)
{
	
string f="Max number of Arms\n";
max_arms=atoi(fl_input(f.c_str(),0))	;
torso=t;	
string g="How many battery comparments?";
	battery_comparments=atoi(fl_input(g.c_str(),0));

}


class Battery
{
double power_available;
double max_energy;
Robot_part battery;
public:
	void change_variable(Robot_part t)
	{
	    
	    	
string h="How much power remains?\n";
power_available=atoi(fl_input(h.c_str(),0));	
battery=t;
string i="What is max power?\n";
	max_energy=atoi(fl_input(i.c_str(),0));
	
	
	    
	    
	}
	string get_name()
{
	return battery.get_name();
	
}
/*void cost(double co)
{
	co= battery.get_cost();
}*/
void get_rob_part(Robot_part t)
{
	t= battery;
	
}
};


	
	
	
	

class Arm
{
	double max_power;
	Robot_part arm;
public: 
	void change_variable(Robot_part t)
	{
	    string j="How much power in part?\n";
max_power=atoi(fl_input(j.c_str(),0));	
arm=t;	
	   	    
	}
	string get_name()
{
	return arm.get_name();
	
}
void get_rob_part(Robot_part t)
{
	t= arm;
	
}
/*void cost(double co)
{
	co= arm.get_cost();
}*/
};

class Locomotor
{
	double max_power;
	Robot_part locomotor;
	public:
	void change_variable(Robot_part t)
	{
	    string m="Max Power in part?\n";
max_power=atoi(fl_input(m.c_str(),0));
		
	t.change_variables();
locomotor=t;	
	}
string get_name()
{
	return locomotor.get_name();
	
}
void get_rob_part(Robot_part t)
{
	t= locomotor;
	
}
/*void cost(double co)
{
	co= locomotor.get_cost();
}*/
};

	
class Head
{
	double power;
	Robot_part head;
	public:
void change_variable(Robot_part t)
{
    string l="How much power in part?\n";
power=atoi(fl_input(l.c_str(),0));	
head=t;	}
string get_name()
{
	return head.get_name();
	
}
void get_rob_part(Robot_part t)
{
	t= head;
	
}

/*void cost(double co)
{
	co= head.get_cost();
}*/
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
	double cost()
	{
		
		
	}
	double max_speed();
	double max_batter_life();
	void change_variables(Robot_part hd, Robot_part arms,Robot_part locom,Robot_part batt,Robot_part tor, string names,int model);
	string get_name()
{
	return name;
	
}
	void get_info(string named,int model, Robot_part tor, Robot_part hea, Robot_part loco, Robot_part ar, Robot_part bat)
	{
		named=name;
	model = model_number;
		tor=torso;
		hea=head;
		loco=locomotor;
		ar=arm;
		bat=battery;
		
	}

};
	
void Robot_model::change_variables(Robot_part hd, Robot_part arms,Robot_part locom,Robot_part batt,Robot_part tor, string names,int model)
{
	torso=tor;
	head=hd;
	arm=arms;
	locomotor=locom;
	battery=batt;
	name=names;
	model_number=model;
	
	
}

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
	string get_name()
{
	return name;
	
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
	string get_name()
{
	return name;
	
}
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
void set_variables(int order,string dat,Customer cus,Sales_associate sale,Robot_model ro)
{
	order_number=order;
	date=dat;
	customer=cus;
	sales_associate=sale;
	robot_model=ro;
	
	cout<<"Status of order?";
	cin>>status;
	
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
	string list_model()
	 {
	string menu;
		 string s;
		 int i;
		 for (i=0;i<robot_models.size();i++)
		 {
		menu+="(";
		 s=to_string(i);
		menu+=s;
		menu+=") "
		menu+=robot_models[i].get_name();
			 menu+="\n";
			 
	}
		 return menu;
	 }
		 
	
		 //Need to implement the individual parts
		  

	 void create_new_robot_model();
	 void create_new_customers();
	
	 void create_new_sales_associate();
	 void create_new_order();	 
void look(int com)
{
string named;
			int model; Robot_part tor; Robot_part hea; Robot_part loco; Robot_part ar; Robot_part bat;
	robot_models[com].get_info(named,model,tor,hea,loco,ar,bat);
	string head_name=hea.get_name();
	string torso_name=tor.get_name();
	string locomotor_name=loco.get_name();
	string arm_name=ar.get_name();
	string battery_name=bat.get_name();
	string info=" ";
	info+="Name: "+named+"\n Model Number: "+model;
	info+="\n Head: "+head_name + "\n Torso: "+torso_name;
	info+="\n Locomotor: "+locomotr_name +" \n Arm: "+arm_name;
	info+="\n Battery: "+battery_name;
	fl_message_title("Model Info");
	fl_messsage(info.c_str());
	
}
	 void save();
	 void open();


}; 

void Shop::create_new_robot_model()
{
int i;
int com;
double cost1,cost2,cost3,cost4,cost5;
Robot_part hea;
Robot_part ar;
Robot_part loco;
Robot_part bat;
Robot_part tor;
Robot_model h;

	string named;
	int model_numbers;
	string a="What is this Model Name\n";
	named=(fl_input(a.c_str(),0));
	string c="Which part:\n";
	string b="Model Number";
 model_numbers=atoi(fl_input(b.c_str(),0));
	for(i=0;i<arm_parts.size();i++)
	{
		c+="\n(";
		c+=to_string(i);
		c+=") ";
		c+=arm_parts[i].get_name();
	}

 model_numbers==atoi(fl_input(b.c_str(),0));

  com=atoi(fl_input(c.c_str(),0));
	arm_parts[com].get_rob_part(ar);
 
	string d="Which part";
	for(i=0;i<head_parts.size();i++)
	{
		d+="\n(";
		d+=to_string(i);
		d+=") ";
		d+=head_parts[i].get_name();
		
		
	}

	com=atoi(fl_input(d.c_str(),0));
 head_parts[com].get_rob_part(hea);
		
	string e="Which part:\n";	
	for(i=0;i<locomotor_parts.size();i++)
	{
		e+="\n(";
		e=to_string(i);
		e+=") ";
		e+=locomotor_parts[i].get_name();
	}
	
 com=atoi(fl_input(e.c_str(),0));
 
 
 
	
	locomotor_parts[com].get_rob_part(loco);
	string f="Which part:\n";
	for(i=0;i<battery_parts.size();i++)
	{
		f+="\n(";
		f=to_string(i);
		f+=") ";
		f+=battery_parts[i].get_name();
	}
	
		
com=atoi(fl_input(f.c_str(),0));
	battery_parts[com].get_rob_part(bat);
	
	
	string g="Which part:\n";
	for(i=0;i<torso_parts.size();i++)
	{
		g+="\n(";
		g=to_string(i);
		g+=") ";
		g=battery_parts[i].get_name();
	}
	
		
	com=atoi(fl_input(g.c_str(),0));
	torso_parts[com].get_rob_part(tor);

	h.change_variables( hea,ar,loco,bat,tor,named,model_numbers);
robot_models.push_back(h);


}
void Shop:: create_new_sales_associate()
{
Sales_associate sal;
	sal.set_variables();
	sales_associate.push_back(sal);
	
	
	
	
}

void Shop:: create_new_order()
{int i;
int com;
	int order;
	string date;
	Customer cus;
	Sales_associate sal;
	Robot_model ro;
	
	cout<<"Please enter order number\n";
	cin>>order;
	cout<<"Please enter date";
	getline(cin,date);
	cin.ignore();
	for(i=0;i<customers.size();i++)
	{
		cout<<"("<<i<<") "<<customers[i].get_name()<<"\n";
	}
	cout<<"Which Customer?\n";
	cin>>com;
	
	cus=customers[com];
	
	Order ordere;
	
	for(i=0;i<sales_associate.size();i++)
	{
		cout<<"("<<i<<") "<<sales_associate[i].get_name()<<"\n";
	}
	cout<<"Who is making the sale?\n";
	cin>>com;
	sal=sales_associate[com];
	for(i=0;i<robot_models.size();i++)
	{
		cout<<"("<<i<<") "<<robot_models[i].get_name()<<"\n";
	}
	cout<<"What model?\n";
	cin>>com;
	ro=robot_models[com];
	ordere.set_variables(order,date,cus,sal,ro);
	
	orders.push_back(ordere);
}
void Shop:: save()
{ /*string h=" Please enter a File name";
	string name=(fl_input(h.c_str(),0));
	ofstream file;
int i;
	h+=".txt";
	file.open(h);
	
	vector <Robot_model> robot_models;
	vector <Customer> customers;
	vector <Head> head_parts;
	vector <Sales_associate> sales_associate;
	file<<"\nArm Parts/n;
	while( arm_parts.name[i]!=NULL)
	{

	file<<( "<<i<<") "<<arm_parts.get_name[i]<<"\n";
		i++
	}
	
	i=0;
	file<<"\nTorso Parts\n;
	while( torso_parts.get_name[i]!=NULL)
	{

	file<<( "<<i<<") "<<torso_parts.get_name[i]<<"\n";
		i++
	}
	i=0;
	file<<"\nLocomotor Parts\n;
	while( locomotor_parts.get_name[i]!=NULL)
	{

	file<<( "<<i<<") "<<locomotor_parts.get_name[i]<<"\n";
		i++
	}
	i=0;
	file<<"Battery Parts\n";
	while( battery_parts.get_name[i]!=NULL)
	{

	file<<( "<<i<<") "<<battery_parts.get_name[i]<<"\n";
		i++
	}
	i=0;
	file<<"\nHead Parts\n;
	while( head_parts.get_name[i]!=NULL)
	{

	file<<( "<<i<<") "<<head_parts.get_name[i]<<"\n";
		i++
	}
	file.close();
	*/	
}

void Shop:: open ()
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
	
	
	int com;
	string menu="(0) Battery\n(1) Locomotor\n(2) Torso\n(3) Head\n(4) Arm";

com=atoi(fl_input(menu.c_str(),0));
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
	{string error=" Invalid Part";
		fl_message_title("Error");
		fl_message(error.c_str());
	}
	
	
}
class View
{
public:
	string get_menu();
	//string get_list_order(Shop shop);
	
	//string get_list_associates(Shop shop);
	
};
string View::get_menu()
{

	string menu="(0) Quit\n(1) Create new robot parts.\n(2) Create New Robot Model\n(3) Create New Customer\n (4) Create a new Sales Associate\n(5) Create a new order\n(6) Save\n(7) Load";
return menu;
	
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
	string menu=view.get_menu();
	int ind = -1;
while(ind !=0)
{
ind= atoi(fl_input(menu.c_str(),0));

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


		shop.create_new_customers();
	}
	
	else if (command==4)
	{
		
		shop.create_new_sales_associate();
		
	}
	else if (command==5)
	{
		//get_list_associates(shop);
		shop.create_new_order();
	}
	else if(command==6)
	{
		
		shop.save();
		
	}

	else if(command==7)
	{
		string menu= shop.list_model();
	fl_message_title("Models Names");
	fl_message(menu.c_str());	
		string question= " What Model do  you want to look at?";
		int com=-2;
		while(com!=-1)
		{
			com= atoi(fl_input(question.c_str(),0));
			if(com>=0)
			{
			shop.look(com);
			
			}
			else
			{
				com=-1;
			}
		}
		
		
	}
	
	else
	{
		string error=" Invalid Command";
		fl_message_title("Error");
		fl_message(error.c_str());
	}
	
	


}
int main()
{
	Controller control;
	Fl_Window win(1,1);
  win.show();
	control.cmloop();
	
	
	
}
