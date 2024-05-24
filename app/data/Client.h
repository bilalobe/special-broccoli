#ifndef CLIENTS_H
#define CLIENTS_H

#include <string>
#include <vector>
#include <map>

#include "Ticket.h"

class Client
{
public:
    Client(const std::string &nom, int age, const std::string &adresse, const std::string &telephone);

    // Getters
    std::string getNom() const;
    int getAge() const;
    std::string getAdresse() const;
    std::string getTelephone() const;

    // Setters
    int setNom(const std::string &nom);
    int setAge(int age);
    int setAdresse(const std::string &adresse);
    int setTelephone(const std::string &telephone);

    // Add a ticket to the client's list
    void addTicket(Ticket *ticket);

    // Display client information
    void afficher() const;

private:
    std::string nom;
    int age;
    std::string adresse;
    std::string telephone;
    std::vector<Ticket *> tickets;
};

#endif