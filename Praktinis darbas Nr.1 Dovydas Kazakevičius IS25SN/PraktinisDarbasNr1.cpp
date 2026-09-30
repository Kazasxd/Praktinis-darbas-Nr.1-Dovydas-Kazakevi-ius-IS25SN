#include <iostream>
#include <string>

using namespace std;

class Automobilis
{
	private: // private - paslėpta nuo išorės
		string Marke;
		int Metai;
		char Kuro_tipas;
		double Turis;
		bool Vaziuoja;
		float Greitis;
	protected: // protected – pasiekiama klasės viduje ir paveldinčiose klasėse
		int Rida = 0;

	public: // public – pasiekiama iš bet kur
		Automobilis()
		{
			Marke = "Nezinoma";
			Metai = 0;
			Kuro_tipas = 'N';
			Turis = 0.0;
			Vaziuoja = "False";
			Greitis = 0.0;
		}

		// Konstruktorius su parametrais
		Automobilis(string m, int met, char tipas, double t, bool vaz, float v)
		{
			Marke = m;
			Metai = met;
			Kuro_tipas = tipas;
			Turis = t;
			Vaziuoja = vaz;
			Greitis = v;
		}
		// Kopijavimo konstruktorius
		Automobilis(const Automobilis& kitas)
		{
			Marke = kitas.Marke;
			Metai = kitas.Metai;
			Kuro_tipas = kitas.Kuro_tipas;
			Turis = kitas.Turis;
			Vaziuoja = kitas.Vaziuoja;
			Greitis = kitas.Greitis;
		}

		// Funkcija, skirta objekto duomenų išvedimui į konsolę
		void Rodyti_informacija()
		{
			cout << "Automobilio marke: " << Marke << endl;
			cout << "Pagaminimo metai: " << Metai << endl;
			cout << "kuro tipas: " << Kuro_tipas << endl;
			cout << "Turis: " << Turis << " L" << endl;
			cout << "Ar masina vaziuoja: " << (Vaziuoja ? "Taip" : "Ne") << endl;
			cout << "Rida: " << Rida << " km" << endl;
			cout << "Greitis: " << Greitis << " km/h" << endl;
		}

		// Ji nustato, kad automobilis važiuoja.
		void Uzvesti()
		{
			Vaziuoja = true;
		}

		// Funkcija, modifikuojanti ridą
		void Prideti_rida(int kilometrai)
		{
			Rida += kilometrai;
		}

		// Funkcija, modifikuojanti greitį
		void Keiciasi_greitis(float naujas_greitis)
		{
			Greitis = naujas_greitis;
		}

		// Funkcija, modifikuojanti pagaminimo metus
		void Keiciasi_metai(int kiti_metai)
		{
			Metai = kiti_metai;
		}
};

int main()
{
	// Sukuriamas objektas naudojant default konstruktorių
	Automobilis automobilis1;

	// Sukuriamas objektas naudojant konstruktorių su parametrais
	Automobilis automobilis2("Audi", 2005, 'B', 1.6, true, 67);

	// Sukuriamas objektas naudojant kopijavimo konstruktorių
	Automobilis automobilis3(automobilis2);

	// Keičiami objektų duomenys.
	automobilis2.Keiciasi_metai(2020);
	automobilis3.Keiciasi_greitis(150);

	// Išvedama kiekvieno objekto informacija į konsolę.
	automobilis1.Rodyti_informacija();
	automobilis2.Rodyti_informacija();
	automobilis3.Rodyti_informacija();
}