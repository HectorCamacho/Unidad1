#ifndef CONJUNTOS_H
#define CONJUNTOS_H

#include <iostream>

using namespace std;

class conjuntos
{
    public:
       conjuntos() {}

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        char Getl() { return l; }
        void Setl(char val) { l = val; }

        void interseccion(int dat[], int dat1[]){//HALLAR LA INTERSECCION ENTRE LOS DOS CONJUNTOS
            for (int i=0; i<10; i++){
                for (int j=0; j<10; j++){
                        if(dat[i]==dat1[j]){
                            cout << " " << dat[i];
                        }

                }
            }
        }

        //MOSTAR UN CONJUNTO VACIO
        void motrarVacio(int dat[]){
            for (int i=0; i<10; i++){
                    if(dat[i]==0){
                       cout << " * " ;
                    }

        }
        }

        //IMPRIMIR UN CONJUTNO

        void imprimir(int dat[]){
            for (int i=0; i<10; i++){
                    if(dat[i]==0){
                       cout << " * " ;
                    }
               cout <<" "<< dat[i];

          }
        }

        //DETERMINAR SI ES VACIO
        int determinar(int dat[]){
            int a=0;
            for(int i=0; i<10; i++){
                if(dat[i]={ }){
                    a=1;
                }
            }
            return a;

        }

        //INGRESAR UN ELEMENTO
       void aniadir(int dat[]){
           for (int i=0; i<Getx(); i++){
            cout <<"Escriba el "<<i+1<<endl;
            cin>>dat[i];
           }

       }

          void verificar_existe(int dat[],int dat1[], int data[]){
            bool a=false, b=false, c=false;
            for(int i=0; i<10; i++){
                    for(int j=0; j<10; j++){
                        for (int k=0; k<10; k++){
                            if(Getx()== dat[i]){
                                a=true;
                            }
                            if(Getx()== dat1[j]){
                                b=true;
                            }
                            if(Getx()== data[k]){
                                c=true;
                            }
                        }
                    }
            }

            if(a==true){ //SI EL ELEMNTO EXITE EN EL CONJUNTO A SALDRA EL MENSAJE O SI NO SIGUAL;
                    //EVALUA CADA UNO DE LOS CONJUNTP UNO POR UNO
             cout << Getx() << " Si existe en conjunto A"<<endl;
            }else{ cout << "No existe en conjunto A "<<endl;}
            if(b==true){
                cout << Getx() << " si existe en conjunto B"<<endl;
            }else{ cout << "No existe en conjunto B"<<endl;}
            if(c==true){
                cout << Getx() << " si existe en conjunto C"<<endl;
            }else{ cout << "No existe en conjunto C"<<endl;}
          }

          int eliminar(int dat1[], int data[], int dat[]){
              if(Getl()=='a'){
                for (int i=0; i<10; i++){
                    if(Getx()==dat1[i]){
                        dat1[i]=0;
                    }
                }
              }//TERMINA IF
              if(Getl()=='b'){
                for(int j=0; j<10; j++){
                    if(Getx()== data[j]){
                        data[j]=0;
                    }
                }
              }//TERMINA IF
              if(Getl()=='c'){
                for (int k=0; k<10; k++){
                    if(Getx()==dat[k]){
                        dat[k]=0;
                    }
                }
              }
          }
         void unio(int data[], int data1[],int uni[]){
              for (int i=0; i<20; i++){
                    uni[i]=data[i];

              }for(int i=10; i<20; i++){
                  uni[i]=data1[i-10];
              }
              //mostrar vector
              for(int i=0; i<20; i++){
                  cout <<uni[i] <<" ";
                   }

         }

         void diferencia(int dat[], int data[]){
             if(Getx()==1){
                    cout << "A-B"<<endl;
                    for (int i=0; i<10; i++){
                        for (int j=0; j<10; j++){
                            if(dat[i]!=data[j]){

                            }else{
                            i++;}

                        }
                       cout << " "<<dat[i];
                    }
             }
             if(Getx()==2){
                    cout << "A-B"<<endl;
                    for (int i=0; i<10; i++){
                        for (int j=0; j<10; j++){
                            if(data[i]!=dat[j]){

                            }else{
                            i++;}

                        }
                       cout << " "<<data[i];
                    }
             }
         }


    protected:

    private:

        int x;
        char l;

};
#endif // CONJUNTOS_H
