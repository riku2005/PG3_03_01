#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {

	std::list<const char*>Eki{ "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
							   "Uguisudani","Nippori","Tabata","Komagome","Sugamo",
							   "Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
							   "Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro",
							   "Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho",
							   "Shinbashi","Yurakucho" };

	printf("1970年\n");

	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {

		cout << *itr << endl;

	}


	printf("\n\n2019年:西日暮里追加\n");

	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {



		if (strcmp(*itr, "Tabata") == 0) {
			itr = Eki.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {
		cout << *itr << endl;
	}

	printf("\n\n2020年:高輪ゲートウェイ追加\n");

		for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {

			if (strcmp(*itr, "Tamachi") == 0) {
				itr = Eki.insert(itr, "Takanawa Gataway");
				++itr;
			}
		}

		for (list<const char*>::iterator itr = Eki.begin(); itr != Eki.end(); ++itr) {
		cout << *itr << endl;
	}


	return 0;
}