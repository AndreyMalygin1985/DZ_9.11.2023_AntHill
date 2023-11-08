#pragma once
#include"Apartment.h"

class House
{
public:
	size_t kol_apart;	// количество квартир в доме
	size_t kol_pod;		// количество подъездов в доме

	Apartment* apartment;
	House(size_t& kol_apart, size_t& kol_pod, Apartment* apartment) :
		kol_apart{ 0 }, kol_pod{ 0 }, apartment{ apartment }
	{
		if (kol_apart >= 1 && kol_apart <= 111) {
			this->kol_apart = kol_apart;
		}
		if (kol_pod >= 1 && kol_pod <= 10) {
			this->kol_pod = kol_pod;
		}
	}

	//House() : kol_apart(0), kol_pod(0) {}
	House() : House(0, 0, Apartment()) {}

	House& setKolApart(size_t kol_apart) {
		this->kol_apart = kol_apart >= 1 && kol_apart <= 111 ? kol_apart : 0;
		return *this;
	}
	House& setKolPod(size_t kol_pod) {
		this->kol_pod = kol_pod >= 1 && kol_pod <= 10 ? kol_pod : 0;
		return *this;
	}


	void showHouse()
	{
		cout << "Квартир в доме: " << kol_apart << ", подъездов в доме " << kol_pod << endl;
		cout << endl;
	}

};

