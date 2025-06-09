#include <iostream>
#include <vector>
#include <stdlib.h>
//#include<dos.h>
#include <Windows.h>
#include <conio.h>
#include<string>
#include<fstream>
using namespace std;
class Items{
	protected:
		int ID;
		string Name;
		int Qty;
		double Price;
	
	public:
		//Default Constructor:
		Items(){
		
		}
		//Parameterized Constructor:
		Items(int ID, string Name, int Qty, double Price){
			this->ID = ID;
			this->Name = Name;
			this->Qty = Qty;
			this->Price = Price;
		}
		//	Setters
		void setID(int id)
		{
			this->ID = id;
		}
		void setName(string name)
		{
			this->Name = name;
		}
		void setQty(int qty)
		{
			this->Qty = qty;
		}
		void setPrice(double price)
		{
			this->Price = price;
		}
		//	Getters
		int getID()
		{
			return ID;
		}
		string getName()
		{
			return Name;
		}
		int getQty()
		{
			return Qty;
		}
		double getPrice()
		{
			return Price;
		}
//		void display()
//		{
//			cout<<"\n\n\t\t\tItem ID\t\t\t: "<<ID<<
//			"\n\t\t\tItem Name\t\t: "<<Name<<
//			"\n\t\t\tItem Quantity\t\t: "<<Qty<<
//			"\n\t\t\tItem Price\t\t: " << Price<<endl;
//		}
};

// Child classes
class CPU : protected Items{
	protected:	
		string generation;
		double boost_clock;
		double base_clock;
	public:
		//Default Constructor:
		CPU(){
		
		}
		//Parameterized Constructor:
		CPU(string generation, double boost_clock, double base_clock, int ID, string Name, int Qty, double Price): Items(ID, Name, Qty, Price){
			this->generation = generation;
			this->boost_clock = boost_clock;
			this->base_clock = base_clock;
		}
		//Setter:
		void setgeneration(string gen)
		{
			generation = gen;
		}
		void setboost(double boost)
		{
			boost_clock = boost;
		}
		void setbase(double base)
		{
			base_clock = base;
		}
		//Getter:
		string getgen()
		{
			return generation;
		}
		double getboost()
		{
			return boost_clock;
		}
		double getbase()
		{
			return base_clock;
		}	
		void writetofile()
		{
		}
		void readfile()
		{
		}
		void display(){
			cout<<"\n\n\t\t\tCPU ID\t\t\t: "<<ID<<
			"\n\t\t\tCPU Name\t\t: "<<Name<<
			"\n\t\t\tCPU Quantity\t\t: "<<Qty<<
			"\n\t\t\tCPU Price\t\t: " <<Price<<
			"\n\t\t\tCPU Generation\t\t: "<<generation<<
			"\n\t\t\tCPU Boost Clock\t\t: "<<boost_clock<<
			"\n\t\t\tCPU Base Clock\t\t: "<<base_clock<<endl;
		}
		void addCPU(){
			cout << "\n\t\t\tEnter CPU ID\t\t: ";
			cin >> ID;
			cout << "\t\t\tEnter CPU Name\t\t: ";
			cin >> Name;
			cout << "\t\t\tEnter CPU Qty\t\t: ";
			cin >> Qty;
			cout << "\t\t\tEnter CPU Price\t\t: ";
			cin >> Price;
			cout << "\t\t\tEnter CPU generation\t: ";
			cin >> generation;
			cout << "\t\t\tEnter CPU Boost_clock\t: ";
			cin >> boost_clock;
			cout << "\t\t\tEnter CPU Base_clock\t: ";
			cin >> base_clock;
		}
		
};
//void addCPU(CPU cpu_obj){
//	cout << "\n\t\t\tEnter CPU ID\t\t: ";
//	cin >> cpu_obj.ID;
//	cout << "\t\t\tEnter CPU Name\t\t: ";
//	cin >> cpu_obj.Name;
//	cout << "\t\t\tEnter CPU Qty\t\t: ";
//	cin >> cpu_obj.Qty;
//	cout << "\t\t\tEnter CPU Price\t\t: ";
//	cin >> cpu_obj.Price;
//	cout << "\t\t\tEnter CPU generation\t: ";
//	cin >> cpu_obj.generation;
//	cout << "\t\t\tEnter CPU Boost_clock\t: ";
//	cin >> cpu_obj.boost_clock;
//	cout << "\t\t\tEnter CPU Base_clock\t: ";
//	cin >> cpu_obj.base_clock;
//}

