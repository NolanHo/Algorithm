#include<iostream>
#include<cmath>
using namespace std;

int p[]={
    0,63951,57176,55175,53907,52937,52293,51763,51208,50909,50458,50229,49845,49531,49491,49187,49039,48599,48743,48335,48354,48136,48141,47807,47739,47654,47518,47386,47247,47261,47103,47123,46804,46862,46851,46668,46635,46465,46669,46289,46327,46288,46221,45891,46018,46029,45964,45875,45904,45823,45826,45755,45489,45592,45417,45477,45474,45522,45272,45343,45149,45064,45348,45093,45063,45131,44958,44912,44861,44875,44881,44944,44803,44679,44712,44647,44697,44502,44602,44519,44651,44346,44442,44624,44323,44521,44275,44328,44271,44203,44239,44282,44242,44058,44101,44270,43852,44088,43959,43966,43906,44002,44086,43840,43873,43956,43687,43743,43782,43772,43709,43725,43685,43668,43670,43657,43599,43504,43582,43674,43605,43467,43561,43439,43345,43442,43305,43485,43548,43317,43379,43340,43329,43214,43325,43266,43440,43227,43132,43252,43043,43252,43084,43059,42989,43122,43096,43073,42969,42874,43073,42882,43057,42895,42912,43086,42950,42837,43011,42917,42840,42936,42896,42661,42910,42751,42699,42722,42729,42835,42555,42856,42709,42478,42641,42786,42543,42528,42834,42610,42690,42589,42460,42639,42620,42493,42507,42477,42435,42367,42447,42402,42460,42438,42424,42463,42458,42409,42303,42290,42373,42360,42310,42285,42291,42553,42147,42159,42260,42351,42290,42196,42390,42231,42187,42209,42210,42247,42127,42029,42269,42178,42167,42137,42090,42254,41940,41877,42034,41925,42084,42249,42044,41933,42068,42018,41891,41935,42121,41759,41764,42049,41920,42017,42038,41847,41729,41791,41762,41834,41923,41904,41767,41922,41762,41881,41782,41826,41773,41750,41911,41658,41772,41799,41660,41760,41656,41735,41550,41925,41663,41588,41716,41631,41623,41589,41536,41651,41697,41737,41604,41645,41521,41613,41648,41345,41731,41443,41569,41662,41603,41468,41409,41324,41624,41538,41531,41648,41631,41387,41439,41651,41443,41271,41322,41389,41539,41555,41275,41436,41346,41458,41401,41400,41369,41283,41317,41469,41292,41343,41434,41071,41466,41277,41253,41256,41323,41368,41395,41310,40963,41191,41529,41174,41108,41227,41191,41266,41024,41060,41225,41190,41194,41314,41145,41310,41120,41264,41110,40943,41265,41184,41122,41087,41049,41163,40969,40967,41063,41103,41067,41118,41075,41050,41025,41070,41106,40996,41164,40894,40957,41100,40930,41098,40811,41088,41034,41069,40897,40926,40813,41091,40895,41114,40915,40890,41169,40905,40946,40840,40801,40981,40914,40944,40741,40923,40895,40809,40835,40673,40861,40937,40744,40756,40827,40963,40642,40932,40862,40778,40900,40579,40948,40615,40723,40776,40851,40677,40764,40933,40588,40748,40789,40613,40829,40625,40898,40781,40730,40649,40707,40809,40583,40814,40575,40565,40608,40729,40846,40557,40535,40728,40585,40726,40693,40580,40673,40547,40533,40735,40497,40393,40632,40678,40589,40569,40472,40785,40558,40588,40606,40485,40481,40485,40424,40604,40417,40590,40542,40790,40515,40587,40555,40763,40480,40497,40699,40439,40482,40496,40317,40512,40414,40376,40524,40532,40310,40548,40263,40359,40500,40590,40243,40496,40450,40364,40295,40382,40502,40252,40608,40346,40275,40384,40370,40419,40345,40423,40471,40355,40236,40280,40248,40322,40475,40299,40286,40342,40456,40264,40302,40390,40374,40189,40179,40123,40416,40219,40244,40381,40279,40444,40329,40254,40094,40256,40379,40175,40188,40291,40123,40187,40063,40356,40261,40238,40188,40092,40282,40262,40075,40361,40181,40350,40272,40105,40174,40023,40220,40110,40316,40068,40204,40069,40165,40205,40043,40153,40085,40141,40313,40306,39899,40022,40142,40066,40063,40060,40077,40251,40197,39955,40135,40138,40064,40225,40052,40004,40008,40105,40140,39888,40015,39956,39922,40093,40026,40106,40185,40072,40139,39946,40115,39868,40087,39911,40133,39961,39974,39935,40073,39815,40030,40070,40035,39824,40034,39875,40051,40000,40073,39912,40060,39866,39858,39937,39951,39699,39894,39814,39947,39810,39885,39910,39908,39882,39925,39970,39721,39626,40013,39926,39848,39714,39803,39811,40107,39866,39960,39853,39977,39767,39763,39714,40086,39824,39835,39746,39849,39846,40029,39750,39868,39880,39661,39854,39882,39828,39748,39958,39756,39882,39730,39833,39812,39793,39832,39694,39754,39615,39709,39728,39830,39755,39773,39780,39838,39774,39858,39881,39758,39808,39882,39625,39709,39633,39735,39683,39848,39576,39691,39814,39548,39804,39728,39760,39558,39701,39686,39710,39681,39673,39770,39541,39654,39629,39766,39756,39593,39658,39627,39795,39575,39672,39588,39738,39631,39632,39635,39723,39730,39579,39574,39523,39575,39633,39407,39806,39737,39750,39737,39503,39498,39748,39590,39817,39662,39483,39524,39555,39476,39666,39631,39574,39635,39793,39667,39356,39458,39630,39515,39555,39490,39602,39475,39464,39611,39671,39455,39690,39469,39441,39121,39590,39477,39649,39545,39489,39449,39468,39511,39599,39409,39370,39615,39762,39526,39469,39495,39310,39564,39330,39308,39568,39449,39564,39475,39561,39415,39429,39382,39605,39505,39332,39400,39367,39247,39585,39412,39465,39505,39392,39473,39494,39448,39313,39463,39355,39554,39266,39360,39469,39518,39325,39422,39445,39429,39518,39352,39400,39451,39244,39381,39351,39440,39210,39421,39283,39440,39440,39208,39453,39355,39229,39347,39310,39273,39160,39430,39443,39429,39121,39376,39128,39236,39439,39361,39421,39375,39386,39279,39406,39365,39430,39388,39225,39323,39062,39332,39445,39464,39308,39136,39159,39338,39261,39175,39443,39353,39254,39222,39312,39255,39186,39308,39246,39319,39341,39082,39292,39193,39351,39232,39233,39007,39143,39218,39276,39291,39234,39151,39327,39184,39307,39346,39226,39307,39085,39212,39134,39307,39174,38943,39092,39307,39131,39117,39320,39055,39165,39196,39164,39159,39227,39138,39316,39225,39372,39204,39030,39071,39143,39073,39078,39023,39239,38974,39093,39160,39107,39164,39231,38993,39012,39211,39430,39125,39105,38909,39098,39162,39078,39224,39215,39102,38946,38921,39006,39041,39139,39180,39160,39154,39155,39136,39150,39258,38888,39063,39200,38889,38904,39283,39076,39025,39064,39093,39187,39059,39098,39168,39014,39101,39221,39012,38915,39094,39130,39177,39177,39042,38979,38867,39237,38885,39067,39030,39202,39312,38904,38732,39083,39196,38925,38827,38964,39175,39133,39183,38991,38977,38935,39217,38969,39069,38744,38899,38950,38990,38985,39183,39053,39053,38852,38974,38996,38968,38975,38917,38982,39056,38709,39059,38961,38937,38891,39039,39006,38935,38920,38857,39012,39065,38914,38928,38932,39033,38850,39088,38814,39060,38883,38814,39057,39047,38978,38787,38911,38929,38783,38834,39140,38804,38923,38934,38818,38863,39027,38862,38952,38960,38851,38708,38999,38785,38781,38785,38857,38947,38853,38878,39002,38961,38618,38967,39026,38803,38762,39108,38711,38854,38802,39047,38767,38945,38699,38745,38690,38886,38892,38916,38604,38910,38812,38908,38785,38872,38602,38814,38877,38966,38790,38676,38891,38738,38685,38927,38922,38776,38720,38810,38696,38777,38869,38703,38724,38922,38869,38668,38678,38888,38620,39004,38625,39091,38778,38734,38982,38825,38849,38922,38881,38646,38777,38883,38792,38899,38653,38587,38944,38851,38810,38721,38788,38660,38677,38739,38727,38882,38676,38592,38685,38623,38669,38753,38784,38669,38811,38688,38908,38800,38692,38679,38583,38710,38515,38867,38748,38573,38678,38883,38600,38698,38760,38743,38815,38635,38701,38627,38652,38663,38691,38758,38762,38742,38556,38708,38853,38631,38824,38724,38835,38698,38527,38835,38752,38561,38718,38548,38643,38671,38652,38748,38713,38644,38615,38653,38563,38619,38687,38424,38678,38737,38557,38648,38538,38577,38807,38489,38767,38764,38653,38702,38565,38739,38560,38584,38633,38593,38770,38522,38602,38673,38583,38734,38503,38725,38589,38788,38626,38406,38498,38669,38458,38665,38588,38676,38721,38485,38551,38680,38483,38628,38576,38637,38700,38532,38473,38564,38756,38633,38575,38588,38661,38461,38529,38717,38448,38528,38626,38445,38678,38591,38546,38545,38398,38553,38743,38458,38668,38518,38519,38352,38530,38582,38472,38584,38537,38637,38520,38696,38508,38551,38578,38617,38502,38470,38367,38599,38397,38441,38462,38440,38485,38547,38524,38629,38448,38480,38407,38386,38504,38408,38583,38514,38498,38418,38430,38597,38370,38465,38817,38376,38663,38483,38613,38510,38506,38485,38615,38514,38455,38342,38542,38343,38361,38442,38389,38496,38366,38480,38443,38598,38603,38470,38475,38552,38408,38532,38544,38539,38261,38410,38547,38354,38514,38497,38672,38315,38410,38332,38518,38556,38465,38364,38456,38269,38414,38366,38603,38503,38487,38287,38369,38480,38523,38443,38462,38350,38353,38475,38334,38350,38486,38364,38316,38426,38280,38397,38552,38394,38270,38513,38503,38233,38385,38176,38323,38578,38327,38296,38446,38228,38376,38376,38245,38591,38192,38216,38193,38422,38190,38228,38501,38472,38381,38287,38190,38303,38149,38301,38292,38296,38565,38188,38360,38498,38285,38377,38307,38506,38381,38407,38419,38271,38358,38404,38369,38310,38246,38250,38213,38571,38420,38238,38476,38395,38375,38266,38324,38233,38269,38248,38453,38305,38436,38365,38248,38324,38374,38200,38442,38365,38001,38336,38422,38242,38148,38191,38256,38259,38259,38255,38217,38217,38430,38374,38337,38219,38182,38254,38277,38331,38167,38338,38257,38279,38184,38489,38348,38163,38048,38415,38021,38343,38091,38329,38277,38260,38284,38292,38269,38214,38254,38349,38254,38360,38107,38321,38131,38264,38305,38320,38162,38327,38345,38179,38232,38244,38198,38208,38236,38055,38166,38082,38137,38131,38352,38340,38347,38208,38069,38199,38134,38299,38180,38337,38245,38223,38131,38042,38149,38167,38133,38130,38230,38161,38259,38380,38244,38213,38186,38378,38206,38223,38168,38070,38422,38204,38147,38010,38211,38142,38047,38306,38159,38162,38226,38143,38138,38214,38158,38214,38065,38465,38240,38177,38382,38112,38106,38116,38156,38153,38248,38050,38185,38003,38217,38071,38321,38151,38173,38143,38074,38130,38126,38138,38000,38277,38267,38006,38138,38194,38136,38233,38202,38145,37862,38241,37965,38077,38038,38009,38065,38171,38084,38232,38182,38122,38102,37957,38164,38222,38212,38043,38211,38270,38136,38168,38163,38075,38096,37903,38180,38131,37779,38146,38135,37977,38197,38146,38051,38170,38134,37941,38065,37969,38141,38121,38045,38043,38107,38040,37926,38096,37926,38364,38118,38258,38042,38020,38288,38085,38113,38127,37780,38060,38310,38073,38155,37985,38093,37956,37939,38363,37919,38172,38036,37866,38132,37842,38202,38030,38222,38121,38281,37978,38070,38133,37983,37965,38058,38084,38104,38023,38091,37952,38110,38009,37879,38110,37990,37942,38056,38152,37927,38046,37923,38027,37907,37919,38120,37949,37811,37976,38104,37955,38070,38088,38052,37860,37995,37975,38132,37811,37884,37946,38000,38274,38007,38184,37988,37914,37950,38071,37963,37970,38037,37950,37929,38061,37869,37944,37954,38030,37954,37891,37887,37926,38084,37906,38065,38040,37899,37823,37899,37956,38113,38046,37983,37787,38033,37882,38129,38029,38024,38051,37787,38000,37991,37953,37842,38034,37947,37863,37938,37881,38082,38063,37900,38083,37872,37875,37773,38109,37874,37992,37883,37815,37838,37930,38067,37934,37742,37945,38069,37895,37966,38111,37818,37921,38071,37977,37920,37851,37807,37901,37872,37834,38012,38008,37952,37912,37985,37816,37959,37957,37939,37948,37911,38030,37825,37920,37764,37871,37868,37839,37775,37788,37886,37901,38107,37771,37808,38065,38033,37967,38046,37993,37848,37857,37930,37710,37793,37957,37838,37878,37958,37875,38177,37916,37870,37835,37832,38103,37774,37984,38001,37894,37974,37798,37933,37931,37855,37786,37862,37894,37821,37713,37785,37788,38095,37980,37914,37763,37876,38079,37607,37717,37603,37917,37825,37801,37765,37978,37853,38003,37736,37753,38088,37852,37756,37801,37884,37840,37842,37854,37817,37834,37828,37925,37833,38050,37910,37667,37718,37816,37767,37840,37850,37803,37751,37906,37660,37764,37988,37695,37748,37907,37828,37658,37831,37810,38006,37878,37747,37856,37716,37858,38004,37794,37707,37849,37758,37801,37727,37936,37701,37815,37831,37794,37621,37742,37609,37659,37932,37582,37777,37708,37956,37738,37787,37786,37831,37675,37700,37682,37769,37743,37908,37780,37921,37702,37978,37807,37829,37707,37849,37658,37953,37821,37715,37629,37750,37813,37736,37776,37783,37685,37777,37924,37749,37770,37462,37830,37920,37575,37811,37792,37638,37795,37751,37647,37688,37856,37851,37805,37736,37669,37885,37610,37714,37726,37655,37539,37749,37919,37631,37816,37645,37792,37660,37692,37682,37664,37580,37840,37945,37745,37658,37657,37729,37670,37768,37563,37844,37767,37623,37854,37755,37649,37762,37957,37745,37745,37691,37794,37684,37765,37602,37720,37788,37672,37728,37611,37743,37535,37584,37738,37647,37732,37658,37772,37576,37713,37589,37676,37577,37540,37697,37550,37815,37735,37631,37855,37361,37685,37722,37786,37688,37657,37485,37887,37739,37618,37668,37608,37748,37597,37634,37780,37768,37468,37668,37551,37690,37625,37731,37811,37751,37590,37554,37681,37626,37659,37809,37673,37628,37498,37724,37858,37837,37652,37636,37731,37569,37630,37678,37557,37536,37622,37748,37590,37723,37369,37626,37705,37647,37542,37652,37608,37730,37690,37761,37697,37648,37495,37894,37604,37678,37662,37548,37535,37552,37626,37622,37922,37521,37608,37653,37704,37599,37661,37789,37434,37687,37585,37468,37560,37780,37443,37611,37744,37358,37744,37455,37540,37632,37604,37317,37610,37641,37620,37651,37630,37615,37533,37571,37704,37591,37656,37565,37686,37548,37583,37479,37454,37719,37628,37599,37574,37694,37538,37449,37776,37668,37487,37474,37613,37658,37658,37469,37553,37521,37655,37545,37653,37544,37690,37411,37616,37651,37500,37386,37735,37519,37585,37439,37637,37362,37575,37778,37472,37579,37584,37627,37675,37508,37405,37680,37515,37629,37645,37467,37494,37600,37404,37516,37644,37530,37604,37623,37617,37511,37695,37570,37536,37739,37626,37597,37500,37559,37524,37427,37515,37567,37499,37487,37548,37503,37527,37594,37646,37450,37400,37509,37625,37527,37428,37458,37565,37534,37464,37495,37367,37633,37352,37571,37508,37344,37667,37546,37565,37292,37667,37523,37542,37512,37438,37509,37521,37329,37718,37620,37484,37460,37554,37531,37366,37517,37534,37436,37453,37514,37594,37544,37421,37699,37262,37538,37378,37493,37310,37419,37513,37573,37431,37477,37521,37414,37661,37496,37504,37531,37411,37368,37496,37509,37373,37538,37582,37388,37372,37304,37653,37315,37484,37409,37542,37568,37287,37393,37565,37576,37415,37331,37664,37446,37471,37642,37290,37324,37474,37318,37593,37379,37194,37543,37435,37391,37410,37735,37581,37445,37325,37484,37579,37447,37429,37338,37437,37359,37612,37595,37335,37649,37623,37255,37262,37601,37351,37518,37397,37493,37318,37493,37373,37470,37385,37432,37328,37399,37469,37397,37534,37465,37412,37317,37239,37494,37470,37274,37466,37299,37401,37593,37425,37301,37334,37420,37537,37389,37386,37465,37471,37432,37383,37444,37476,37498,37342,37550,37237,37301,37376,37383,37530,37199,37554,37276,37410,37415,37434,37387,37569,37476,37213,37436,37475,37630,37320,37488,37398,37361,37316,37416,37464,37337,37423,37363,37379,37212,37472,37481,37200,37562,37220,37433,37377,37212,37371,37506,37354,37314,37398,37505,37564,37213,37480,37510,37281,37484,37345,37355,37421,37295,37507,37350,37358,37346,37303,37628,37207,37291,37438,37370,37326,37395,37317,37282,37368,37337,37452,37399,37433,37222,37286,37462,37307,37184,37279,37474,37492,37497,37407,37497,37292,37525,37377,37473,37206,37385,37283,37258,37209,37449,37448,37538,37438,37356,37399,37455,37323,37084,37515,37295,37362,37244,37254,37400,37075,37402,37372,37420,37327,37170,37261,37294,37278,37407,37336,37370,37293,37541,37308,37209,37268,37291,37319,37359
};

int tot=0;
bool ifp[10000000];
bool ifp_small[10000000];

inline long long max(long long a,long long b){
    return a>b?a:b;
}

void prim(int k,int q){
    long long start = (k-1)*800000+1;
    if(k==1) start+=1;
    long long end=(k)*800000;
    for(long long i=0;i*i<=end;i++) ifp_small[i]=true;
    for(long long i=0;i<=end-start;i++) ifp[i]=true;
    for(long long i=2;i*i<=end;i++){
        if(ifp_small[i]){
            for(long long j=i<<1;j*j<=end;j+=i) ifp_small[j]=false;
            for(long long j=max(2,(start+i-1)/i)*i;j<=end;j+=i) ifp[j-start]=false;
        }
    }
    int tot=0;
    for(long long i=0;i<=end-start;i++){
        if(ifp[i]==true) tot++;
        if(tot==q){
            cout<<i+start<<endl;
            exit(0);
        }
    }
}

int main(){
    int n;
    int k=0;
    int q=0;
    cin>>n;
    do{
        q+=p[++k];
    }while(q<n);
    q-=p[k];
    q=n-q;
    prim(k,q);
}