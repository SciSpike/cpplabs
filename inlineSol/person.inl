#ifndef INLINE
#define inline 
#endif

#include <stdio.h>
#include <string.h>
#include "person.h"

inline void set_string(char *dest, const char *src)
{
    if (dest) {
        delete [] dest;
        dest = NULL;
    }
    
    if (src) {
        dest = new char [strlen(src) + 1];
        strcpy(dest, src);
    }
}

Date::Date(unsigned short y, unsigned char m, unsigned char d)
{
    year = y;
    month = m;
    day = d;
}

inline char *Date::getDate()
{
    char *buf = new char[32];
	
    sprintf(buf, "%2d/%2d/%4d", month, day, year);
	
    return buf;  // caller deallocates memory
}

inline unsigned short Date::getYear()
{
    return year;
}

inline unsigned char Date::getMonth()
{
    return month;
}

inline unsigned char Date::getDay()
{
    return day;
}

inline void Date::setYear(unsigned short y)
{
    year = y;
}

inline void Date::setMonth(unsigned char m)
{
    month = m;
}

inline void Date::setDay(unsigned char d)
{
    day = d;
}

Address::Address(const char *_street, const char *_city,
				 const char *_state, const char *_zip)
{
    street = NULL;
    city = NULL;
    state = NULL;
    zip = NULL;
    
    set_string(street, _street);
    set_string(city, _city);
    set_string(state, _state);
    set_string(zip, _zip);
}

Address::~Address()
{
    delete [] street;
    delete [] city;
    delete [] state;
    delete [] zip;
}

inline char *Address::getStreet()
{
    return street;
}

inline char *Address::getCity()
{
    return city;
}

inline char *Address::getState()
{
    return state;
}

inline char *Address::getZip()
{
    return zip;
}

void Address::setStreet(const char *s)
{
    set_string(street, s);
}

inline void Address::setCity(const char *s)
{
    set_string(city, s);
}

inline void Address::setState(const char *s)
{
    set_string(state, s);
}

void Address::setZip(const char *s)
{
    set_string(zip, s);
}

Person::Person(const char *n, Address &a, Date &d) :
addr(a.getStreet(), a.getCity(), a.getState(), a.getZip()),
birthDate(d.getYear(), d.getMonth(), d.getDay())
{
    name = NULL;
    set_string(name, n);
}

Person::~Person() {
	delete [] name;
}

inline char* Person::getName()
{
    return name;
}

inline char* Person::getAddress()
{
    char *buf = new char[strlen(addr.getStreet()) + strlen(addr.getCity()) +
		strlen(addr.getState()) + strlen(addr.getZip()) + 8];
	
    sprintf(buf, "%s, %s, %s, %s",
		addr.getStreet(), addr.getCity(), addr.getState(), addr.getZip());
	
    return buf; // caller deallocates memory
}

void Person::changeAddress(Address &a)
{
    addr.setStreet(a.getStreet());
    addr.setCity(a.getCity());
    addr.setState(a.getState());
    addr.setZip(a.getZip());
}

inline char* Person::getBirthDate()
{
    return birthDate.getDate();
}

unsigned short Person::getBirthYear()
{
    return birthDate.getYear();
}

unsigned char Person::getBirthMonth()
{
    return birthDate.getMonth();
}

unsigned char Person::getBirthDay()
{
    return birthDate.getDay();
}