class Motherboard : protected Items{
	protected:
		string size;	//ATX, Micro-ATX and Mini-ITX
		string generation;
	public:
		//Default Constructor:
		Motherboard(){
		
		}
		//Parameterized Constructor:
		Motherboard(string size, string generation, int ID, string Name, int Qty, double Price): Items(ID, Name, Qty, Price){
			this->size = size;
			this->generation = generation;
		}
		//Setter:
		void set_size(string Size)
		{
			size = Size;
		}
		void set_gen(string gen)
		{
			generation = gen;
		}
		//Getter:
		string getsize()
		{
			return size;
		}
		string getgen()
		{
			return generation;
		}
		void writetofile()
		{
		}
		void readfile()
		{
		} // filing
		void display(){
			cout<<"\n\n\t\t\tMotherboard ID\t\t\t: "<<ID<<
			"\n\t\t\tMotherboard Name\t\t: "<<Name<<
			"\n\t\t\tMotherboard Quantity\t\t: "<<Qty<<
			"\n\t\t\tMotherboard Price\t\t: " << Price<<
			"\n\t\t\tMotherboard Size\t\t: "<<size<<
			"\n\t\t\tMotherboard Generation\t\t: "<<generation<<endl;
		}
//		friend void addMotherboard(Motherboard motherboard_obj);
		void addMotherboard(){
			cout << "\n\t\t\tEnter Motherboard ID\t\t: ";
			cin >> ID;
			cout << "\t\t\tEnter Motherboard Name\t\t: ";
			cin >> Name;
			cout << "\t\t\tEnter Motherboard Qty\t\t: ";
			cin >> Qty;
			cout << "\t\t\tEnter Motherboard Price\t\t: ";
			cin >> Price;
			cout << "\t\t\tEnter Motherboard Size\t\t: ";
			cin >> size;
			cout << "\t\t\tEnter Motherboard Generation\t: ";
			cin >> generation;
		}
};
//void addMotherboard(Motherboard motherboard_obj){
//	cout << "\n\t\t\tEnter Motherboard ID\t\t: ";
//	cin >> motherboard_obj.ID;
//	cout << "\t\t\tEnter Motherboard Name\t\t: ";
//	cin >> motherboard_obj.Name;
//	cout << "\t\t\tEnter Motherboard Qty\t\t: ";
//	cin >> motherboard_obj.Qty;
//	cout << "\t\t\tEnter Motherboard Price\t\t: ";
//	cin >> motherboard_obj.Price;
//	cout << "\t\t\tEnter Motherboard Size\t\t: ";
//	cin >> motherboard_obj.size;
//	cout << "\t\t\tEnter Motherboard Generation\t: ";
//	cin >> motherboard_obj.generation;
//}

