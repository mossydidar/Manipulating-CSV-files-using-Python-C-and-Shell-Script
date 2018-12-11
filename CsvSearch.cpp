
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    ifstream ip("data1.csv");

  if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';

  string timestamp;
  string city;
  string temperature;
  string light;
  string airquality_raw;
  string sound;
  string humidity;
  string dust;
  string day;
  string month;
  string year;

   string cityinput;
   string dayinput;
   string monthinput;
   string yearinput;
    string choice;

    cout<<"Press 1 to search City\n";
    cout<<"Press 2 to search Day\n";
    cout<<"Press 3 to search Month\n";
    cout<<"Press 4 to search Year\n";

    cin>> choice;
   // cout <<choice;

    if (choice == "1"){
     cout<<"Enter City\n";
    cin>> cityinput;

  while(ip.good()){
    getline(ip,timestamp,',');
    getline(ip,city,',');
    getline(ip,temperature,',');
    getline(ip,light,',');
    getline(ip,airquality_raw,',');
    getline(ip,sound,',');
    getline(ip,humidity,',');
    getline(ip,dust,',');
    getline(ip,year, ',');
    getline(ip,month,',');
    getline(ip,day,'\n');

    if (cityinput == city)
        {
            std::cout<<timestamp <<" "<<city<< " " <<temperature<<" "<<light<<" " <<airquality_raw<<" "<<sound<<" "<<humidity<< " " << dust<< '\n';
        }
  }

  ip.close();
}


if (choice == "2"){
    cout<<"Enter Day\n";
    cin>> dayinput;

  while(ip.good()){
    getline(ip,timestamp,',');
    getline(ip,city,',');
    getline(ip,temperature,',');
    getline(ip,light,',');
    getline(ip,airquality_raw,',');
    getline(ip,sound,',');
    getline(ip,humidity,',');
    getline(ip,dust,',');
    getline(ip,year, ',');
    getline(ip,month,',');
    getline(ip,day,'\n');

    if (dayinput == day)
        {
            std::cout<<timestamp <<" "<<city<< " " <<temperature<<" "<<light<<" " <<airquality_raw<<" "<<sound<<" "<<humidity<< " " << dust<< '\n';
        }
  }

  ip.close();
}



if (choice == "3"){

     cout<<"Enter Month\n";
    cin>> monthinput;

  while(ip.good()){
    getline(ip,timestamp,',');
    getline(ip,city,',');
    getline(ip,temperature,',');
    getline(ip,light,',');
    getline(ip,airquality_raw,',');
    getline(ip,sound,',');
    getline(ip,humidity,',');
    getline(ip,dust,',');
    getline(ip,year, ',');
    getline(ip,month,',');
    getline(ip,day,'\n');

    if (monthinput == month)
        {
            std::cout<<timestamp <<" "<<city<< " " <<temperature<<" "<<light<<" " <<airquality_raw<<" "<<sound<<" "<<humidity<< " " << dust<< '\n';
        }
  }

  ip.close();
}


if (choice == "4"){
    cout<<"Enter Year\n";
    cin>> yearinput;

  while(ip.good()){
    getline(ip,timestamp,',');
    getline(ip,city,',');
    getline(ip,temperature,',');
    getline(ip,light,',');
    getline(ip,airquality_raw,',');
    getline(ip,sound,',');
    getline(ip,humidity,',');
    getline(ip,dust,',');
    getline(ip,year, ',');
    getline(ip,month,',');
    getline(ip,day,'\n');

    if (yearinput == year)
        {
            std::cout<<timestamp <<" "<<city<< " " <<temperature<<" "<<light<<" " <<airquality_raw<<" "<<sound<<" "<<humidity<< " " << dust<< '\n';
        }
  }

  ip.close();
}




}
