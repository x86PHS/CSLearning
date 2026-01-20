PROGRAM ex0000000054;
USES CRT;
VAR i,j : integer;
BEGIN
    FOR i := 1 TO 10 DO
        BEGIN
            FOR j := 0 to 10 DO
                BEGIN
                    writeln(i,' x ',j,' = ',i*j);
                END;
        END;
END.