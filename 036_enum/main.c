#include <stdio.h>

enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

int main()
{
	enum company someComp = GOOGLE;
	
	printf("companies:\n");
	printf("someComp: %i\n", someComp);
	printf("GOOGLE: %i\n", GOOGLE);
	printf("FACEBOOK: %i\n", FACEBOOK);
	printf("XEROX: %i\n", XEROX);
	printf("YAHOO: %i\n", YAHOO);
	printf("EBAY: %i\n", EBAY);
	printf("MICROSOFT: %i\n", MICROSOFT);
	
	return 0;
}
