#ifndef PANNELLO_ADMIN_PROD_H
#define PANNELLO_ADMIN_PROD_H
#include<QWidget>
#include<QPushButton>
#include<QLineEdit>
#include<QFormLayout>
#include<QLabel>
#include"pannello_admin.h"

class pannelloAdminProd: public QWidget{
    Q_OBJECT
private:
    QLineEdit* lineCerca;
    QPushButton* buttonCerca;
    QPushButton* buttonElimina;
    QLabel* labelNome;
    QLabel* labelUso;
    QLabel* labelDurata;
    QLabel* labelPrezzo;
    QLineEdit* lineNome;
    QLineEdit* lineUso;
    QLineEdit* lineDurata;
    QLineEdit* linePrezzo;
    QPushButton* buttonSalva;
    QPushButton* buttonIndietro;
    QLabel* labelSaved;
public slots:
    void slotCerca();
    void slotSalva();
    void slotElimina();
    void slotIndietro();
public:
    pannelloAdminProd();
};

#endif // PANNELLO_ADMIN_PROD_H