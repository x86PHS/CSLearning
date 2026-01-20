PROGRAM ex0000000018;
USES CRT;
VAR celsius,fahreheint : real;
BEGIN
    readln(celsius);
    fahreheint := 180*(celsius+32)/100;
    writeln(fahreheint:1:1,' F');
END.