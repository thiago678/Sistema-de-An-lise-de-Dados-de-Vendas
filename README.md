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

##Exemplo:
101;Camiseta regata
203;Notebook Neo
150;Caneca do Palmeiras
