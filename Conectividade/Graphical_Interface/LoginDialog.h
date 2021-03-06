/*------------------------------------------------------------------------------------------------

# Copyright (c) 2016 Núcleo de Tecnologias Estratégicas em Saúde (NUTES)/Signove Tecnologia S/A .
# Licensed under the MIT license;
# You may obtain a copy of the License at:
# http://opensource.org/licenses/mit-license.php or see LICENSE file

------------------------------------------------------------------------------------------------*/

#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#include "interface.h"
#include "SignUp.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    Ui::LoginDialog *ui;
    QString language;

private slots:
    void on_pushButton_2_clicked();
    void otherUser(int index);
    void SignUpClosed();
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

signals:
    void connectedUser(QPair<int,QString>);

private:
    QSqlDatabase myDB;
    Interface *i;
    SignUp *s;
    QString TextStream(QString username, QString name, QString whatToDo);


};

#endif // LOGINDIALOG_H