class RAM : protected Items{
	protected:
		int capacity;
		string CASlatency;
	public:
		//Default Constructor:
		RAM(){
		
		}
		//Parameterized Constructor:
		RAM(int capacity, string CASlatency, int ID, string Name, int Qty, double Price): Items(ID, Name, Qty, Price){
			this->capacity = capacity;
			this->CASlatency = CASlatency;
		}
		//Setter:
		void setCAP(int cap)
		{
			capacity = cap;
		}
		void setLatency(string latency)
		{
			CASlatency = latency;
		}
		//Getter:
		int getCapacity()
		{
			return capacity;
		}
		string getLatency()
		{
			return CASlatency;
		}
		void writetofile()
		{
		}
		void readfile()
		{
		} // filing
		void display(){
			cout<<"\n\n\t\t\tRAM ID\t\t\t: "<<ID<<
			"\n\t\t\tRAM Name\t\t: "<<Name<<
			"\n\t\t\tRAM Quantity\t\t: "<<Qty<<
			"\n\t\t\tRAM Price\t\t: " << Price<<
			"\n\t\t\tRAM Capacity\t\t: "<<capacity<<
			"\n\t\t\tRAM CAS Latency\t\t: "<<CASlatency<<endl;
		}
//		friend void addRAM(RAM ram_obj);
		void addRAM(){
			cout << "\n\t\t\tEnter RAM ID\t\t: ";
			cin >> ID;
			cout << "\t\t\tEnter RAM Name\t\t: ";
			cin >> Name;
			cout << "\t\t\tEnter RAM Qty\t\t: ";
			cin >> Qty;
			cout << "\t\t\tEnter RAM Price\t\t: ";
			cin >> Price;
			cout << "\t\t\tEnter RAM Capacity\t: ";
			cin >> capacity;
			cout << "\t\t\tEnter RAM CAS Latency\t: ";
			cin >> CASlatency;
		}
};
//void addRAM(RAM ram_obj){
//	cout << "\n\t\t\tEnter RAM ID\t\t: ";
//	cin >> ram_obj.ID;
//	cout << "\t\t\tEnter RAM Name\t\t: ";
//	cin >> ram_obj.Name;
//	cout << "\t\t\tEnter RAM Qty\t\t: ";
//	cin >> ram_obj.Qty;
//	cout << "\t\t\tEnter RAM Price\t\t: ";
//	cin >> ram_obj.Price;
//	cout << "\t\t\tEnter RAM Capacity\t: ";
//	cin >> ram_obj.capacity;
//	cout << "\t\t\tEnter RAM CAS Latency\t: ";
//	cin >> ram_obj.CASlatency;
//}

class GPU : protected Items{
	protected:
		int VRAM;
		int power;
	public:
		//Default Constructor:
		GPU(){
		
		}
		//Parameterized Constructor:
		GPU(int VRAM, int power, int ID, string Name, int Qty, double Price): Items(ID, Name, Qty, Price){
			this->VRAM = VRAM;
			this->power = power;
		}
		//Setter:
		void setVRAM(int vram)
		{
			VRAM = vram;
		}
		void setpower(int tdp)
		{
			power = tdp;
		}
		//Getter:
		int getVRAM()
		{
			return VRAM;
		}
		int getpower()
		{
			return power;
		}
		void writetofile()
		{
		}
		void readfile()
		{
		}
		void display(){
			cout<<"\n\n\t\t\tGPU ID\t\t\t: "<<ID<<
			"\n\t\t\tGPU Name\t\t: "<<Name<<
			"\n\t\t\tGPU Quantity\t\t: "<<Qty<<
			"\n\t\t\tGPU Price\t\t: " << Price<<
			"\n\t\t\tGPU VRAM\t\t: "<<VRAM<<
			"\n\t\t\tGPU Power\t\t: "<<power<<endl;
		}
//		friend void addGPU(GPU gpu_obj);
		void addGPU(){
			cout << "\n\t\t\tEnter GPU ID\t\t: ";
			cin >> ID;
			cout << "\t\t\tEnter GPU Name\t\t: ";
			cin >> Name;
			cout << "\t\t\tEnter GPU Qty\t\t: ";
			cin >> Qty;
			cout << "\t\t\tEnter GPU Price\t\t: ";
			cin >> Price;
			cout << "\t\t\tEnter GPU VRAM\t\t: ";
			cin >> VRAM;
			cout << "\t\t\tEnter GPU Power_Draw\t: ";
			cin >> power;
		}
};
//void addGPU(GPU gpu_obj){
//	cout << "\n\t\t\tEnter GPU ID\t\t: ";
//	cin >> gpu_obj.ID;
//	cout << "\t\t\tEnter GPU Name\t\t: ";
//	cin >> gpu_obj.Name;
//	cout << "\t\t\tEnter GPU Qty\t\t: ";
//	cin >> gpu_obj.Qty;
//	cout << "\t\t\tEnter GPU Price\t\t: ";
//	cin >> gpu_obj.Price;
//	cout << "\t\t\tEnter GPU VRAM\t\t: ";
//	cin >> gpu_obj.VRAM;
//	cout << "\t\t\tEnter GPU Power_Draw\t: ";
//	cin >> gpu_obj.power;
//}

