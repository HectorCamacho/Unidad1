#include "include/conjuntos.h"
#include <windows.h>
#include <iostream>
#define  tm 10
#include <stdio.h>



void opciones();
void mostrar_conjuntos();

  conjuntos c1;

 char letra;
 int opcion;

 int universo[20];
 int conjuntoA[tm] = {65,50,40,66,20,60,30,500,700,200};
 int conjuntoB[tm] = {3,4,13,4,500,700,42,7,6,8};
 int conjuntoc[tm]={ };
 using namespace std;
int main()
{
    do{

      cout << "\nDigite 0 para salir\n";
       opciones();
       cout << "****Opcion: ****"<<endl; cin>>opcion;
           switch(opcion){
           case 1:
               system("CLS");
               cout << "1.-Mostrar conjunto vacio"<<endl;
               c1.motrarVacio(conjuntoc);


               break;
           case 2:
              system("CLS");

               cout << "2.-Determinar si es vacio"<<endl;
               cout << "Determinar de los conjuntos: A, B, C"<<endl;
               cout <<"Digita la letra correspondiente al conjunto: ";
               cin>>letra;
                 if(letra == 'a'){
                        //c1.determinar(conjuntoA);
                          if(c1.determinar(conjuntoA)== 1){
                            cout << "El conjunto es vacio"<<endl;
                          }else{
                              cout << "El conjunto no es vacio"<<endl;
                             }
                   }if(letra == 'b'){
                              if(c1.determinar(conjuntoB) == 1){
                                cout << "El conjunto es vacio"<<endl;
                              }else{
                                  cout << "El conjunto no es vacio"<<endl;
                                 }
                        }if(letra=='c'){
                              c1.determinar(conjuntoc);
                              if(c1.determinar(conjuntoc)==1){
                                cout<<"El conjunto no es vacio"<<endl;
                              }
                              else{
                                cout << "El conjunto es vacio";
                              }
                        }

               break;
           case 3:
                system("CLS");
               cout << "3.-Aniadir elemento"<<endl;
               cout << "EL conjunto esta vacio: ";
               cout << "\nSi quieres verlo presiona S y si no presiona N: "; cin >>letra;
                  if(letra=='s'){
                        for (int i=0; i<10; i++){
                            cout << " "<<conjuntoc[i];
                        }
                  }
                  cout << "\nPresiona que cuantos elementos quieres añadir: ";cin>>opcion;
                  if(opcion>10){
                    cout << "Menor o igual a dies elementos";
                    cout << "\nPresiona que cuantos elementos quieres añadir: ";cin>>opcion;
                  }c1.Setx(opcion);
                  c1.aniadir(conjuntoc);
                  cout << "Se an añadido correctamente: AL CONJUNTO C \n";
                  cout <<"El conjunto quedo asi\n";
                  mostrar_conjuntos();

               break;
           case 4:
                 system("CLS");
               cout << "4.-Pertnece un elemento al conjunto"<<endl;
               cout << "Digite el elemento a buscar: "; cin>>opcion; c1.Setx(opcion);
               c1.verificar_existe(conjuntoA,conjuntoB, conjuntoc);

               break;
           case 5:
               system("CLS");
               cout << "5.-Retirar un elemento de un conjunto"<<endl;
               mostrar_conjuntos();c1.Setl(letra);

               cout << "\nDigita el elemento a elmiminar: ";cin>>opcion;
               c1.Setx(opcion);
               c1.eliminar(conjuntoA, conjuntoB, conjuntoc);
               mostrar_conjuntos();
               break;
           case 6:

               system("CLS");
               cout << "6.-Union"<<endl;
               cout << "Union entre el conjunto : "<<endl;
               cout << "conjunto A\n";

               c1.imprimir(conjuntoA);
               cout << "\nconjuto B\n";
               c1.imprimir(conjuntoB);
               cout << "La unio es : "<<endl;
               c1.unio(conjuntoA,conjuntoB,universo);


               break;
           case 7:
               system("CLS");
               cout << "7.-Interseccion"<<endl;
               c1.interseccion(conjuntoA, conjuntoB);


               break;
           case 8:
               system("CLS");
               cout << "8.-Diferencia"<<endl;
                cout << "conjunto A";
               c1.imprimir(conjuntoA);
               cout << "conjuto B";
               c1.imprimir(conjuntoB);
               cout << "Ver conjunto A-B: Presione 1: "<<endl;
               cout << "Ver conjunto B-A: Presione 2: "<<endl;cin>>opcion;c1.Setx(opcion);
               c1.diferencia(conjuntoA,conjuntoB);

               break;
           case 9:
               system("CLS");
               mostrar_conjuntos();

               break;

           case 10:
               cout << "9.-Salir"<<endl;
               break;
           default:
            break;
            system("CLS");
           }
    }while(opcion>0);


    return 0;
}



void opciones(){
    cout << "Seleccione que operacion desea hacer: "<<endl;

    cout << "1.-Mostrar conjunto vacio"<<endl;

    cout << "2.-Determinar si es vacio"<<endl;
    cout << "3.-Aniadir elemento"<<endl;
                      cout << "4.-Pertnece un elemento al conjunto"<<endl;
                      cout << "5.-Retirar un elemento de un conjunto"<<endl;
    cout << "6.-Union"<<endl;
    cout << "7.-Interseccion"<<endl;
                      cout << "8.-Diferencia"<<endl;
                      cout << "9.-Mostrar los conjuntos: A, B, C"<<endl;


}

void mostrar_conjuntos(){
    cout << "Mostrar los conjuntos: A, B, C"<<endl;
               cout <<"Digita la letra correspondiente al conjunto para mostrarlo: "<<endl;
               cin>>letra;
                  if(letra == 'a'){
                        c1.imprimir(conjuntoA);
                   }
                   if(letra=='b'){
                           c1.imprimir(conjuntoB);
                        }
                    if(letra=='c'){
                              c1.imprimir(conjuntoc);
                        }
}




