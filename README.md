Porównanie algorytmów sortowania — Bubble Sort vs Quick Sort

Projekt w języku C++ przedstawiający porównanie dwóch popularnych algorytmów sortowania:

Bubble Sort
Quick Sort

Program generuje losowe liczby, sortuje je za pomocą obu algorytmów oraz mierzy czas wykonania każdego z nich.

📌 Opis projektu

Celem projektu jest praktyczne porównanie wydajności algorytmów Bubble Sort i Quick Sort.

Program:

Generuje 50 000 losowych liczb z zakresu od 1 do 50 000.
Tworzy kopię wygenerowanych danych dla każdego pomiaru.
Sortuje liczby za pomocą Bubble Sort.
Sortuje liczby za pomocą Quick Sort.
Mierzy czas wykonania obu algorytmów.
Wyświetla wyniki oraz informuje, który algorytm był szybszy.
🛠️ Technologie
C++
STL
vector
random
chrono
algorithm
⚙️ Zastosowane algorytmy
Bubble Sort

Bubble Sort jest prostym algorytmem sortowania, który wielokrotnie porównuje sąsiednie elementy i zamienia je miejscami, jeśli znajdują się w niewłaściwej kolejności.

Złożoność czasowa:

Przypadek	Złożoność
Najlepszy	O(n²)
Średni	O(n²)
Najgorszy	O(n²)

Bubble Sort jest łatwy do zrozumienia i implementacji, ale przy dużych zbiorach danych jest stosunkowo wolny.

Quick Sort

Quick Sort wykorzystuje strategię dziel i zwyciężaj.

Algorytm wybiera element zwany pivotem, a następnie dzieli tablicę na elementy mniejsze i większe od pivota. Następnie sortuje powstałe części rekurencyjnie.

Złożoność czasowa:

Przypadek	Złożoność
Najlepszy	O(n log n)
Średni	O(n log n)
Najgorszy	O(n²)

W praktyce Quick Sort jest zazwyczaj znacznie szybszy od Bubble Sort dla dużych zbiorów danych.

📊 Przykładowy wynik

Po uruchomieniu programu otrzymamy wynik podobny do:

Porownanie dla 50 000 liczb
Bubble Sort:  XXXX ms
Quick Sort:  XX ms

Quick Sort byl szybszy.


Dokładne czasy mogą się różnić w zależności od:

procesora,
obciążenia komputera,
systemu operacyjnego,
kompilatora,
optymalizacji kompilacji,
wylosowanych danych.
🚀 Uruchomienie projektu
1. Sklonowanie repozytorium
git clone https://github.com/TWOJ_LOGIN/TWOJE_REPO.git
cd TWOJE_REPO

2. Kompilacja

Jeżeli korzystasz z g++:

g++ main.cpp -o sorting

3. Uruchomienie

Linux / macOS:

./sorting


Windows:

sorting.exe

📁 Struktura projektu
.
├── main.cpp
└── README.md

🎯 Cel edukacyjny

Projekt został stworzony w celu:

poznania podstawowych algorytmów sortowania,
zrozumienia działania Bubble Sort i Quick Sort,
poznania rekurencji,
wykorzystania std::vector,
generowania losowych danych,
mierzenia czasu wykonywania programu,
praktycznego porównania złożoności algorytmów.
📈 Wnioski

Przeprowadzone porównanie pokazuje różnicę pomiędzy prostym algorytmem Bubble Sort a bardziej wydajnym Quick Sort.

Dla zbioru 50 000 elementów Quick Sort powinien być zdecydowanie szybszy od Bubble Sort. Wynika to przede wszystkim z różnicy w średniej złożoności czasowej:

Bubble Sort → O(n²)
Quick Sort  → O(n log n)


Projekt pokazuje, że wybór odpowiedniego algorytmu ma bardzo duże znaczenie dla wydajności programu, szczególnie w przypadku dużych zbiorów danych.

👨‍💻 Autor

[Twoje imię i nazwisko]

GitHub: [Twój profil GitHub]

📄 Licencja

Projekt został stworzony w celach edukacyjnych.
