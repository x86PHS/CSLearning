PROGRAM ex0000000024;
USES CRT;
VAR reais,dol,marcoalem,libraester : real;
BEGIN
    readln(reais);
    dol := reais*1.80;
    marcoalem := reais*2.00;
    libraester := reais*3.57;
    writeln('Dolar:',dol:2:2);
    writeln('Marco Alemao:',marcoalem:2:2);
    writeln('Libra Esterlina:',libraester:2:2);
END.