/* TODO: includes necessary header files */

void DisplayOptions(void) {

	/* TODO: display menu options here */
}

int main(int argc, char * argv[]) {
	/* TODO: declare variables needed to keep track of the CD's */

	int choice=0;
	while (choice != 4) {
		DisplayOptions();
		cin >> choice;
		switch (choice) {
		case 1: 
			cdlist[count++] = ReadNewCD();
			break;

		/* TODO: Add additional menu options here (valid options
		         include DisplayList, FindInList, and Exit).
				 Do not place all the code here in the menu loop.
				 Just add case statements and function calls. */
		}
	}
}