#ifndef TICKET_H
#define TICKET_H

#include <iostream>

#include "bus.h"

// CLASS TICKET
class Ticket
{
private:
    char Name[20], pnrNo[10], Date[20];
	Bus bus;

public:
    void generateTicket(char *, Bus);
    void displayTicket();
    void bookTicket();
    void cancelTicket();
    void editTicket();
    void showTicketsByPNR();
    void showTicketsByName();
    void showTicketsByBus();
    void showTicketsBySource();
    void showTicketsByDestination();
    void showAllTickets();

    // GETTERS
    char *getName()
    {
        return Name;
    }

    char *getPnrNo()
    {
        return pnrNo;
    }

    char *getDate()
    {
        return Date;
    }

    // SETTERS
    void setName(char *n)
    {
        if (n && n[0])
            strcpy(Name, n);
    }
};
#endif // !TICKET_H
