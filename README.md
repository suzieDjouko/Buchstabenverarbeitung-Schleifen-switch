# Buchstabenverarbeitung, Schleifen, switch

Lesen Sie die Aufgabe zunächst ganz durch. Beginnen Sie dann mit der Lösung.
a) Schreiben Sie ein Programm, welches Buchstaben vom Eingabestrom
stdin liest und auf den Ausgabestrom stdout wieder ausgibt, solange
bis der Benutzer die Eingabe mit STRG-D beendet. Das Programm soll
Leerzeilen im eingegebenen Text entfernen.
b) Ergänzen Sie Ihr Programm um die Funktionalität, dass sämtliche
Vokale im Text von Kleinschreibung auf Großschreibung umgesetzt
werden ( 'a' ==> 'A', 'e' ==> 'E' usw.).
c) Ergänzen Sie Ihre Schleife um die Funktionalität, dass bei
Ziffernbuchstaben die Quersumme der Ziffern errechnet wird. Durch
Subtraktion des Null-Ziffernbuchstabens '0' können Sie den Zifferwert (
(0 bis 9) errechnen und diesen auf die bisherige Quersumme addieren.
Vermeiden Sie die Verwendung der ASCII-Code-Nummern. Überprüfen
Sie den korrekten Lauf mit den Zeichenfolgen:
12 Becher Popcorn kosten 24,99 Euro
Die Oma hat 4 Kinder und 6 Enkel, wohnt in 08523 Plauen und ist 1,65 m gross
● Verschaffen Sie sich zunächst das Verständnis über die
Aufgabenstellung (z.B. wie erkennen Sie eine Leerzeile? wie die
kleingeschriebenen Vokale? wie setzen Sie diese um auf
Großbuchstaben? Wie finden Sie Ziffern? usw.)
● Planen Sie Ihr Vorgehen (z.B. Papierskizze erstellen).
● Verwenden Sie eine do-while-Schleife.
● Verwenden Sie die Bibliotheksfunktionen getchar() und putchar().
● Verwenden Sie für die Teilaufgabe b) eine switch-case-Konstruktion;
evtl. ist diese auch für die Teilaufgabe c) geeignet.
Es dürfen keine globalen Variablen verwendet werden.


Die Codeformatierungsregeln müssen eingehalten werden.
Kommentieren Sie den Quellcode hinreichend und tragen Sie Ihren Namen in
den Kopfkommentar ein.
Das Programm muss fehlerfrei und ohne Warnungen mit der Compileroption
-Wall übersetzen.
Laden Sie nach jeder Teilaufgabe Zwischenversionen hoch.
