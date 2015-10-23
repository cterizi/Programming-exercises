#include <stdio.h>
void substitution_cipher(char a[], int size);
int compare(int, int);
void swap(int *, int *);
void bubblesort(int[], int, char[]);
void swap_ch(char *x1, char *x2);

int main(){
  char string[] = "U YBKLREHO RVUR FUS UDELK UR RVEL LRUCK EL AVUR EL RVK LHXBREHO, KERVKD IHD UO EOGEQEGBUX BLKD HD IHD LHWEKRS UL U AVHXK? RVKDK UDK RKWVOEWUX LHXBREHOL -GKWKORDUXEPKG LKDQEWKL, KQKDSJHGS VHLREOC RVKED HAO GURU, KOWDSTRKG GURU, KQKDSJHGS RDBLREOC TDHQEGKDL WXHLK RH RVKF RVUR VKXT RVKF AERV KOWDSTRKG GURU LKDQEWKL, UOG LH HO. UOG RVKDK UDK RVK THXEWS HTREHOL RVUR AK VUQK GELWBLLKG. E'F OHR LBDK RVUR UR RVEL LRUCK EO REFK RVUR AK WUO UOLAKD RVK YBKLREHO HI AVKRVKD HOK HI RVK RAH UTTDHUWVKL EL RVK JKLR. E RVEOM AK VUQK RH GKQKXHT RVK RAH UTTDHUWVKL EO TUDUXXKX. AK OKKG RH VUQK IDKK LHIRAUDK RVUR KQKDSJHGS WUO BOGKDLRUOG, KQKDSJHGS WUO FHGEIS, UOG KQKDSJHGS WUO LWDBREOEPK EO HDGKD RH JK LBDK HI AVUR ER EL GHEOC. E RVEOM IDKK LHIRAUDK EL HOK HI RVK JULKL IHD U IDKK HOXEOK LHWEKRS, EO HDGKD RH VUQK RVK THRKOREUX RH UXAUSL WHORDHX RVK FUWVEOK UOG OHR XKR RVK FUWVEOK WHORDHX SHB. AK OKKG RH VUQK LRDHOC WDSTRHCDUTVS RH JK LBDK RVUR AVKO SHB AUOR SHBD GURU RH JK DKUG HOXS JS SHBDLKXI, OHJHGS KXLK WUO DKUG ER. AK OKKG WHFFBOEWUREHO RHHXL XEMK RHD, HD XEMK RVK WDSTRHTVHOK, RH JK UJXK RH WHFFBOEWURK HOXS AERV RVK TKHTXK SHB AUOR RH WHFFBOEWURK AERV. JBR RVK THAKD HI RVK LRURK UOG RVK THAKD HI LHFK WHFTUOEKL FUS UXAUSL KNWKKG RVK THAKD HI RVK CKKML AK UDK, UOG HBD UJEXERS RH JBEXG  UOG LTDKUG RVHLK RKWVOHXHCEKL. AK FUS UXLH OKKG, AVEXK AK UDK JBEXGEOC RVHLK RKWVOHXHCEKL, XUAL UOG RHHXL RVUR AEXX JK EO RVK VUOGL HI WEREPKOL, RH JK UJX  K RH WHORDHX AVUR EL JKEOC GHOK AERV RKWVOHXHCS -EI OHR UXAUSL EO DKUX REFK-  UOG RH JK UJXK RH LUOWREHO RVHLK RVUR BLK RKWVOHXHCS EO UO BOKRVEWUX AUS UOG EO U AUS RVUR QEHXURKL WEREPKOL' TDEQUWS. - ZKDKFEK PEFFKDFUOO, WSTVKDTBOML TULLAHDG NDUNMROHAO";
  int size;
  
  size = sizeof(string) / sizeof(char);
  size = size - 1;
  substitution_cipher(string, size);
  return 0;
}

void substitution_cipher(char a[], int size){
  int i, j, flag, flag1, flag2;
  
  int t[26] = {0};
  char alphabet[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char al[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  
  for(i = 0; i < size; i++){
    for(j = 0; j < 26; j++){
      if(a[i] == alphabet[j]){
        t[j] = t[j] + 1;
        break;
      }
    }
  }
  
  bubblesort(t, 26, al);
  
  for(i = 0; i < size; i++){
    switch(a[i]){
      case 'K':
        a[i] = 'E';
        break;
      case 'R':
        a[i] = 'T';
        break;
      case 'H':
        a[i] = 'O';
        break;
      case 'U':
        a[i] = 'A';
        break;
      case 'O':
        a[i] = 'N';
        break;
      case 'E':
        a[i] = 'I';
        break;
      case 'L':
        a[i] = 'S';
        break;
      case 'V':
        a[i] = 'H';
        break;
      case 'D':
        a[i] = 'R';
        break;
      case 'X':
        a[i] = 'L';
        break;
      case 'G':
        a[i] = 'D';
        break;
      case 'W':
        a[i] = 'C';
        break;
      case 'S':
        a[i] = 'Y';
        break;
      case 'A':
        a[i] = 'W';
        break;
      case 'T':
        a[i] = 'P';
        break;
      case 'B':
        a[i] = 'U';
        break;
      case 'J':
        a[i] = 'B';
        break;
      case 'F':
        a[i] = 'M';
        break;
      case 'I':
        a[i] = 'F';
        break;
      case 'Q':
        a[i] = 'V';
        break;
      case 'C':
        a[i] = 'G';
        break;
      case 'M':
        a[i] = 'K';
        break;
      case 'P':
        a[i] = 'Z';
        break;
      case 'N':
        a[i] = 'X';
        break;
      case 'Y':
        a[i] = 'Q';
        break;
      case 'Z':
        a[i] = 'Z';
        break;
    }
  }
  printf("%s\n", a);
  return;
}

int compare(int x, int y){
	if(x > y){
		return 1;
	}
	else if(x == y){
		return 0;
	}
	return -1;
}

void swap(int *x1, int *x2){
	int temp;
	
	temp = *x1;
	*x1 = *x2;
	*x2 = temp;
}

void swap_ch(char *x1, char *x2){
	char temp;
	
	temp = *x1;
	*x1 = *x2;
	*x2 = temp;
}

void bubblesort(int a[], int size, char ch[]){
	int i, j, l, com;
	l = size - 1;
  
  
	for(i = 0; i <= l; i++){
		for(j = l; j >= i; j--){
			com = compare(a[j], a[j-1]);
			if(com == -1){
				swap(&a[j], &a[j-1]);
        swap_ch(&ch[j], &ch[j-1]);
			}
		}
	}
}
