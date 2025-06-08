// Definição das bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaração das variáveis

int main(){
	
	int i = 1;
	int pontos = 1000;
	int resposta, corEscolhida;
	int erro = 0;
	char opcao;
	
// Titulo do jogo

  printf("=== JOGO DA RECICLAGEM - CONAMA 275/2001 ===\n\n");
  printf("Relacione corretamente o tipo de residuo com a cor correta.\n");
  printf("Digite o numero correspondente ao item certo, de 1 a 10.\n\n");	
  
  printf("Atencao! Antes e impressindivel estudar a tabela de cores e tipos de residuos do Conama para iniciar o jogo.\n\n");
    
  printf("1. Azul     - 7. Papel e papelao\n");
  printf("2. Vermelho - 4. Plastico\n");
  printf("3. Verde    - 9. Vidro\n");
  printf("4. Amarelo  - 2. Metal\n");
  printf("5. Preto    - 6. Madeira\n");
  printf("6. Laranja  - 10.Residuos perigosos (pilhas, baterias)\n");
  printf("7. Branco   - 3. Saude (ambulatoriais)\n");
  printf("8. Roxo     - 1. Radioativos\n");
  printf("9. Marrom   - 8. Organicos (restos de comida)\n");
  printf("10.Cinza    - 5. Nao reciclaveis\n\n");
  
  while (1){
  
  printf ("Voce ja estudou da tabela de cores e materiais reciclaveis do Conama? (s/n): "); 
  scanf(" %c", &opcao);
	
	if (opcao == 'n' || opcao == 'N') {
		printf("Estude um pouco mais!\n");
		
	} else if (opcao == 's' || opcao == 'S'){
		system ("cls");
		printf("Vamos comecar o jogo.\n\n");
	    break;
	    
	} else {
		printf("Opcao incorreta! Por favor, Digite apenas 's' ou 'n'.\n\n");
	
	}
 }
    
// Lista os materiais recicláveis 

  printf("Lista aleatoria de tipos de residuos:\n\n");
  printf("2. Metal\n");
  printf("6. Madeira\n");
  printf("5. Residuos nao reciclaveis\n");
  printf("7. Papel e papelao\n");
  printf("10.Residuos perigosos (pilhas, baterias)\n");	
  printf("9. Vidro\n");
  printf("3. Residuos de Saude (ambulatoriais)\n");
  printf("8. Residuos organicos (resto de comida)\n");
  printf("1. Residuos radioativos\n");
  printf("4. Plastico\n");
 

// Lista as cores padrão, conforme resolução do Conama

  printf("\nLista de cores padrao Conama:\n\n");
  printf("1. Azul\n2. Vermelho\n3. Verde\n4. Amarelo\n5. Preto\n6. Laranja\n7. Branco\n8. Roxo\n9. Marrom\n10.Cinza\n\n");

// Inicializa o gerador de números aleatórios das cores

  srand(time(NULL));

  while (i <= 10){
	
// Gera uma cor aleatória de 1 a 10

  corEscolhida = rand() % 10 + 1;

// Exibe a cor e solicita ao usuário que relacione com o tipo de material correto

  printf("Cor %d apresentada. Qual o tipo de residuo correspondente? ", corEscolhida);
  scanf("%d", &resposta);

// Lógica de verificação das correspondências entre as cores e os materiais 

  if ((corEscolhida == 1 && resposta != 7) || // Azul - Papel e Papelão
      (corEscolhida == 2 && resposta != 4) || // Vermelho - Plástico
      (corEscolhida == 3 && resposta != 9) || // Verde - Vidro
      (corEscolhida == 4 && resposta != 2) || // Amarelo - Metal
      (corEscolhida == 5 && resposta != 6) || // Preto - Madeira
      (corEscolhida == 6 && resposta != 10) || // Laranja - Resíduos perigosos
      (corEscolhida == 7 && resposta != 3) || // Branco - saúde
      (corEscolhida == 8 && resposta != 1) || // Roxo - Radioativos
      (corEscolhida == 9 && resposta != 8) || // Marrom - Orgânicos
      (corEscolhida == 10 && resposta != 5)) // Cinza - Não reciclaveis 
	  
  {
  
//Lista os posicionamentos de erros e acertos do usuário  	
  
  printf("Resposta incorreta! - Voce Errou!\n\n");
  pontos = pontos - 100;
  erro++;

 } 
 
  else {
  printf("Resposta correta! - Voce Acertou!\n\n");
 
 }
 
  i++;

 } 

// Lista informação dos resultados e sinalização de final da partida
 
  printf("\nJogo finalizado!\n");
  printf("Total de erros: %d\n", erro);
  printf("Pontuacao final: %d pontos\n\n", pontos);

// Lista o gabarito das respostas corretas para o usuário

  printf("=== CORRELACAO CORRETA ENTRE AS CORES E OS MATERIAIS RECICLAVEIS, CONFORME A RESOLUCAO 275/2001 DO CONAMA\n\n");
  printf("1. Azul     - 7. Papel e papelao\n");
  printf("2. Vermelho - 4. Plastico\n");
  printf("3. Verde    - 9. Vidro\n");
  printf("4. Amarelo  - 2. Metal\n");
  printf("5. Preto    - 6. Madeira\n");
  printf("6. Laranja  - 10.Residuos perigosos (pilhas, baterias)\n");
  printf("7. Branco   - 3. Saude (ambulatoriais)\n");
  printf("8. Roxo     - 1. Radioativos\n");
  printf("9. Marrom   - 8. Organicos (restos de comida)\n");
  printf("10.Cinza    - 5. Nao reciclaveis\n\n");

// Lista mensagens de status, conforme aproveitamento do usuário no jogo

  if (pontos == 1000){
	printf("Parabens! Você acertou todas as correspondencias!\n");
 } else if (pontos >= 700){
	printf("Muito bem! Continue praticando para melhorar ainda mais!\n");
 } else {
	printf("Voce pode melhorar! Que tal tentar novamente?\n");
 }
	
  return 0;

 }