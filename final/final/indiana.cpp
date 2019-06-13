	friend Bullwhip::operator=(Weapon& src) {
		baseDamage = src.baseDamage;
	}
	Bullwhip::public Player(Player& src) :skill(src.skill), weapons(src.weapons), attack(src.attack) {};

