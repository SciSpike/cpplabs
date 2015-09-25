#ifndef _PERSON_H
#define _PERSON_H

class Date {
public:
     Date(unsigned short y, unsigned char m, unsigned char d);
     char *getDate();
     unsigned short getYear();
     unsigned char getMonth();
     unsigned char getDay();
     void setYear(unsigned short y);
     void setMonth(unsigned char m);
     void setDay(unsigned char d);

private:
    unsigned short      year;
    unsigned char       month;
    unsigned char       day;
};

class Address {
public:
     Address(const char *_street, const char *_city, const char *_state,
             const char *_zip);
     ~Address();
		
     char *getStreet();
     char *getCity();
     char *getState();
     char *getZip();
     void setStreet(const char *s);
     void setCity(const char *s);
     void setState(const char *s);
     void setZip(const char *s);

private:
    char *street;
    char *city;
    char *state;
    char *zip;
};

class Person {
public:
     Person(const char *n, Address &a, Date &d);
	 ~Person();
     char* getName();
     char* getAddress();
     void  changeAddress(Address &a);
     char* getBirthDate();
     unsigned short getBirthYear();
     unsigned char getBirthMonth();
     unsigned char getBirthDay();

private:
    char*       name;
    Address     addr;
    Date        birthDate;
};

#endif
