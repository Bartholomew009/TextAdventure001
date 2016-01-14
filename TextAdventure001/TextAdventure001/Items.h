#include<string>
// #noshame #takenfromPSO
//which class can use the item
enum Class {
	HUNTER, RANGER, TECH
};
// prototype for weapons. Moved to own class
/*enum Weapons {
	SABER, SWORD, DAGGERS, 
	PISTOL, RIFLE, CANNON,
	WAND, STAFF, CANE
};*/
enum Type {
	WEAPON, ARMOR, SHIELD, HEALTH, POWER, MONEY
};
class Items {
public:
	Items(Type);
private:
	std::string name;
	std::string descr; //what it is
	Type itemType;
	Class itemClass;
	int value; // inherent value in money
};