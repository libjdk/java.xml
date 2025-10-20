#include <javax/xml/transform/Transformer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Package.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/URIResolver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Properties = ::java::util::Properties;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Result = ::javax::xml::transform::Result;
using $Source = ::javax::xml::transform::Source;
using $URIResolver = ::javax::xml::transform::URIResolver;

namespace javax {
	namespace xml {
		namespace transform {

$MethodInfo _Transformer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Transformer::*)()>(&Transformer::init$))},
	{"clearParameters", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutputProperties", "()Ljava/util/Properties;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURIResolver", "()Ljavax/xml/transform/URIResolver;", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setOutputProperties", "(Ljava/util/Properties;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"transform", "(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Transformer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.transform.Transformer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Transformer_MethodInfo_
};

$Object* allocate$Transformer($Class* clazz) {
	return $of($alloc(Transformer));
}

void Transformer::init$() {
}

void Transformer::reset() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"This Transformer, \""_s, $($of(this)->getClass()->getName()), "\", does not support the reset functionality.  Specification \""_s}));
	$var($String, var$2, $$concat(var$3, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationTitle())));
	$var($String, var$1, $$concat(var$2, "\" version \""));
	$var($String, var$0, $$concat(var$1, $($nc($($of(this)->getClass()->getPackage()))->getSpecificationVersion())));
	$throwNew($UnsupportedOperationException, $$concat(var$0, "\""));
}

Transformer::Transformer() {
}

$Class* Transformer::load$($String* name, bool initialize) {
	$loadClass(Transformer, name, initialize, &_Transformer_ClassInfo_, allocate$Transformer);
	return class$;
}

$Class* Transformer::class$ = nullptr;

		} // transform
	} // xml
} // javax