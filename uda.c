#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[]){
  if(argc==1){
    printf("クズはお前だバカ:コマンドが見つかりません。次の操作を試してください。\nXHTMLでホームページを作る\n");
    abort();
  }
  else{
    if(!strcmp(argv[1],"-V")||!strcmp(argv[1],"--version")){
      int ver=2017-1998+22;
      printf("uda バージョン おそらく%dです。\n\nこのプログラムの権利はすべてudaに帰属するものとします。\nCopyright © uda  All Rights Reserved.\n",ver);
      return 0;
    }
    else if(!strcmp(argv[1],"-P")||!strcmp(argv[1],"--profile")){
      printf("udaのプロフィール\n\n1998年\t慶應義塾大学理工学部計測工学科卒業\n2000年\t慶應義塾大学大学院理工学研究科前期博士課程修了(計測工学専攻)\n2002年\t慶應義塾大学大学院理工学研究科後期博士課程修了(開放環境科学専攻)\n\t博士(工学)\n2002年\t東京工科大学助手\n2003年\t東京工科大学講師\n2006年\t東京工科大学大学院 バイオ・情報メディア研究科 コンピュータサイエンス専攻　修士課程 専任講師\n");
      return 0;
    }
    else if(!strcmp(argv[1],"-H")||!strcmp(argv[1],"--help")){
      printf("uda の使い方\n\t-V  --version\tudaのバージョンを表示\n\t-P  --profile\tudaのプロフィールを表示\n\t-A  --ascii\tudaのアスキーアートを表示\n");
      return 0;
    }
    else if(!strcmp(argv[1],"-A")||!strcmp(argv[1],"--ascii")){
     printf("``.```.```.```.```.```.```.```.```.```.```.```.```.```.```.```.```.```.```.``.``\n`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.`.``.`..\n``.``.``.```.```.```.```.```.```.```.```.```.```.```.```.```.```.```.```.`.`.``.\n.``.``.``.`.``.``.`.``.``.`.``.``.`.``.``.`.``.``.`.``.``.`.``.``.`.``.``.``.```\n`.``.`.`.`.`.`..``.`.`..``.`.`..``.`.`..``.`.`..``.`.`..``.`.`..``.`.`..``.`...`\n`.`.`.```.```.``.``.```.`.`.```.`.``.```.``.``.`.`.``.``.``.```.`.```.``.``.``.`\n.`.`.`..`.`.`.`.`.`.`.``.`.`.`.`.`...`.`....`..``..`..``.`.`.`.`.`..`.``.``.``.`\n`.``.``.``.`.`.`.`.`.`..`.`.`.`.`.``.``.`.``..`..``.`.`..``.`.``.``.``.``.``.``.\n`.`.`.``.`.``.``.``.``.``.``.``.` .(J-JJ-.-_ ````.`.``.`..`.``.``.``..`.`.`.`.``\n``.``.`.`.`.``.``.``.``.`.``.`` (+QQHMH@NHmAQgQQQmA&-.````.`.``.`.`.``.`.```.`.`\n.``.``.```.`.`..`..`..`.`.`.  .gM###HHHMMMMMNMHHHHHHMNe-`.``...`.`.`.```.`.``.`.\n`.`.`.`.`.``.``.``.```...  .JdMMMNN#HHHNMNMMM#HHHHHHHHHH&.`.``..``.``..``.`.`.``\n``.```.`.``.`.``.`..`.`` -d###NNNN#HM####HH####HHHHHMHHHMk-`.`.``.`.`.`.``.`.`.`\n`.``.`````.```.``.``.``.jMMHMM#MHMMHHHHHMMMMMMHHHHHHHH@HH@H& `.```.`````.``````.\n``.``.`.`.``.`.`.``.. .dNN#MM#MMMHg@HHHHHUUWWHHMMH@@@@H@H@@Ns.`.``.`.`.``.`.`.``\n`.``.``.``.``.``.`.`` dMN#NMMHHWkHHHUUUXZtlOwXWHHHMHHH@@@HM@Mr .`.```.``.``.``.`\n``.``.``.``.```.```. .dNN#MMCzdWWWWUvvOOl==?1zwXWWH@HH@@@@HHHH-```.```.``.``.```\n`.``.```````.`````.` (MNH#M0;+OwwXVtOOz1111>>+z1OVXHMHM@@@@@MMl ```.```.```````.\n```.``.`.`.```.`.```.dMHMHMI;+=?1tz1lz>>;;;;;;>=+z<vWMHHHHH@@MR_````.```.`.`.```\n``.````.```.`.```.``.MHHMMK<+wXXfpWkXOl==1zuQkkkkwz<(XMHHHHHMMK_`..``.`````.````\n`.``.`````````.``.``(M#HMM$<zz<(++zOOOzllOXUUOz1<?+1<<XMH#HH@MK_``````.``.```.``\n`````.``.`.``.``.```,M#MMMI><jdWWMMHZ<<<<<zwXUHMWWo<:_+UMN##MM#~``.``.``.```.```\n``.````.``````````.`.ZMHNMI:(<<<<zzz<:::~~<+11vz<<<<<~:jMMMMMM$````````````````.\n``````````.``.``.```` ?TMNI::~::;;;:~:::::~(>>;;:_:~_~:(HMHVW8!````.`````.``.```\n```.``.`````.``````.``  (HI<:~::<++z<;::<~:+zz<;;;:~_::+wWU> ````````.``````````\n`````````.`````````.``.`.?<><(<+zwXI++++z+++XXOz1+<(<:;<?><_``..``.````.```.``.`\n``.```````````.``.``````` (????zd0I;?zOXXUVOwXXwOOz1+><::_``````````````````````\n````.`.```.```````````````-<>>+zC1<><+++z1<;<1OOOOI>>;:(y:```.`````.``.``.``````\n````````````````````.``.```_>;;>+zOUHHSzZWHWXUUI111>>;:w$``````.````````````.```\n`````````````.``.`````````` (?>111>>+1ttOwOz+??1===11<;< ``.````````````````````\n```````````````````````````` (111>>>>>1OwOI1>>;>=ll=?;~ ````````````````````````\n``````````````````````````.`` +=z+<;;;;>>>;>+?>1llz?;:_`````````````````````````\n``````````````````````````````(+ztzz+++zzzzzzzzltl=?;>_-`.``.`.```.````````.````\n``````````````````````````````-<<1zwzwwwuuZuXXXXOlz<<~_.` ````````````.`````````\n```````````````````````````.```_>;;;<1zwXUUUUUVCz<~._.`.us.`````````````````````\n```````````````````````````````.>;:;;>1lOzz<<<~~__.._.dHHHn.```.``````````.`````\n````````````````````````.`.``` ");
     printf("_(<_:<++<<~``.._.._-(&WHmgggHe. ````.`````.``````\n```````````````````````````` .+~__1<<!_.``.` ...-(dHHHggHgHgH@Hm..``````````````\n`````````````````````````` .JK>(uXuk: ```...`.-(dHgg@gg@gg@g@@@gHgHmJ-.. ```````\n```````````````.`` `` `..(dHMndSV61jy_ `. .. -jWgg@@@@gg@@@@@@g@gggggggHm-.  ```\n`````````````````  .(&kMM@@MSdHC1++dML.   ..(dHgggggg@@@@@gg@@@ggggggg@ggggma..`\n`````````````` .(gHHH@@@@@HUvUXXXZXWMH:..-(dHHmgggggg@g@@@@HM@@gg@ggg@ggg@gggHHm\n```````````..gWH@@H@@@H@@MH>(1OwXdHM0<<-(ZXHggggggggg@HMM@@@@g@gg@@gg@@ggg@gggmm\n``````` .(gHM@@@@@@@@@@@@M$~(Z<OXXHS<~(?<dHgggggggg@gg@@@@ggggggggg@ggg@ggggmqmm\n``````.dHHM@@@H@@H@H@H@@H#>(XI<<zCwI~(!(WM@ggg@@gg@@@@gg@@gggggggggggg@@gggmmmmm\n````` dH@@@@H@@@@@H@@@@HM3(ZVV11+dHI__(Wggg@gg@@@@@@ggHHM@gggggg@gg@@@@gggmmmmmq\n`````(WH@@@@H@@@@@@@@H@MD1w<<(dktdH>.dH@g@@gg@g@@@@gHMMg@@@@@g@@ggg@@@gmggggmmmm\n`````(M@H@@H@@@H@@@@@HHB<dC<(vWWwwZ(dHgg@@g@@@gg@gHHMg@@g@ggg@@ggg@@@ggggmgggmmm\n```` J@H@@@@@@@@@@H@@MMIz1dZ(+dWXI_dM@g@g@@g@gg@gMMMH@g@gggg@@g@g@H@ggggggggmmmm\n````.d@@@@H@@@@@@@@@@MDI1zwzwU0UKId@gg@@@g@@gggHMM@gg@gg@@@@g@@@@MMggggggggggmmm\n");
      return 0;
    }
    else{
    printf("クズはお前だバカ:コマンドが見つかりません。次の操作を試してください。\nXHTMLでホームページを作る\n");
    abort();
    }
  }
}
