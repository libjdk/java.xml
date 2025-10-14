#include <org/xml/sax/ext/EntityResolver2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $InputSource = ::org::xml::sax::InputSource;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$MethodInfo _EntityResolver2_MethodInfo_[] = {
	{"getExternalSubset", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException,java.io.IOException"},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.xml.sax.SAXException,java.io.IOException"},
	{}
};

$ClassInfo _EntityResolver2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.ext.EntityResolver2",
	nullptr,
	"org.xml.sax.EntityResolver",
	nullptr,
	_EntityResolver2_MethodInfo_
};

$Object* allocate$EntityResolver2($Class* clazz) {
	return $of($alloc(EntityResolver2));
}

$Class* EntityResolver2::load$($String* name, bool initialize) {
	$loadClass(EntityResolver2, name, initialize, &_EntityResolver2_ClassInfo_, allocate$EntityResolver2);
	return class$;
}

$Class* EntityResolver2::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org