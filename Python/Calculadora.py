# -*- coding: utf-8 -*-
print("Bienvenue!")
print("+ Soma          | - Subtração")
print("* Multiplicação | / Divisão")
print("^ Potenciação   | v Radiciação")

op = input("Qual operação você deseja realizar hoje?: ")

if op == '+':
	a = float(input("\nInsira o valor inicial: "))
	b = float(input("Insira o valor a ser somado: "))
	c = a+b;
	a = str(a);b = str(b); c = str(c);
	print(a + " + " + b + " = " + c);
elif op == '-':
	a = float(input("\nInsira o valor inicial: "))
	b = float(input("Insira o valor a ser subtraido: "))
	c = a-b;
	a = str(a);b = str(b);c = str(c);
	print(a + " - " + b + " = " + c);
elif op == '*':
	a = float(input("\nInsira o fator inicial: "))
	b = float(input("Insira o segundo fator: "))
	c = a*b;a = str(a);b = str(b);c = str(c);
	print(a + " * " + b + " = " + c);
elif op == '/':
	a = float(input("Insira o dividendo: "))
	b = float(input("Insira o divisor: "))
	c = a/b;
	a = str(a);b = str(b);c = str(c);
	print(a + " / " + b + " = " + c);
elif op == '^':
	a = float(input("\nInsira o valor da base: "))
	b = float(input("Insira o exponente: "))
	c = a**b;
	a = str(a);b = str(b);c = str(c);
	print(a + " ^ " + b + " = " + c);
elif op == 'v':
	a = float(input("\nInsira o valor do radiciando: "))
	b = int(input("Insira o índice da raiz: "))
	c = a**(1/b);a = str(a);b = str(b);c = str(c);
	if b == '2':
		print("O valor da raiz quadrada de " + a + " é " + c);
	elif b == '3':
		print("O valor da raiz cúbica de " + a + " é " + c);
	else:
		print("O valor da raiz " + b + "a de " + a + " é " + c);
else:
	print("Insira um valor válido, obrigado")


print("Até mais!")
