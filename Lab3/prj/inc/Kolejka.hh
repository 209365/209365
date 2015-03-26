#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include <iostream>
#include "Lista.hh"
/*!
 *\file
 *\brief Definicja klasy Kolejka
 *
 * Plik zawiera definicje klasy Kolejka, ktora bedzie
 * struktura naszych danych.
 * Klasa ta posiada szablon, dzieki czemu mozemy pracowac na 
 * roznych typach danych
 */


/*!
 * \brief Klasa Kolejka
 *
 * Klasa ta modeluje nam Kolejke
 * Składa się z pól klasy Lista oraz metod PUSH, POP, SIZE, SHOW
 * Klasa w calosci wykorzystuje implementacje listy
 */
template<typename TYP>
class Kolejka: private Lista<TYP>
{
    public:
/*
 * \brief Metoda PUSH()
 *
 *  Metoda ta służy do dodawania kolejnego elementu kolejki, element dodajemy na
 * koniec kolejki
 */
    void PUSH(TYP liczba){Lista<TYP>::PUSH(liczba);}
/*
 * \brief Metoda POP()
 *
 *  Metoda ta służy do usuwania pierwszego elementu kolejki zgodnie z FIFO
 * \return Funkcja zwraca 0 gdy metoda zostala wlasciwie uzyta, wartosc rozna od 0 w przypadku bledu
 */
    int POP(){return Lista<TYP>::POP(1);}
/*
 * \brief Metoda SHOW()
 *
 *  Metoda ta służy do wyswietlenia wszystkich elementow kolejki
 *  Pierwszy element kolejki wyswietlany jest u gory
 *
 */
    void SHOW(){Lista<TYP>::SHOW();}

/*
 * \brief Metoda SIZE()
 *
 *  Metoda ta służy do podania nam liczby elementow w kolejce
 *
 * \return Funkcja zwraca ilosc elementow kolejki
 */
    unsigned int SIZE() {return Lista<TYP>::SIZE();}
	
};

#endif