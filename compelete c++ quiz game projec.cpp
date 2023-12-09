#include<iostream>//for input and output on console screen
#include<fstream>// for creating/writing the file and read from files.
#include<windows.h>//for clear screeen
#include<conio.h>//for gtch
#include<unistd.h>//for sleep
using namespace std;
HANDLE
color=GetStdHandle(STD_OUTPUT_HANDLE);//to set colors
string name,pass,n,p;// variable for account
int cor=0,incor=0,total=0;
float pre;
//variables for quiz count
char sel;//used for selection
char choice;//used for quiz choice

//functions
void result_read();
void back();//used for back from read mode
void log();//for login
void reg();//for register
void forget();//for forget password
void load();//for loading........
void quiz();//for quiz starting
void read();//for practice mode
void com();//for quiz mode
void keys();//quiz mode for shortcut keys
void sec();//quiz mode for computer security
void cy();//quiz mode for cyber security
void dbase();//quiz mode for data base
void net();//quiz mode for computer networking
void prom();//quiz mode for programming language
void fun();//quiz mode for fundamentals of computers
void result();//result to show result of quiz
void keys_r();//practice mode for shortcut keys
void sec_r();//practice mode for computer security
void cy_r();//practice mode for cyber security
void dbase_r();//practice mode for data base;
void net_r();//practice mode for computer networking
void prom_r();//practice mode for programming language
void fun_r();//practice mode for fundamentals of computer

//functions

