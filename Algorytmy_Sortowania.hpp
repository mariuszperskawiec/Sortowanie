/*
 * Algorytmy_Sortowania.hpp
 *
 *  Created on: 10 kwi 2018
 *      Author: Mariusz
 */

#ifndef ALGORYTMY_SORTOWANIA_HPP_
#define ALGORYTMY_SORTOWANIA_HPP_

template<typename T>
void quicksort(T *tab, int lewy, int prawy);

template<typename T>
void sortowanie_przez_scalanie(T *tab, int lewy, int prawy);

template<typename T>
void scalanie(T *tab, int lewy, int srodek, int prawy);

template<typename T>
void IntroSort (T *tab, int p, int M);

template<typename T>
int Partition(T *tab, int l, int p);

template<typename T>
void sortowanie_introspektywne (T *tab, int p);

template<typename T>
void sortowanie_przez_kopcowanie(T *tab, int p);

template<typename T>
void rotacje_kopca(T *tab, int l, int p);

template<typename T>
void sortowanie_przez_wstawianie (T *tab, int p);

template<typename T>
bool test_sortowania (T *tab, int rozmiar);

/* sposób pozwalajacy na korzystanie z templates gdy deklaracje funkcji
*  znajduje sie w pliku .hpp natomiast ciala funkcji w innym pliku
*/
#include "Algorytmy_Sortowania.xd"

#endif /* ALGORYTMY_SORTOWANIA_HPP_ */
