# odd-composite
Ugly and dirty C code and Math: Learning and Testing



# LaTex code test

Sobre o arquivo OnonP1.c: Meu celebro não ta raciocionando bem, então fique atento que $\forall m, k, \in Z^{+}$ deve ser NECESSARIAMENTE VERDADE para todas instancias de
$m$ e $k$, contudo, é razoável concluir que a primeira expressão precisa duma melhor generalização matemática. Outro ponto também, é que para condição de existencia do primeiro impar
composto, é necessario que $(k \land m) \geq 1$. Contudo, quando $(k \lor m) \geq 0$, apenas nos permite vizualizar como vai ser dada a sequencia de cada output.

generalização básica:

$n(m, k) = (2m + 1)(2k + 1)$


E aqui vai uma tabela de inputs: 

| m | k | N(m, k)         |
|---|---|-----------------|
| 0 | 0 | 1 × 1 = 1       |
| 1 | 0 | 3 × 1 = 3       |
| 2 | 0 | 5 × 1 = 5        |
| 3 | 0 | 7 × 1 = 7        |
| 4 | 0 | 9 × 1 = 9        |
| 1 | 1 | 3 × 3 = 9*       |
| 2 | 1 | 5 × 3 = 15       |
| 2 | 2 | 5 × 5 = 25       |
| 3 | 1 | 7 × 3 = 21       |
| 3 | 2 | 7 × 5 = 35       |
| 3 | 3 | 7 × 7 = 49       |
| 4 | 1 | 9 × 3 = 27       |
| 4 | 2 | ..........       |
| 4 | 3 | ..........       |
| 4 | 4 | ..........       |
| 5 | 1 | ..........       |
| $m$ | $k$ |  ..........  |

Como pode-se notar, uma formula matemática realmente geral é desejável. Deixe que $\mathbb{P}$ seja o conjunto dos primos e $p \in \mathbb{P}$, onde $p > 2$, logo,
faça um experimento por exmplo com $2np + p^{2}$, e denovo chegaremos a conclusão de que é necessário de uma forma mais generalizada. Aqui, eu não prezei pela 
ordenação dos elementos, deixei a progressão natural da coisa, essa progressão é agradável em bora muito simples e previsivel. Note também que esse tipo de declaração 
é daquelas que necessita de uma prova. Mas sinceramente? Ignore.



Sobre o arquivo OnonP2.c:

Esse foi meu caso geral que desenvolvi, e está muito horrível, e claro que soa bem familiar. Vejamos

$n_{o} = (2m + 1)(2k+ 1)$ , perceba que $m$ 

$m = \Bigg  \lfloor  \frac{1 + \sqrt{1 + 8o}}{2}  \Bigg \rfloor $

Com $k$, dar-se o mesmo processo

$k = \Bigg  \lfloor  o - \frac{m(m-1) + 1}{2}  \Bigg \rfloor $

Por que esse segundo caso é mais interessante apesar de parecer feio? Justamente por que so precisamos de uma unica entra $\forall o$
$\in$ $\mathbb{Z}_{\geq 0}$ onde achando o valor de $m$ consegue-se determinar $k$, e claro que esse segundo caso é menos eficiente para maquina.

