#include"PZB.h"
int PZB::Bodovi = 0;
int main()
{
	PZB Broj;
	int broj;
	int i = 0;
	std::cout << "Unesite broj: ", std::cin >> broj;
	do {
		if (Broj.Ispis() == broj)
			std::cout << "Pogodjeno,osvojili ste: " << Broj.BOdovi(100 / (i + 1)) << " bodova!" << std::endl;
		if (Broj.Ispis() < broj)
			std::cout << "Broj " << broj << " je veci od unesenog broja!"<<std::endl;
		else if (Broj.Ispis() > broj)
			std::cout << "Broj " << broj << " je manji od unesenog broja!" << std::endl;
		std::cout << "Unesite broj: ", std::cin >> broj;
		i++;
	} while (Broj.Ispis() != broj && i<4);
	if (Broj.Ispis() == broj)
		std::cout << "Pogodjeno,osvojili ste: " << Broj.BOdovi(100 / (i + 1)) << " bodova!" << std::endl;
	system("pause");
}