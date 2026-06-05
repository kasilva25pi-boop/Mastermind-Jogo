Análise das Variáveis, Funções, Laços de Repetição e Estruturas Condicionais
1. Função de Cada Variável
senha_secreta[TAM_SENHA]
É um vetor de números inteiros responsável por armazenar a combinação secreta que o jogador deverá descobrir durante a partida. Cada posição do vetor contém um número aleatório gerado pelo programa, variando entre os valores definidos pelas constantes MIN_DIGITO e MAX_DIGITO. O vetor possui tamanho fixo de quatro posições, conforme definido pela constante TAM_SENHA.
palpite[TAM_SENHA]
É um vetor utilizado para armazenar os valores digitados pelo jogador em cada tentativa. Os números inseridos pelo usuário são comparados com os valores presentes no vetor senha_secreta para verificar quantos dígitos foram acertados e em quais posições.
jogadas
Variável inteira utilizada para contabilizar a quantidade de tentativas realizadas pelo jogador. Seu valor é incrementado a cada nova rodada do jogo, permitindo que o programa informe ao final quantas jogadas foram necessárias para descobrir a senha.
ganhas
Variável inteira utilizada como indicador lógico de vitória. Inicialmente recebe o valor 0, indicando que o jogo ainda está em andamento. Quando o jogador acerta todos os dígitos da senha secreta nas posições corretas, a variável recebe o valor 1, encerrando o laço principal do jogo.
corretos_posicao
Variável inteira responsável por armazenar a quantidade de números que o jogador acertou exatamente na posição correta da senha secreta. É reinicializada a cada nova tentativa.
corretos_cor
Variável inteira utilizada para contar quantos números existem simultaneamente na senha secreta e no palpite do jogador, mas em posições diferentes. Também é reinicializada a cada rodada.
usado_senha[TAM_SENHA]
Vetor auxiliar utilizado para marcar quais posições da senha secreta já foram contabilizadas durante as comparações. Isso impede que um mesmo número seja contado mais de uma vez, evitando erros nos resultados apresentados ao jogador.
usado_palpite[TAM_SENHA]
Vetor auxiliar que indica quais posições do palpite já foram consideradas como acertos de posição. Sua utilização evita que um mesmo elemento seja analisado novamente na etapa de verificação dos números corretos em posições incorretas.
i e j
Variáveis de controle utilizadas nos laços de repetição. Elas funcionam como índices para percorrer os vetores do programa, permitindo acessar cada posição individualmente durante as comparações.
2. Explicação das Funções Utilizadas
main()
A função main() é a função principal do programa e representa o ponto de entrada da aplicação. Toda a lógica do jogo é executada dentro dela.
Suas responsabilidades incluem:
Declarar as variáveis necessárias.
Inicializar o gerador de números aleatórios.
Gerar a senha secreta.
Receber os palpites do jogador.
Comparar os palpites com a senha.
Exibir o resultado de cada tentativa.
Verificar a condição de vitória.
Encerrar o programa quando a senha for descoberta.
srand(time(NULL))
Esta função é utilizada para inicializar a semente do gerador de números aleatórios.
A função time(NULL) retorna o horário atual do sistema em segundos. Esse valor é passado para srand(), fazendo com que a sequência de números gerados por rand() seja diferente a cada execução do programa.
Sem essa função, a senha secreta seria exatamente a mesma em todas as execuções do jogo.
rand()
A função rand() gera números pseudoaleatórios. No programa, ela é utilizada para preencher cada posição da senha secreta.
A expressão:
(rand() % (MAX_DIGITO - MIN_DIGITO + 1)) + MIN_DIGITO
garante que os valores gerados estejam dentro do intervalo de 1 a 6.
scanf()
A função scanf() é responsável pela leitura dos números digitados pelo usuário. Cada valor informado é armazenado em uma posição do vetor palpite.
printf()
A função printf() é utilizada para exibir mensagens na tela, incluindo instruções, solicitações de entrada de dados, resultados das tentativas e mensagens de vitória.
3. Funcionamento dos Laços de Repetição
Primeiro laço for
for (int i = 0; i < TAM_SENHA; i++)
Este laço percorre todas as posições do vetor senha_secreta para gerar os números aleatórios da combinação secreta.
O processo ocorre da seguinte forma:
O índice inicia em 0.
Um número aleatório é gerado.
O valor é armazenado na posição correspondente.
O índice é incrementado.
O processo continua até a última posição do vetor.
Laço while
while (!ganhas)
Este é o principal laço do programa.
Sua função é manter o jogo em execução enquanto o jogador não descobrir completamente a senha.
A condição !ganhas significa "enquanto ganhas for igual a zero".
A cada repetição:
Uma nova tentativa é solicitada.
O palpite é analisado.
Os resultados são exibidos.
O programa verifica se o jogador venceu.
O laço só termina quando ganhas recebe valor 1.
Segundo laço for
for (int i = 0; i < TAM_SENHA; i++)
Utilizado para receber os números digitados pelo jogador através da função scanf().
Cada número informado é armazenado em uma posição do vetor palpite.
Terceiro laço for
for (int i = 0; i < TAM_SENHA; i++)
Este laço compara cada posição do vetor palpite com a posição correspondente da senha secreta.
Quando dois valores coincidem:
corretos_posicao é incrementado.
A posição é marcada como utilizada nos vetores auxiliares.
Quarto laço for com laço interno
for (int i = 0; i < TAM_SENHA; i++) for (int j = 0; j < TAM_SENHA; j++)
Estes laços aninhados são responsáveis por localizar números corretos que estão em posições incorretas.
O laço externo percorre os números do palpite.
O laço interno percorre a senha secreta procurando uma correspondência ainda não utilizada.
Quando uma correspondência é encontrada:
corretos_cor é incrementado.
A posição correspondente é marcada como utilizada.
O comando break encerra a busca daquela posição.
4. Estruturas Condicionais
Primeira estrutura if
if (palpite[i] == senha_secreta[i])
Esta condição verifica se o valor digitado pelo jogador é exatamente igual ao valor da senha na mesma posição.
Quando a condição é verdadeira:
O contador de acertos de posição é incrementado.
As posições são marcadas como utilizadas.
Segunda estrutura if
if (usado_palpite[i])
Esta condição verifica se determinada posição do palpite já foi contabilizada anteriormente.
Caso seja verdadeira, o comando continue é executado, fazendo o programa ignorar o restante daquela repetição e passar para a próxima posição do vetor.
Terceira estrutura if
if (!usado_senha[j] && palpite[i] == senha_secreta[j])
Esta condição possui duas verificações simultâneas:
A posição da senha ainda não foi utilizada.
O número do palpite existe em alguma posição da senha.
Quando ambas são verdadeiras:
O contador corretos_cor é incrementado.
A posição correspondente é marcada como utilizada.
O comando break interrompe o laço interno.
Estrutura if final
if (corretos_posicao == TAM_SENHA)
Esta é a condição de vitória do jogo.
Ela verifica se todos os quatro dígitos foram acertados exatamente nas posições corretas.
Quando a condição é satisfeita:
A variável ganhas recebe valor 1.
O laço principal é encerrado.
O programa exibe a mensagem de vitória ao jogador.
Esse texto já está num nível de detalhamento que costuma agradar bastante professores de programação e análise de algoritmos.