/* generated by javabind version 1.1a */
#include "JavaVM.oc.h"

extern jclass javabind_class_java_lang_Throwable;
extern jclass javabind_class_java_io_PrintWriter;
extern jclass javabind_class_java_io_PrintStream;
extern jclass javabind_class_java_lang_Object;
extern jclass javabind_class_java_lang_Class;
extern jclass javabind_class_java_io_Serializable;
static jmethodID cId_AI1;
static jmethodID cId_AI2;
static jmethodID mId_AI3;
static jmethodID mId_AI4;
static jmethodID mId_AI5;
static jmethodID mId_AI6;
static jmethodID mId_AI7;
static jmethodID mId_AI8;
static jmethodID mId_AI9;
static jmethodID mId_AI10;
static jmethodID mId_AI11;
static jmethodID mId_AI12;
static jmethodID mId_AI13;
static jmethodID mId_AI14;
static jmethodID mId_AI15;
static jmethodID mId_AI16;
static jmethodID mId_AI17;

extern OBJ _Ajava_Alang_AThrowable_AI1(OBJ unit){
 OBJ y;
 { jvalue _argv[1];
  jobject _res;
  _res = javabind_NewObjectA(javabind_class_java_lang_Throwable,cId_AI1,_argv)
    ;
  javabind_catch_fail();
  javabind_fromObject(_res,y);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI2(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  jobject _res;
  javabind_asString(x1,_argv[0].l);
  _res = javabind_NewObjectA(javabind_class_java_lang_Throwable,cId_AI2,_argv)
    ;
  javabind_catch_fail();
  javabind_fromObject(_res,y);
  javabind_free_temp(_argv[0].l);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI3(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  jobject _res;
  javabind_asObject(x1,_argv[0].l);
  _res = javabind_CallObjectMethodA(_argv[0].l,mId_AI3,&_argv[1]);
  javabind_catch_fail();
  javabind_fromObject(_res,y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI4(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  jint _res;
  javabind_asObject(x1,_argv[0].l);
  _res = javabind_CallIntMethodA(_argv[0].l,mId_AI4,&_argv[1]);
  javabind_catch_fail();
  javabind_fromInt(_res,y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI5(OBJ x1,OBJ x2,OBJ unit){
 OBJ y;
 { jvalue _argv[3];
  jboolean _res;
  javabind_asObject(x1,_argv[0].l);
  javabind_asObject(x2,_argv[1].l);
  _res = javabind_CallBooleanMethodA(_argv[0].l,mId_AI5,&_argv[1]);
  javabind_catch_fail();
  javabind_fromBoolean(_res,y);
  javabind_free_arg(x1);
  javabind_free_arg(x2);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI6(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  jobject _res;
  javabind_asObject(x1,_argv[0].l);
  _res = javabind_CallObjectMethodA(_argv[0].l,mId_AI6,&_argv[1]);
  javabind_catch_fail();
  javabind_fromString(_res,y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI7(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  javabind_asObject(x1,_argv[0].l);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI7,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI8(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  javabind_asObject(x1,_argv[0].l);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI8,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI9(OBJ x1,OBJ x2,OBJ unit){
 OBJ y;
 { jvalue _argv[3];
  javabind_asObject(x1,_argv[0].l);
  javabind_asLong(x2,_argv[1].j);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI9,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI10(OBJ x1,OBJ x2,OBJ x3,OBJ unit){
 OBJ y;
 { jvalue _argv[4];
  javabind_asObject(x1,_argv[0].l);
  javabind_asLong(x2,_argv[1].j);
  javabind_asInt(x3,_argv[2].i);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI10,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI11(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  javabind_asObject(x1,_argv[0].l);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI11,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI12(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  jobject _res;
  javabind_asObject(x1,_argv[0].l);
  _res = javabind_CallObjectMethodA(_argv[0].l,mId_AI12,&_argv[1]);
  javabind_catch_fail();
  javabind_fromString(_res,y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI13(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  jobject _res;
  javabind_asObject(x1,_argv[0].l);
  _res = javabind_CallObjectMethodA(_argv[0].l,mId_AI13,&_argv[1]);
  javabind_catch_fail();
  javabind_fromString(_res,y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI14(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  javabind_asObject(x1,_argv[0].l);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI14,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI15(OBJ x1,OBJ x2,OBJ unit){
 OBJ y;
 { jvalue _argv[3];
  javabind_asObject(x1,_argv[0].l);
  javabind_asObject(x2,_argv[1].l);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI15,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);
  javabind_free_arg(x2);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI16(OBJ x1,OBJ x2,OBJ unit){
 OBJ y;
 { jvalue _argv[3];
  javabind_asObject(x1,_argv[0].l);
  javabind_asObject(x2,_argv[1].l);
  javabind_CallVoidMethodA(_argv[0].l,mId_AI16,&_argv[1]);
  javabind_catch_fail();
  javabind_fromVoid(y);
  javabind_free_arg(x1);
  javabind_free_arg(x2);}
 
 javabind_return(y);}

extern OBJ _Ajava_Alang_AThrowable_AI17(OBJ x1,OBJ unit){
 OBJ y;
 { jvalue _argv[2];
  jobject _res;
  javabind_asObject(x1,_argv[0].l);
  _res = javabind_CallObjectMethodA(_argv[0].l,mId_AI17,&_argv[1]);
  javabind_catch_fail();
  javabind_fromObject(_res,y);
  javabind_free_arg(x1);}
 
 javabind_return(y);}


static void init_const_Ajava_Alang_AThrowable(){
 cId_AI1 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"<init>","()V");
 cId_AI2 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"<init>","(Ljava/lang/String;)V")
   ;
 mId_AI3 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"getClass","()Ljava/lang/Class;")
   ;
 mId_AI4 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"hashCode","()I");
 mId_AI5 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"equals","(Ljava/lang/Object;)Z")
   ;
 mId_AI6 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"toString","()Ljava/lang/String;")
   ;
 mId_AI7 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"notify","()V");
 mId_AI8 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"notifyAll","()V")
   ;
 mId_AI9 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"wait","(J)V");
 mId_AI10 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"wait","(JI)V");
 mId_AI11 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"wait","()V");
 mId_AI12 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"getMessage","()Ljava/lang/String;")
   ;
 mId_AI13 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"getLocalizedMessage","()Ljava/lang/String;")
   ;
 mId_AI14 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"printStackTrace","()V")
   ;
 mId_AI15 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"printStackTrace","(Ljava/io/PrintStream;)V")
   ;
 mId_AI16 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"printStackTrace","(Ljava/io/PrintWriter;)V")
   ;
 mId_AI17 =
    javabind_GetMethodID(javabind_class_java_lang_Throwable,"fillInStackTrace","()Ljava/lang/Throwable;")
   ;}
