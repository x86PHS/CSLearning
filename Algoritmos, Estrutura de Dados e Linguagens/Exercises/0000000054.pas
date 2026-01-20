PROGRAM ex0000000027;
USES CRT;
VAR n,i : integer;
BEGIN
    write('Digite um numero:');read(n);
    for i := 0 TO 10 DO
        BEGIN
            writeln(n,' x ',i,' = ',n*i);
        END;
END.