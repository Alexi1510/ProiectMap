# Problema celor 8 regine Ienciu-Bocse Alexandru anul 2 gr1.2
Acest cod, implementeaza o solutie recursiva pentru problema celor "8 Regine" pe o tabla de sah 8x8. Problema consta in a plasa 8 dame pe tabla, astfel incat niciuna dintre ele sa nu poata ataca altele.
In cod, variabila N este definita ca fiind 8, ceea ce reprezinta dimensiunea tablei de sah. Exista un vector numit "sol", care este folosit pentru a stoca pozitiile fiecarei dame. Functia "valid()" verifica daca o pozitie propusa pentru o dama este valida sau nu, comparand pozitiile tuturor damelor plasate anterior. Daca o pozitie propusa nu este valida, functia returneaza "false", iar daca este valida returneaza "true".
Functia "print_solution()" este apelata pentru a afisa o solutie valida, iar functia "place_queen()" este recursiv apelata pentru a incerca sa plaseze o dama pe fiecare linie si coloana a tablei, verificand daca pozitia propusa este valida.
In functia principala, programul incepe procesul de plasare a damei prin apelarea functiei "place_queen()" cu parametrul 0, care reprezinta pozitia primei dame. Aceasta functie este apelata recursiv pentru a incerca sa plaseze o dama pe fiecare linie si coloana a tablei de sah, verificand daca pozitia propusa este valida. Dupa ce toate posibilitatile de plasare sunt testate si solutiile valide sunt afisate, programul se va opri si va returna 0 ca semnal de finalizare cu succes.
