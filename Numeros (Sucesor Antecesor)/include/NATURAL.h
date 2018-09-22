#ifndef NATURAL_H
#define NATURAL_H
#include <cmath>


class NATURAL
{
    public:
        NATURAL() {}

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Getc() { return c; }
        void Setc(int val) { c = val; }



        int veri(){
            int b=0;
             if(x == b){
                b=1;
             }else{
                 b=2;
             }
             return b;
        }

        int suce(){
            return Getx()+1;
        }
        int zero(){
            return Getx()- Getx();
        }

        int suma(int x,int c){
            x=Getx();
            c=Getc();
            return x+c;
            }
        int dif(int x,int c){
            x=Getx();
            c=Getc();
             return x-c;
            }
        int ante(){
            return Getx()-1;
        }
        int menor(){
            int a;
            if(Getx()<Getc()){
                a=Getx();
            }else{
                a=Getc();
            }
            return a;
        }

    protected:

    private:
        int x;
        int c;
};

#endif // NATURAL_H
