#if defined _database_included
    #endinput
#endif
#define _database_included

#include <a_samp>
#include <a_mysql>

new MySQL:dbhandle;

// ฟังก์ชันเชื่อมต่อฐานข้อมูล
stock connectdatabase() {
    dbhandle = mysql_connect("localhost", "username", "password", "database");

    if (mysql_errno(dbdandle) != 0)
    {
        print("[MySQL] Failed to connect to database.");
        return 0;
    }

    print("[MySQL] Successfully connected to the database.");
    return 1;
}

// ฟังก์ชันปิดการเชื่อมต่อ
stock closebatabase() {
    if (dbhandle != MYSQL_INVALID_HANDLE) {
        mysql_close(dbhandle);
        print("[MySQL] Connection closed.");
    }
    return 1;
}
