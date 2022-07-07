POLISH VERSION


# Projekty-C-
Tomasz Kaczmarek <br/>
Dokumentacja “Wisielec”<br/>

AKTUALNIE GRA W TRAKCIE AKTUALIZACJI (strona internetowa z której gra pobierała słowa przestała istnieć)<br/>

Opis programu:<br/>
Gra wisielec. Zadaniem gracza jest odgadnąć ukryte słowo. Hasło jest rzeczownikiem składającym się z wyrazów nie posiadających polskich liter. Po włączeniu gry widoczne jest zagwiazdkowane pole prezentujące hasło, które trzeba odgadnąć. Pod hasłem widoczna jest szubienica. Niżej widoczne są pola z przyciskami, które odpowiadają kolejnym literom alfabetu angielskiego. Po wybraniu litery przez użytkownika (poprzez kliknięcie przycisku), jeżeli litera zawiera się w haśle kolor przycisku zamieni się na kolor zielony a przycisk przestanie być klikalny. Przy popełnieniu błędu przycisk zmieni kolor na czerwony i także przestanie być klikalny. Na samym dole znajduje się przycisk do opuszczenia gry. Gracz może popełnić 5 błędów, z kolei 6 błąd zakończy grę niepowodzeniem. Wraz z popełnianiem kolejnych błędów, widoczna w grze szubienica będzie powiększała się aż do momentu gdy zawiśnie na niej wisielec. Po zakończeniu gry wyświetla się okno z możliwością podjęcia wyboru czy gracz kontynuuje rozgrywkę, czy woli opuścić grę. <br/>

Wymagania systemowe:<br/>
Dostęp do internetu<br/>
.Net Framework v4.7.2<br/>

Edycja:<br/>
Do poprawnej kompilacji kodu wymagany jest: <br/>
kompilator obsługujący C++14<br/>
komponenty<br/>
MFC for latest v142 build tools(x86 & x64)<br/>
MFC for latest v142 build tools with Spectre Mitigations(x86 & x64)<br/>
biblioteki zewnętrzne<br/>
libcurl w wersji 7.74.0<br/>
JSON for Modern C++ w wersji 3.7.3<br/>
Aspekty Techniczne:<br/>
Program składa się z 2 plików typu Header, 2 plików typu Cpp oraz 7 plików typu Png. <br/>
Plik Slowa.h wczytuje wszystkie potrzebne do działania programu biblioteki oraz zawiera w sobię klasę Slowa.<br/>
Klasa Slowa składa się z konstruktora, metod oraz zmiennych które są wykorzystywane w programie. <br/>
Konstruktor ma za zadanie sprawdzenie czy hasło wylosowane przez metodę LosujSlowo nie zawiera polskich znaków. Gdy wylosowane słowo spełnia wymagania pętla przerywa się a wybrane słowo staje się szukanym wyrazem w grze. <br/>
Metoda WriteCallBack jest wywoływana przez libcurl, gdy tylko otrzyma dane, które należy zapisać. Metoda ta złącza porcje danych i zwraca string.<br/>
Metoda LosujSlowo pobiera losowy wyraz używając API strony www.slowa.net <br/>
	Metoda tworzeniegwiazd wypełnia pustego stringa gwiazdkami  (*) w zależności od ilości liter w wylosowanym słowie.<br/>
W pliku Slowa.cpp występują definicje powyższych metod.<br/>
W pliku Wisielec.h występuje klasa która odpowiada za interfejs graficzny i działanie programu.<br/>
	Konstruktor ma za zadanie wywołać metodę InitializeComponent,  która tworzy startowy interfejs graficzny programu<br/>	
	Metoda wybranyznak sprawdza czy litera z klikniętego przycisku zawiera się w haśle. W zależności od rezultatu edytuje on zmienne oraz interfejs graficzny.<br/> Zawiera się w niej także MessageBox, który pojawia się w momencie ukończenia przez gracza gry z zapytaniem czy chce kontynuować rozgrywkę. <br/>
	Metoda button2_Click wywoływana jest po kliknięciu przycisku “Wyjscie“ i zamyka ona program.<br/>
W pliku Wisielec.cpp wywoływany jest konstruktor klasy Wisielec oraz wyświetlany jest interfejs graficzny programu.<br/>
Pliki Png używane są do wyświetlania kolejnych etapów szubienicy.<br/>

ENGLISH VERSION<br/>


Currently, the game cannot be played because the page from which the words were downloaded no longer exists.
More soon<br/>
