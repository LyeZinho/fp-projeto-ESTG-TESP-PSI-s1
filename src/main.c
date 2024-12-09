#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include <locale.h>


#pragma region Constantes
/*
    Os tamanhos máximos de cada array serão predefinidos,
    de forma a facilitar a manutenção do código, e manter um padrão,
    durante o desenvolvimento.

*/

// Tamanho máximo de cada array
#define MAX_USERS 100
#define MAX_SUBMISSOES 1000
#define MAX_FICHAS 100
#define MAX_EXERCICIOS 1000

// Tamanho máximo de cada string
#define MAX_NOME 100
#define MAX_EMAIL 100

// Outras constantes

#pragma endregion

#pragma region Estruturas
// Código dentro da região
/*

User
ID, 
número, 
nome, 
e-mail.

Submissão
ID, 
ID do estudante, (relacionado com user)
ID da ficha, (relacionado com ficha de exercícios)
ID do exercício, (relacionado com exercício)
data,
nº de linhas, 
classificação.


Ficha de Exercícios
ID, 
nome, 
nº de exercícios, 
data de publicação.


Exercício
ID, 
ID da ficha, (relacionado com ficha de exercícios)
nome, 
grau de dificuldade, 
tipo de solução.
*/


// Estrutura User
typedef struct {
    int id;
    int numero;
    char nome[MAX_NOME];
    char email[MAX_EMAIL];
} User;

// Estrutura Submissão
typedef struct {
    int id;
    int id_user;
    int id_ficha;
    int id_exercicio;
    char data[11];
    int n_linhas;
    int classificacao;
} Submissao;

// Estrutura Ficha de Exercícios
typedef struct {
    int id;
    char nome[MAX_NOME];
    int n_exercicios;
    char data[11];
} FichaExercicios;

// Estrutura Exercício
typedef struct {
    int id;
    int id_ficha;
    char nome[MAX_NOME];
    int grau_dificuldade;
    char tipo_solucao[10];
} Exercicio;

#pragma endregion

#pragma region Variáveis Globais
#pragma endregion

#pragma region Macros
#pragma endregion

#pragma region Protótipos de Funções
#pragma endregion


int main( int argc, char **argv ) {
    return 0;
}

#pragma region Funções
#pragma endregion