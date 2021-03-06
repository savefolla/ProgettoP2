#ifndef CONTROLLER_ADMIN_H
#define CONTROLLER_ADMIN_H
#include"database.h"

class ControllerAdmin{
public:
    DatabaseUtenti* datau;
    DatabaseProdotti* datap;

    ControllerAdmin();
    ~ControllerAdmin();
    void insertU(Utente*);
    void insertP(Prodotto*);
    void removeU(const string&);
    void removeP(const string&);
    void save() const;
};

#endif // CONTROLLER_ADMIN_H
