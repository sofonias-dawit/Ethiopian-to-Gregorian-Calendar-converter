#include <iostream>

using namespace std;
//E.C to G.C converter
void EthcalendarToGrecalendar(int EthYear, int EthMonth, int EthDay, int& GreYear, int& GreMonth, int& GreDay) {
  
  if (EthYear < 0 || EthMonth > 13 || EthMonth < 1 || EthDay < 1 || EthDay > 30||EthMonth==13 && EthDay>6) {
    cout << "Invalid Date" << endl;
    exit (0);
  }

  if (EthMonth < 5) {
    GreYear = EthYear + 7;
    GreMonth = EthMonth + 8;
  } else {
    GreYear = EthYear + 8;
    GreMonth = EthMonth - 4;
  }
   
switch (EthMonth) {
    
case 1:
 
    if(EthDay<20)GreDay=EthDay + 11;
    else{
      GreDay=EthDay%20;
       GreDay++;
      GreMonth++;
    }
    break;
    
case 2:
      if(EthDay <21)GreDay= EthDay + 11;
      else{
      GreDay=EthDay % 21;
       GreDay++;
      GreMonth++;
      }
      break;
      
case 3:
      if(EthDay <21)GreDay= EthDay + 10;
      else{
      GreDay=EthDay % 21;
       GreDay++;
      GreMonth++;
      }
      break;

 case 4:
      if(EthDay <22)GreDay= EthDay + 10;
      else{
      GreDay=EthDay % 21;
     GreMonth=1;
     GreYear++;
      }if(GreDay==0)GreDay=1;
      break; 
      
 case 5:
      if(EthDay <23)GreDay= EthDay + 9;
      else{
      GreDay=EthDay % 23;
      GreDay++;
     GreMonth++;
      }
      break; 
      
  case 6:
      if(EthDay <22)GreDay= EthDay + 8;
      else{
      GreDay=EthDay % 22;
      GreDay++;
     GreMonth++;
      }
      break; 
      
  case 7:
      if(EthDay <23)GreDay= EthDay + 9;
      else{
      GreDay=EthDay % 23;
      GreDay++;
     GreMonth++;
      }
      break; 
      
  case 8:
      if(EthDay <23)GreDay= EthDay + 8;
      else{
      GreDay=EthDay % 23;
      GreDay++;
      GreMonth++;
      }
      break;
      
   case 9:
      if(EthDay <24)GreDay= EthDay + 8;
      else{
      GreDay=EthDay % 24;
      GreDay++;
      GreMonth++;
      }
      break;
      
 case 10:
      if(EthDay <24)GreDay= EthDay + 7;
      else{
      GreDay=EthDay % 24;
      GreDay++;
      GreMonth++;
      }
      break;
      
 case 11:
      if(EthDay <25)GreDay= EthDay + 7;
      else{
      GreDay=EthDay % 25;
      GreDay++;
      GreMonth++;
      }
      break;
      
  case 12:
      if(EthDay <26)GreDay= EthDay + 6;
      else{
      GreDay=EthDay % 26;
      GreDay++;
      GreMonth++;
      }
      break;
      
  case 13:
   if(EthDay<6)GreDay= EthDay + 5;
    
}}

// G.C to E.C converter
void GrecalendarToEthcalendar(int GreYear, int GreMonth, int GreDay, int& EthYear, int& EthMonth, int& EthDay) {
    // Check for invalid Gregorian date
    if (GreYear < 0 || GreMonth < 1 || GreMonth > 12 || GreDay < 1 || GreDay > 31) {
        cout << "Invalid Gregorian date" << endl;
        exit(0);
    }
    // Convert Gregorian to Ethiopian
    if (GreMonth < 9) {
        EthYear = GreYear - 8;
        EthMonth = GreMonth + 4;
    } else {
        EthYear = GreYear - 7;
        EthMonth = GreMonth - 8;
    }
    // Adjust Ethiopian day based on Gregorian month
    switch (GreMonth) {
        case 1:
            EthDay = GreDay - 9;
            break;
        case 2:
            EthDay = GreDay - 8;
            break;
        case 3:
            EthDay = GreDay - 9;
            break;
        case 4:
            EthDay = GreDay - 8;
            break;
        case 5:
            EthDay = GreDay - 8;
            break;
        case 6:
            EthDay = GreDay - 7;
            break;
        case 7:
            EthDay = GreDay - 7;
            break;
        case 8:
            EthDay = GreDay - 6;
            break;
        case 9:
            EthDay = GreDay - 5;
            break;
        case 10:
            EthDay = GreDay - 10;
            break;
        case 11:
            EthDay = GreDay - 9;
            break;
        case 12:
            EthDay = GreDay - 9;
            break;
    }

    if (EthDay < 1) {
        EthDay += 30;
        EthMonth--;
        if (EthMonth < 1) {
            EthMonth = 13;
            EthYear--;
        }
    }
}
void ETHtoGRE(){
	int EthYear, EthMonth, EthDay;
	int GreYear, GreMonth, GreDay;
	 cout << "Enter Ethiopian year: ";
    cin >> EthYear;

    cout << "Enter Ethiopian month: ";
    cin >> EthMonth;

    cout << "Enter Ethiopian day: ";
    cin >> EthDay;

    EthcalendarToGrecalendar(EthYear, EthMonth, EthDay, GreYear, GreMonth, GreDay);

    cout << "\nGregorian Calendar: " << GreYear << "/" << GreMonth << "/" << GreDay << endl;
    cout << "\nThank you!\n";
		
}
void GREtoETH(){
    int EthYear, EthMonth, EthDay;
	int GreYear, GreMonth, GreDay;
	cout << "Enter Gregorian year: ";
    cin >> GreYear;

    cout << "Enter Gregorian month: ";
    cin >> GreMonth;

    cout << "Enter Gregorian day: ";
    cin >> GreDay;

    GrecalendarToEthcalendar(GreYear, GreMonth, GreDay, EthYear, EthMonth, EthDay);

    cout << "\nEthiopian Calendar: " << EthYear << "/" << EthMonth << "/" << EthDay << endl;
    cout << "\nThank you!\n";
	
}

int main() {
  int option;

  cout << "Welcome to our Calendar" << endl;
  cout<<"-----------------------"<<endl;
  cout << "For Ethiopian Calendar to Gregorian Calendar press:  1" << endl;
  cout << "For Gregorian Calendar to Ethiopian Calendar press:  2" << endl;
  cout << "Then press Enter button" << endl;
  cin >> option;

  if (option == 1) {
  	ETHtoGRE();
  }
  else if (option == 2) {
  	GREtoETH();
  } 
  else {
    cout << "\nInvalid choice.\n";
  }
  cout<<"------------------------"<<endl;
  cout<<"by Sofonias Dawit";
  return 0;
 
}