//_____________________________________________
//>>>PRACTICE MODE
void fun_r()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*          FUNDAMENTALS OF COMPUTERS           *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	string fun;
	ifstream read("fun.txt");
	while(getline(read,fun))
	{
		cout<<fun<<endl;
	}
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':back();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
		
	}
}
void prom_r()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*            PROGRAMMING LANGUAGES             *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	string fun;
	ifstream read("pro.txt");
	while(getline(read,fun))
	{
		cout<<fun<<endl;
	}
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':back();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
		
	}
}
void net_r()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*                   NETWORKING                 *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	string fun;
	ifstream read("network.txt");
	while(getline(read,fun))
	{
		cout<<fun<<endl;
	}
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':back();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
		
	}
}
void dbase_r()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*                   DATABASE                   *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	string fun;
	ifstream read("db.txt");
	while(getline(read,fun))
	{
		cout<<fun<<endl;
	}
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':back();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
		
	}
}
void cy_r()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*               CYBER SECURITY                 *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	string fun;
	ifstream read("cy.txt");
	while(getline(read,fun))
	{
		cout<<fun<<endl;
	}
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':back();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
		
	}
}
void sec_r()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*               NETWORK SECURITY               *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	string fun;
	ifstream read("sec.txt");
	while(getline(read,fun))
	{
		cout<<fun<<endl;
	}
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':back();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
		
	}
}
void keys_r()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*            COMPUTER SHORTCUT KEYS            *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	string fun;
	ifstream read("keys.txt");
	while(getline(read,fun))
	{
		cout<<fun<<endl;
	}
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':back();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
		
	}
}
//____________________________________________
//>>>QUIZ MODE
void result()
{
	string res_name;
	load();
	total=cor+incor;
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*               RESULT OF YOUR QUIZ             *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"\t\t\tTotal\t\t\t"<<total<<endl;
	cout<<"\t\t\tcorrect\t\t\t"<<cor<<endl;
	cout<<"\t\t\tIncorrect\t\t"<<incor<<endl;
	pre=(cor*100)/total;
	cout<<"\t\t\tPercentage\t\t"<<pre<<"%"<<endl;
	//result stroing into filing
	ofstream write;
	write.open("result.txt",ios::app);
	write<<"\t\t________________________________________________"<<endl;
	write<<"\t\t*               RESULT OF YOUR QUIZ             *"<<endl;
	write<<"\t\t________________________________________________"<<endl<<endl;
	write<<"\t\t\tTotal\t\t\t"<<total<<endl;
	write<<"\t\t\tcorrect\t\t\t"<<cor<<endl;
	write<<"\t\t\tIncorrect\t\t"<<incor<<endl;
	write<<"\t\t\tPercentage\t\t"<<pre<<"%"<<endl;
	if(pre<=100&&pre>=90)
	{
		cout<<"\t\t\tResult\t\t\tExtraordinary";
		write<<"\t\t\tResult\t\t\tExtraordinary";
	}
	else if(pre<90&&pre>=70)
	{
		cout<<"\t\t\tResult\t\t\tExcellent";
		write<<"\t\t\tResult\t\t\tExcellent";
	}
	else if(pre<70&&pre>=50)
	{
		cout<<"\t\t\tResult\t\t\tGood";
		write<<"\t\t\tResult\t\t\tGood";
	}
	else if(pre<50&&pre>=40)
	{
		cout<<"\t\t\tResult\t\t\tNeed to improve";
		write<<"\t\t\tResult\t\t\tNeed to improve";
	}
	else
	{
		cout<<"\t\t\tResult\t\t\tFail";
		write<<"\t\t\tResult\t\t\tFail";
	}
	cout<<"\n\nEnter the name you want to save this record : "<<endl;
	cin>>res_name;
	write<<"\n\t\t\tName : \t\t\t"<<res_name;
	write<<"\n\n\t\t________________________________________"<<endl;
	again:
	cout<<"\n\n______________________________________________________"<<endl;
	cout<<"Press b to return back ";cin>>sel;
	switch(sel)
	{
		case 'b':com();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;	
	}
	

}
void fun()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*          FUNDAMENTALS OF COMPUTERS           *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"1. Who is considered the 'father' of the minicomputer and one of the founder fathers of the modern computer industry world-wide?"<<endl;
	cout<<"(A) George Tate"<<endl;
	cout<<"(B) Kenneth H. Olsen"<<endl;
	cout<<"(C) Seymour Cray"<<endl;
	cout<<"(D) Basic Pascal"<<endl;
	cout<<"________________________________________________"<<endl;
	again:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='b'||choice=='B')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is B"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again;
	}
	cout<<"2. What does that acronym VGA stand for"<<endl;
	cout<<"(A) Extended Graphics Adapter"<<endl;
	cout<<"(B) Enhanced Graphics Array"<<endl;
	cout<<"(C) Video Graphics Array"<<endl;
	cout<<"(D) Color Graphics Array"<<endl;
	cout<<"________________________________________________"<<endl;
	again1:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='c'||choice=='C')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='A'||choice=='a'||choice=='b'||choice=='B'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is C"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again1;
	}
	cout<<"3. The hardware in which data may be stored for a computer system is called"<<endl;
	cout<<"(A) Registers"<<endl;
	cout<<"(B) Bus"<<endl;
	cout<<"(C) Control unit"<<endl;
	cout<<"(D) Memory"<<endl;
	cout<<"________________________________________________"<<endl;
	again2:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='D'||choice=='d')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='a'||choice=='a'||choice=='c'||choice=='C')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again2;
	}
	cout<<"4. The first practical commercial typewriter was invented in 1867 in the United States by"<<endl;
	cout<<"(A) Christopher Latham Sholes"<<endl;
	cout<<"(B) Carlos Glidden"<<endl;
	cout<<"(C) Samuel Soule"<<endl;
	cout<<"(D) All of the above"<<endl;
	cout<<"________________________________________________"<<endl;
	again3:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='d'||choice=='D')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='b'||choice=='B')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again3;
	}
	cout<<"5. Impact printers"<<endl;
	cout<<"(A) Strike a ribbon against the paper to produce character images"<<endl;
	cout<<"(B) Include ink-jet and thermal devices"<<endl;
	cout<<"(C) Are more expensive than Laser printers"<<endl;
	cout<<"(D) Use optical technology"<<endl;
	cout<<"________________________________________________"<<endl;
	again4:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='a'||choice=='A')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is A"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again4;
	}
	cout<<"Press any key to see your result"<<endl;
	getch();
	result();
	
}
void prom()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*             PROGRAMMING LANGUAGES            *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"1. Who is considered the 'father' of the minicomputer and one of the founder fathers of the modern computer industry world-wide?"<<endl;
	cout<<"(A) George Tate"<<endl;
	cout<<"(B) Kenneth H. Olsen"<<endl;
	cout<<"(C) Seymour Cray"<<endl;
	cout<<"(D) Basic Pascal"<<endl;
	cout<<"________________________________________________"<<endl;
	again:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='b'||choice=='B')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is B"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again;
	}
	cout<<"2. What does that acronym VGA stand for"<<endl;
	cout<<"(A) Extended Graphics Adapter"<<endl;
	cout<<"(B) Enhanced Graphics Array"<<endl;
	cout<<"(C) Video Graphics Array"<<endl;
	cout<<"(D) Color Graphics Array"<<endl;
	cout<<"________________________________________________"<<endl;
	again1:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='c'||choice=='C')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='A'||choice=='a'||choice=='b'||choice=='B'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is C"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again1;
	}
	cout<<"3. The hardware in which data may be stored for a computer system is called"<<endl;
	cout<<"(A) Registers"<<endl;
	cout<<"(B) Bus"<<endl;
	cout<<"(C) Control unit"<<endl;
	cout<<"(D) Memory"<<endl;
	cout<<"________________________________________________"<<endl;
	again2:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='D'||choice=='d')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='a'||choice=='a'||choice=='c'||choice=='C')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again2;
	}
	cout<<"4. The first practical commercial typewriter was invented in 1867 in the United States by"<<endl;
	cout<<"(A) Christopher Latham Sholes"<<endl;
	cout<<"(B) Carlos Glidden"<<endl;
	cout<<"(C) Samuel Soule"<<endl;
	cout<<"(D) All of the above"<<endl;
	cout<<"________________________________________________"<<endl;
	again3:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='d'||choice=='D')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='b'||choice=='B')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again3;
	}
	cout<<"5. Impact printers"<<endl;
	cout<<"(A) Strike a ribbon against the paper to produce character images"<<endl;
	cout<<"(B) Include ink-jet and thermal devices"<<endl;
	cout<<"(C) Are more expensive than Laser printers"<<endl;
	cout<<"(D) Use optical technology"<<endl;
	cout<<"________________________________________________"<<endl;
	again4:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='a'||choice=='A')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is A"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again4;
	}
	cout<<"Press any key to see your result"<<endl;
	getch();
	result();
}
void net()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*             COMPUTER NETWORKING              *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"1. Who is considered the 'father' of the minicomputer and one of the founder fathers of the modern computer industry world-wide?"<<endl;
	cout<<"(A) George Tate"<<endl;
	cout<<"(B) Kenneth H. Olsen"<<endl;
	cout<<"(C) Seymour Cray"<<endl;
	cout<<"(D) Basic Pascal"<<endl;
	cout<<"________________________________________________"<<endl;
	again:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='b'||choice=='B')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is B"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again;
	}
	cout<<"2. What does that acronym VGA stand for"<<endl;
	cout<<"(A) Extended Graphics Adapter"<<endl;
	cout<<"(B) Enhanced Graphics Array"<<endl;
	cout<<"(C) Video Graphics Array"<<endl;
	cout<<"(D) Color Graphics Array"<<endl;
	cout<<"________________________________________________"<<endl;
	again1:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='c'||choice=='C')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='A'||choice=='a'||choice=='b'||choice=='B'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is C"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again1;
	}
	cout<<"3. The hardware in which data may be stored for a computer system is called"<<endl;
	cout<<"(A) Registers"<<endl;
	cout<<"(B) Bus"<<endl;
	cout<<"(C) Control unit"<<endl;
	cout<<"(D) Memory"<<endl;
	cout<<"________________________________________________"<<endl;
	again2:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='D'||choice=='d')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='a'||choice=='a'||choice=='c'||choice=='C')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again2;
	}
	cout<<"4. The first practical commercial typewriter was invented in 1867 in the United States by"<<endl;
	cout<<"(A) Christopher Latham Sholes"<<endl;
	cout<<"(B) Carlos Glidden"<<endl;
	cout<<"(C) Samuel Soule"<<endl;
	cout<<"(D) All of the above"<<endl;
	cout<<"________________________________________________"<<endl;
	again3:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='d'||choice=='D')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='b'||choice=='B')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again3;
	}
	cout<<"5. Impact printers"<<endl;
	cout<<"(A) Strike a ribbon against the paper to produce character images"<<endl;
	cout<<"(B) Include ink-jet and thermal devices"<<endl;
	cout<<"(C) Are more expensive than Laser printers"<<endl;
	cout<<"(D) Use optical technology"<<endl;
	cout<<"________________________________________________"<<endl;
	again4:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='a'||choice=='A')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is A"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again4;
	}
	cout<<"Press any key to see your result"<<endl;
	getch();
	result();
}
void dbase()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*                   DATA BASE                  *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"1. Who is considered the 'father' of the minicomputer and one of the founder fathers of the modern computer industry world-wide?"<<endl;
	cout<<"(A) George Tate"<<endl;
	cout<<"(B) Kenneth H. Olsen"<<endl;
	cout<<"(C) Seymour Cray"<<endl;
	cout<<"(D) Basic Pascal"<<endl;
	cout<<"________________________________________________"<<endl;
	again:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='b'||choice=='B')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is B"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again;
	}
	cout<<"2. What does that acronym VGA stand for"<<endl;
	cout<<"(A) Extended Graphics Adapter"<<endl;
	cout<<"(B) Enhanced Graphics Array"<<endl;
	cout<<"(C) Video Graphics Array"<<endl;
	cout<<"(D) Color Graphics Array"<<endl;
	cout<<"________________________________________________"<<endl;
	again1:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='c'||choice=='C')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='A'||choice=='a'||choice=='b'||choice=='B'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is C"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again1;
	}
	cout<<"3. The hardware in which data may be stored for a computer system is called"<<endl;
	cout<<"(A) Registers"<<endl;
	cout<<"(B) Bus"<<endl;
	cout<<"(C) Control unit"<<endl;
	cout<<"(D) Memory"<<endl;
	cout<<"________________________________________________"<<endl;
	again2:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='D'||choice=='d')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='a'||choice=='a'||choice=='c'||choice=='C')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again2;
	}
	cout<<"4. The first practical commercial typewriter was invented in 1867 in the United States by"<<endl;
	cout<<"(A) Christopher Latham Sholes"<<endl;
	cout<<"(B) Carlos Glidden"<<endl;
	cout<<"(C) Samuel Soule"<<endl;
	cout<<"(D) All of the above"<<endl;
	cout<<"________________________________________________"<<endl;
	again3:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='d'||choice=='D')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='b'||choice=='B')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again3;
	}
	cout<<"5. Impact printers"<<endl;
	cout<<"(A) Strike a ribbon against the paper to produce character images"<<endl;
	cout<<"(B) Include ink-jet and thermal devices"<<endl;
	cout<<"(C) Are more expensive than Laser printers"<<endl;
	cout<<"(D) Use optical technology"<<endl;
	cout<<"________________________________________________"<<endl;
	again4:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='a'||choice=='A')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is A"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again4;
	}
	cout<<"Press any key to see your result"<<endl;
	getch();
	result();
}
void cy()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*               CYBER SECURITY                 *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"1. Who is considered the 'father' of the minicomputer and one of the founder fathers of the modern computer industry world-wide?"<<endl;
	cout<<"(A) George Tate"<<endl;
	cout<<"(B) Kenneth H. Olsen"<<endl;
	cout<<"(C) Seymour Cray"<<endl;
	cout<<"(D) Basic Pascal"<<endl;
	cout<<"________________________________________________"<<endl;
	again:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='b'||choice=='B')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is B"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again;
	}
	cout<<"2. What does that acronym VGA stand for"<<endl;
	cout<<"(A) Extended Graphics Adapter"<<endl;
	cout<<"(B) Enhanced Graphics Array"<<endl;
	cout<<"(C) Video Graphics Array"<<endl;
	cout<<"(D) Color Graphics Array"<<endl;
	cout<<"________________________________________________"<<endl;
	again1:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='c'||choice=='C')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='A'||choice=='a'||choice=='b'||choice=='B'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is C"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again1;
	}
	cout<<"3. The hardware in which data may be stored for a computer system is called"<<endl;
	cout<<"(A) Registers"<<endl;
	cout<<"(B) Bus"<<endl;
	cout<<"(C) Control unit"<<endl;
	cout<<"(D) Memory"<<endl;
	cout<<"________________________________________________"<<endl;
	again2:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='D'||choice=='d')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='a'||choice=='a'||choice=='c'||choice=='C')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again2;
	}
	cout<<"4. The first practical commercial typewriter was invented in 1867 in the United States by"<<endl;
	cout<<"(A) Christopher Latham Sholes"<<endl;
	cout<<"(B) Carlos Glidden"<<endl;
	cout<<"(C) Samuel Soule"<<endl;
	cout<<"(D) All of the above"<<endl;
	cout<<"________________________________________________"<<endl;
	again3:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='d'||choice=='D')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='b'||choice=='B')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again3;
	}
	cout<<"5. Impact printers"<<endl;
	cout<<"(A) Strike a ribbon against the paper to produce character images"<<endl;
	cout<<"(B) Include ink-jet and thermal devices"<<endl;
	cout<<"(C) Are more expensive than Laser printers"<<endl;
	cout<<"(D) Use optical technology"<<endl;
	cout<<"________________________________________________"<<endl;
	again4:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='a'||choice=='A')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is A"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again4;
	}
	cout<<"Press any key to see your result"<<endl;
	getch();
	result();
}
void sec()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*              COMPUTER SECURITY               *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"1. Who is considered the 'father' of the minicomputer and one of the founder fathers of the modern computer industry world-wide?"<<endl;
	cout<<"(A) George Tate"<<endl;
	cout<<"(B) Kenneth H. Olsen"<<endl;
	cout<<"(C) Seymour Cray"<<endl;
	cout<<"(D) Basic Pascal"<<endl;
	cout<<"________________________________________________"<<endl;
	again:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='b'||choice=='B')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is B"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again;
	}
	cout<<"2. What does that acronym VGA stand for"<<endl;
	cout<<"(A) Extended Graphics Adapter"<<endl;
	cout<<"(B) Enhanced Graphics Array"<<endl;
	cout<<"(C) Video Graphics Array"<<endl;
	cout<<"(D) Color Graphics Array"<<endl;
	cout<<"________________________________________________"<<endl;
	again1:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='c'||choice=='C')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='A'||choice=='a'||choice=='b'||choice=='B'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is C"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again1;
	}
	cout<<"3. The hardware in which data may be stored for a computer system is called"<<endl;
	cout<<"(A) Registers"<<endl;
	cout<<"(B) Bus"<<endl;
	cout<<"(C) Control unit"<<endl;
	cout<<"(D) Memory"<<endl;
	cout<<"________________________________________________"<<endl;
	again2:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='D'||choice=='d')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='a'||choice=='a'||choice=='c'||choice=='C')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again2;
	}
	cout<<"4. The first practical commercial typewriter was invented in 1867 in the United States by"<<endl;
	cout<<"(A) Christopher Latham Sholes"<<endl;
	cout<<"(B) Carlos Glidden"<<endl;
	cout<<"(C) Samuel Soule"<<endl;
	cout<<"(D) All of the above"<<endl;
	cout<<"________________________________________________"<<endl;
	again3:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='d'||choice=='D')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='b'||choice=='B')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again3;
	}
	cout<<"5. Impact printers"<<endl;
	cout<<"(A) Strike a ribbon against the paper to produce character images"<<endl;
	cout<<"(B) Include ink-jet and thermal devices"<<endl;
	cout<<"(C) Are more expensive than Laser printers"<<endl;
	cout<<"(D) Use optical technology"<<endl;
	cout<<"________________________________________________"<<endl;
	again4:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='a'||choice=='A')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is A"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again4;
	}
	cout<<"Press any key to see your result"<<endl;
	getch();
	result();
}
void keys()
{
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*            COMPUTER SHORTCUT KEYS            *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"1. Who is considered the 'father' of the minicomputer and one of the founder fathers of the modern computer industry world-wide?"<<endl;
	cout<<"(A) George Tate"<<endl;
	cout<<"(B) Kenneth H. Olsen"<<endl;
	cout<<"(C) Seymour Cray"<<endl;
	cout<<"(D) Basic Pascal"<<endl;
	cout<<"________________________________________________"<<endl;
	again:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='b'||choice=='B')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is B"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again;
	}
	cout<<"2. What does that acronym VGA stand for"<<endl;
	cout<<"(A) Extended Graphics Adapter"<<endl;
	cout<<"(B) Enhanced Graphics Array"<<endl;
	cout<<"(C) Video Graphics Array"<<endl;
	cout<<"(D) Color Graphics Array"<<endl;
	cout<<"________________________________________________"<<endl;
	again1:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='c'||choice=='C')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='A'||choice=='a'||choice=='b'||choice=='B'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is C"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again1;
	}
	cout<<"3. The hardware in which data may be stored for a computer system is called"<<endl;
	cout<<"(A) Registers"<<endl;
	cout<<"(B) Bus"<<endl;
	cout<<"(C) Control unit"<<endl;
	cout<<"(D) Memory"<<endl;
	cout<<"________________________________________________"<<endl;
	again2:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='D'||choice=='d')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='a'||choice=='a'||choice=='c'||choice=='C')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again2;
	}
	cout<<"4. The first practical commercial typewriter was invented in 1867 in the United States by"<<endl;
	cout<<"(A) Christopher Latham Sholes"<<endl;
	cout<<"(B) Carlos Glidden"<<endl;
	cout<<"(C) Samuel Soule"<<endl;
	cout<<"(D) All of the above"<<endl;
	cout<<"________________________________________________"<<endl;
	again3:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='d'||choice=='D')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='a'||choice=='A'||choice=='c'||choice=='C'||choice=='b'||choice=='B')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is D"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again3;
	}
	cout<<"5. Impact printers"<<endl;
	cout<<"(A) Strike a ribbon against the paper to produce character images"<<endl;
	cout<<"(B) Include ink-jet and thermal devices"<<endl;
	cout<<"(C) Are more expensive than Laser printers"<<endl;
	cout<<"(D) Use optical technology"<<endl;
	cout<<"________________________________________________"<<endl;
	again4:
	cout<<"Select Option : ";cin>>choice;
	if(choice=='a'||choice=='A')
	{
		cout<<"Correct answer"<<endl<<endl;
		cor++;
	}
	else if(choice=='b'||choice=='B'||choice=='c'||choice=='C'||choice=='d'||choice=='D')
	{
		cout<<"Wrong Answer"<<endl<<"Correct answer is A"<<endl<<endl;
		incor++;
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"X invalid input "<<endl;
		cout<<"Press any key to enter input again"<<endl;
		getch();
		goto again4;
	}
	cout<<"Press any key to see your result"<<endl;
	getch();
	result();
}
void read()
{
	
	again:
		SetConsoleTextAttribute(color,13);
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*               READING MODE                   *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;	
	cout<<"\t\t\t1. Fundamentals of Computer"<<endl;
	cout<<"\t\t\t2. Programming Languages"<<endl;
	cout<<"\t\t\t3. Networking"<<endl;
	cout<<"\t\t\t4. Database"<<endl;
	cout<<"\t\t\t5. Cyber security"<<endl;
	cout<<"\t\t\t6. Security"<<endl;
	cout<<"\t\t\t7. Shortcut keys"<<endl<<endl;
	cout<<"\t\t\t> Press b for back"<<endl<<endl;
	cout<<"\t\t\t> Select here : ";cin>>sel;
	switch(sel)
	{
		case '1':fun_r();
		break;
		case '2':prom_r();
		break;
		case '3':net_r();
		break;
		case '4':dbase_r();
		break;
		case '5':cy_r();
		break;
		case '6':sec_r();
		break;
		case '7':keys_r();
		break;
		case 'b':quiz();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
	}
}
void com()
{
	
	again:
		SetConsoleTextAttribute(color,6);
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*           WELCOME TO QUIZ GAME               *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;	
	cout<<"\t\t\t1. Fundamentals of Computer"<<endl;
	cout<<"\t\t\t2. Programming Languages"<<endl;
	cout<<"\t\t\t3. Networking"<<endl;
	cout<<"\t\t\t4. Database"<<endl;
	cout<<"\t\t\t5. Cyber Security"<<endl;
	cout<<"\t\t\t6. Security"<<endl;
	cout<<"\t\t\t7. Shortcut keys"<<endl<<endl;
	cout<<"\t\t\t> Press b for back"<<endl<<endl;
	cout<<"\t\t\t> Select here : ";cin>>sel;
	switch(sel)
	{
		case '1':fun();
		break;
		case '2':prom();
		break;
		case '3':net();
		break;
		case '4':dbase();
		break;
		case '5':cy();
		break;
		case '6':sec();
		break;
		case '7':keys();
		break;
		case 'b':quiz();
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
	}
}
void quiz()
{ 
	SetConsoleTextAttribute(color,15);
	again:
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*           WELCOME TO QUIZ GAME               *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;	
	cout<<"\t\t\t1. QUIZ MODE"<<endl;
	cout<<"\t\t\t2. PRACTICE MODE"<<endl;
	cout<<"\t\t\t3. CHECK HISTORY"<<endl;
	cout<<"\t\t\t> Select here : ";cin>>sel;
	switch(sel)
	{
		case '1':com();
		break;
		case '2':read();
		break;
		case '3':result_read();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
	}
}
int main()
{
	again:
	system("CLS");
	SetConsoleTextAttribute(color,1);
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*      REGISTER OR LOGIN YOUR ACCOUNT HERE     *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;	
	cout<<"\t\t\t1. REGISTER ACCOUNT"<<endl;
	cout<<"\t\t\t2. LOGIN ACCOUNT"<<endl;
	cout<<"\t\t\t3. FORGET PASSWORD"<<endl<<endl;
	cout<<"\t\t\t> Select here : ";cin>>sel;
	switch(sel)
	{
		case '1':reg();
		break;
		case '2':log();
		break;
		case '3':forget();
		break;
		default:SetConsoleTextAttribute(color,4);
		cout<<"\t\t\tX invalid input "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
	}
}
void log()
{
	again:
	SetConsoleTextAttribute(color,3);
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*                LOGIN ACCOUNT                *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"\t\t\tName 	     : ";cin>>name;
	cout<<"\t\t\tPassword     : ";cin>>pass;
	ifstream read;
	read.open("reg.txt");
	getline(read,n);
	getline(read,p);
	read.close();
	if(pass==p&&name==n)
	
	{
		SetConsoleTextAttribute(color,2);
		cout<<"\t\t________________________________________________"<<endl;
		cout<<"\t\t       You have login your account"<<endl;
		cout<<"\t\t    Press any key to start Quiz Game";
		getch();
		quiz();
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"\t\t________________________________________________"<<endl;
		cout<<"\t\t\tX Name or Password is wrong"<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
	}
}
void reg()
{
	string c,p,cp;
//	sleep(3);
	SetConsoleTextAttribute(color,3);
	load();
	cout<<"\t\t________________________________________________"<<endl;
	cout<<"\t\t*               REGISTER ACCOUNT               *"<<endl;
	cout<<"\t\t________________________________________________"<<endl<<endl;
	cout<<"\t\t\tName 	     : ";cin>>name;
	cout<<"\t\t\tCNIC         : ";cin>>c;
	cout<<"\t\t\tphone        : ";cin>>p;
	again:
	cout<<"\t\t\tPassword     : ";cin>>pass;
	cout<<"\t\t\tConfirm Pass : ";cin>>cp;
	ofstream reg;
	reg.open("reg.txt");
	reg<<name<<endl<<pass;
	reg.close();
	if(pass==cp)
	{
		SetConsoleTextAttribute(color,2);
		cout<<"\t\t________________________________________________"<<endl;
		cout<<"\t\t      Your Account has been registered"<<endl;
		cout<<"\t\t      Press any key to log in your account"<<endl;
		getch();
		load();
		main();
	}
	else
	{
		SetConsoleTextAttribute(color,4);
		cout<<"\t\t________________________________________________"<<endl;
		cout<<"\t\t\tX Wrong password try again "<<endl;
		cout<<"\t\t\tPress any key to enter input again"<<endl;
		getch();
		goto again;
	}

}
void forget()
{
	string forpas;
	load();
	ifstream read("reg.txt");
	while(getline(read,forpas))
	{	
		cout<<forpas<<endl;
	}	
	cout<<"\t\t\tPress any key to return back"<<endl;
	getch();
	main();
}
void load()
{
	system("CLS");
	cout<<"Loading.................................";
	sleep(3);
	system("CLS");
}
void back()
{
	read();
}
void result_read()
{
	load();
	string text;
	ifstream read;
	read.open("result.txt");
	while(getline(read,text))
	{
		cout<<text<<endl;
	}
	cout<<"\t\t________________________________________"<<endl;
	cout<<"\t\t\tPress any key to return back"<<endl;
	getch();
	quiz();
}
