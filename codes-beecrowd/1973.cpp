#include <bits/stdc++.h>

using namespace std;
// Isso define que quando eu for declarar uma variavel long long eu só preciso digitar ll e o nome da variável
typedef long long ll;
// Como vão ser entradas grandes eu declaro em escopo global, por hora aqui voce tem mais espaço :)
// Não sei muito a fundo o porque, mas não é legal fazer isso dentro da main :)
// Esse vetor será usado para salvar quantos carneiros tem em cada fazenda
int fazenda[1123456];
// Esse vetor vai ser usado para eu marcar as fazendas que eu visitei
int vis[1123456];

int n;
int atacados;


int main()
{
    // Isso basicamente impede de dar time exception, como a entrada é grande isso é importante
    // Se quiser saber mais é só entrar nesse link:
    // https://www.inf.ufpr.br/maratona/grafico/entrada-saida-rapida.html
	ios_base :: sync_with_stdio(0); cin.tie(0);
	
	while (cin >> n)
	{
		atacados = 0;
		ll sum = 0;
        // Aqui eu recebo os dados e ja faço a soma e marco os visitados
		for (int i = 0 ; i < n ; ++i)
		{
			cin >> fazenda[i];
			sum += fazenda[i];
			vis[i] = 0;
		}
		int i = 0;
        // ans sera a quantidade de carneiros roubados
		ll ans = 0;
		while (i >= 0 && i < n)
		{
            // Se ja foi visitado eu adiciono 1 em atacados
			if (!vis[i]) ++atacados;
            // Agora seto para 1 porque posso passar denovo nessa fazenda
			vis[i] = 1;
            // Aqui verifico de forma rapida se o numero é par
            // sendo impar eu vou para a proxima fazenda e roubo 1 carneiro
			if (fazenda[i] & 1)
				++ans, --fazenda[i], ++i;
			else
            // sendo par eu vou para a fazenda anterior e roubo 1 carneiro
			{
				if (fazenda[i]) ++ans, --fazenda[i];
				--i;
			}
		}
		cout << atacados << ' ' << sum - ans << '\n';
	}
}