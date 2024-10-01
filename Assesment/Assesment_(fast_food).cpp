/*Assesment Project */

#include<iostream>

using namespace std;

class Fastfood{
	string name;
	int tot;
	int qu[10]; // array to store quantities from order
	string itemname[10]; // store item name of the order
	int unitprice[10];  // to store one unit price 
	int itemcount; // to get count of item
	
	public:
			Fastfood() //construter
			{
				tot=0;
				cout<<"\n\t\t---------------Tops Tech.Fast Food--------------- ";
				cout<<"\n\n\tPlease Enter your name :";
				cin>>name;
				cout<<"\n\n\tHello "<<name;		
			}
			
			void mainmenu() //mainmenu show all items
			{
				int ch;
				cout<<"\n\t\t\t----------------Menu----------------";
				cout<<"\n\t(1)Pizzas";
				cout<<"\n\t(2)Burgers";
				cout<<"\n\t(3)Sandwich";
				cout<<"\n\t(4)Rolls";
				cout<<"\n\t(5)Biryani";
				
				
				cout<<"\n\n\n\tPlease Enter your choice : ";
				cin>>ch;
				switch(ch)  // for the diffrent choices by user
				{
					case 0:
						exit(0);
						break;
						
					case 1:
						pizzas();
						break;
						
					case 2:
						burgers();
						break;
							
					case 3:
						sandwich();
						break;
						
					case 4:
						Rolls();
						break;
						
					case 5:
						Biryani();
						break;
						
					default:
						cout<<"\n\n\tPlease enter valid input . ";
						break;
				}
				
			}
			
			void Biryani()
			{
				int s,q;
				cout<<"\n\n\t(1)Vegitable Biryani : RS.300";
				cout<<"\n\t(2)Special  Biryani : RS.500";
				
				cout<<"\n\n\tPlease Enter Which Rolls you would like to have ? : ";
				cin>>s;
				cout<<"\n\n\tPlease Enter Quantity : ";
				cin>>q;
				
					
				if(s == 1){
					additem("Vegitable Biryani",q,300);
					tot += 300 * q;
				}
				else if(s == 2){
					additem("Special  Biryani",q,500);
					tot += 500 * q;
				}
				else
				{
					cout<<"\n\n\tYour input is valid . ";
				}
			}
			
			void Rolls()
			{
				int s,q;
				cout<<"\n\n\t(1)Vegitable Rolls : RS.150";
				cout<<"\n\t(2)Veg. Chesse Rolls : RS.200";
				cout<<"\n\t(3)7-Chesse Rolls  : RS.300";
				
				cout<<"\n\n\tPlease Enter Which Rolls you would like to have ? : ";
				cin>>s;
				cout<<"\n\n\tPlease Enter Quantity : ";
				cin>>q;
				
				if(s == 1){
					additem("Vegitable Rolls",q,150);
					tot += 150 * q;
				}
				else if(s == 2){
					additem("Veg. Chesse Rolls",q,200);
					tot += 200 * q;
				}
				else if(s == 3){
					additem("7-Chesse Rolls",q,300);
					tot += 300 * q;
				}
				else{
					cout<<"\n\n\tYour input is valid . ";
				}	
					
			}
			
			
			void burgers()
			{
				int s,q;
				cout<<"\n\n\t(1)Vegitable Burger : RS.150";
				cout<<"\n\t(2)Veg. Chesse Burger : RS.200";
				cout<<"\n\t(3)7-Chesse Burger : RS.300";
				
				cout<<"\n\n\tPlease Enter Which Burger you would like to have ? : ";
				cin>>s;
				cout<<"\n\n\tPlease Enter Quantity : ";
				cin>>q;
				
				if(s == 1){
					additem("Vegitable Burger",q,150);
					tot += 150 * q;
				}
				else if(s == 2){
					additem("Veg. Chesse Burger",q,200);
					tot += 200 * q;
				}
				else if(s == 3){
					additem("7-Chesse Burger",q,300);
					tot += 300 * q;
				}
				else{
					cout<<"\n\n\tYour input is valid . ";
				}
					
			}
			
			void pizzas()
			{
				int s,q;
				cout<<"\n\n\t(1)Vegitable Pizza : RS.200";
				cout<<"\n\t(2)Veg. Chesse Pizza : RS.300";
				cout<<"\n\t(3)7-Chesse pizza : RS.400";
				
				cout<<"\n\n\tPlease Enter Which Pizza you would like to have ? : ";
				cin>>s;
				cout<<"\n\n\tPlease Enter Quantity : ";
				cin>>q;
				
				if(s == 1){
					additem("Vegitable Pizza",q,200);
					tot += 200 * q;
				}
				else if(s == 2){
					additem("Veg. Chesse Pizza",q,300);
					tot += 300 * q;
				}
				else if(s == 3){
					additem("7-Chesse pizza",q,400);
					tot += 400 * q;
				}
				else{
					cout<<"\n\n\tYour input is valid . ";
				}
				
			}
			
			
			void sandwich()  // Sandwich menu
			{
				int s,q;
				cout<<"\n\n\t(1)Club Sandwich : RS.240";
				cout<<"\n\t(2)Veg. Crispy Sandwich : RS.160";
				cout<<"\n\t(3)Extream veg Sandwich : RS.100";
				
				cout<<"\n\n\tPlease Enter Which Sandwich you would like to have ? : ";
				cin>>s;
				cout<<"\n\n\tPlease Enter Quantity : ";
				cin>>q;
				
				if(s == 1){
					additem("Club Sandwich",q,240);
					tot += 240 * q;
				}
				else if(s == 2){
					additem("Veg. Crispy Sandwich",q,160);
					tot += 160 * q;
				}
				else if(s == 3){
					additem("Extreme veg Sandwich",q,100);
					tot += 100 * q;
				}
				else{
					cout<<"\n\n\tYour input is valid . ";
				}
			}
			
			void display()
			{
				cout<<"\n\n\n\t\t----------------Your Order----------------";
				cout<<"\n\n\tYour Total Bill is : "<<tot;
				int i;
				cout<<"\n\n\tItems : ";
				for(i=0; i<itemcount; i++)
				{
					cout<<"\n\t"<<qu[i]<<"  "<<itemname[i]<<"\t "<<unitprice[i];
				}
				cout<<"\n\n\tYour order will be delivered in 40 minutes";
				cout<<"\n\tThank you from ordering from Tops Tech Fast Food";
				cout<<"\n\tWould you like to order anything else ? Y/N :";
				char ch;
				cin>>ch;
				if(ch == 'Y' || ch == 'y')
				{
					mainmenu();
					display();
				}
			}
			
			void additem(string item,int q,int price)
			{
				if(itemcount < 10)
				{
					itemname[itemcount] = item;
					qu[itemcount]=q;
					unitprice[itemcount]=price;
				}
				else{
					cout<<"\n\n\tCan not add more item.";
				}
				itemcount++;
			}
};
main()
{
		Fastfood f1;
		f1.mainmenu();	
		f1.display();
}
