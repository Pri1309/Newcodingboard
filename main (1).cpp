/*  WEATHER APP
NAME -> PRIYADHARSHINI BAI B
COLLEGE NAME ->VIVEKANANDA COLLEGE OF ENGINEERING FOR WOMEN

DATA USED:
    LOCATION

METHODS USED:
    CLASS& OBJECTS
    IF
    ELSE IF
    SWITCH
*/
#include <iostream>
using namespace std;

class weather
{
    public:
    int c, choice;
    string loc;
    string s1="water area";
    string s2="beach area";
    string s3="mountain area";
    void getsata()

{
    cout<<"\nWelcome to weather app!!!";
    cout<<"\n\nLocation\nwater area\nbeach area\nmountain\n";
    cin>>loc;
}
};
class Today: public weather
{
    public:
    void printdata1(){
        cout<<"\n\nToday report:";
    if(c=loc.compare(s1))
    {
        cout<<"\nTemperature:27'c\nso cool!!\n cool waves\ncool";
    }
    else if(c=loc.compare(s2))
    {
        cout<<"\nTemperature:22'c\n too cool!!\n cloudy\nThunderstrom";
    }
    else if(c=loc.compare(s3))
    {
        cout<<"\nTemperature:15'c\n soo cool!!\n foggy\ncloudy";
    }
    else
    {
        cout<<"\nyou are in out of station";
    }
    }
};
class yesterday: public weather
{
    public:
    void printdata2(){
        cout<<"\nyestetday report:";
    if (c=loc.compare(s1))
    {
        cout<<"\n\nTemperature:28'c\nso cool!!\ncool waves\ncool";
    }
    else if(c=loc.compare(s2))
    {
        cout<<"\nTempearture:24'c\ntoo cool!!\ncloudy\nthunderstrom";
    }
    else if(c=loc.compare(s3))
    {
        cout<<"\nTemperature:20'c\nsoo cool!!\nfoggy\ncloudy";
    }
    else
    {
        cout<<"/nyou are in out of station";
    }
    }
};
class Tomorrow:public weather
{
    public:
    void printdata3(){
        cout<<"\n\nTomorrow report:";
    if(c=loc.compare(s1))
    {
        cout<<"\n\nTemperature:21'c\nsoo cool!!\n cool waves \ncool";
    }
    else if (c=loc.compare(s2))
    {
        cout<<"\nTempeature:27'c\ntoo cool!!\ncloudy\nthunderstrom";
    }
    else if (c=loc.compare(s3))
    {
        cout<<"\nTemperature:26'c\nsoo cool!!\nfoggy\ncloudy";
    }
    else
    {
        cout<<"\nyou are in out of station";
    }
    }
};
class weekly:public weather
{
    public:
    void printdata4(){
        cout<<"\n\nweekly report:\nEnter your choice (1-6):";
        cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\nMonday\ncool waves!!";
        break;
        case 2:
        cout<<"\nTuesday\nthunderstrom!!";
        break;
        case 3:
        cout<<"\nwednesday\nfoggy!!";
        break;
        case 4:
        cout<<"\nThursday\ncool waves!!";
        break;
        case 5:
        cout<<"\nFriday\ncloudy!!";
        break;
        case 6:
        cout<<"\nsaturday\ncool waves!!";
        break;
        case 7:
        cout<<"\nsunday\ncloudy!!";
        break;
    }
   
    }
};
int main ()
{
    weather w1;
    Today t1;
    yesterday y1;
    Tomorrow tw;
    weekly w2;
    t1.printdata1();
    y1.printdata2();
    tw.printdata3();
    w2.printdata4();
    
    return 0;
}




    

    
    
    
    

    

        
    
    
    
