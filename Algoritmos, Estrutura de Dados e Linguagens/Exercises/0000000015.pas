PROGRAM ex0000000015;
USES CRT;
VAR salario,contaum,contadois,contas,restante : real;
BEGIN
    readln(salario);readln(contaum);readln(contadois);
    contas := (contaum * 1.02) + (contaum * 1.02);
    restante := salario - contas;
    writeln('R$ ',restante:3:2);
END.