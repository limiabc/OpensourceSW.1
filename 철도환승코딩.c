int secondDecomposerTrain(char a[50], char b[50]) 
{ // 김세훈 (철도) 
 	train++
 	
 	int i;
 	int i2;
 	int i3;
 	int cnt = 1;
 	
 	int t_i = NULL;
 	int t_i2 = NULL;
 	int t_i3 = NULL;
 	int t_o = 0;

 	int e_check;
 	int e_i = NULL;
 	int e_i2 = NULL;
 	int e_i3 = NULL;
 	int e_o = 0;
 	
 	printf("Second Decomposer 을 실행합니다 !\n");
 	
 	for(i = 0; i < 6; i++)
 	{
 		for(i2 = 0; i2 < 25; i2++)
 		{
 			for(i3 = 0; i3 < 80; i3++)
			{
			 	if((s_o! =1) && (strcmp(start, a[i][i2][i3].name)==0))
				{
					printf("1. %d 2. %d 3. %d\n",i,i2,i3);
					t_i = i;
					t_i2 = i2;
					t_i3 = i3;
					t_o = 1;
					printf("등록되었습니다 ! %s, %d, %d\n",a[t_i][t_i2][t_i3].name, t_i, t_i2, t_i3);
				}
				
				else if((e_o! = 1) && (strcmp(end, a[i][i2][i3].name)==0))
				{
					printf("1. %d, 2. %d, 3. %d\n", i, i2, i3);
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_o = 1;
					printf("등록되었습니다 ! %s, %d, %d, %d\n", a[e_i][e_i2][e_i3].name, e_i, e_i2, e_i3)
				}
			}
		}	
	}
	
	if(t_i2 == e_i2)
	{
		
	}
	    
 	return 0; 
} 

