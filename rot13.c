//Decode a message with rot13 system
#include <stdio.h>
void rot13(char [], int, int);

int main(){
  char a[] = "Qvq lbh xabj gurer ner zber crbcyr jvgu travhf VDf yvivat va Puvan guna gurer ner crbcyr bs nal xvaq yvivat va gur Havgrq Fgngrf? - Gur Fbpvny Argjbex --- Cnffjbeq LBHREOUZZI";
  int s = 13;
  int size;
  
  size = sizeof(a)/sizeof(char);
  size = size - 1;
  rot13(a, s, size);
  return 0;
}

void rot13(char a[], int s, int size){
    int i, flag, flag1, flag2;
    
    for(i = 0; i < size; i++){
      if(a[i] == ' ' || a[i] == '-' || a[i] == '?'){
        continue;
      }
      else{
        if(a[i] >= 97 && a[i] <= 109){
          a[i] = (char)((int)a[i] + 13);
        }
        else if (a[i] > 109){
          flag1 = 122 - a[i];
          flag2 = 13 - flag1;
          a[i] = (char)(96 + flag2);
        }
        else if (a[i] >= 78 && a[i] <= 90){
          a[i] = (char)((int)a[i] - 13);
        }
        else{
          flag1 = a[i] - 65;
          flag2 = 13 - flag1;
          a[i] = (char)(91 - flag2);
        }
      }
    }
    printf("%s\n", a);
    return;
}
