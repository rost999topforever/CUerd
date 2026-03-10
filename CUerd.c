#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// CUerd language
#ifdef _WIN32
#include <direct.h>
#include <windows.h>
#define clear system("cls")
#define youOSbasedon printf("windows\n")
#define tim(a) Sleep((a)/1000);
#else
#include <unistd.h>
#define clear printf("\033[2J\033[H")
#define youOSbasedon printf("linux\n")
#define tim(a) usleep(a);
#endif

#define CUerd 1
#define FVI() d 
#define FVC() c 
#define FVS() s 
#define FVF() f 
#define Ivar int
#define Cvar char
#define now {
#define end }
#define NO void
#define start main
#define rng srand
#define print printf
#define forf for
#define WH while
#define new int main(void)
#define input fgets
#define getone scanf
#define forever while(1)
#define _open_ (
#define _close_ )
#define second() sleep(1);
#define rng_please() srand(time(NULL));
#define Fvar float
#define dFvar double
#define DFvar long double
#define rep(a,b) for(int i=a;i<b;i++)
#define goted(b,a,z) b *a=(z);
#define math(a,z,b) a=(a z b)
#define printplus(a,...) printf(a "\n",__VA_ARGS__);
#define END ;
#define inputplus(a,b) fgets(a,b,stdin);
#define getinfile(a,b,file) fgets(a,b,file)
#define NOT(a) (!a)
#define OR(a,b) (a||b)
#define EQ(a,b) (a==b)
#define IS(a,b) (a==b && &a==&b)
#define autoCvar(a,b) char a[]=b;
#define use(a,b,c) FILE *a=fopen(b,c);
#define addtext(a,b) fprintf(a,b);
#define notuse(a) fclose(a);
#define isuse(a)  (a!=NULL)
#define eval(a)   a;
#define whTEXT(a)  while(*a)
#define avtowhTEXT(a,z,x) a z=&x;while(*z)
#define Cplus(a,b) strcat(a,b);
#define FIFchar(a,b) strcmp(a,b)
#define FIF(a) if(a){
#define ELFIF(a) else if(a){
#define EFL(a) else{
#define Fif(a) if(a)
#define fif(a,b) if(a){b}
#define fe(a,b) else if(a){b}
#define Fe(a) else if(a)
#define EF() else
#define fored(a,z,x,c,d,g) for(a z=x; x c d; x+=g)
#define shell(a) system(a);
#define group(a) struct a 
#define mingroup(a) union a
#define arr(d,a,...) d a[]={__VA_ARGS__};
#define watcherr(a) if(!a)
#define ptr(a) &a;
#define pr() %
#define _og_ [
#define _OG_ ]
#define _AND_ &&
#define _eq_ =
#define _lt_ <
#define _gt_ >
#define _mod_ %
#define _ov_ /
#define _plus_ +
#define _min_ -
#define cat(a,b,c) char a[b];fgets(a,b,file);printf("%s",c);
#define rchoice(a) ((rand() % (sizeof(a)/sizeof(a[0]))))
#define creavar(a,b,z) a *b=z;
#define allargs  __VA_ARGS__
#define otherargs ...
#define poww(a,x,b,z) z=1;for (int x=0;x<b;x++){ z*=a;}
#define lock(a) malloc(a);
#define out(a) free(a);
#define EnD return 0;
#define send(a) return a;
#define creator Rost999topforever
#define teval(a,...)  (sprintf(a,__VA_ARGS__); a;)
#define typelock(a,b)  (*a) malloc(b);
#define strF(b,a,...) (sprintf(b,a,__VA_ARGS__))
#define true 1 
#define false 0 
#define news(a) int main(void) {a}
#define function(a) void a(void)
#define retrand(a)  srand(time(NULL));return rand() % a;
#define counter(a,b) for(int __coock=a;__coock<=b;__coock++){printf("%d\n",__coock);}
#define read(a) scanf("%s",a);
#define reader(a) fgets(a,500,stdin);
#define node define
#define sys_ #
#define End return 1;
#define rev(a) a*=-1;
#define hw() int main(void) { printf("hello world"); return 0;}
#define con(a,b)  a=b; 
#define type(a) if((a+0)==a){printf("nomber");}else{printf("string");}
#define errorcach(a) if(a){a;}
#define help printf("god helps you");
#define you_name I_dont_knew_you_name_but_you_can_write_you_name_this
#define say_my_name printf(you_name"\n");
#define foredarr(a,b) for(int __varforforedarr=0;__varforforedarr<sizeof(a);__varforforedarr++){b}
#define happy :)
#define unhappy :(
#define angry >:(
#define nochar(a) a[0]='\0';
#define subtick if(time!=time){printf("01010011 01000001 01000011 01001011 00100000 01000100 01001001 01000011 01001011");}
#define newarr(t,n,s,...) t n[s]={__VA_ARGS__};
#define R1()  (rand() % 2);
#define R2()  ((rand() % 2)+1)
#define R6()  ((rand() % 6)+1)
#define R4()  ((rand() % 4)+1)
#define R8()  ((rand() % 8)+1)
#define R16() ((rand() % 16)+1)
#define R32() ((rand() % 32)+1)
#define R64() ((rand() % 64)+1)
#define R128() ((rand() % 128)+1)
#define PI()      3.14159265358979323846
#define PI_2()    1.57079632679489661923  
#define PI_4()    0.78539816339744830962  
#define E()       2.71828182845904523536
#define SQRT2()   1.41421356237309504880
#define SQRT3()   1.73205080756887729353
#define LN2()     0.69314718055994530942
#define LN10()    2.30258509299404568402
#define GOLDEN()  1.61803398874989484820  
#define EULER()   0.57721566490153286061 
#define LIGHT()   299792458                
#define G()      9.80665                   
#define DEG_TO_RAD() 0.017453292519943295  
#define RAD_TO_DEG() 57.29577951308232    
#define TWO_PI()     6.283185307179586    
#define INV_PI()     0.3183098861837907    
#define SQRT_PI()    1.772453850905516      
#define DEG_30()  0.5235987755982988
#define DEG_45()  0.7853981633974483
#define DEG_60()  1.0471975511965976
#define DEG_90()  1.5707963267948966
#define DEG_180() 3.141592653589793
#define DEG_270() 4.71238898038469
#define DEG_360() 6.283185307179586
#define HALF_PI() 1.5707963267948966
#define THIRD_PI() 1.0471975511965976
#define QUARTER_PI() 0.7853981633974483
#define TWO_THIRDS_PI() 2.0943951023931953
#define THREE_HALVES_PI 4.71238898038469
#define E_SQ() 7.38905609893065       
#define E_CUBE() 20.085536923187668    
#define SQRT_E() 1.6487212707001282    
#define LN_PI() 1.1447298858494002    
#define LOG10_E() 0.4342944819032518   
#define LOG2_E() 1.4426950408889634    
#define INV_E() 0.36787944117144233    
#define INV_PI() 0.3183098861837907    
#define INV_2PI() 0.15915494309189535  
#define INV_SQRT2() 0.7071067811865475 
#define SIN_30() 0.5
#define COS_30() 0.8660254037844386
#define TAN_30() 0.5773502691896257
#define SIN_45() 0.7071067811865475
#define COS_45() 0.7071067811865475
#define TAN_45() 1.0
#define SIN_60() 0.8660254037844386
#define COS_60() 0.5
#define TAN_60() 1.7320508075688767
#define R() rand()
#define house(type,args,funk,funkk,code)  type funk(args){funkk;code;funkk} 
#define matrix(x,y,var,code) for(int __varformat=0;__varformat<x;__varformat++){for(int __varformad=0;__varformad<y;__varformad++){printf("%s",var);code;}printf("\n");}
#define matrixed(x,y,a,b,var,code) for(int __a=0;__a<x;__a++){for(int __b=0;__b<y;__b++){printf("%s",var);code;}printf("\n");}
#define tiny(a)  __a
#define ASM(a) __asm__(a);
#define datalen(a) sizeof(a);
#define len(a) strlen(a);
#define sorted(par,text,var,var2) char *__SACK_DICK; int __count=0;var=strtok_r(text,par,&__SACK_DICK);var2[__count]=var;__count++;while(var!=NULL){var=strtok_r(NULL,par,&__SACK_DICK);var2[__count]=var;__count++;}var2[__count]=NULL;
#define Cpm(a,b) a##b
#define jump(a) goto a;
#define nullstr(a,b) a[b]='\0';
#define locked(type,a,b)  const type a=b;
#define C(a) do{a}while(0)
#define until(a) while(!(a))
#define addmem(ptr,mem) realloc(ptr,mem);
#define COM(a) //a
#define var(type,name,a) type name=a;
#define readplus(a) scanf("%s",&a);
#define exo(a) printf("%s\n",a);
#define soul_of_CUerd  printf("hello , my friend ... I am Rost999topforever , but you can say my name like Rost999 . This language is made to do C easier than it be.This language have 1 rule it is dont do eazy things harder to learn. You can read about functions on this file. good luck and have a nice day\n");
#define form(b,a,t) b %a t
#define adr(a) (*a)
#define p(a) a++; 
#define m(a) a--;
#define priForm(a,b,t,x) printf(a %b t,x);
#define prompted(a,b,...) printf(a);b(__VA_ARGS__); 
#define strudict(name,init,...) struct name {__VA_ARGS__}; struct name name={init};
#define back printf("\r");
#define find(a,b,c,counter) int __intvar=0;for(int __vared=0;__vared<strlen(a);__vared++){if(a[__vared]==b){printf(c);__intvar++;}counter=__intvar; }
#define strfind(a,b,c,counter) int __intvared=0;for(int __vareded=0;__vareded<sizeof(a);__vareded++){if(strcmp(a[__vareded],b)==0){printf(c);__intvared++;}counter=__intvared; }
#define oldCOM(a) /* a */
#define ex(a) extern a;
#define tlen(a,b) char *__fgh=a;while(*__fgh++){b++;}
#define add(a) include <a>
#define MATH(a,z,b) printf("%f",(a z b));
#define stop break;
#define eND exit(1);
#define cop(type,a,b,z) type a=z; type a##b=z;
#define copt(type,type2,a,b,z) type a=z; type2 a##b=z;
#define ptt(a,b) a->b
#define WHuse_as(a,file,mode,code) FILE *##a=fopen(file,mode); code ; fclose(a);
#define window(par1,par2,x,y,obj,sub) for(int __varf=0;__varf<par1;__varf++){for(int __varff=0;__varff<par2;__varff++){if((__varf==y)&&(__varff==x)){printf(obj);}else{printf(sub);}}printf("\n");}
#define PTR(type,x) type *ptr_##x=&##x;
#define del(x) x=NULL;
#define put(a,b) a=b;
#define NOnode(a) udef a
#define tekted(a,program1,program2) program1(a);program2(a); 
#define oldnode(type,init,a,b) type a(init){return b;} 
#define null NULL
#define FFvar FILE 
#define t(a) time(a)
#define newbuf(a) fflush(a);
#define in_print() stdout
#define in_input() stdin
#define pass() 
#define str(a) #a
//write there
hw()