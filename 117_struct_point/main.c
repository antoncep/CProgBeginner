#include <stdio.h>
#include <stdlib.h>

struct Item {
	char *name;
	int quantity;
	float price;
	float amount;
};

void printItem(const struct Item *item);
void readItem(struct Item *item);

int main(int argc, char *argv[])
{
	struct Item someItem, *myItemPtr;
	
	myItemPtr = &someItem;
	
	myItemPtr->name = (char*)malloc(32 * sizeof(char));
	if (!myItemPtr->name) {
		printf("could not allocate memory!\n");
		return 11;
	}
	
	readItem(myItemPtr);
	printItem(myItemPtr);
	
	free(myItemPtr->name);
	myItemPtr->name = NULL;
	
	return 0;
}

void printItem(const struct Item *item)
{
	if (!item) {
		printf("no item!\n");
		return;
	}
	
	printf("Item:\n");
	printf("name: %s, quantity: %i, price: R%5.2f, amount: R%7.2f\n", item->name, item->quantity, item->price, item->amount);
	
	return;
}

void readItem(struct Item *item)
{
	if (!item) {
		printf("no item!\n");
		return;
	}
	
	printf("please enter item detail:\n");
	
	printf("name: ");
	scanf("%s", item->name);
	
	printf("quantity: ");
	scanf("%i", &item->quantity);
	
	printf("price : R");
	scanf("%f", &item->price);
	
	item->amount = item->price * item->quantity;
	
	return;
}
