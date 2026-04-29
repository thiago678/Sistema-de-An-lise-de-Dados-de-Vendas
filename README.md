# Sistema-de-An-lise-de-Dados-de-Vendas
Implementar um sistema em C para processar dados de vendas armazenados em arquivo, aplicando algoritmos de busca, ordenação e análise.

# Descrição dos dados disponíveis
## Arquivo vendas.txt
Um arquivo vendas.txt contém registros no formato:

- id produto_id quantidade preco_unitario

## Exemplo:
1 101 2 10.5

3 101 3 10.5

2 203 1 50.0

onde cada linha representa uma venda.

# Arquivo produtos.csv

Cada produto_id presente em vendas.txt estará presente em um arquivo produtos.csv, que contém registros
no formato:

- id;descricao_do_produto

Sendo que a descrição do produto pode conter espaços.

## Exemplo:

101;Camiseta regata

203;Notebook Neo

150;Caneca do Palmeiras

# 3. Arrays para armazenamento dos dados

Os dados das vendas deverão ser armazenadas usando vários arrays (não devem ser usadas structs):

#define MAX 1000

int ids[MAX];

int produtoIds[MAX];

int quantidades[MAX];

float precos[MAX];

Os dados das vendas serão armazenados em “arrays paralelos”. Isto quer dizer que os dados da venda de
índice i serão obtidos acessando:

ids[i]

produtoIds[i]

quantidades[i]

precos[i]

Os dados dos produtos também serão armazenados em arrays (não devem ser usadas structs):

int produtoIdsCatalogo[MAX];

char descricoes[MAX][50];

Estes arrays também são usados de maneira “paralela”. Assim, os dados de um produto de índice j serão
obtidos acessando:
