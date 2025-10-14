#include <com/sun/org/apache/xml/internal/serializer/XSLOutputAttributes.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _XSLOutputAttributes_MethodInfo_[] = {
	{"getDoctypePublic", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDoctypeSystem", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndent", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndentAmount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOmitXMLDeclaration", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutputPropertyDefault", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStandalone", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setCdataSectionElements", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{"setDoctype", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDoctypePublic", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDoctypeSystem", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setIndent", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMediaType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOmitXMLDeclaration", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOutputPropertyDefault", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setStandalone", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSLOutputAttributes_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.XSLOutputAttributes",
	nullptr,
	nullptr,
	nullptr,
	_XSLOutputAttributes_MethodInfo_
};

$Object* allocate$XSLOutputAttributes($Class* clazz) {
	return $of($alloc(XSLOutputAttributes));
}

$Class* XSLOutputAttributes::load$($String* name, bool initialize) {
	$loadClass(XSLOutputAttributes, name, initialize, &_XSLOutputAttributes_ClassInfo_, allocate$XSLOutputAttributes);
	return class$;
}

$Class* XSLOutputAttributes::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com