class PSU : protected Items{
	protected:	
		string Rating;
		int wattage;
	public:
		//Default Constructor:
		PSU(){
		
		}
		//Parameterized Constructor:
		PSU(string Rating, int wattage, int ID, string Name, int Qty, double Price): Items(ID, Name, Qty, Price){
			this->Rating = Rating;
			this->wattage = wattage;
		}
		//Setter:
		void setRating(string rate)
		{
			Rating = rate;
		}
		void setWatt(int watt)
		{
			wattage = watt;
		}
		//Getter:
		string getRating()
		{
			return Rating;
		}
		int getWatt()
		{
			return wattage;
		}
		void writetofile()
		{
		}
		void readfile()
		{
		}
		void display(){
			cout<<"\n\n\t\t\tPSU ID\t\t\t: "<<ID<<
			"\n\t\t\tPSU Name\t\t: "<<Name<<
			"\n\t\t\tPSU Quantity\t\t: "<<Qty<<
			"\n\t\t\tPSU Price\t\t: " << Price<<
			"\n\t\t\tPSU Rating\t\t: "<<Rating<<
			"\n\t\t\tPSU Wattage\t\t: "<<wattage<<endl;
		}
//		friend void addPSU(PSU psu_obj);
		void addPSU(){
			cout << "\n\t\t\tEnter PSU ID\t\t: ";
			cin >> ID;
			cout << "\t\t\tEnter PSU Name\t\t: ";
			cin >> Name;
			cout << "\t\t\tEnter PSU Qty\t\t: ";
			cin >> Qty;
			cout << "\t\t\tEnter PSU Price\t\t: ";
			cin >> Price;
			cout << "\t\t\tEnter PSU Wattage\t: ";
			cin >> wattage;
			cout << "\t\t\tEnter PSU Rating\t: ";
			cin >> Rating;
		}
};
//void addPSU(PSU psu_obj){
//	cout << "\n\t\t\tEnter PSU ID\t\t: ";
//	cin >> psu_obj.ID;
//	cout << "\t\t\tEnter PSU Name\t\t: ";
//	cin >> psu_obj.Name;
//	cout << "\t\t\tEnter PSU Qty\t\t: ";
//	cin >> psu_obj.Qty;
//	cout << "\t\t\tEnter PSU Price\t\t: ";
//	cin >> psu_obj.Price;
//	cout << "\t\t\tEnter PSU Wattage\t: ";
//	cin >> psu_obj.wattage;
//	cout << "\t\t\tEnter PSU Rating\t: ";
//	cin >> psu_obj.Rating;
//}

class CASE : protected Items{
	protected:
		string Size;	//ATX, Micro-ATX and Mini-ITX
	public:
		//Default Constructor:
		CASE(){
		
		}
		//Parameterized Constructor:
		CASE(string Size, int ID, string Name, int Qty, double Price): Items(ID, Name, Qty, Price){
			this->Size = Size;
		}
		//Setter:
		void setSize(string size)
		{
			Size = size;
		}
		//Getter:
		string getSize()
		{
			return Size;
		}
		void writetofile()
		{
		}
		void readfile()
		{
		}
		void display(){
			cout<<"\n\n\t\t\tCase ID\t\t\t: "<<ID<<
			"\n\t\t\tCase Name\t\t: "<<Name<<
			"\n\t\t\tCase Quantity\t\t: "<<Qty<<
			"\n\t\t\tCase Price\t\t: " << Price<<
			"\n\t\t\tCase Size\t\t: "<<Size<<endl;
		}
//		friend void addCASE(CASE case_obj);
		void addCASE(){
			cout << "\n\t\t\tEnter CASE ID\t\t: ";
			cin >> ID;
			cout << "\t\t\tEnter CASE Name\t\t: ";
			cin >> Name;
			cout << "\t\t\tEnter CASE Qty\t\t: ";
			cin >> Qty;
			cout << "\t\t\tEnter CASE Price\t: ";
			cin >> Price;
			cout << "\t\t\tEnter CASE Size\t\t: ";
			cin >> Size;
		}
};
//void addCASE(CASE case_obj){
//	cout << "\n\t\t\tEnter CASE ID\t\t: ";
//	cin >> case_obj.ID;
//	cout << "\t\t\tEnter CASE Name\t\t: ";
//	cin >> case_obj.Name;
//	cout << "\t\t\tEnter CASE Qty\t\t: ";
//	cin >> case_obj.Qty;
//	cout << "\t\t\tEnter CASE Price\t: ";
//	cin >> case_obj.Price;
//	cout << "\t\t\tEnter CASE Size\t\t: ";
//	cin >> case_obj.Size;
//}





