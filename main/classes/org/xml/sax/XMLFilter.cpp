#include <org/xml/sax/XMLFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace org {
	namespace xml {
		namespace sax {

$MethodInfo _XMLFilter_MethodInfo_[] = {
	{"getParent", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $ABSTRACT},
	{"setParent", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.XMLFilter",
	nullptr,
	"org.xml.sax.XMLReader",
	nullptr,
	_XMLFilter_MethodInfo_
};

$Object* allocate$XMLFilter($Class* clazz) {
	return $of($alloc(XMLFilter));
}

$Class* XMLFilter::load$($String* name, bool initialize) {
	$loadClass(XMLFilter, name, initialize, &_XMLFilter_ClassInfo_, allocate$XMLFilter);
	return class$;
}

$Class* XMLFilter::class$ = nullptr;

		} // sax
	} // xml
} // org