#include "notification_samar.h"

Notification_SAMAR::Notification_SAMAR()
{

}


void Notification_SAMAR::Notification_system()
{
    QSystemTrayIcon * notifyIcon = new QSystemTrayIcon();
    notifyIcon->show();
    notifyIcon->showMessage(" Motion detected","",QSystemTrayIcon::Information,15000);
}
void Notification_SAMAR::Notification_sys()
{
    QSystemTrayIcon * notifyIcon = new QSystemTrayIcon();
    notifyIcon->show();
    notifyIcon->showMessage("Motion Ended  ","",QSystemTrayIcon::Information,15000);
}