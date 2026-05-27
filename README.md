# Mastermind-Jogo


## Etapas:

- Compreender o problema	
- Identificar requisitos
- Definir entradas e saídas	 
- Escolher estruturas de dados
- Planear funções	
- Criar estrutura base do código	
- Implementar leitura e validação	
- Implementar comparação	
- Guardar 
- Implementar ciclo do jogo	
- Implementar final do jogo vitória, derrota e desistência	
- Testar o programa	
- Preparar entrega

## Requisitos Funcionais 
- O programa deve começar por definir o código
- O programa deve permitir ao jogador que decida se quer realizar uma tentativa, desistir e escolher um número 
- O programa deve validar o código do jogo, o número selecionado pelo jogador e as tentativa.
- O programa deve rejeitar strings, números fora do intervalo entre 1 e 6,  tentativas com números repetidos.
- O programa deve comparar as variáveis com os números inseridos 
- O programa deve mostrar quantas tentativas o jogador tem, se a tentativa é válida ou não, o intervalo em que o numero errado está, se o jogador acertou o número e se perdeu o jogo.
- O programa deve guardar o código secreto, o número de tentativas restantes do jogador, o número escolhido pelo jogador,  
- O programa deve terminar quando o numero de tentativas esgotar, caso o jogador descubra o código, caso o jogador desista

## 5.1
- O jogador precisa de introduzir o nome? 

Não. O jogo pode funcionar sem nome do jogador 

- O jogador escolhe uma opção de menu? 

sim, o jogador vai precisará fazer algumas escolhas durante o decorrer do jogo como "inserir tentativas" e "desistir"

- Como introduz uma tentativa? 

O jogador vai digitar um valor pedido correspondente ao código, que será introduzido em uma variável "tentativa".

- Que valores são aceitos numa tentativa? 

Os valores aceitos numa tentativa são números inteiros, valores enntre 1 e 6, exatamente 4 numeros

- Que valores devem ser recusados? 

 Os valores recusados em uma tentativa são numeros menores que 1, numeros maiores que 6, numeros repetidos, letras e simbolos, menos ou mais do que 4 numeros

## 5.2 

- Que mensagem aparece no início do jogo?


" Bem vindo ao jogo Mastermind numérico "

- Como o programa mostra as tentativas já feitas?


"Tentativas usadas 3/10"

- Como mostra os valores certos na posição certa?


 "Valores na posição certa: 2 "

- Como mostra os valores certos na posição errada?


"Valores certos na posição errada"~

- Que mensagem aparece em caso de vitória?


"Parabéns!! Descobriste o código secreto"

- Que mensagem aparece em caso de derrota?


"Fim do jogo. Gastaste todas as tentativas"

- Que mensagem aparece em caso de desistência?


"Jogo terminado por desistência" 

## 6.1

Dados do código secreto
Perguntas:

- O código secreto tem quantos valores?

O código tem 4 valores

- Todos os valores são do mesmo tipo?

Sim todos os valores são números inteiros

- Faz sentido guardar o código secreto num array?

Sim porque o array guarda vários valores do mesmo tipo e permite aceder facilmente as posições 

## 6.2 Dados de uma tentativa
Perguntas:

- Uma tentativa tem os mesmos 4 valores do código secreto?

Sim cada tentativa possui 4 numeros inteiros 

- Além dos valores introduzidos, faz sentido guardar o resultado dessa tentativa?

Sim, porque é importante quantos números estão na posição certa e quantos números estão na posição errada.

- Que campos poderiam existir numa struct que representa uma tentativa?

Uma struct de tentativa pode ter um array com os 4 números da tentativa; um campo para os valores certos na posição certa; um campo para os valores certos na posição errada.

6.3 Dados do jogo
Perguntas:

- O programa precisa de guardar várias tentativas?


Sim o programa tem de guardar todas as tentativas do jogador para ter um histórico de jogo

- Como podes guardar um histórico de tentativas?

O histórico pode ser guardado num array de struct Tentativa.

- Que informação indica se o jogo ainda está a decorrer, terminou com vitória ou terminou com derrota?

O programa precisa de guardar o estado atual do jogo, por exemplo: jogo em curso, vitória, derrota e desistência.  

- Faz sentido usar um enum para representar o estado do jogo?

Sim. Um enum ajuda a organizar melhor os estados do jogo e torna o código mais legível.



