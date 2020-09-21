#include "class_test_JniPerson.h"
#include "Person.h"

JNIEXPORT jlong JNICALL Java_class_1test_JniPerson_createNativeObject(JNIEnv *Env, jobject obj)
{
	return (jlong)new Person();
}


JNIEXPORT void JNICALL Java_class_1test_JniPerson_nativeInitPerson(JNIEnv *Env, jobject obj, jlong thiz, jint _age, jstring _name)
{
	const char *name = Env->GetStringUTFChars(_name,0);
	((Person*)thiz)->init(26, name);
}


JNIEXPORT void JNICALL Java_class_1test_JniPerson_nativeSayInfo(JNIEnv *Env, jobject obj, jlong thiz)
{
	((Person*)thiz)->say_info();
}

JNIEXPORT void JNICALL Java_class_1test_JniPerson_nativeWriteFile(JNIEnv *Env, jobject obj, jlong thiz, jstring file_path_name, jstring text_content)
{
	const char* name;
	const char* filecontent;
	name = Env->GetStringUTFChars(file_path_name, 0);
	filecontent = Env->GetStringUTFChars(text_content, 0);
	((Person*)thiz)->writeFile(name, filecontent);
}
