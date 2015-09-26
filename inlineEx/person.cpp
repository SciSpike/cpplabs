#include "person.h"
#include <cstring>
#include <cstdio>

using namespace std;

void set_string(char *dest, const char *src)
{
    if (dest) {
        delete [] dest;
        dest = 0;
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

char *Date::getDate()
{
    char *buf = new char[32];
	
    sprintf(buf, "%2d/%2d/%4d", month, day, year);
	
    return buf;  // caller deallocates memory
}

unsigned short Date::getYear()
{
    return year;
}

unsigned char Date::getMonth()
{
    return month;
}

unsigned char Date::getDay()
{
    return day;
}

void Date::setYear(unsigned short y)
{
    year = y;
}

void Date::setMonth(unsigned char m)
{
    month = m;
}

void Date::setDay(unsigned char d)
{
    day = d;
}

Address::Address(const char *_street, const char *_city,
				 const char *_state, const char *_zip)
{
    street = 0;
    city = 0;
    state = 0;
    zip = 0;
    
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

char *Address::getStreet()
{
    return street;
}

char *Address::getCity()
{
    return city;
}

char *Address::getState()
{
    return state;
}

char *Address::getZip()
{
    return zip;
}

void Address::setStreet(const char *s)
{
    set_string(street, s);
}

void Address::setCity(const char *s)
{
    set_string(city, s);
}

void Address::setState(const char *s)
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
    name = 0;
    set_string(name, n);
}

Person::~Person() {
	delete [] name;
}

char* Person::getName()
{
    return name;
}

char* Person::getAddress()
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

char* Person::getBirthDate()
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
