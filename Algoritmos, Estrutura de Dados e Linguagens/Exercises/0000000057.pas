PROGRAM ex0000000056;
USES CRT;
VAR idade,altura,peso,i,idoso,sumaltura,countdez,infquarenta,porcen: integer;
    media : real;
BEGIN
    idoso := 0;
    sumaltura := 0;
    countdez := 0;
    infquarenta := 0;
    FOR i := 0 TO 4 DO
        BEGIN
            readln(idade);readln(altura);readln(peso);
            if idade > 50
                THEN idoso := idoso + 1;
            if ((idade > 10) AND (idade < 20)) THEN
                BEGIN 
                    sumaltura := sumaltura + altura;
                    countdez := countdez + 1;
                END;
            if peso < 40 THEN
                infquarenta := infquarenta + 1;
        END;
    writeln(idoso);
    media := sumaltura / countdez;
    writeln(media);
    porcen := 4 / infquarenta;
    writeln(porcen,'%');
END.