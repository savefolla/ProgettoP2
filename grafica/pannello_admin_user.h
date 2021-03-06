#ifndef PANNELLO_ADMIN_USER_H
#define PANNELLO_ADMIN_USER_H
#include<QWidget>
#include<QTableWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QFormLayout>
#include<QLabel>
#include<QHeaderView>
#include<QComboBox>
#include"pannello_admin.h"
#include"logica/controller_admin.h"

class pannelloAdminUser: public QWidget{
    Q_OBJECT
private:
    QLineEdit* lineCerca;
    QPushButton* buttonCerca;
    QPushButton* buttonElimina;
    QLabel* labelLogin;
    QLabel* labelPassword;
    QLabel* labelNome;
    QLabel* labelCognome;
    QLabel* labelMail;
    QLabel* labelTelefono;
    QLabel* labelCF;
    QLineEdit* lineLogin;
    QLineEdit* linePassword;
    QLineEdit* lineNome;
    QLineEdit* lineCognome;
    QLineEdit* lineMail;
    QLineEdit* lineTelefono;
    QLineEdit* lineCF;
    QPushButton* buttonSalva;
    QPushButton* buttonIndietro;
    QLabel* labelSaved;
    QComboBox* comboTipo;
    QLabel* labelTipo;
    QTableWidget* tableOutput;
    QLabel* labelCurrent1;
    QLabel* labelCurrent2;
    QPushButton* buttonX;
    ControllerAdmin* controller;
    Utente* current;
public slots:
    void slotCerca();
    void slotElemento(QTableWidgetItem* q);
    void slotSalva();
    void slotElimina();
    void slotIndietro();
    void slotDeseleziona();
public:
    pannelloAdminUser();
    ~pannelloAdminUser();
    void clean();
};

#endif // PANNELLO_ADMIN_USER_H
