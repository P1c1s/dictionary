#include<stdlib.h>
#include<stdio.h>

void generation(int event){
   char v[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9','-','_','+','?','!','@'};
   int length=68;

   FILE *fd;

   //Open file append mode
   fd=fopen("dictionary.txt", "a");

   //Check if file is openable
   if( fd==NULL ) {
      perror("Errore in apertura del file");
      exit(1);
   }

   //p1 => n^k with n=length of array and k=1
   if(event==1)
      for(int a=0; a<length; a++){
         fprintf(fd, "%c\n", v[a]);
      }

   //p2 => n^k with n=length of array and k=2
   if(event==2)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            fprintf(fd, "%c%c\n", v[a], v[b]);
         }
      }

   //p3 => n^k with n=length of array and k=3
   if(event==3)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               fprintf(fd, "%c%c%c\n", v[a], v[b], v[c]);
            }
         }
      }

   //p4 => n^k with n=length of array and k=4
   if(event==4)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  fprintf(fd, "%c%c%c%c\n", v[a], v[b], v[c], v[d]);
               }
            }
         }
      }

   //p5 => n^k with n=length of array and k=5
   if(event==5)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     fprintf(fd, "%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e]);
                  }
               }
            }
         }
      }

   //p6 => n^k with n=length of array and k=6
   if(event==6)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     for(int f=0; f<length; f++){
                        fprintf(fd, "%c%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e], v[f]);
                     }
                  }
               }
            }
         }
      }

   //p7 => n^k with n=length of array and k=7
   if(event==7)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     for(int f=0; f<length; f++){
                        for(int g=0; g<length; g++){
                           fprintf(fd, "%c%c%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e], v[f], v[g]);
                        }
                     }
                  }
               }
            }
         }
      }

   //p8 => n^k with n=length of array and k=8
   if(event==8)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     for(int f=0; f<length; f++){
                        for(int g=0; g<length; g++){
                           for(int h=0; h<length; h++){
                              fprintf(fd, "%c%c%c%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e], v[f], v[g], v[h]);
                           }
                        }
                     }
                  }
               }
            }
         }
      }

   //p9 => n^k with n=length of array and k=9
   if(event==9)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     for(int f=0; f<length; f++){
                        for(int g=0; g<length; g++){
                           for(int h=0; h<length; h++){
                              for(int i=0; i<length; i++){
                                 fprintf(fd, "%c%c%c%c%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e], v[f], v[g], v[h], v[i]);
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }

   //p10 => n^k with n=length of array and k=10
   if(event==10)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     for(int f=0; f<length; f++){
                        for(int g=0; g<length; g++){
                           for(int h=0; h<length; h++){
                              for(int i=0; i<length; i++){
                                 for(int j=0; j<length; j++){
                                    fprintf(fd, "%c%c%c%c%c%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e], v[f], v[g], v[h], v[i], v[j]);
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

   //p11 => n^k with n=length of array and k=11
   if(event==11)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     for(int f=0; f<length; f++){
                        for(int g=0; g<length; g++){
                           for(int h=0; h<length; h++){
                              for(int i=0; i<length; i++){
                                 for(int j=0; j<length; j++){
                                    for(int k=0; k<length; k++){
                                       fprintf(fd, "%c%c%c%c%c%c%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e], v[f], v[g], v[h], v[i], v[j], v[k]);
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


   //p12 => n^k with n=length of array and k=12
   if(event==12)
      for(int a=0; a<length; a++){
         for(int b=0; b<length; b++){
            for(int c=0; c<length; c++){
               for(int d=0; d<length; d++){
                  for(int e=0; e<length; e++){
                     for(int f=0; f<length; f++){
                        for(int g=0; g<length; g++){
                           for(int h=0; h<length; h++){
                              for(int i=0; i<length; i++){
                                 for(int j=0; j<length; j++){
                                    for(int k=0; k<length; k++){
                                       for(int l=0; l<length; l++){
                                          fprintf(fd, "%c%c%c%c%c%c%c%c%c%c%c%c\n", v[a], v[b], v[c], v[d], v[e], v[f], v[g], v[h], v[i], v[j], v[k], v[l]);
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

   //Close the file
   fclose(fd);

   return;
}


int main(){


   // Write the funcion and put a number between 1 and 12. 1 ==> n^1; 2 ==> n^2; ...; 12 ==> n^12
   generation(1); //68^1 combinations (a,b,c,...,@)
   generation(2); //68^2 combinations (aa,ba,cz,...,@@)
   return 0;
}
