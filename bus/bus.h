#ifndef BUS_H
#define BUS_H

#include <iostream>

using namespace std;


class Bus
{
		private:
		char busNo[10];
		int maxSeats=32;
		int bookedSeats=0;
		char from[20];
		char to[20];
		char date[20];
		char sourceTime[20];
		char destinationTime[20];

		int km=0;
		double busFare=0;		
		int driverId=0;		
	
	public:
	
	Bus(){
		
		
		strcpy(busNo, "");
        maxSeats = 32;
        bookedSeats = 0;
        busFare = 0.0;
        strcpy(from, "");
        strcpy(to, "");
        strcpy(sourceTime, "");
        strcpy(destinationTime, "");
		
		
	}
	void addBus();
    void showAllBus();
    void showBusDetails();
    void viewBusDetails();
    void deleteBus();
    void editBus();	
	
	  // GETTERS
    char *getbusNo()
    {
        return busNo;
    }

    char *getfrom()
    {

        return from;
    }

    char *getto()
    {
        return to;
    }
  char *getdate()
    {
        return date;
    } 
	 int getkm()
    {
        return km;
    }
    char *getsourceTime()
    {
        return sourceTime;
    }

    char *getdestinationTime()
    {
        return destinationTime;
    }

    int getbookedSeats()
    {
        return bookedSeats;
    }

    int getmaxSeats()
    {
        return maxSeats;
    }

    double getbusFare()
    {
        return busFare;
    }

    // SETTERS
    void setbookedSeats()
    {
        bookedSeats++;
    }

    void setcancelTicket()
    {
        bookedSeats--;
    }

    void setfrom(char *s)
    {
        if (s && s[0])
            strcpy(from, s);
    }

    void setto(char *d)
    {
        if (d && d[0])
            strcpy(to, d);
    }

    void setsourceTime(char *s)
    {
        if (s && s[0])
            strcpy(sourceTime, s);
    }

    void setdestinationTime(char *d)
    {
        if (d && d[0])
            strcpy(destinationTime, d);
    }

    void setbusFare(double f)
    {
        if (f)
            busFare = f;
    }
};

#endif