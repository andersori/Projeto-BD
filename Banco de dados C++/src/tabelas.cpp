#include "tabelas.h"
#include <fstream>
#include <iostream>
#include <stdlib.h>

///Funções do CLIENTE
Cliente::Cliente(){
    //contrutor padrão, não faz nada em especial, so instancia o objeto
}
Cliente::Cliente(string nome, string tipo, unsigned int codigo){
    this->nome = nome;          //construtor sobrecarregado, podendo setar logo esse valores
    this->tipo = tipo;
    this->codigo = codigo;
}
bool Cliente::operator==(const Cliente& c) const{
    if(c.codigo == this->codigo){
        return true;
    }
    return false;
}

//GETS: usados para requisitar os valores do atributos privados dos clientes
string Cliente::get_nome(){
    return this->nome;  //'this' é um ponteiro para o proprio objeto
}
string Cliente::get_tipo(){
    return this->tipo;
}
unsigned int Cliente::get_codigo(){
    return this->codigo;
}

//SETS: usados para modificar o valor dos atributos dos objetos
void Cliente::set_codigo(unsigned int codigo){
    this->codigo = codigo;  //'this' é um ponteiro para o proprio objeto
}
void Cliente::set_nome(string nome){
    this->nome = nome;
}
void Cliente::set_tipo(string tipo){
    this->tipo = tipo;
}

void Cliente::salvar_no_arquivo(Inf_arquivos* informacoes){
    ofstream arquivo;
    arquivo.open("Arquivos/cliente.txt", ios::app);

    if(arquivo.is_open()){
        arquivo << this->nome << "\n" << this->tipo << "\n" << this->codigo << endl;
        Cliente cliente(this->nome,this->tipo,this->codigo);

        informacoes->clientes.push_back(cliente);
    }
    else{
        cout<<"Operacao nao concluida, o arquivo de 'clientes' nao pode ser aberto!!!"<<endl;
        system("pause");
    }


    arquivo.close();
}
//-------------------------------------------------------------------------------------







///Funções do PRODUTO
Produto::Produto(){
    //contrutor padrão, não faz nada em especial, so instancia o objeto
}
Produto::Produto(string nome, double valor, unsigned int codigo){
    this->nome = nome;      //construtor sobrecarregado, posibilita instanciar o objeto e setar alguns valores do objeto
    this->valor = valor;
    this->codigo = codigo;
}
bool Produto::operator==(const Produto& p) const{
    //isso é uma "sobrecarga de operador", estou sobrecarregando o operador "=" para ele ser usado
    //na função "find", ele serve para verificar se um objeto é igual a outro

    if(this->codigo == p.codigo){ //verificando se os codigos dos produtos são iguais, se forem, os obejtos são iguais
        return true;
    }
    return false;
}

//GETS: usados para requisitar os valores do atributos privados dos clientes
string Produto::get_nome(){
    return this->nome;
}
double Produto::get_valor(){
    return this->valor;
}
unsigned int Produto::get_codigo(){
    return this->codigo;
}

//SETS: usados para modificar o valor dos atributos dos objetos
void Produto::set_codigo(unsigned int cod){
    this->codigo = cod;
}
void Produto::set_nome(string nome){
    this->nome = nome;
}
void Produto::set_valor(double valor){
    this->valor = valor;
}

void Produto::salvar_no_arquivo(Inf_arquivos* informacoes){
    ofstream arquivo;
    arquivo.open("Arquivos/produto.txt", ios::app);

    if(arquivo.is_open()){
        arquivo << this->nome << "\n" << this->valor << "\n" << this->codigo << endl;
        Produto produto(this->nome, this->valor, this->codigo);

        informacoes->produtos.push_back(produto);
    }
    else{
        cout<<"Operacao nao concluida, o arquivo de 'clientes' nao pode ser aberto!!!"<<endl;
        system("pause");
    }

    arquivo.close();
}
//---------------------------------------------------------------------------------------








