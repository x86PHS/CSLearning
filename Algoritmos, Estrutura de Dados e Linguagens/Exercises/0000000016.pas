PROGRAM ex0000000016;
USES CRT,MATH;
VAR cateto1,cateto2,hipotenusa : real;
BEGIN
    readln(cateto1);readln(cateto2);
    hipotenusa := sqrt(power(cateto1,2) + power(cateto2,2));
    writeln(hipotenusa:2:2);
END.