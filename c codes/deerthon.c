#include<stdio.h>
#include<conio.h>
main(){
	int n , k, array[101];
	int i , j , m , l;
	printf("Enter the number of windows : \n");
	scanf("%d",&n);
	printf("Enter the number of thief : \n");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		array[i] = 0;
	}
	for(i=1;i<=k;i++){
		for(j=0;j<n;j++){
			if(array[j] == 0){
				array[j] = 1;
			}
			else if(array[j] == 1){
				array[j] = 0;
			}
		}
			for(m=2;i>=m;m++){
				for(l=1;l<=n;l++){
					if(l % m == 0){
						if(array[l] == 0){
							array[l] = 1;
						}
						if(array[l] == 1){
							array[l] = 0;
						}
					}
			
				}
				//printf("%d\n",array[l]);
			}
	}
	for(i=0;i<n;i++){
		if(array[i]==1)
		printf("\n%d",i+1);
	}
	getch();
}
