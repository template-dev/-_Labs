#ifndef LAB1_ECONOMYOFTHECITY_HPP
#define LAB1_ECONOMYOFTHECITY_HPP

#define NUMBER_OF_RESIDENTS 100
#define QUANTITY_OF_WHEAT 2800
#define CITY_SIZE 1000

class EconomyOfTheCity {
public:
	int GetRound() { return this->round; }

private:
	int round = 0;
	int population;
};

#endif //LAB1_ECONOMYOFTHECITY_HPP
