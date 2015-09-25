#include "timer.h"
#include "person.h"

int main()
{
	Timer t("Time for 100000 get/set operations on Person: ");
    for (int i = 0; i < 100000; i++) {
        Address addr("Some Street", "Austin", "TX", "78704");
        Date    d(1960, 4, 1);
        Person  p("Peter", addr, d);
		
        p.getBirthYear();
        p.getBirthMonth();
        p.getBirthDay();
        
        addr.setStreet("New Street");
        addr.setZip("78705");
        p.changeAddress(addr);
		
        addr.setStreet("Old Street");
        addr.setZip("78704");
        p.changeAddress(addr);
    }
	
    return 0;
}
