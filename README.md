POLISH VERSION
////////////////////////
////////////////////////
# Projekty-C-
Tomasz Kaczmarek
Dokumentacja “Wisielec”

Opis programu:
Gra wisielec. Zadaniem gracza jest odgadnąć ukryte słowo. Hasło jest rzeczownikiem składającym się z wyrazów nie posiadających polskich liter. Po włączeniu gry widoczne jest zagwiazdkowane pole prezentujące hasło, które trzeba odgadnąć. Pod hasłem widoczna jest szubienica. Niżej widoczne są pola z przyciskami, które odpowiadają kolejnym literom alfabetu angielskiego. Po wybraniu litery przez użytkownika (poprzez kliknięcie przycisku), jeżeli litera zawiera się w haśle kolor przycisku zamieni się na kolor zielony a przycisk przestanie być klikalny. Przy popełnieniu błędu przycisk zmieni kolor na czerwony i także przestanie być klikalny. Na samym dole znajduje się przycisk do opuszczenia gry. Gracz może popełnić 5 błędów, z kolei 6 błąd zakończy grę niepowodzeniem. Wraz z popełnianiem kolejnych błędów, widoczna w grze szubienica będzie powiększała się aż do momentu gdy zawiśnie na niej wisielec. Po zakończeniu gry wyświetla się okno z możliwością podjęcia wyboru czy gracz kontynuuje rozgrywkę, czy woli opuścić grę. 

Wymagania systemowe:
Dostęp do internetu
.Net Framework v4.7.2

Edycja:
Do poprawnej kompilacji kodu wymagany jest: 
kompilator obsługujący C++14
komponenty
MFC for latest v142 build tools(x86 & x64)
MFC for latest v142 build tools with Spectre Mitigations(x86 & x64)
biblioteki zewnętrzne
libcurl w wersji 7.74.0
JSON for Modern C++ w wersji 3.7.3
Aspekty Techniczne:
Program składa się z 2 plików typu Header, 2 plików typu Cpp oraz 7 plików typu Png. 
Plik Slowa.h wczytuje wszystkie potrzebne do działania programu biblioteki oraz zawiera w sobię klasę Slowa.
Klasa Slowa składa się z konstruktora, metod oraz zmiennych które są wykorzystywane w programie. 
Konstruktor ma za zadanie sprawdzenie czy hasło wylosowane przez metodę LosujSlowo nie zawiera polskich znaków. Gdy wylosowane słowo spełnia wymagania pętla przerywa się a wybrane słowo staje się szukanym wyrazem w grze. 
Metoda WriteCallBack jest wywoływana przez libcurl, gdy tylko otrzyma dane, które należy zapisać. Metoda ta złącza porcje danych i zwraca string.
Metoda LosujSlowo pobiera losowy wyraz używając API strony www.slowa.net .
	Metoda tworzeniegwiazd wypełnia pustego stringa gwiazdkami  (*) w zależności od ilości liter w wylosowanym słowie.
W pliku Slowa.cpp występują definicje powyższych metod.
W pliku Wisielec.h występuje klasa która odpowiada za interfejs graficzny i działanie programu.
	Konstruktor ma za zadanie wywołać metodę InitializeComponent,  która tworzy startowy interfejs graficzny programu	
	Metoda wybranyznak sprawdza czy litera z klikniętego przycisku zawiera się w haśle. W zależności od rezultatu edytuje on zmienne oraz interfejs graficzny. Zawiera się w niej także MessageBox, który pojawia się w momencie ukończenia przez gracza gry z zapytaniem czy chce kontynuować rozgrywkę. 
	Metoda button2_Click wywoływana jest po kliknięciu przycisku “Wyjscie“ i zamyka ona program.
W pliku Wisielec.cpp wywoływany jest konstruktor klasy Wisielec oraz wyświetlany jest interfejs graficzny programu.
Pliki Png używane są do wyświetlania kolejnych etapów szubienicy.

ENGLISH VERSION
////////////////////////
////////////////////////
Soon
