#include<iostream>
#include<cstring>
using namespace std;
int day(int date,int month,int year)
{
	int t;
	if(year>=1500&&year<=1599)
	t=0;
	else if(year>=1600&&year<=1699)
	t=6;
	else if(year>=1700&&year<=1799)
	t=4;
	else if(year>=1800&&year<=1899)
	t=2;
	else if(year>=1900&&year<=1999)
	t=0;
	else if(year>=2000&&year<=2099)
	t=6;
	int mon[12]={1,4,4,0,2,5,0,3,6,1,4,6};
	return ((date+mon[month-1]+((year%100)/4)+(year%100)+t)%7);
}
string monthname(int month)
{
	string mon[12]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
	return mon[month-1];
}
int numberofdays(int month,int year)
{
	if(month==1)
	return 31;
	if(month==2)
	{
		if((year%400)==0 || (year%4==0)&&(year%100)!=0)
		return 29;
		else
		return 28;
	}
	if(month==3)
	return 31;
	if(month==4)
	return 30;
	if(month==5)
	return 31;
	if(month==6)
	return 30;
	if(month==7)
	return 31;
	if(month==8)
	return 31;
	if(month==9)
	return 30;
	if(month==10)
	return 31;
	if(month==11)
	return 30;
	if(month==12)
	return 31;
}
int givenmonth(int month,int year)
{
	int current=day(1,month,year);
	int k=0;
	int n=numberofdays(month,year);
	string a=monthname(month);
	for(int p=0;p<((35-a.size())/2);p++)
	cout<<"-";
	cout<<a;
	for(int p=((35-a.size())/2);p<(35-a.size());p++)
	cout<<"-";
	cout<<endl;
	cout<<"  SAT  SUN  MON  TUE  WED  THU  FRI"<<endl;
	for(k=0;k<current;k++)
	cout<<"     ";
	for(int j=1;j<=n;j++)
	{
		if(j<10)
		cout<<"    "<<j;
		else
		cout<<"   "<<j;
		if(++k>6)
		{
			k=0;
			cout<<endl;
		}
	}
	cout<<endl;
	cout<<"-----------------------------------"<<endl;
	return 0;
}
int findimp(int date,int month)
{
				cout<<"--------------------------------"<<endl;
				if(date==1&&month==1)
				cout<<"NEW YEAR'S DAY"<<endl;
				if(date==2&&month==1)
				cout<<"GURU GOBIND SINGH JAYANTHI"<<endl;
				if(date==12&&month==1)
				cout<<"NATIONAL YOUTH DAY"<<endl;
				if(date==14&&month==1)
				cout<<"LOHRI"<<endl;
				if(date==15&&month==1)
				cout<<"NATIONAL ARMY DAY"<<endl;
				if(date==23&&month==1)
				cout<<"NETAJI BOSE JAYANTHI"<<endl;
				if(date==26&&month==1)
				cout<<"REPUBLIC DAY"<<endl;
				if(date==4&&month==2)
				cout<<"WORLD CANCER DAY"<<endl;
				if(date==9&&month==2)
				cout<<"GURU RAVIDAS JAYANTHI"<<endl;
				if(date==13&&month==2)
				cout<<"WORLD RADIO DAY"<<endl;
				if(date==14&&month==2)
				cout<<"VALENTINES DAY"<<endl;
				if(date==15&&month==2)
				cout<<"INTERNATIONAL CHILDHOOD CANCER DAY"<<endl;
				if(date==18&&month==2)
				cout<<"MAHARSHI DAYANAND SARASWATI"<<endl;
				if(date==19&&month==2)
				cout<<"CHATRAPATI SHIVAJI JAYANTHI"<<endl;
				if(date==24&&month==2)
				cout<<"CENTRAL EXCISE DAY"<<endl;
				if(date==28&&month==2)
				cout<<"NATIONAL SCIENCE DAY"<<endl;
				if(date==1&&month==3)
				cout<<"ZERO DISCRIMINATION DAY"<<endl;
				if(date==3&&month==3)
				cout<<"WORLD WILDLIFE DAY"<<endl;
				if(date==8&&month==3)
				cout<<"INTERNATIONAL WOMEN'S DAY"<<endl;
				if(date==13&&month==3)
				cout<<"WORLD SLEEP DAY"<<endl;
				if(date==15&&month==3)
				cout<<"WORLD CONSUMER RIGHT'S DAY"<<endl;
				if(date==20&&month==3)
				cout<<"INTERNATIONAL DAY OF HAPPINESS"<<endl;
				if(date==21&&month==3)
				cout<<"WORLD FORESTRY DAY"<<endl;
				if(date==22&&month==3)
				cout<<"WORLD WATER DAY"<<endl;
				if(date==23&&month==3)
				cout<<"WORLD METEOROLOGICAL DAY"<<endl;
				if(date==27&&month==3)
				cout<<"WORLD THEATRE DAY"<<endl;
				if(date==1&&month==4)
				cout<<"APRIL FOOL'S DAY"<<endl;
				if(date==6&&month==4)
				cout<<"MAHAVIR JAYANTHI"<<endl;
				if(date==7&&month==4)
				cout<<"WORLD HEALTH DAY"<<endl;
				if(date==12&&month==4)
				cout<<"INTERNATIONAL DAY OF HUMAN SPACE FLIGHT"<<endl;
				if(date==14&&month==4)
				cout<<"AMBEDKAR JAYANTHI"<<endl;
				if(date==18&&month==4)
				cout<<"WORLD HERITAGE DAY"<<endl;
				if(date==21&&month==4)
				cout<<"WORLD CREATIVITY AND INNOVATION DAY"<<endl;
				if(date==22&&month==4)
				cout<<"EARTH DAY"<<endl;
				if(date==23&&month==4)
				cout<<"ENGLISH LANGUAGE DAY"<<endl;
				if(date==29&&month==4)
				cout<<"INTERNATIONAL DANCE DAY"<<endl;
				if(date==1&&month==5)
				cout<<"MAY DAY"<<endl;
				if(date==2&&month==5)
				cout<<"ASTRONOMY DAY"<<endl;
				if(date==4&&month==5)
				cout<<"STARWARS DAY"<<endl;
				if(date==7&&month==5)
				cout<<"BIRTHDAY OF RABINDRANATH TAGORE"<<endl;
				if(date==8&&month==5)
				cout<<"WORLD REDCROSS DAY"<<endl;
				if(date==11&&month==5)
				cout<<"NATIONAL TECHNOLOGY DAY"<<endl;
				if(date==15&&month==5)
				cout<<"INTERNATIONAL DAY OF FAMILIES"<<endl;
				if(date==21&&month==5)
				cout<<"ANTI TERRORISM DAY"<<endl;
				if(date==24&&month==5)
				cout<<"COMMON WEALTH DAY"<<endl;
				if(date==31&&month==5)
				cout<<"WORLD NO TOBACCO DAY"<<endl;
				if(date==1&&month==6)
				cout<<"GLOBAL DAY OF PARENTS"<<endl;
				if(date==3&&month==6)
				cout<<"WORLD BICYCLE DAY"<<endl;
				if(date==5&&month==6)
				cout<<"WORLD ENVIRONMENT DAY"<<endl;
				if(date==7&&month==6)
				cout<<"WORLD FOOD SAFETY DAY"<<endl;
				if(date==8&&month==6)
				cout<<"WORLD OCEAN'S DAY"<<endl;
				if(date==12&&month==6)
				cout<<"WORLD DAY AGAINST CHILDLABOUR"<<endl;
				if(date==14&&month==6)
				cout<<"BLOOD DONOR DAY"<<endl;
				if(date==21&&month==6)
				cout<<"INTERNATIONAL YOGA DAY"<<endl<<"WORLD MUSIC DAY"<<endl;
				if(date==26&&month==6)
				cout<<"INTERNATIONAL DAY AGAINST DRUG ABUSE AND ILLICIT TRAFFICKING"<<endl;
				if(date==30&&month==6)
				cout<<"ASTEROID DAY"<<endl;
				if(date==1&&month==7)
				cout<<"DOCTOR'S DAY"<<endl;
				if(date==3&&month==7)
				cout<<"PLASTIC BAG FREE DAY"<<endl;
				if(date==11&&month==7)
				cout<<"WORLD POPULATION DAY"<<endl;
				if(date==12&&month==7)
				cout<<"PAPER BAG DAY"<<endl<<"NATIONAL SIMPLICITY DAY"<<endl;
				if(date==17&&month==7)
				cout<<"WORLD EMOJI DAY"<<endl;
				if(date==18&&month==7)
				cout<<"INTERNATIONAL NELSON MANDELA DAY"<<endl;
				if(date==28&&month==7)
				cout<<"WORLD NATURE CONSERVATION DAY"<<endl<<"WORLD HEPATITIS DAY"<<endl;
				if(date==29&&month==7)
				cout<<"INTERNATIONAL TIGER DAY"<<endl;
				if(date==6&&month==8)
				cout<<"HIROSHIMA DAY"<<endl;
				if(date==7&&month==8)
				cout<<"NATIONAL HANDLOOM DAY"<<endl;
				if(date==9&&month==8)
				cout<<"DAY OF WORLD'S INDIGENOUS PEOPLE"<<endl;
				if(date==15&&month==8)
				cout<<"INDEPENDENCE DAY"<<endl;
				if(date==19&&month==8)
				cout<<"WORLD PHOTOGRAPHY DAY"<<endl<<"WORLD HUMANITARIAN DAY"<<endl;
				if(date==26&&month==8)
				cout<<"WOMEN''S EQUALITY DAY"<<endl;
				if(date==29&&month==8)
				cout<<"NATIONAL SPORTS DAY"<<endl;
				if(date==2&&month==9)
				cout<<"WORLD COCONUT DAY"<<endl;
				if(date==5&&month==9)
				cout<<"TEACHER'S DAY"<<endl<<"INTERNATIONAL DAY OF CHARITY"<<endl;
				if(date==8&&month==9)
				cout<<"INTERNATIONAL LITERACY DAY"<<endl;
				if(date==10&&month==9)
				cout<<"WORLD SUICIDE PREVENTION DAY"<<endl;
				if(date==14&&month==9)
				cout<<"HINDI DIVAS"<<endl;
				if(date==15&&month==9)
				cout<<"ENGINEER'S DAY"<<endl<<"INTERNATIONAL DAY OF DEMOCRACY"<<endl;
				if(date==16&&month==9)
				cout<<"WORLD OZONE DAY"<<endl;
				if(date==21&&month==9)
				cout<<"INTERNATIONAL DAY OF PEACE"<<endl;
				if(date==22&&month==9)
				cout<<"WORLD ROSE DAY"<<endl;
				if(date==26&&month==9)
				cout<<"WORLD MARITIME DAY"<<endl;
				if(date==27&&month==9)
				cout<<"WORLD TOURISM DAY"<<endl;
				if(date==29&&month==9)
				cout<<"WORLD HEART DAY"<<endl;
				if(date==30&&month==9)
				cout<<"WORLD TRANSLATION DAY"<<endl;
				if(date==2&&month==10)
				cout<<"GANDI JAYANTHI"<<endl;
				if(date==8&&month==10)
				cout<<"INDIAN AIRFORCE DAY"<<endl;
				if(date==9&&month==10)
				cout<<"WORLD POSTOFFICE DAY"<<endl;
				if(date==10&&month==10)
				cout<<"WORLD MENTAL HEALTH DAY"<<endl;
				if(date==16&&month==10)
				cout<<"WORLD FOOD DAY"<<endl;
				if(date==24&&month==10)
				cout<<"UNITED NATION'S DAY"<<endl;
				if(date==31&&month==10)
				cout<<"RASTRIYA EKTHA DIVWAS"<<endl;
				if(date==8&&month==11)
				cout<<"WORLD RADIOLOGY DAY"<<endl;
				if(date==11&&month==11)
				cout<<"NATIONAL EDUCATION DAY"<<endl;
				if(date==13&&month==11)
				cout<<"WORLD KINDNESS DAY"<<endl;
				if(date==14&&month==11)
				cout<<"CHILDREN'S DAY"<<endl;
				if(date==19&&month==11)
				cout<<"INTERNATIONAL MEN'S DAY"<<endl;
				if(date==26&&month==11)
				cout<<"NATIONAL DAY"<<endl;
				if(date==1&&month==12)
				cout<<"WORLD AID'S DAY"<<endl;
				if(date==2&&month==12)
				cout<<"NATIONAL POLLUTION CONTROL DAY"<<endl;
				if(date==4&&month==12)
				cout<<"INDIAN NAVY DAY"<<endl;
				if(date==5&&month==12)
				cout<<"WORLD SOIL DAY"<<endl;
				if(date==9&&month==12)
				cout<<"ANTI CORRUPTION DAY"<<endl;
				if(date==10&&month==12)
				cout<<"HUMAN RIGHT'S DAY"<<endl;
				if(date==15&&month==12)
				cout<<"INTERNATIONAL TEA DAY"<<endl;
				if(date==16&&month==12)
				cout<<"VIJAY DIWAS"<<endl;
				if(date==22&&month==12)
				cout<<"NATIONAL MATHEMATIC 'S DAY"<<endl;
				if(date==23&&month==12)
				cout<<"FARMER'S DAY"<<endl;
				if(date==24&&month==12)
				cout<<"NATIONAL CONSUMER'S DAY"<<endl;
				if(date==25&&month==12)
				cout<<"CHRISTMAS"<<endl;
				cout<<"--------------------------------\n";
}
int main()
{
	int ch;
	do{
		cout<<"1.display calender of given month \n2.day of given date\n3.importance of date\n4.quit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:{
				int month,year;
				cout<<"enter month and year between 16 and 21 centuries"<<endl;
				cin>>month>>year;
				givenmonth(month,year);
				break;
			}
			case 2:{
				int date,month,year;
				cout<<"enter date , month , year"<<endl;
				cin>>date>>month>>year;
				int k;
				k=day(date,month,year);
				if(k==1)
				cout<<"SUNDAY"<<endl;
				if(k==2)
				cout<<"MONDAY"<<endl;
				if(k==3)
				cout<<"TUESDAY"<<endl;
				if(k==4)
				cout<<"WEDNESDAY"<<endl;
				if(k==5)
				cout<<"THURSDAY"<<endl;
				if(k==6)
				cout<<"FRIDAY"<<endl;
				if(k==0)
				cout<<"SATURDAY"<<endl;
				break;
			}
			case 3:{
				int date,month;
				cout<<"enter date and month"<<endl;
				cin>>date>>month;
				findimp(date,month);
				break;
			}
			case 4:{
				return 0;
				break;
			}
			default:
				cout<<"invalid input"<<endl;
		}
	}while(ch!=4);
	return 0;
	
}
