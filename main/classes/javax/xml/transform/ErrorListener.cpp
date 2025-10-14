#include <javax/xml/transform/ErrorListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _ErrorListener_MethodInfo_[] = {
	{"error", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{"fatalError", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{"warning", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _ErrorListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.transform.ErrorListener",
	nullptr,
	nullptr,
	nullptr,
	_ErrorListener_MethodInfo_
};

$Object* allocate$ErrorListener($Class* clazz) {
	return $of($alloc(ErrorListener));
}

$Class* ErrorListener::load$($String* name, bool initialize) {
	$loadClass(ErrorListener, name, initialize, &_ErrorListener_ClassInfo_, allocate$ErrorListener);
	return class$;
}

$Class* ErrorListener::class$ = nullptr;

		} // transform
	} // xml
} // javax