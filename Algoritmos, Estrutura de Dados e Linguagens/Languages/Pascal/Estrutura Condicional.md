## Tópico / Tema

2026-01-14 17:52

**Subjects**: [[sintaxe]] 

**Source**: <a href="https://www.amazon.com.br/Fundamentos-programa%C3%A7%C3%A3o-computadores-algoritmos-pascal/dp/8564574160">Fundamentos da Programação de Computadores: Algoritmos, Pascal, C, C++ e Java</a>

**Level**: Beginner

---

## Write-Up

#### Estrutura Simples

```PASCAL
PROGRAM <name>;
USES <library>;
VAR <name>: <type>;

BEGIN
	IF <condition>
	THEN <command>;
END.
```

```PASCAL
PROGRAM <name>;
USES <library>;
VAR <name>: <type>;

BEGIN
	IF <condition>
	THEN BEGIN
		 <comand1>;
		 <comand2>;
		 <comand3>;
		 END;
END.
```

#### Estrutura Composta

#### Estrutura Case

```PASCAL
PROGRAM <name>;
USES <library>;
VAR <name>: <type>;

BEGIN

    CASE <variable> of
        <command1>
        <command2>
        <range>: BEGIN
         END;
    END;
END.
```

- Na estrutura acima

```PASCAL
PROGRAM <name>;
USES <library>;
VAR <name>: <type>;

BEGIN

    CASE <variable> of
        <list1> : <command1>;
        <list2> : <command2>;
        <range>: BEGIN
	        <comand3>;
	        <comand4>;
	        <comand5>;
         END;
    ELSE <coomand6>;
END.
```

- Na estrutura acima se nenhum dos requisitos forem atingidos, ele vai pular para o **ELSE**