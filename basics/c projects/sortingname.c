/* WAP to sort a list of names/strings alphabetically.*/
# include<stdio.h>
# include<string.h>
int main()
{
  char names[5][2000];
  printf("\nEnter the names:");
  for (int i = 0; i<5; i++)
  {
    scanf("%s",names[i]);
  }

  for (int i = 0; i < 5- 1; i++)
  {
    for (int j = 0; j < 5 - i - 1; j++)
    {
      if (strcmp(names[j], names[j+1]) > 0)
      {
        char temp[2000];
        strcpy(temp, names[j]);
        strcpy(names[j], names[j+1]);
        strcpy(names[j+1], temp);
      }
    }
  }
  printf("The sorted names are:");
  for (int i = 0; i < 5; i++)
  {
   printf("%s ", names[i]);
  }
  
  return 0;
}