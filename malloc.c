
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>

int i,j,k,po;

double **AB;
double **A;
double **B;




void MatAB_IJK_RL4(int n){
 for (i=0;i<n;i++){                                                 	
   for (j=0;j<n;j=j+4){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
       }
     
   }
}

}


void MatAB_IKJ_RL4(int n){
 for (i=0;i<n;i++){                                                 	
   for (k=0;k<n;k++){
     for (j=0;j<n;j=j+4){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
       }
     
   }
}

}


void MatAB_JIK_RL4(int n){
 for (j=0;j<n;j=j+4){                                                 	
   for (i=0;i<n;i++){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
      }
     
   }
}

}

void MatAB_JKI_RL4(int n){
 for (j=0;j<n;j=j+4){                                                 	
   for (k=0;k<n;k++){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
     }
   }
}

}


void MatAB_KIJ_RL4(int n){
 for (k=0;k<n;k++){                                                 	
   for (i=0;i<n;i++){
     for (j=0;j<n;j=j+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
   
     }
   }
}

}

void MatAB_KJI_RL4(int n){
 for (k=0;k<n;k++){                                                 	
   for (j=0;j<n;j=j+2){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      AB[k][j+2]=A[i][i]*B[k][j+2];
      AB[k][j+3]=A[i][i]*B[k][j+3];
   
     }
   }
}

}




void MatAB_IJK_RL2(int n){
 for (i=0;i<n;i++){                                                 	
   for (j=0;j<n;j=j+2){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
 
       }
     
   }
}

}


void MatAB_IKJ_RL2(int n){
 for (i=0;i<n;i++){                                                 	
   for (k=0;k<n;k++){
     for (j=0;j<n;j=j+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];

       }
     
   }
}

}


void MatAB_JIK_RL2(int n){
 for (j=0;j<n;j=j+2){                                                 	
   for (i=0;i<n;i++){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
      
      }
     
   }
}

}

void MatAB_JKI_RL2(int n){
 for (j=0;j<n;j=j+2){                                                 	
   for (k=0;k<n;k++){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
  
     }
   }
}

}


void MatAB_KIJ_RL2(int n){
 for (k=0;k<n;k++){                                                 	
   for (i=0;i<n;i++){
     for (j=0;j<n;j=j+2){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
 
   
     }
   }
}

}

void MatAB_KJI_RL2(int n){
 for (k=0;k<n;k++){                                                 	
   for (j=0;j<n;j=j+2){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];
      AB[k][j+1]=A[i][i]*B[k][j+1];
    
   
     }
   }
}

}
//------------------------------------------------------------------------------------------------------------


void MatAB_IJK(int n){
 for (i=0;i<n;i++){                                                 	
   for (j=0;j<n;j++){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];
       }
     
   }
}

}


void MatAB_IKJ(int n){
 for (i=0;i<n;i++){                                                 	
   for (k=0;k<n;k++){
     for (j=0;j<n;j++){
      AB[k][j]=A[i][i]*B[k][j];
       }
     
   }
}

}


void MatAB_JIK(int n){
 for (j=0;j<n;j++){                                                 	
   for (i=0;i<n;i++){
     for (k=0;k<n;k++){
      AB[k][j]=A[i][i]*B[k][j];

      }
     
   }
}

}

void MatAB_JKI(int n){
 for (j=0;j<n;j++){                                                 	
   for (k=0;k<n;k++){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];

     }
   }
}

}


void MatAB_KIJ(int n){
 for (k=0;k<n;k++){                                                 	
   for (i=0;i<n;i++){
     for (j=0;j<n;j++){
      AB[k][j]=A[i][i]*B[k][j];

     }
   }
}

}

void MatAB_KJI(int n){
 for (k=0;k<n;k++){                                                 	
   for (j=0;j<n;j++){
     for (i=0;i<n;i++){
      AB[k][j]=A[i][i]*B[k][j];

     }
   }
}

}

int main(){

   //time_t end;
   int n =256;
   printf("Init"); 

  
   ///Alocação de matrizes///
   AB  = (double **)calloc(n,sizeof(double*));
   A   = (double **)calloc(n,sizeof(double*));
   B   = (double**)calloc(n,sizeof(double*));
   
   
   for(i=0;i<n;i++){
     A[i]  = (double *) calloc(n,sizeof(double));
     B[i]  = (double *) calloc(n,sizeof(double));
     AB[i] = (double *) calloc(n,sizeof(double));	
   }
   
   
   //Matriz A -> Matriz Identidade
   for(i=0;i<n;i++){ 
	 for(j=0;j<n;j++){
	    if(i == j)
	      A[i][j] = 1;
	    else
	      A[i][j] = 0;
	
	 }
   }
   

	
     //Matriz B -> f(x) = (5*(i+j))^2
     for(i=0;i<n;i++){
	   for(j=0;j<n;j++){
	       po = 5 * (i+j); 
	       B[i][j] = (po*po) +1;
		   			 
	  }		 
	  
   }  
   

     /*   
for(int i=0;i<3;i++){	
   end =  clock();
   MatAB_IJK(n);
   printf("\nLoop-RL:%iTempo_IJK: %.3f\tbytes-%d",i,(double) (clock() - end)/CLOCKS_PER_SEC,n);	
	
 
   end =  clock();
   MatAB_IKJ(n);
   printf("\nLoop-RL:%iTempo_IKJ: %.3f\tbytes-%d",i,(double) (clock() - end)/CLOCKS_PER_SEC,n);
   

   end =  clock();
   MatAB_JIK(n);
   rintf("\nLoop-RL:%iTempo_JIK: %.3f\tbytes-%d",i,(double) (clock() - end)/CLOCKS_PER_SEC,n);
   
   end =  clock();
   MatAB_JKI(n);
   printf("\nLoop-RL:%iTempo_JKI: %.3f\tbytes-%d",i,(double) (clock() - end)/CLOCKS_PER_SEC,n);	
   
   end =  clock();
   MatAB_KIJ(n);
   printf("\nLoop-RL:%iTempo_KIJ: %.3f\tbytes-%d",i,(double) (clock() - end)/CLOCKS_PER_SEC,n);	
   
   end =  clock();
   MatAB_KJI(n);
   printf("\nLoop-RL:%iTempo_KJI: %.3f\tbytes-%d\n",i,(double) (clock() - end)/CLOCKS_PER_SEC,n);	
   
   
   
 }  
   */
   
    MatAB_IJK(n);  
    MatAB_IKJ(n);  
    MatAB_JIK(n);   
    MatAB_JKI(n);
    MatAB_KIJ(n);
    MatAB_KJI(n);
   
   
    MatAB_IJK_RL2(n);  
    MatAB_IKJ_RL2(n);  
    MatAB_JIK_RL2(n);   
    MatAB_JKI_RL2(n);
    MatAB_KIJ_RL2(n);
    MatAB_KJI_RL2(n);
   
    MatAB_IJK_RL4(n);  
    MatAB_IKJ_RL4(n);  
    MatAB_JIK_RL4(n);   
    MatAB_JKI_RL4(n);
    MatAB_KIJ_RL4(n);
    MatAB_KJI_RL4(n);
   
   
   for(i=0;i<n;i++){
      free(A[i]);
      free(B[i]);
      free(AB[i]);
   
   }
      free(A);
      free(B);
      free(AB);
      printf("\nMemoria Desalocanda...\nSucesso!");
  
   
   system("pause");
   return 0;

}


 //A= (1 0)  B= (1  25)   (1*1+0*25 1*25+0*100)  (1  25)   
    //(0 1)     (25 100)  (0*1+1*25 0*25+1*100)  (25 100)
