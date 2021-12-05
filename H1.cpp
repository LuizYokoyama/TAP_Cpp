
#include <iostream>
#include <string>


using namespace std;

int main() {



    int n, m, qtd= 0;
    int i, j, k, w, menor, maior;


    cin >> n >> m;

    int ax[n], ay[n], achada[n];
    char var[m], igual;
    int pos[m];

    for (i=0; i<n; i++){
        cin >> ax[i] >> ay[i];
        achada[i]=0;

    }



    for (i=0; i<m; i++){
        cin >> var[i] >> igual >> pos[i];
    }

    for (i=0; i<m; i++){
        if (var[i]=='x'){
            for (j=0; j<n; j++){//varrendo o eixo y

                    maior=-9999999;
                    for (k=0; k<n; k++){
                      if ((ax[k]>maior) &&( ax[k] < pos[i])) maior= ax[k];
                    }
                    for (k=0; k<n; k++){//varrendo o eixo x <
                        if (ax[k]==pos[i]){
                            achada[k]=1;
                            break;
                        }
                        if ((ax[k] < pos[i]) && (ax[k]==maior) ){
                            if (!achada[k]){
                                qtd++;
                                achada[k]=1;
                                break;
                            }

                        }
                    }

                    menor=9999999;
                    for (k=0; k<n; k++){
                      if ((ax[k]<menor) && (ax[k] > pos[i])) menor= ax[k];
                    }


                    for (k=0; k<n; k++){//varrendo o eixo x >

                            if (ax[k]==pos[i]){
                            achada[k]=1;
                            break;
                        }
                             if ((ax[k] > pos[i]) && (ax[k]==menor) ){
                            if (!achada[k]){
                                qtd++;
                                achada[k]=1;
                                break;
                            }

                        }


                    }
            }
        }else if (var[i]=='y'){
            for (j=0; j<n; j++){

                    maior=-9999999;
                    for (k=0; k<n; k++){
                      if ((ay[k]>maior) &&( ay[k] < pos[i])) maior= ay[k];
                    }
                    for (k=0; k<n; k++){
                        if (ay[k]==pos[i]){
                            achada[k]=1;
                            break;
                        }
                        if ((ay[k] < pos[i]) && (ay[k]==maior) ){
                            if (!achada[k]){
                                qtd++;
                                achada[k]=1;
                                break;
                            }

                        }
                    }

                    menor=9999999;
                    for (k=0; k<n; k++){
                      if ((ay[k]<menor) && (ay[k] > pos[i])) menor= ay[k];
                    }


                    for (k=0; k<n; k++){

                            if (ay[k]==pos[i]){
                            achada[k]=1;
                            break;
                        }
                             if ((ay[k] > pos[i]) && (ay[k]==menor) ){
                            if (!achada[k]){
                                qtd++;
                                achada[k]=1;
                                break;
                            }

                        }


                    }
            }
        }
    }



    cout << qtd << "\n";
    return 0;
}
