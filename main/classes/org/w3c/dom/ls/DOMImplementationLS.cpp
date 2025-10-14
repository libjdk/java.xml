#include <org/w3c/dom/ls/DOMImplementationLS.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSOutput.h>
#include <org/w3c/dom/ls/LSParser.h>
#include <org/w3c/dom/ls/LSSerializer.h>
#include <jcpp.h>

#undef MODE_ASYNCHRONOUS
#undef MODE_SYNCHRONOUS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSOutput = ::org::w3c::dom::ls::LSOutput;
using $LSParser = ::org::w3c::dom::ls::LSParser;
using $LSSerializer = ::org::w3c::dom::ls::LSSerializer;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$FieldInfo _DOMImplementationLS_FieldInfo_[] = {
	{"MODE_SYNCHRONOUS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMImplementationLS, MODE_SYNCHRONOUS)},
	{"MODE_ASYNCHRONOUS", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMImplementationLS, MODE_ASYNCHRONOUS)},
	{}
};

$MethodInfo _DOMImplementationLS_MethodInfo_[] = {
	{"createLSInput", "()Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT},
	{"createLSOutput", "()Lorg/w3c/dom/ls/LSOutput;", nullptr, $PUBLIC | $ABSTRACT},
	{"createLSParser", "(SLjava/lang/String;)Lorg/w3c/dom/ls/LSParser;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException"},
	{"createLSSerializer", "()Lorg/w3c/dom/ls/LSSerializer;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMImplementationLS_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.DOMImplementationLS",
	nullptr,
	nullptr,
	_DOMImplementationLS_FieldInfo_,
	_DOMImplementationLS_MethodInfo_
};

$Object* allocate$DOMImplementationLS($Class* clazz) {
	return $of($alloc(DOMImplementationLS));
}

$Class* DOMImplementationLS::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationLS, name, initialize, &_DOMImplementationLS_ClassInfo_, allocate$DOMImplementationLS);
	return class$;
}

$Class* DOMImplementationLS::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org