void EditItem(){
	Items item;
	CPU cpu_obj;
	Motherboard motherboard_obj;
	RAM ram_obj;
	GPU gpu_obj;
	PSU psu_obj;
	CASE case_obj;
	
	int choice;
	
	system("cls");
	
	cout<<"\n\n\n\t\t\tWhich Item do you want to Edit?"<<endl;
	cout<<"\n\t\t\t(1) Edit CPU\n\t\t\t(2) Edit Motherboard\n\t\t\t(3) Edit RAM\n\t\t\t(4) Edit GPU\n\t\t\t(5) Edit PSU\n\t\t\t(6) Edit CASE"<<endl;
	
	cout<<"\n\t\t\tEnter Choice: ";
	cin>>choice;
	
//	switch(choice){
//		case 1:
//			
//	}
}
//void Details(){
//	
//	cout<<"\nEnter Item ID to Search: ";
//	cin>>itemid;
//}




//void DisplayItems(){
//	Items item;
//	CPU cpu_obj;
//	Motherboard motherboard_obj;
//	RAM ram_obj;
//	GPU gpu_obj;
//	PSU psu_obj;
//	CASE case_obj;
//	
//	
//}















int main(){
	
	fstream ItemFile;
	ItemFile.open("ItemSold.txt",ios::in|ios::out|ios::ate|ios::app);
	
	int status;
	
	int a=0, b=0;
	int choice;
	long long int pn;
	string name, un, pass1="1", pass2="2", temp_un, temp_pass;
	
	Items item;
	CPU cpu_obj;
	Motherboard motherboard_obj;
	RAM ram_obj;
	GPU gpu_obj;
	PSU psu_obj;
	CASE case_obj;
					
	int ch = 1;
			
	do{
			cout << "\n\n\n**************************************************************************************************************\n";
			cout << "                                       S.T.A.R  C.O.M.P.U.T.E.R.S                                             \n";
			cout << "**************************************************************************************************************\n\n";
			
			
			cout<<"\n\n\n\t\t\tAre you a:"<<
			"\n\t\t\t\t\t(1) Customer"<<
			"\n\t\t\t\t\t(2) Employee\n"<<endl;
			
			cout<<"\t\t\t\t\tEnter Choice: ";
			cin>>status;
			
			system("cls");
			
			
			if(status==1){
					/////////////////////////Filing////////////////////////////////////////
					ifstream file1("Customer Username.txt");
					if(file1.peek()==EOF){
						a=1;
					}
					else{
						a=2;
					}
					file1.close();
				
					ofstream file2("Customer Username.txt", ios::app);
					ofstream file3("Customer Password.txt", ios::app);
					if(a==1){
						Signup:
						cout<<"\n\n\t\t\t--> Sign up for an account <--"<<endl;
						cout<<"\n\t\t\tEnter Name\t\t\t: ";
						fflush(stdin);
						getline(cin, name);
						cout<<"\t\t\tEnter Phone Number\t\t: ";
						cin>>pn;
						fflush(stdin);
						cout<<"\t\t\tEnter Username\t\t\t: ";
						getline(cin, un);
						while(pass1!=pass2){
							cout<<"\t\t\tEnter Password\t\t\t: ";
							getline(cin, pass1);
							cout<<"\t\t\tRe-Enter Password to confirm\t: ";
							getline(cin, pass2);
							if(pass1!=pass2){
								cout<<"\n\t\t\tInvalid Password!\n"<<endl;
							}
						}
						file2<<un<<endl;
						file3<<pass1<<endl;
						cout<<"\n\n\t\t\t~~~~~~Account is successfully created.~~~~~~"<<endl;
						sleep(3);
					}
					if(a==2){
						Account:
						do{
							cout<<"\n\n\t\t\t(1) Log In\n\t\t\t(2) Sign up\n\t\t\t(3) Exit"<<endl;
							cout<<"\n\t\t\tEnter choice\t: ";
							cin>>choice;
							if(choice == 1){
								cout<<"\n\t\t\tEnter Username\t: ";
								cin>>temp_un;
								cout<<"\t\t\tEnter Password\t: ";
								cin>>temp_pass;
								////////////////////////////
								a=0;
								ifstream file4("Customer Username.txt", ios::in);
								ifstream file5("Customer Password.txt", ios::in);
								while(!file4.eof() && !file5.eof()){
									file4>>un;
									file5>>pass1;
									if(temp_un==un && temp_pass==pass1){
										cout<<"\n\n\t\t\t~~~~~~Login Successful!~~~~~~"<<endl;
										sleep(3);
										a=1;
										break;
									}
								}
								if(a!=1){
									cout<<"\n\n\t\t\t~~~~~~Login Unsuccessful!~~~~~~"<<endl;
									exit(0);
								}
								file4.close();
								file5.close();
							}
							else if(choice == 2){
								goto Signup;
							}
							else if(choice == 3){
								exit(0);
							}
							else{
								cout<<"\n\t\t\tInvalid Choice!"<<endl;
							}
						}while(choice!=1 && choice!=2 && choice!=3);
					}
					file2.close();
					file3.close();
					/////////////////////////Filing////////////////////////////////////////
					
					system("CLS");
					
					do{
						AddItem:
						cout << "\n\n\t\t\t(1) Add CPU\n\t\t\t(2) Add Motherboard\n\t\t\t(3) Add RAM\n\t\t\t(4) Add GPU\n\t\t\t(5) Add PSU\n\t\t\t(6) Add CASE\n\t\t\t(7) Log out\n\n\t\t\tEnter Choice: ";
						cin>>ch;
						
						switch (ch){
							case 1:
								cpu_obj.addCPU();
								ItemFile.write(reinterpret_cast<char*>(&cpu_obj),sizeof(cpu_obj));
								break;
							case 2:
								motherboard_obj.addMotherboard();
								ItemFile.write(reinterpret_cast<char*>(&motherboard_obj),sizeof(motherboard_obj));
								break;
							case 3:
								ram_obj.addRAM();
								ItemFile.write(reinterpret_cast<char*>(&ram_obj),sizeof(ram_obj));
								break;
							case 4:
								gpu_obj.addGPU();
								ItemFile.write(reinterpret_cast<char*>(&gpu_obj),sizeof(gpu_obj));
								break;
							case 5:
								psu_obj.addPSU();
								ItemFile.write(reinterpret_cast<char*>(&psu_obj),sizeof(psu_obj));
								break;
							case 6:
								case_obj.addCASE();
								ItemFile.write(reinterpret_cast<char*>(&case_obj),sizeof(case_obj));
								break;
							case 7:
								system("cls");
								cout<<"\n\n\n\n\n\t\t\tWait! Logging out...\n\n\n\n"<<endl;
								sleep(3);
								system("cls");
								goto Account;
								break;
							default:
								cout<<"\n\n\t\t\t~~~~~~Invalid Choice~~~~~~\n"<<endl;
								break;
						}
					}while(ch!=1 && ch!=2 && ch!=3 && ch!=4 && ch!=5 && ch!=6 && ch!=7);
			}
			else if(status==2){
					/////////////////////////Filing////////////////////////////////////////
					ifstream file6("Employee Username.txt");
					if(file6.peek()==EOF){
						b=1;
					}
					else{
						b=2;
					}
					file6.close();
				
					ofstream file7("Employee Username.txt", ios::app);
					ofstream file8("Employee Password.txt", ios::app);
					if(b==1){
						ESignup:
						cout<<"\n\n\t\t\t--> Sign up for an account <--"<<endl;
						cout<<"\n\t\t\tEnter Name\t\t\t: ";
						fflush(stdin);
						getline(cin, name);
						cout<<"\t\t\tEnter Phone Number\t\t: ";
						cin>>pn;
						fflush(stdin);
						cout<<"\t\t\tEnter Username\t\t\t: ";
						getline(cin, un);
						do{
							cout<<"\t\t\tEnter Password\t\t\t: ";
							getline(cin, pass1);
							cout<<"\t\t\tRe-Enter Password to confirm\t: ";
							getline(cin, pass2);
							if(pass1!=pass2){
								cout<<"\n\t\t\tInvalid Password!\n"<<endl;
							}
						}while(pass1!=pass2);
						file7<<un<<endl;
						file8<<pass1<<endl;
						cout<<"\n\n\t\t\t~~~~~~Account is successfully created.~~~~~~"<<endl;
						sleep(3);
					}
					if(b==2){
						EAccount:
						do{
							cout<<"\n\n\t\t\t(1) Log In\n\t\t\t(2) Sign up\n\t\t\t(3) Exit"<<endl;
							cout<<"\n\t\t\tEnter choice\t: ";
							cin>>choice;
							if(choice == 1){
								cout<<"\n\t\t\tEnter Username\t: ";
								cin>>temp_un;
								cout<<"\t\t\tEnter Password\t: ";
								cin>>temp_pass;
								////////////////////////////
								b=0;
								ifstream file9("Employee Username.txt", ios::in);
								ifstream file10("Employee Password.txt", ios::in);
								while(!file9.eof() && !file10.eof()){
									file9>>un;
									file10>>pass1;
									if(temp_un==un && temp_pass==pass1){
										cout<<"\n\n\t\t\t~~~~~~Login Successful!~~~~~~"<<endl;
										sleep(3);
										b=1;
										break;
									}
								}
								if(b!=1){
									cout<<"\n\n\t\t\t~~~~~~Login Unsuccessful!~~~~~~"<<endl;
									exit(0);
								}
								file9.close();
								file10.close();
							}
							else if(choice == 2){
								goto ESignup;
							}
							else if(choice == 3){
								exit(0);
							}
							else{
								cout<<"\n\t\t\tInvalid Choice!"<<endl;
							}
						}while(choice!=1 && choice!=2 && choice!=3);
					}
					file7.close();
					file8.close();
					/////////////////////////Filing////////////////////////////////////////
					
					system("CLS");
					
					do{
						cout << "\n\n\t\t\t(1) Add Item to Sold Items File\n\t\t\t"<<
						"(2) Edit Item in Sold Items File\n\t\t\t"<<
						"(3) Delete Item in Sold Items File\n\t\t\t"<<
						"(4) Display Sold Items\n\t\t\t"<<
						"(5) Log out\n\n\t\t\tEnter Choice: ";
						cin>>ch;
						
						switch (ch){
							case 1:
//								goto AddItem;
								break;
							case 2:
//								EditItem();
								break;
							case 3:
//								DeleteItem();
								break;
							case 4:
//								DisplayItems();
								while(!ItemFile.eof()){
									if(ItemFile.read((char*)&cpu_obj, sizeof(cpu_obj))){
										cout<<"\n\t\t\t--> CPU Item <--"<<endl;
										cpu_obj.display();
									}
									if(ItemFile.read((char*)&motherboard_obj, sizeof(motherboard_obj))){
										cout<<"\n\t\t\t--> Motherboard Item <--"<<endl;
										motherboard_obj.display();
									}
									if(ItemFile.read((char*)&ram_obj, sizeof(ram_obj))){
										cout<<"\n\t\t\t--> RAM Item <--"<<endl;
										ram_obj.display();
									}
									if(ItemFile.read((char*)&gpu_obj, sizeof(gpu_obj))){
										cout<<"\n\t\t\t--> GPU Item <--"<<endl;
										gpu_obj.display();
									}
									if(ItemFile.read((char*)&psu_obj, sizeof(psu_obj))){
										cout<<"\n\t\t\t--> PSU Item <--"<<endl;
										psu_obj.display();
									}
									if(ItemFile.read((char*)&case_obj, sizeof(case_obj))){
										cout<<"\n\t\t\t--> CASE Item <--"<<endl;
										case_obj.display();
									}
								}
								break;
							case 5:
								system("cls");
								cout<<"\n\n\n\n\n\t\t\tWait! Logging out...\n\n\n\n"<<endl;
								sleep(3);
								system("cls");
								goto EAccount;
								break;
							default:
								cout<<"\n\n\t\t\t~~~~~~Invalid Choice~~~~~~\n"<<endl;
								break;
						}
					}while(ch!=1 && ch!=2 && ch!=3 && ch!=4 && ch!=5);
			}
			else{
				cout<<"\n\n\t\t\t~~~~~~Invalid Choice~~~~~~\n"<<endl;
			}
	}while(status!=1 && status!=2);
//	ItemFile.close();
}