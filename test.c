#include <stdio.h>
#include <ctype.h>  // for tolower
#include <string.h>
#include <stdlib.h>

#define SIZE 42
#define fieldLength 250

 

struct db_type
{
   char name[fieldLength];
   
   int age;

   int height;   // cm
   float bmi;
   char status[fieldLength] ;
};

 
char prompt_menu(void);
void enterNew(struct db_type * pArr[]);  
void init_list(struct db_type * pArr[]); 
void displayDB(struct db_type * pArr[]);   
void sortDB(struct db_type * pArr[]);
void updateRecord(struct db_type * pArr[]); 
void removeRecord(struct db_type * pArr[]);
void clearDB(struct db_type * pArr[]);


int main(int argc, char *argv[])
{
    
    struct db_type * db_pArr[SIZE];  // main db storage

    init_list(db_pArr);  // set to NULL
    
    char choice;
    for(; ;){
      choice = prompt_menu();
      switch (choice)
      {
         case 'n': enterNew(db_pArr); break;
         case 'd': displayDB(db_pArr); break;
        
         case 's': sortDB(db_pArr); break;
           
         case 'c': clearDB(db_pArr); break;  
        
         case 'u': updateRecord(db_pArr); break;
         case 'r': removeRecord(db_pArr);break;
         
         case 'q': exit(1); // terminate the whole program
       }
        
     }
     return 0;
}


char prompt_menu(void){
  char s[80];
  while(1){
    printf("\n-----------------------------------------------------------------\n");
    printf("|    %-20s","(N)ew record");
    printf("%-20s","(R)emove record");
    printf("(U)pdate record\t|\n");
    printf("|    %-20s","(S)ort database");
    printf("%-20s","(C)lear database");
    printf("(D)isplay database\t|\n");
  
    printf("|    %-20s","(Q)uit");
    printf("*Case Insensitive*\t\t\t|\n");
    printf("-----------------------------------------------------------------\n");
    printf("choose one: ");
  
    fgets(s,50, stdin); // \n added
    //scanf("%s", s);  
    if (strlen(s) == 2 && strchr("edlsuqrcwnvpr", tolower(*s))) 
       return tolower(*s); // s[0], return the first character of s  
    //else
    printf("not a valid input!\n");
         
 }
}


void init_list(struct db_type * pArr[]){
  int t;
  for (t=0; t<SIZE; t++)
  { 
     pArr[t]= NULL;
  }
}

/* delete all the records in the database */
void clearDB(struct db_type * pArr[]){
   char yn[3];
   printf("are you sure to clear database? (y) or (n)? ");
    
   fgets(yn,3,stdin);
   
   // complete the function by calling init_list();
   if(yn [0] == 'y') {
        for (int t = 0; t < SIZE; t++)
            if (pArr [t]) free (pArr [t]);
        init_list (pArr);
   } 
}


/* input items into the database */
/* hint: need malloc */
void enterNew(struct db_type * pArr[SIZE])
{  
    struct db_type *entry = malloc (sizeof (struct db_type));
   printf("name: "); fgets (entry->name, fieldLength, stdin);
   entry->name [strlen (entry->name) - 1] = '\0';
   printf ("age: "); scanf ("%d", &entry->age); fgetc (stdin);
   printf ("height (cm): "); scanf ("%d", &entry->height); fgetc (stdin);
   int wt; 
   printf ("weight (kg): "); scanf ("%d", &wt); fgetc (stdin); 
   entry->bmi = 1.0 * wt / entry->height / entry->height * 10000;
   if (entry->bmi < 18.5) strcpy (entry->status, "Underweight");
   else if (entry->bmi < 25) strcpy (entry->status, "Normal weight");
   else if (entry->bmi < 30) strcpy (entry->status, "Overweight");
   else if (entry->bmi < 35) strcpy (entry->status, "Obese class I");
   else if (entry->bmi < 40) strcpy (entry->status, "Obese class II");
   else strcpy (entry->status, "Obese class III");
   
   for (int t = 0; t < SIZE; t++) 
        if (pArr [t] == NULL) {
            pArr [t] = entry;
            return;
        }
}


/* remove an existing item from the database */
void removeRecord (struct db_type * pArr[])     
{
    char name [fieldLength];
    printf("enter full name to remove: "); fgets (name, fieldLength, stdin);
    name [strlen (name) - 1] = '\0';
    for (int t = 0; t < SIZE; t++) {
        if (pArr [t] == NULL) continue;
        if (strcmp (pArr [t]->name, name) == 0) {
            free (pArr [t]);
            pArr [t] = NULL;
            printf ("Record [%s] removed successfully.\n", name);
            return;
        }
    }
    printf ("record not found!\n");
}

/* display all the records in the database. Generate output with the same formaing as the sample output 
 use \t to align well
*/
void displayDB(struct db_type * pArr[]){
  
  int t, recs = 0;
  printf("===============================\n");
  for (t=0; t <SIZE ; t++)
  {
     if( pArr[t] != NULL)
     {
        recs++;
        printf("\nname:\t%s", pArr[t]->name);  
        printf("\nage:\t%d", pArr[t]->age);  
        printf("\nheight:\t%d", pArr[t]->height);  
        printf("\nBMI:\t%.1f", pArr[t]->bmi);  
        printf("\nstatus:\t%s\n", pArr[t]->status);  
     } 
  }
  printf("\n========== %d records ==========\n", recs);
}


 /* modify an existing item */
void updateRecord (struct db_type * pArr[])     {
  char name [fieldLength];
  int wt;
  printf("enter full name to search: "); fgets (name, fieldLength, stdin);
  name [strlen (name) - 1] = '\0';
    for (int t = 0; t < SIZE; t++) {
        if (pArr [t] == NULL) continue;
        if (strcmp (pArr [t]->name, name) == 0) {
            printf ("record found, enter new weight (kg): "); scanf ("%d", &wt); fgetc (stdin);
            pArr [t]->bmi = 1.0 * wt / pArr [t]->height / pArr [t]->height * 10000;

            if (pArr [t]->bmi < 18.5) strcat (pArr [t]->status, " -> Underweight");
            else if (pArr [t]->bmi < 25) strcat (pArr [t]->status, " -> Normal weight");
            else if (pArr [t]->bmi < 30) strcat (pArr [t]->status, " -> Overweight");
            else if (pArr [t]->bmi < 35) strcat (pArr [t]->status, " -> Obese class I");
            else if (pArr [t]->bmi < 40) strcat (pArr [t]->status, " -> Obese class II");
            else strcat (pArr [t]->status, " -> Obese class III");
            
            printf ("Record [%s] updated successfully.\n", name);
            return;
        }
    }
    printf ("record not found!\n");
}

 
// sort the record, either by name or BMI, prompt use for choice
void sortDB(struct db_type * pArr[])
{
  char nb [3];    
  printf("sort by name (n) or BMI (b)? "); fgets(nb,3,stdin);
  
  for (int i = 0; i < SIZE; i++) {
    int j = i + 1;
    while ((pArr [i] == NULL) && (j < SIZE))
        pArr [i] = pArr [j++];
  }
  
  for (int i = 0; i < SIZE; i++)
    for (int j = i + 1; j < SIZE; j++) {
        if ((pArr [i] == NULL) || (pArr [j] == NULL)) continue;
        if (((nb [0] == 'n') && (strcmp (pArr [i]->name, pArr [j]->name) > 0))  || 
            ((nb [0] == 'b') && (pArr [i]->bmi > pArr [j]->bmi)) )
        {
            struct db_type *tmp = pArr [i];
            pArr [i] = pArr [j];
            pArr [j] = tmp;
        }
    }
  
}