#include <org/w3c/dom/ls/LSInput.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$MethodInfo _LSInput_MethodInfo_[] = {
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getByteStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCertifiedText", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setByteStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCertifiedText", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setStringData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LSInput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSInput",
	nullptr,
	nullptr,
	nullptr,
	_LSInput_MethodInfo_
};

$Object* allocate$LSInput($Class* clazz) {
	return $of($alloc(LSInput));
}

$Class* LSInput::load$($String* name, bool initialize) {
	$loadClass(LSInput, name, initialize, &_LSInput_ClassInfo_, allocate$LSInput);
	return class$;
}

$Class* LSInput::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org