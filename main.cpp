#include <iostream>
using namespace std;

int main()
{
   int idade;
   
   bool febre, tosse, outroSintoma;
   bool faltaAr, aumentoFreqRespiratoria, dorToraxica, sensacaoDesmaio;
   bool hipertensao, diabetes, outraDoencaCronica;
   bool doencaCoronariana, doencaCronica;
   
   bool  possuiSinaldeAlarme, possuiFatordeRisco;
   
   bool situacaoGrave;
   
   cout << "Triagem Para Covid-19";
   cout << "\n Qual a idade do paciente?";
   cin >> idade;
   
   if (idade < 0 || idade > 120){
       cout << "Idade Inválida";
   }
   
   cout << "Responda [S] para SIM e [N] para NÃO";
   
   cout << "\n Paciente com febre? ";
   cin >> febre;
   
   cout << "\n Paciente com tosse? ";
   cin >> tosse;
   
   cout << "\n Paciente com outro sintoma? ";
   cin >> outroSintoma;
   
   if(!febre && !tosse && !outroSintoma){
       cout << "\n Nenhuma recomendação expecífica";
   }
   else{
       cout << "\n Sinais de Alarme";
       
       cout <<"\n Paciente com falta de ar?";
       cin >> faltaAr;
       
       cout << "\n Paciente com aumento de frequência respiratória?";
       cin >> aumentoFreqRespiratoria;
       
       cout << "\n Paciente com dor toráxica?";
       cin >> dorToraxica;
       
       cout << "\n Paciente com sensação de desmaio?";
       cin >> sensacaoDesmaio;
       
       possuiSinaldeAlarme = faltaAr 
       || aumentoFreqRespiratoria 
       || dorToraxica 
       || sensacaoDesmaio;
       
       if(idade < 18){
           cout << "\n Fatores de risco para menores:";
           
           cout << "\n Paciente com hipertensão arterial sistêmica?";
           cin >> hipertensao;
           
           cout <<"\n Paciente com diabetes melito?";
           cin >> diabetes;
           
           cout <<"\n Paciente com outras doenças crônicas?";
           cin >> outraDoencaCronica;
           
           possuiFatordeRisco = hipertensao || diabetes || outraDoencaCronica;
       }
       else{
           cout <<"\n Fatores de risco para maiores";
           
           cout << "\n Paciente com doença crônica prévia?";
           cin >> doencaCoronariana;
           
           cout << "\n Paciente com doença crônica descompensada?";
           cin >> doencaCronica;
           
           possuiFatordeRisco = (idade > 65)
           || aumentoFreqRespiratoria
           || doencaCoronariana
           || doencaCronica;
       }
       
       if(possuiSinaldeAlarme || possuiFatordeRisco){
           cout << "\n Situação";
           
           cout << "\n Paciente com situação grave?";
           cin >> situacaoGrave;
           
           if(situacaoGrave){
               cout << "\n Encaminhar ambulância para o local";
           }
           else{
               cout << "\n Encaminhar para o sistema de saúde";
           }
       }
       else{
           cout << "\n Recomendar isolamento domiciliar";
       }
       
       cout << "\n Obrigado!";
       
       return 0;
      
   }
   
   
}