///Informações sobre fornecimento
Fornecimento::Fornecimento(){
    //contrutor padrão, não faz nada em especial, so instancia o objeto
}
bool Fornecimento::operator==(const Fornecimento& f) const{
    if(f.cod_venda == this->cod_venda){
        return true;
    }
    return false;
}

void Fornecimento::salvar_no_arquivo(Inf_arquivos* informacoes){
    ofstream arquivo;
    arquivo.open("Arquivos/fornecimento.txt", ios::app);

    arquivo << this->cod_venda << endl;
    arquivo << this->data_do_fornecimeno << endl;
    arquivo << this->data_da_entrega << endl;
    arquivo << this->pago << endl;
    arquivo << this->cod_cliente << endl;

    vector<inf_produtos>::iterator it;
    for(it = this->produtos.begin(); it != this->produtos.end();it++){
        arquivo << (*it).cod_produto << "\n" << (*it).qtd << "\n" << (*it).valor << endl;
    }
    arquivo << "#\n";
    arquivo.close();
}
//----------------------------------------------------------------------------------------







///Informações sobre os arquivos
Inf_arquivos::Inf_arquivos(){
    ifstream arq_clientes;  //Variaveis de manipulação de arquivos
    ifstream arq_produtos;  // --       --    --       --    --
    ifstream arq_fornecimento; //  --  --     --       --    --

    arq_clientes.open("Arquivos/cliente.txt", ios::in); //Abrindo os arquivos no caminhos especificado entre aspas
    arq_produtos.open("Arquivos/produto.txt", ios::in); //e abrindo o arquvos no modo "ios::in" que é somente para leitura.
    arq_fornecimento.open("Arquivos/fornecimento.txt", ios::in);

    if(arq_clientes.is_open()){ //se coceguio abrir
        while(!arq_clientes.eof()){ //Enquanto não for o final do arquivo fique lendo seus dados
            string nome;        //Variaveis temporarias para armazenar as informações de um registro no arquivo.
            string tipo;        //A cada 3 linhas no arquivo um novo registro é lido.
            string cod_sting;   //

            getline(arq_clientes, nome);        //pego a primeira linha de um registro, que corresponde ao nome do cliente

            if(nome[0] == '\0'){                //se o '\0' for encontrado então chegou no fim do arquivo
                break;                          //não tente armazenar nada nas proximas variaveis
            }

            getline(arq_clientes, tipo);        //a linha depois do nome corresponde ao tipo do cliente
            getline(arq_clientes, cod_sting);   //a proxima linha é o codigo do cliente, para não bugar a leitura do arquivo estou
                                                //usando a função getline, ele so armazena em variaveis do tipo string, por isso eu armazeno
                                                //na variavel "cod_string" e depois faço a converção dessa variavel para inteiro, na função abaixo

            unsigned int cod_int = atoi(cod_sting.c_str()); //convertendo o valor da string para int

            Cliente clien(nome,tipo,cod_int);   //gerando um objeto "Cliente"

            this->clientes.push_back(clien); //colocando numa lisata de clientes cadastrados
        }

        cout<<"------------------Arquivo cliente.txt------------------"<<endl;
        vector<Cliente>::iterator it;
        for(it = this->clientes.begin(); it != this->clientes.end(); it++){
            cout<<(*it).get_nome() <<", "<<(*it).get_tipo() << ", "<<(*it).get_codigo()<<endl;
        }
        cout<<endl<<endl;

        arq_clientes.close();   //Fechando o arquivo
    }
    else{
        cout<<"Não foi possivel abrir o aquivo clientes!"<<endl;
    }

    /*Tentando ler os produtos cadastrados*/
    if(arq_produtos.is_open()){

        while(!arq_produtos.eof()){
            string nome;
            string valor_string;
            string cod_string;

            getline(arq_produtos, nome);

            if(nome[0] == '\0'){
                break;
            }

            getline(arq_produtos, valor_string);
            getline(arq_produtos, cod_string);

            unsigned int cod_int = atoi(cod_string.c_str());    //Converte para inteiro
            double valor_doble = atof(valor_string.c_str());    //Converte para double

            Produto produto(nome, valor_doble, cod_int);
            this->produtos.push_back(produto);

        }

        cout<<"------------------Arquivo produto.txt------------------"<<endl<<endl;
        vector<Produto>::iterator it;
        for(it = this->produtos.begin(); it != this->produtos.end(); it++){
            cout<<(*it).get_nome() <<", "<<(*it).get_valor() << ", "<<(*it).get_codigo()<<endl;
        }
        cout<<endl<<endl;

        arq_produtos.close();
    }
    else{
        cout<<"Não foi possivel abrir o arquivo de produtos!"<<endl;
    }

    if(arq_fornecimento.is_open()){
        while(!arq_fornecimento.eof()){

            Fornecimento fornecimento;

            string cod_venda_string;
            unsigned int cod_venda_int;

            string data_do_fornecimeno;
            string data_da_entrega;

            string pago_string;
            bool pago_bool;

            string cod_cliente_string;
            unsigned int cod_cliente_int;

            getline(arq_fornecimento, cod_venda_string);

            if(cod_venda_string[0] == '\0'){
                break;
            }

            getline(arq_fornecimento, data_do_fornecimeno);
            getline(arq_fornecimento, data_da_entrega);
            getline(arq_fornecimento, pago_string);
            getline(arq_fornecimento, cod_cliente_string);

            cod_venda_int = atoi(cod_venda_string.c_str());
            pago_bool = atoi(pago_string.c_str());
            cod_cliente_int = atoi(cod_cliente_string.c_str());


            unsigned int cod_produto_int;
            unsigned int qtd_int;
            double valor_double;

            while(true){
                string cod_produto_string;
                string qtd_string;
                string valor_string;

                getline(arq_fornecimento, cod_produto_string);

                if(cod_produto_string[0] != '#'){
                    getline(arq_fornecimento, qtd_string);
                    getline(arq_fornecimento, valor_string);

                    cod_produto_int = atoi(cod_produto_string.c_str());
                    qtd_int = atoi(qtd_string.c_str());
                    valor_double = atof(valor_string.c_str());
                }
                else{
                    break;
                }

                Fornecimento::inf_produtos inf;
                inf.cod_produto = cod_produto_int;
                inf.qtd = qtd_int;
                inf.valor = valor_double;

                fornecimento.produtos.push_back(inf);

                //cout<<"aqui"<<endl;
                //cout<<cod_produto_int<< " "<< qtd_int<<" "<<valor_double<<endl;
                //system("pause");
            }


            fornecimento.cod_cliente = cod_cliente_int;
            fornecimento.cod_venda = cod_venda_int;
            fornecimento.data_do_fornecimeno = data_do_fornecimeno;
            fornecimento.data_da_entrega = data_da_entrega;
            fornecimento.pago = pago_bool;

            this->fornecimentos.push_back(fornecimento);
        }

        cout<<"------------------Arquivo fornecimento.txt-------------"<<endl<<endl;
        vector<Fornecimento>::iterator it;
        for(it = this->fornecimentos.begin(); it != this->fornecimentos.end(); it++){
            cout<<(*it).cod_venda <<", "<<(*it).data_do_fornecimeno << ", "<<(*it).cod_cliente<<endl;
        }
        cout<<endl<<endl;

        arq_fornecimento.close();
    }
    else{
        cout<<"Não foi possivel abrir o arquivo!"<<endl;
    }
}

