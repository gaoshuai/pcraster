/* this file is created by oplist. do not edit */
/* major opcodes */
#ifndef INCLUDED_MAJOR_OP
#define INCLUDED_MAJOR_OP
typedef enum MAJOR_CODE { 
OP_NOP=0 ,
OP_ILL=1 ,
OP_IF_ELSE=2 ,
OP_NE=3 ,
OP_EQ=4 ,
OP_GT=5 ,
OP_GE=6 ,
OP_LT=7 ,
OP_LE=8 ,
OP_MIN=9 ,
OP_MAX=10 ,
OP_COVER=11 ,
OP_TIMEINPUT=12 ,
OP_TIMEINPUTSPARSE=13 ,
OP_SIMPLE_RULE=14 ,
OP_NORMAL=15 ,
OP_UNIFORM=16 ,
OP_IF=17 ,
OP_SPATIAL=18 ,
OP_SPREADZONE=19 ,
OP_SPREADMAXZONE=20 ,
OP_DYNAMICWAVEQ=21 ,
OP_SPREADLDDZONE=22 ,
OP_ORDER=23 ,
OP_WINDOWMINIMUM=24 ,
OP_BRENNER=25 ,
OP_WINDOWMAXIMUM=26 ,
OP_AREAMAXIMUM=27 ,
OP_AREAMINIMUM=28 ,
OP_WINDOWDIVERSITY=29 ,
OP_AREADIVERSITY=30 ,
OP_AREAMAJORITY=31 ,
OP_WINDOWMAJORITY=32 ,
OP_KINEMATIC=33 ,
OP_MUL=34 ,
OP_ASSMUL=35 ,
OP_FDIV=36 ,
OP_ASSFDIV=37 ,
OP_POW=38 ,
OP_ASSPOW=39 ,
OP_MOD=40 ,
OP_IDIV=41 ,
OP_UADD=42 ,
OP_UMIN=43 ,
OP_BADD=44 ,
OP_ASSBADD=45 ,
OP_BMIN=46 ,
OP_ASSBMIN=47 ,
OP_MAPMINIMUM=48 ,
OP_MAPMAXIMUM=49 ,
OP_TIMEINPUTSCALAR=50 ,
OP_TIMEINPUTDIRECTIONAL=51 ,
OP_TIMEINPUTBOOLEAN=52 ,
OP_TIMEINPUTLDD=53 ,
OP_TIMEINPUTNOMINAL=54 ,
OP_TIMEINPUTORDINAL=55 ,
OP_LOOKUPNOMINAL=56 ,
OP_LOOKUPBOOLEAN=57 ,
OP_LOOKUPORDINAL=58 ,
OP_LOOKUPSCALAR=59 ,
OP_LOOKUPLINEAR=60 ,
OP_LOOKUPDIRECTIONAL=61 ,
OP_LOOKUPLDD=62 ,
OP_INDEXNOMINAL=63 ,
OP_INDEXBOOLEAN=64 ,
OP_INDEXORDINAL=65 ,
OP_INDEXSCALAR=66 ,
OP_INDEXDIRECTIONAL=67 ,
OP_INDEXLDD=68 ,
OP_INDEXTABLE=69 ,
OP_INDEX=70 ,
OP_LDD=71 ,
OP_DIRECTIONAL=72 ,
OP_SCALAR=73 ,
OP_BOOLEAN=74 ,
OP_NOMINAL=75 ,
OP_ORDINAL=76 ,
OP_AND=77 ,
OP_OR=78 ,
OP_XOR=79 ,
OP_NOT=80 ,
OP_TEST_UNTIL=81 ,
OP_SIN=82 ,
OP_COS=83 ,
OP_TAN=84 ,
OP_ASIN=85 ,
OP_ACOS=86 ,
OP_ATAN=87 ,
OP_ABS=88 ,
OP_EXP=89 ,
OP_FAC=90 ,
OP_ROUNDDOWN=91 ,
OP_LN=92 ,
OP_LOG10=93 ,
OP_ROUNDUP=94 ,
OP_ROUNDOFF=95 ,
OP_SQRT=96 ,
OP_SQR=97 ,
OP_XCOORDINATE=98 ,
OP_YCOORDINATE=99 ,
OP_UNIQUEID=100 ,
OP_MOVE=101 ,
OP_SHIFT=102 ,
OP_SHIFT0=103 ,
OP_CELLLENGTH=104 ,
OP_CELLAREA=105 ,
OP_TIME=106 ,
OP_TIMESLICE=107 ,
OP_MAPNORMAL=108 ,
OP_MAPUNIFORM=109 ,
OP_SUCC=110 ,
OP_PRED=111 ,
OP_PIT=112 ,
OP_NODIRECTION=113 ,
OP_DEFINED=114 ,
OP_ACCUSTATE=115 ,
OP_ACCUCAPACITYSTATE=116 ,
OP_ACCUTHRESHOLDSTATE=117 ,
OP_ACCUFRACTIONSTATE=118 ,
OP_ACCUTRIGGERSTATE=119 ,
OP_ACCUTRAVELTIMESTATE=120 ,
OP_ACCUFLUX=121 ,
OP_ACCUCAPACITYFLUX=122 ,
OP_ACCUTHRESHOLDFLUX=123 ,
OP_ACCUFRACTIONFLUX=124 ,
OP_ACCUTRIGGERFLUX=125 ,
OP_ACCUTRAVELTIMEFLUX=126 ,
OP_DIFFUSEFLUX=127 ,
OP_DIFFUSESTATE=128 ,
OP_ACCU=129 ,
OP_ACCUCAPACITY=130 ,
OP_ACCUTHRESHOLD=131 ,
OP_ACCUFRACTION=132 ,
OP_ACCUTRIGGER=133 ,
OP_ACCUTRAVELTIME=134 ,
OP_DIFFUSE=135 ,
OP_TIMEOUTPUT=136 ,
OP_MAPSUMMARY=137 ,
OP_MAPTOTAL=138 ,
OP_MAPAREA=139 ,
OP_AREAAREA=140 ,
OP_CLUMP=141 ,
OP_DRAIN=142 ,
OP_PATH=143 ,
OP_ASPECT=144 ,
OP_SLOPE=145 ,
OP_WINDOW4TOTAL=146 ,
OP_PROFCURV=147 ,
OP_PLANCURV=148 ,
OP_VIEW=149 ,
OP_EXTENTOFVIEW=150 ,
OP_INVERSEDISTANCE=151 ,
OP_SPREAD=152 ,
OP_SPREADMAX=153 ,
OP_SPREADLDD=154 ,
OP_CATCHMENT=155 ,
OP_SUBCATCHMENT=156 ,
OP_WINDOWAVERAGE=157 ,
OP_MARKWHILESUMLE=158 ,
OP_MARKUNTILSUMGE=159 ,
OP_ELLIPSEAVERAGE=160 ,
OP_INFLUENCESIMPLEGAUSS=161 ,
OP_DISTRIBUTESIMPLEGAUSS=162 ,
OP_IBNGAUSS=163 ,
OP_HORIZONTAN=164 ,
OP_CATCHMENTTOTAL=165 ,
OP_AREAAVERAGE=166 ,
OP_AREATOTAL=167 ,
OP_AREAUNIFORM=168 ,
OP_AREANORMAL=169 ,
OP_WINDOWTOTAL=170 ,
OP_WINDOWHIGHPASS=171 ,
OP_LDDDIST=172 ,
OP_DOWNSTREAMTOTAL=173 ,
OP_UPSTREAM=174 ,
OP_STREAMORDER=175 ,
OP_TRANSIENT=176 ,
OP_DOWNSTREAM=177 ,
OP_DOWNSTREAMDIST=178 ,
OP_LDDMASK=179 ,
OP_LDDREPAIR=180 ,
OP_SLOPELENGTH=181 ,
OP_LDDCREATE=182 ,
OP_LDDCREATEDEM=183 ,
OP_SIN_D=184 ,
OP_COS_D=185 ,
OP_TAN_D=186 ,
OP_SIN_S=187 ,
OP_COS_S=188 ,
OP_TAN_S=189 ,
OP_TIMEOUTPUT_4=190 ,
OP_TIMEOUTPUT_S=191 ,
OP_MIN_4=192 ,
OP_MIN_S=193 ,
OP_MAX_4=194 ,
OP_MAX_S=195 ,
OP_COVER_1=196 ,
OP_COVER_4=197 ,
OP_COVER_S=198 ,
OP_NE_1=199 ,
OP_NE_4=200 ,
OP_NE_S=201 ,
OP_EQ_1=202 ,
OP_EQ_4=203 ,
OP_EQ_S=204 ,
OP_GT_4=205 ,
OP_GT_S=206 ,
OP_GE_4=207 ,
OP_GE_S=208 ,
OP_LT_4=209 ,
OP_LT_S=210 ,
OP_LE_4=211 ,
OP_LE_S=212 ,
OP_4TO1=213 ,
OP_STO1=214 ,
OP_STO4=215 ,
OP_1_2_B=216 ,
OP_4_2_B=217 ,
OP_S_2_B=218 ,
OP_1_2_4=219 ,
OP_S_2_4=220 ,
OP_1_2_S=221 ,
OP_4_2_S=222 ,
OP_S_2_D=223 ,
OP_D_2_S=224 ,
OP_1_2_D=225 ,
OP_4_2_D=226 ,
OP_L_2_D=227 ,
OP_4_2_L=228 ,
OP_S_2_L=229 ,
OP_D_2_L=230 ,
OP_MAPMINIMUM_4=231 ,
OP_MAPMINIMUM_S=232 ,
OP_MAPMAXIMUM_4=233 ,
OP_MAPMAXIMUM_S=234 ,
OP_MAPAREA_1=235 ,
OP_MAPAREA_4=236 ,
OP_MAPAREA_S=237 ,
OP_SPATIAL_1=238 ,
OP_SPATIAL_4=239 ,
OP_SPATIAL_S=240 ,
OP_DEFINED_1=241 ,
OP_DEFINED_4=242 ,
OP_DEFINED_S=243 ,
OP_IF_1=244 ,
OP_IF_4=245 ,
OP_IF_S=246 ,
OP_IF_ELSE_1=247 ,
OP_IF_ELSE_4=248 ,
OP_IF_ELSE_S=249 ,
OP_SPREAD_IMPL=250 ,
OP_SPREADMAX_IMPL=251 ,
OP_DYNAMICWAVEH=252 ,
OP_SPREADLDD_IMPL=253 ,
OP_LDDCREATE_IMPL=254 ,
OP_DYNAMICWAVE=255 
} MAJOR_CODE ; 
#endif /* INCLUDED_MAJOR_OP */
