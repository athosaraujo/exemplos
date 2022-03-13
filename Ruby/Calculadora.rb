puts "Bienvenue! Qual operação você deseja realizar?"
puts"-----------------------------------------------"
puts "+ Soma          | - Subtração"
puts "* Multiplicação | / Divisão"
puts "^ Exponenciação | v Radiciação"
puts"-----------------------------------------------"
op = gets.chomp
repeat = 1
	case op
		when '+' , 'Soma' , 'soma'
			puts "\nInsira o valor inicial"; a = gets.chomp.to_f
			puts "Insira o valor a ser somado"; b = gets.chomp.to_f 
			c = a+b; puts "O resultado é #{c}"
		
		
		when '-' , 'Multiplicação' , 'multiplicação' , 'Multiplicacao' , 'multiplicacao' 
			puts "\nInsira o valor inicial"; a = gets.chomp.to_f
			puts "Insira o valor a ser subitraido"; b = gets.chomp.to_f
			c = a-b; puts "O resultado é #{c}"

		when '*' , 'Divisão' , 'divisão' , 'Divisao' , 'divisao' 
			puts "\nInsira o fator inicial"; a = gets.chomp.to_f
			puts "Insira o segundo fator "; b = gets.chomp.to_f
			c = a*b; puts "O resultado é #{c}"

		when '/' , 'Subtração' , 'subtração' , 'Subtracao' , 'subtracao' 
			puts "\nInsira o dividendo"; a = gets.chomp.to_f
			puts "Insira o divisor"; b = gets.chomp.to_f
			c = a/b; puts "O resultado é #{c}"

		when '^' , 'Exponenciação' , 'exponenciação' , 'Exponenciacao' , 'exponenciacao' 
			puts "\nInsira o valor a ser fatorado"; a = gets.chomp.to_f
			puts "Insira o exponente"; b = gets.chomp.to_f
			c = a**b; puts "O valor de #{a} elevado à #{b} é #{c}"		

		when 'v' , 'Radiciação' , 'radiciação' , 'Radiciacao' , 'radiciacao' 
			puts "\nInsira o índice"; a = gets.chomp.to_f
			puts "Insira o radiciando"; b = gets.chomp.to_f
			c = b**(1/a); a = a.to_i;puts "A raiz #{a}a de #{b} é #{c}"	
		else
			puts "\nPor favor insira um operador válido"
		end
puts "Até mais!"