void Inf_arquivos::relatorio_de_venda(unsigned int cod_venda){
    Fornecimento forn;
    forn.cod_venda = cod_venda;

    vector<Fornecimento>::iterator it_for;


    it_for = find(this->fornecimentos.begin(), this->fornecimentos.end(), forn);

    if(it_for != this->fornecimentos.end()){
        forn = *it_for;

        Cliente clien;
        clien.set_codigo((*it_for).cod_cliente);


        vector<Cliente>::iterator it_cli;
        it_cli = find(this->clientes.begin(), this->clientes.end(), clien);


        cout << endl << "- | Fornecimento numero " << forn.cod_venda <<", "<<forn.data_do_fornecimeno<<"."<<endl;
        cout << "- | Destino: "<<(*it_cli).get_tipo()<<" "<<(*it_cli).get_nome()<<"."<<endl;

        for(unsigned int i = 0; i < forn.produtos.size(); i++){
            Produto prod;
            prod.set_codigo(forn.produtos[i].cod_produto);

            vector<Produto>::iterator it_pro;
            it_pro = find(this->produtos.begin(), this->produtos.end(), prod);

            cout << "- | " << forn.produtos[i].qtd << " caixas de " << (*it_pro).get_nome() << ", RS " << (*it_for).produtos[i].valor<<" cada."<<endl;
        }

        if(forn.pago){
            cout<<"- | Pago na entrega, ("<<forn.data_da_entrega<<")."<<endl;
        }
        else{
            cout<<"- | Ainda nao foi paga."<<endl;
        }
    }
    else{
        cout<<"Codigo de venda invalido!!!"<<endl;
    }

    system("pause");
}
void Inf_arquivos::valor_total_fornecimento(unsigned int cod_venda){
    Fornecimento forn;
    forn.cod_venda = cod_venda;

    vector<Fornecimento>::iterator it;

    it = find(this->fornecimentos.begin(), this->fornecimentos.end(), forn);

    if(it != this->fornecimentos.end()){
        double valor_total = 0;
        forn = *it;

        vector<Fornecimento::inf_produtos>::iterator it_pro;
        for(it_pro = forn.produtos.begin(); it_pro != forn.produtos.end(); it_pro++){
            valor_total = ((*it_pro).valor * (*it_pro).qtd) + valor_total;
        }

        cout<<"O valor total do fornecimento "<<cod_venda<<" e de RS "<<valor_total<<endl;
    }
    else{
        cout<<"Codigo do fornecimento invalido!!!"<<endl;
    }

    system("pause");
}
void Inf_arquivos::listar_prod_venda(unsigned int cod_venda){
    Fornecimento forn;
    forn.cod_venda = cod_venda;

    vector<Fornecimento>::iterator it;

    it = find(this->fornecimentos.begin(), this->fornecimentos.end(), forn);

    if(it != this->fornecimentos.end()){
        Produto pro;
        forn = *it;

        vector<Fornecimento::inf_produtos>::iterator it_inf;
        for(it_inf = forn.produtos.begin(); it_inf != forn.produtos.end(); it_inf++){
            pro.set_codigo((*it_inf).cod_produto);

            vector<Produto>::iterator it_pro;
            it_pro = find(this->produtos.begin(), this->produtos.end(), pro);

            cout<<"- "<<(*it_pro).get_nome()<<endl;
        }
    }
    else{
        cout<<"Codigo do fornecimento invalido!!!"<<endl;
    }

    system("pause");
}
void Inf_arquivos::listar_devedores(){
    vector<Fornecimento>::iterator it_for;
    for(it_for = this->fornecimentos.begin(); it_for != this->fornecimentos.end(); it_for++){
        if((*it_for).pago == true){
            Cliente cli;
            cli.set_codigo((*it_for).cod_cliente);
            vector<Cliente>::iterator it_cli;

            it_cli = find(this->clientes.begin(), this->clientes.end(), cli);

            cout<<"- "<<(*it_cli).get_tipo()<<" "<<(*it_cli).get_nome()<<endl;
        }
    }

    system("pause");
}
void Inf_arquivos::listar_clientes(){
    vector<Cliente>::iterator it;
    for(it = this->clientes.begin(); it != this->clientes.end(); it++){
        cout<<"- "<<(*it).get_tipo()<<" "<<(*it).get_nome()<<endl;
    }
    system("pause");
}
void Inf_arquivos::listar_produtos(){
    vector<Produto>::iterator it;
    for(it = this->produtos.begin(); it != this->produtos.end(); it++){
        cout<<"- "<<(*it).get_nome() <<", Valor: " << (*it).get_valor()<<endl;
    }

    system("pause");
}



