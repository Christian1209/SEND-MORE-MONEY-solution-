#include <iostream>

using namespace std;

int dmaseAcarreo(int *&de){
    if(*de>=10){
        *de = *de-10;
        return 1;
    }
    return 0;

}

int nmasrAcarreo(int *&nr){
    if(*nr>=10){
        *nr = *nr-10;
        return 1;
    }
    return 0;
}

int emasoAcarreo(int *&eo){
    if(*eo>=10){
        *eo = *eo-10;
        return 1;
    }
    return 0;

}

int smasmAcarreo(int *&sm){
    if(*sm>=10){
        *sm = *sm-10;
        return 1;
    }
    return 0;

}

bool sonDiferentes(int s, int e, int n, int d, int m, int o, int r, int y){
    if(s == e or s == n or s == d or s == m or s == o or s == r or s == y){
        return false;
    }
    if(e == s or e == n or e == d or e == m or e == o or e == r or e == y){
        return false;
    }
    if(n == s or n == e or n == d or n == m or n == o or n == r or n == y){
        return false;
    }
    if(d == s or d == e or d == n or d == m or d == o or d == r or d == y){
        return false;
    }
    if(m == s or m == e or m == d or m == n or m == o or m == r or m == y){
        return false;
    }
    if(o == s or o == e or o == d or o == m or o == n or o == r or o == y){
        return false;
    }
    if(y == s or y == e or y == d or y == m or y == o or y == r or y == n){
        return false;
    }
    return true;
}

int main()
{
    int prueba = 0;
    for(int s = 0; s < 10; s++){
        for(int e = 0; e < 10; e++){
            for(int n = 0; n < 10; n++){
               for(int d = 0; d < 10; d++){
                    for(int m = 0; m < 10; m++){
                        for (int o = 0; o < 10; o++){
                            for(int r = 0; r < 10; r++){
                                for(int y = 0; y < 10; y++){
                                        //int *de,*nr,*eo,*sm;
                                        int *de = new int();
                                        int *nr = new int();
                                        int *eo = new int();
                                        int *sm = new int();
                                        int maux;
                                        *de = (d+e);
                                        *nr = (n+r);
                                        *eo = (e+o);
                                        *sm = (s+m);
                                        //inico acarreos
                                        *nr = *nr + dmaseAcarreo(de);
                                        *eo = *eo + nmasrAcarreo(nr);
                                        *sm = *sm + emasoAcarreo(eo);
                                        maux = smasmAcarreo(sm);
                                        if(maux == 1 ){
                                            if(sonDiferentes(s,e,n,d,m,o,r,y)){
                                                if(*de == y and *nr == e and *eo == n and *sm == o and maux == m ){
                                                    cout<<"Encontre solucion:"<<endl;
                                                    cout<<" "<<s<<e<<n<<d<<endl;
                                                    cout<<" "<<m<<o<<r<<e<<endl;
                                                    cout<<"- - - - "<<endl;
                                                    cout<<maux<<o<<n<<e<<y<<endl;

                                                }
                                            }
                                        }


                                }
                            }

                        }
                    }
                }
            }
        }
    }
}
