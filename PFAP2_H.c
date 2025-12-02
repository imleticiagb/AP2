#ifndef PFAP2_H_H
#define PFAP2_H_H
#include <locale.h>

void TEST_REP(){

    setlocale(LC_ALL,"portuguese");

    int cin, vis, aud, dig, LER;
    int nota[20];

    setlocale(LC_ALL, "Portuguese");

    system("cls");

    printf("0------------------------------------------0\n");
    printf("| Responda com:                            |\n");
    printf("| 4 - Opção que melhor te descreve         |\n");
    printf("| 3 - Segunda melhor opçãoo que te descreva |\n");
    printf("| 2 - Próxima opção que te descreve        |\n");
    printf("| 1 - A que menos te descreve              |\n");
    printf("0------------------------------------------0\n\n");

    printf("0-----------------------------------------------0\n");
    printf("| 1) Eu tomo decisões importantes baseado em:   |\n");
    printf("| 1 - Intuiçãoo:                               |\n");
    printf("| 2 - O que me soa melhor:                      |\n");
    printf("| 3 - O que me parece melhor:                   |\n");
    printf("| 4 - Um estudo preciso e minucioso do assunto: |\n");
    printf("0-----------------------------------------------0\n\n");


    printf("\n1 - ");
    scanf("%d", &nota[0]);

    while((nota[0]!=1)&&(nota[0]!=2)&&(nota[0]!=3)&&(nota[0]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[0]);

    };

    printf("\n2 - ");
    scanf("%d", &nota[1]);

    while((nota[1]!=1)&&(nota[1]!=2)&&(nota[1]!=3)&&(nota[1]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[1]);

    };

    printf("\n3 - ");
    scanf("%d", &nota[2]);

    while((nota[2]!=1)&&(nota[2]!=2)&&(nota[2]!=3)&&(nota[2]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[2]);

    };

    printf("\n4 - ");
    scanf("%d", &nota[3]);

    while((nota[3]!=1)&&(nota[3]!=2)&&(nota[3]!=3)&&(nota[3]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[3]);

    };

    system("cls");
    printf("0----------------------------------------------------------------------0\n");
    printf("| 2) Durante uma discussão eu sou mais influenciado por:               |\n");
    printf("| 1 - Tom de voz da outra pessoa:                                      |\n");
    printf("| 2 - Se eu posso ou não ver o argumento da outra pessoa:              |\n");
    printf("| 3 - Se eu entro em contato ou não com os sentimentos reais do outro: |\n");
    printf("| 4 - A lógica do argumento da outra pessoa:                           |\n");
    printf("0----------------------------------------------------------------------0\n\n");

    printf("\n1 - ");
    scanf("%d", &nota[4]);

    while((nota[4]!=1)&&(nota[4]!=2)&&(nota[4]!=3)&&(nota[4]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[4]);

    };

    printf("\n2 - ");
    scanf("%d", &nota[5]);

    while((nota[5]!=1)&&(nota[5]!=2)&&(nota[5]!=3)&&(nota[5]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[5]);

    };

    printf("\n3 - ");
    scanf("%d", &nota[6]);

    while((nota[6]!=1)&&(nota[6]!=2)&&(nota[6]!=3)&&(nota[6]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[6]);

    };

    printf("\n4 - ");
    scanf("%d", &nota[7]);

    while((nota[7]!=1)&&(nota[7]!=2)&&(nota[7]!=3)&&(nota[7]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[7]);

    };

    system("cls");

    printf("0-------------------------------------------------------0\n");
    printf("| 3) Eu comunico mais facilmente o que se passa comigo: |\n");
    printf("| 1 - Do modo como me visto e aparento:                 |\n");
    printf("| 2 - Pelos sentimentos que compartilho:                |\n");
    printf("| 3 - Pelas palavras que escolho:                       |\n");
    printf("| 4 - Pelo tom da minha voz:                            |\n");
    printf("0-------------------------------------------------------0\n\n");


    printf("\n1 - ");
    scanf("%d", &nota[8]);

    while((nota[8]!=1)&&(nota[8]!=2)&&(nota[8]!=3)&&(nota[8]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[8]);

    };

    printf("\n2 - ");
    scanf("%d", &nota[9]);

    while((nota[9]!=1)&&(nota[9]!=2)&&(nota[9]!=3)&&(nota[9]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[9]);

    };

    printf("\n3 - ");
    scanf("%d", &nota[10]);

    while((nota[10]!=1)&&(nota[10]!=2)&&(nota[10]!=3)&&(nota[10]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[10]);

    };

    printf("\n4 - ");
    scanf("%d", &nota[11]);

    while((nota[11]!=1)&&(nota[11]!=2)&&(nota[11]!=3)&&(nota[11]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[11]);

    };

    system("cls");

    printf("0---------------------------------------------------------------------------0\n");
    printf("| 4) É muito fácil pra mim:                                                 |\n");
    printf("| 1 - Achar o volume e a sintonia ideais num sistema de som:                |\n");
    printf("| 2 - Selecionar o ponto mais relevante relativo a um assunto interessante: |\n");
    printf("| 3 - Escolher os móveis mais confort?veis:                                 |\n");
    printf("| 4 - Escolher as combinações de cores mais ricas e atraentes:              |\n");
    printf("0---------------------------------------------------------------------------0\n\n");

    printf("\n1 - ");
    scanf("%d", &nota[12]);

    while((nota[12]!=1)&&(nota[12]!=2)&&(nota[12]!=3)&&(nota[12]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[12]);

    };

    printf("\n2 - ");
    scanf("%d", &nota[13]);

    while((nota[13]!=1)&&(nota[13]!=2)&&(nota[13]!=3)&&(nota[13]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[13]);

    };

    printf("\n3 - ");
    scanf("%d", &nota[14]);

    while((nota[14]!=1)&&(nota[14]!=2)&&(nota[14]!=3)&&(nota[14]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[14]);

    };

    printf("\n4 - ");
    scanf("%d", &nota[15]);

    while((nota[15]!=1)&&(nota[15]!=2)&&(nota[15]!=3)&&(nota[15]!=4)){

        printf("\nVALOR ATRIBUÍDO INVÁLIDO\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[15]);

    };

    system("cls");

    printf("0-------------------------------------------------------------------------0\n");
    printf("| 5) Eu me percebo assim:                                                 |\n");
    printf("| 1 - Se estou muito em sintonia com os sons do ambiente:                 |\n");
    printf("| 2 - Eu sou muito capaz de raciocinar com fatos e dados novos:           |\n");
    printf("| 3 - Eu sou muito sensível com a maneira que a roupa veste o meu corpo:  |\n");
    printf("| 4 - Eu responto fortemente às cores e à aparência de uma sala:          |\n");
    printf("0-------------------------------------------------------------------------0\n");

    printf("\n1 - ");
    scanf("%d", &nota[16]);

    while((nota[16]!=1)&&(nota[16]!=2)&&(nota[16]!=3)&&(nota[16]!=4)){

        printf("\nVALOR ATRIBU?DO INV?LIDO\nINSIRA VALOR V?LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[16]);

    };

    printf("\n1 - ");
    scanf("%d", &nota[17]);

    while((nota[17]!=1)&&(nota[17]!=2)&&(nota[17]!=3)&&(nota[17]!=4)){

        printf("\nVALOR ATRIBU?DO INV?LIDO\nINSIRA VALOR V?LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[17]);

    };

    printf("\n1 - ");
    scanf("%d", &nota[18]);

    while((nota[18]!=1)&&(nota[18]!=2)&&(nota[18]!=3)&&(nota[18]!=4)){

        printf("\nVALOR ATRIBU?DO INV?LIDO\nINSIRA VALOR V?LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[18]);

    };

    printf("\n1 - ");
    scanf("%d", &nota[19]);

    while((nota[19]!=1)&&(nota[19]!=2)&&(nota[19]!=3)&&(nota[19]!=4)){

        printf("\nVALOR ATRIBU?DO INV?LIDO\nINSIRA VALOR V?LIDO (1, 2, 3 ou 4)->");
        scanf("%d", &nota[19]);

    };

    cin = (nota[0]+nota[7]+nota[9]+nota[14]+nota[18])*2;
    aud = (nota[1]+nota[4]+nota[11]+nota[12]+nota[16])*2;
    vis = (nota[2]+nota[5]+nota[8]+nota[15]+nota[19])*2;
    dig = (nota[3]+nota[6]+nota[10]+nota[13]+nota[17])*2;

    system("cls");
    printf("0-----------------------------0\n");
    printf("| O TESTE INDICOU QUE VOCÊ É: |\n");
    printf("| %d%% CINESTÉSICO            |\n",cin);
    printf("| %d%% AUDITIVO               |\n",aud);
    printf("| %d%% VISUAL                 |\n",vis);
    printf("| %d%% DIGITAL                |\n",dig);
    printf("0-----------------------------0\n\n");

    do{
        printf("0----------------------------------------------0\n");
        printf("| Deseja ler sobre alguma das caracteristicas? |\n");
        printf("| 1: VISUAL                                    |\n");
        printf("| 2: CINESTÉSICO                               |\n");
        printf("| 3: AUDITIVO                                  |\n");
        printf("| 4: DIGITAL                                   |\n");
        printf("| 5: SAIR                                      |\n");
        printf("0----------------------------------------------0\n");
        scanf("%d",&LER);

        switch (LER){
        case(1):

            system("color 05");

            system("cls");
            printf("0=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=0\n");
            printf("| O que significa ser VISUAL ?                                                                                                                                                              |\n");
            printf("| A pessoa com predominância do canal VISUAL é ligada na beleza e estética, em formas e detalhes. Tem uma postura corporal rígida e sua respiração é torácica.                              |\n");
            printf("| Ela fala muito rapidamente porque as imagens se sucedem em sua mente como um filme. Entre o prático e o bonito, a pessoa VISUAL sempre escolherá o bonito. É uma                          |\n");
            printf("| pessoa que preza por arrumação e ordem e para atender o que lhe dizem, a pessoa VISUAL precisa que ""mostrem"" o que é, não dá tanto valor às palavras e nem sempre                       |\n");
            printf("| reage bem ao toque, ao contrário da pessoa Cinestésica.                                                                                                                                   |\n");
            printf("| A pessoa em que predomina o modelo visual é mais rápida, ansiosa, agitada e impulsiva. Quanto mais visual, mais é mandona, franca e sincera.                                              |\n");
            printf("| Bons chefes, gerentes e gestores, em geral, são visuais. Outros elementos importantes são a capacidade de desempenhar várias tarefas ao mesmo tempo, gostar de prazos apertados, implantar|\n");
            printf("| projetos e cumprir metas. São pessoas que costumam projetar o futuro, prestam atenção aos detalhes, gostam de organização e harmonia, sua aprendizagem é                                  |\n");
            printf("| estimulada por meios de imagens, cores, formatos e luzes                                                                                                                                  |\n");
            printf("| Técnicas de estudo e assimilação para pessoas VISUAIS:                                                                                                                                    |\n");
            printf("| Sublinhar, usar diferentes cores, marcadores, fluxogramas, desenhos, pôsteres, slides, palestrantes que gesticulam e utilizam linguagem cênica, pictórica, livros,                        |\n");
            printf("| texto com diagramas e figuras, gráficos, símbolos.                                                                                                                                        |\n");
            printf("0=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=0\n");

        break;


        case(2):

            system("color 0F");

            system("cls");
            printf("0======================================================================================================================================================================0\n");
            printf("| O que significa ser CINESTÉSICO ?                                                                                                                                    |\n");
            printf("| São as pessoas que gostam de tocar e sentir as coisas do mundo. Sensações e sentimentos são palavras chave de suas decisões. Seu processo de aprendizagem é          |\n");
            printf("| rápido ao se envolverem com o conteúdo e são expostas a estímulos práticos de execução de experimentos e interação em grupo.                                         |\n");
            printf("| A pessoa com predominância do canal CINESTÉSICO dos 3 tipos, o mais sujeito ao sofrimento. Para esta pessoa todas as experiências são físicas.                       |\n");
            printf("| Esta pessoa prefere conforto a beleza e busca sempre o bem-estar, o prazer e o aconchego. Este tipo de pessoa precisa ser abraçaada, tocada, beijada                 |\n");
            printf("| para que se sinta amada. Ela prefere roupas velhas e confortáveis, sapatos que não apertam, nadar, pisar na areia, estar junto da natureza.                          |\n");
            printf("| As pessoas CINESTÉSICAS possuem o tom de voz baixo, ritmo lento e respiração abdominal. Gostam de músicas lentas e baladas e se                                      |\n");
            printf("| sentem agredidas quando não são correspondidas em sua necessidade de contato corporal. É socialmente orientado. Gosta de gente, de falar,                            |\n");
            printf("| de aparecer; adora eventos, festas e oportunidades para comunicação. A desordem reina, mas a criatividade é solta. É extrovertido                                    |\n");
            printf("| e precisa trabalhar em equipe. Gosta de correr riscos, prefere trabalhar na rua ou em funções que exijam contato com pessoas ou expressão verbal de ideias.          |\n");
            printf("| Técnicas de estudo e assimilação para pessoas CINESTÉSICAS:                                                                                                          |\n");
            printf("| Todos os seus sentidos - visão, tato, paladar, olfato, audição, laboratórios, viagens de campo, passeios de campo/excursões, exemplos de princípios                  |\n");
            printf("| Palestras que dão exemplos da vida real, aplicações, abordagens mão na massa, (informática), tentativa e erro, coleções de tipos de pedras, plantas, conchas, grama  |\n");
            printf("| Exibições, amostras, fotografias, receitas - soluções para problemas, folhas de provas antigas.                                                                      |\n");
            printf("0======================================================================================================================================================================0\n");

        break;

        case(3):

            system("color 04");

            system("cls");
            printf("0------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------0\n");
            printf("| O que significa ser AUDITIVO ?                                                                                                                                                     |\n");
            printf("| A pessoa com predominância AUDITIVA, não dá grande valor às aparências, mas sim ao bom papo, bom senso e inteligência. São equilibradas e estão sempre prontas                     |\n");
            printf("| para discutir os problemas pois acreditam na lógica dos argumentos. O tom da voz é médio, a respiração é torácica e abdominal.                                                     |\n");
            printf("| A memória para os sons é fantástica: são capazes de lembrar-se de coisas que lhes foram ditas há muitos anos atrás.                                                                |\n");
            printf("| O barulho, vozes estridentes ou ásperas ferem as pessoas auditivas. Apreciam músicas com letras bem elaboradas, que passam uma mensagem consistente.                               |\n");
            printf("| Para ter certeza de alguma coisa, o auditivo precisa ouvir, do contrário, não acreditará.                                                                                          |\n");
            printf("| Consegue se concentrar e guardar informações apenas ouvindo-as, gosta de música e de falar ao telefone, com pensamento lógico e prático, é uma pessoa que busca ação e pioneirismo |\n");
            printf("| É uma pessoa mais calma, tranquila, ponderada; prefere ouvir do que falar; é detalhista, organizada, tímida e perfeccionista. Prefere o previsível e a rotina.                     |\n");
            printf("| É mais focada em tarefas e processos do que em gente, ilustra. É rígido e formal. Gosta de tabelas, gráficos, concentração; é alguém que não se importa de                         |\n");
            printf("| ter de refazer várias vezes as mesmas coisas, contanto que estejam corretas. Para um auditivo, trabalhar com análises e cálculos é um prazer                                       |\n");
            printf("| Técnicas de estudo e assimilação para pessoas AUDITIVAS:                                                                                                                           |\n");
            printf("| Participe das aulas, Participe das discussões e tutoriais, Discuta tópicos com outras pessoas, Discuta tópicos com seus professores, Explique novas ideias para outras pessoas     |\n");
            printf("| Utilize um gravador, Lembre-se dos exemplos interessantes, histórias, piadas, Descreva os títulos, figuras e outros aspectos visuais para alguém que não estava lá                 |\n");
            printf("| Deixe espaços em suas anotações para um repasse posterior ou preenchimento?                                                                                                        |\n");
            printf("0------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------0\n");

        break;

        case(4):

            system("color 02");

            system("cls");
            printf("0################################################################################################################################################################################################################################0\n");
            printf("| O que significa ser DIGITAL ?                                                                                                                                                                                                  |\n");
            printf("| Você já percebeu que na sua cabeça tem uma voz que conversa com você? Essa voz às vezes aparece pra fazer perguntas ou criticar algumas coisas.                                                                                |\n");
            printf("| Mas, também para responder e entender o porquê das coisas. A pessoa digital é a pessoa que convive com essa voz com mais ênfase.                                                                                               |\n");
            printf("| Vive conversando com ela mesma. Até quando conversa com outra pessoa, ela conversa ao mesmo tempo com ela mesma, na mente dela.                                                                                                |\n");
            printf("| Lembrando tem duas maneiras de aprender as coisas: através de fatores externos e internos. Então, a digital tem mais facilidade de aprender internamente.                                                                      |\n");
            printf("| Ela com ela mesma. Tipo uma filósofa. É inteligentíssima, desconfiada, crítica, curiosa e observadora. Precisa entender dos detalhes de tudo.                                                                                  |\n");
            printf("| Então, costuma fazer muitas perguntas. Quando ela ouve uma história, quer entender os detalhes e analisar para ver se faz sentido.                                                                                             |\n");
            printf("| Quando ela conta a história, comenta sobre o porque de todas as coisas que estão acontecendo. O lado ruim é que se ela não souber lidar com isso, vai acabar se estressando                                                    |\n");
            printf("| muito e também estressando os outros. Porque ninguém aguenta uma pessoa que fica enchendo o saco com todo tipo de pergunta né. Os pensamentos em sua mente a atrapalham em manter o foco.                                      |\n");
            printf("| Técnicas de estudo e assimilação para pessoas DIGITAIS:                                                                                                                                                                        |\n");
            printf("| Leia bastante conteúdo e reflita sobre. Se esforce até tudo fazer sentido pra você. Se esforce para ficar calmo e tranquilo. Pratique a meditação.                                                                             |\n");
            printf("| Não seja multitarefas, faça uma coisa de cada vez. Se concentre. Organize seus pensamentos. Pode ser que muita coisa que passa pela sua cabeça, não seja relevante. Então, tente analisar se seus pensamentos são importantes. |\n");
            printf("| Resolva exercícios (questões de provas mesmo) relacionados ao tema que quer aprender.                                                                                                                                          |\n");
            printf("0################################################################################################################################################################################################################################0\n");

        break;

        case(5):

            system("cls");

            LER=5;

            system("color 06");


        break;

        default:

            system("cls");

            printf("ENTRADA INVÁLIDA! DIGITE NOVAMENTE:\n");
        printf("0----------------------------------------------0\n");
        printf("| Deseja ler sobre alguma das características? |\n");
        printf("| 1: VISUAL                                    |\n");
        printf("| 2: CINESTÉSICO                               |\n");
        printf("| 3: AUDITIVO                                  |\n");
        printf("| 4: DIGITAL                                   |\n");
        printf("| 5: SAIR                                      |\n");
        printf("0----------------------------------------------0\n");
        scanf("%d",&LER);

        break;

        }


    }while(LER!=5);

}

void ROT_REL(){

    int soma[4], r[10];
    char atv[50],atv2[50];

    setlocale(LC_ALL, "Portuguese");

    system("cls");
    printf("0------------------------------------------------------------------------------------------------------------------------------------------------------0\n");
    printf("| Olá, seja bem-vindo(a) ao questionário de perfil de produtividade da nossa agenda. Ele o ajudará a traçar um perfil produtivo e otimizará sua rotina!| \n");
    printf("0------------------------------------------------------------------------------------------------------------------------------------------------------0\n\n");

    //printf("Ser?o x perguntas\n\n");

    printf("POR FAVOR, RESPONDA\n\n");

    printf("0-----------------------------0\n");
    printf("| Em qual destes você dorme?  |\n");
    printf("| 1- Madrugada(00h a 06h)     |\n");
    printf("| 2- Manhã(06h às 12h)        |\n");
    printf("| 3- Tarde(12h até 18h)       |\n");
    printf("| 4- Noite(18h até 00h)       |\n");
    printf("0-----------------------------0\n");
    scanf("%d", &r[0]);

    while((r[0]!=1)&&(r[0]!=2)&&(r[0]!=3)&&(r[0]!=4)){

        printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &r[0]);

    };

    if(r[0] == 1){

        soma[0] = 0;
        soma[1] = 5;
        soma[2] = 5;
        soma[3] = 5;
    }

    if(r[0] == 2){

        soma[0] = 5;
        soma[1] = 0;
        soma[2] = 5;
        soma[3] = 5;
    }

    if(r[0] == 3){

        soma[0] = 5;
        soma[1] = 5;
        soma[2] = 0;
        soma[3] = 5;
    }

    if(r[0] == 4){

        soma[0] = 5;
        soma[1] = 5;
        soma[2] = 5;
        soma[3] = 0;
    }

    system("cls");

    printf("0---------------------------------------------------------0\n");
    printf("| Qual dos perfis a seguir mais te representa no momento? |\n");
    printf("| 1-Estuda e trabalha                                     |\n");
    printf("| 2-Somente estuda                                        |\n");
    printf("| 3-Somente trabalha                                      |\n");
    printf("| 4-Nenhuma das opções anteriores                         |\n");
    printf("0---------------------------------------------------------0\n");
    scanf("%d", &r[9]);

    while((r[0]!=1)&&(r[9]!=2)&&(r[9]!=3)&&(r[9]!=4)){

        printf("\nValor atribuédo inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
        scanf("%d", &r[9]);

    };

    if(r[9] == 1)
    {
        system("cls");

        printf("0---------------------------------------------------------0\n");
        printf("| Em qual horário você costuma estudar?                   |\n");
        printf("| 1- Madrugada(00h a 06h)                                 |\n");
        printf("| 2- Manhã(06h às 12h)                                    |\n");
        printf("| 3- Tarde(12h até 18h)                                   |\n");
        printf("| 4- Noite(18h até 00h)                                   |\n");
        printf("0---------------------------------------------------------0\n");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

            printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
            scanf("%d", &r[1]);

        };

        if(r[1]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

        system("cls");

        printf("0---------------------------------------------------------0\n");
        printf("| Em qual horário você trabalha?                          |\n");
        printf("| 1- Madrugada(00h a 06h)                                 |\n");
        printf("| 2- Manhã(06h às 12h)                                    |\n");
        printf("| 3- Tarde(12h até 18h)                                   |\n");
        printf("| 4- Noite(18h até 00h)                                   |\n");
        printf("0---------------------------------------------------------0\n");
        scanf("%d", &r[2]);

        while((r[2]!=1)&&(r[2]!=2)&&(r[2]!=3)&&(r[2]!=4)){

            printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
            scanf("%d", &r[2]);

        };

        if(r[2]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[2]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[2]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[2]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    if(r[9] == 2){

        system("cls");

        printf("0---------------------------------------------------------0\n");
        printf("| Em qual horário você costuma estudar?                   |\n");
        printf("| 1- Madrugada(00h a 06h)                                 |\n");
        printf("| 2- Manhã(06h às 12h)                                    |\n");
        printf("| 3- Tarde(12h até 18h)                                   |\n");
        printf("| 4- Noite(18h até 00h)                                   |\n");
        printf("0---------------------------------------------------------0\n");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

            printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
            scanf("%d", &r[1]);

        };

        if(r[1]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    if(r[9] ==3){

        system("cls");
        printf("0---------------------------------------------------------0\n");
        printf("| Em qual horário você costuma trabalhar?                 |\n");
        printf("| 1- Madrugada(00h a 06h)                                 |\n");
        printf("| 2- Manhã(06h às 12h)                                    |\n");
        printf("| 3- Tarde(12h até 18h)                                   |\n");
        printf("| 4- Noite(18h até 00h)                                   |\n");
        printf("0---------------------------------------------------------0\n");
        scanf("%d", &r[1]);

        while((r[1]!=1)&&(r[1]!=2)&&(r[1]!=3)&&(r[1]!=4)){

            printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
            scanf("%d", &r[1]);

        };

        if(r[1]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[1]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    system("cls");

    printf("0------------------------------------------------------------------------------------0\n");
    printf("| Você pratica um hobby, esporte, atividade ou então alguma compromisso toda semana? |\n");
    printf("| 1-Sim                                                                              |\n");
    printf("| 2-Não                                                                              |\n");
    printf("0------------------------------------------------------------------------------------0\n");
    scanf("%d", &r[3]);

    while((r[3]!=1)&&(r[3]!=2)){

        printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1 ou 2)->");
        scanf("%d", &r[3]);

    };

    if(r[3]==1){

        system("cls");
        printf("0--------------------------------0\n");
        printf("| Digite o nome dessa atividade: |\n");
        printf("0--------------------------------0\n");
        fflush(stdin);
        scanf("%[^\n]", atv);

        printf("0----------------------------------0\n");
        printf("| Digite o horário dessa atividade |\n");
        printf("| 1- Madrugada(00h a 06h)          |\n");
        printf("| 2- Manhã(06h às 12h)             |\n");
        printf("| 3- Tarde(12h até 18h)            |\n");
        printf("| 4- Noite(18h até 00h)            |\n");
        printf("0----------------------------------0\n");
        scanf("%d", &r[4]);

        while((r[4]!=1)&&(r[4]!=2)&&(r[4]!=3)&&(r[4]!=4)){

            printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
            scanf("%d", &r[4]);

        };

        if(r[4]==1){

            soma[0] = soma[0] + 0;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[4]==2){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 0;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 5;

        }

        if(r[4]==3){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 0;
            soma[3] = soma[3] + 5;

        }

        if(r[4]==4){

            soma[0] = soma[0] + 5;
            soma[1] = soma[1] + 5;
            soma[2] = soma[2] + 5;
            soma[3] = soma[3] + 0;

        }

    }

    while (r[6]!=2){

        system("cls");

        printf("0---------------------------------------------------------------------------------------------------0\n");
        printf("| Há mais alguma atividade que deseja informar? Ex: Faxina, cozinhar, cuidar de um pet ou de alguém |\n");
        printf("| 1-Sim                                                                                             |\n");
        printf("| 2-Não                                                                                             |\n");
        printf("0---------------------------------------------------------------------------------------------------0\n");
        scanf("%d", &r[6]);

        while((r[6]!=1)&&(r[6]!=2)){

            printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1 ou 2)->");
            scanf("%d", &r[6]);

        };

        switch (r[6]){

        case 1:

            system("cls");
            printf("0-------------------------------0\n");
            printf("| Digite o nome dessa atividade |\n");
            printf("0-------------------------------0\n");
            fflush(stdin);
            scanf("%[^\n]", atv2);

            system("cls");

            printf("0-----------------------------------------------0\n");
            printf("| Digite o turno que esta atividade é executada:|\n");
            printf("| 1- Madrugada(00h a 06h)                       |\n");
            printf("| 2- Manhã(06h às 12h)                          |\n");
            printf("| 3- Tarde(12h até 18h)                         |\n");
            printf("| 4- Noite(18h até 00h)                         |\n");
            printf("0-----------------------------------------------0\n");
            scanf("%d", &r[7]);

            while((r[7]!=1)&&(r[7]!=2)&&(r[7]!=3)&&(r[7]!=4)){

                printf("\nValor atribuído inválido\nINSIRA VALOR VÁLIDO (1, 2, 3 ou 4)->");
                scanf("%d", &r[7]);

            };

            system("cls");

            printf("0-----------------------------------------------------0\n");
            printf("| Quantas vezes na semana essa atividade é executada? |\n");
            printf("0-----------------------------------------------------0\n");
            scanf("%d", &r[8]);

            if(r[7]==1){

                soma[0] = soma[0] + 0;
                soma[1] = soma[1] + 5;
                soma[2] = soma[2] + 5;
                soma[3] = soma[3] + 5;

            }

            if(r[7]==2){

                soma[0] = soma[0] + 5;
                soma[1] = soma[1] + 0;
                soma[2] = soma[2] + 5;
                soma[3] = soma[3] + 5;

            }

            if(r[7]==3){

                soma[0] = soma[0] + 5;
                soma[1] = soma[1] + 5;
                soma[2] = soma[2] + 0;
                soma[3] = soma[3] + 5;

            }

            if(r[7]==4){

                soma[0] = soma[0] + 5;
                soma[1] = soma[1] + 5;
                soma[2] = soma[2] + 5;
                soma[3] = soma[3] + 0;

            }

            break;

        default:

            if(r[6] != 2)

            {
                printf("valor inválido, deseja retornar e digitar um valor válido? \n1-Sim  \n2-Não\n");
                scanf("%d", &r[6]);
            }
            break;

        }
    }

            system("cls");
            printf("0----------------------0\n");
            printf("|      RESULTADOS      |\n");
            printf("0----------------------0\n");

            printf("madrugada: %d pontos\n", soma[0]);
            printf("manh?: %d pontos\n", soma[1]);
            printf("tarde: %d pontos\n", soma[2]);
            printf("noite: %d pontos\n", soma[3]);

            printf("OBS:\n");

            printf("0------------------------------------------------------------------------------------------------------------------------0\n");
            printf("| OS TURNOS COM MENOS PONTOS SÃO OS MENOS INDICADOS PARA AGENDAR ATIVIDADES, VISTO QUE SÃO OS MAIS PRODUTIVOS/OCUPADOS   |\n");
            printf("| OS TURNOS COM MESMA QUANTIDADE DE PONTOS TEM PRODUTIVIDADE SEMELHANTE                                                  |\n");
            printf("| OS TURNOS COM MAIS PONTOS SÃO INDICADOS PARA AGENDAR COMPROMISSOS                                                      |\n");
            printf("0------------------------------------------------------------------------------------------------------------------------0\n\n");


}

#endif
