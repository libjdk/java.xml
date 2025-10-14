#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory$XMLGrammarPoolImplExtension.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/XMLSchemaFactory.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLSchemaFactory = ::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaFactory;
using $XMLGrammarPoolImpl = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$MethodInfo _XMLSchemaFactory$XMLGrammarPoolImplExtension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLSchemaFactory$XMLGrammarPoolImplExtension::*)()>(&XMLSchemaFactory$XMLGrammarPoolImplExtension::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSchemaFactory$XMLGrammarPoolImplExtension::*)(int32_t)>(&XMLSchemaFactory$XMLGrammarPoolImplExtension::init$))},
	{"getGrammarCount", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _XMLSchemaFactory$XMLGrammarPoolImplExtension_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolImplExtension", "com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory", "XMLGrammarPoolImplExtension", $STATIC},
	{}
};

$ClassInfo _XMLSchemaFactory$XMLGrammarPoolImplExtension_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory$XMLGrammarPoolImplExtension",
	"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl",
	nullptr,
	nullptr,
	_XMLSchemaFactory$XMLGrammarPoolImplExtension_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaFactory$XMLGrammarPoolImplExtension_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.XMLSchemaFactory"
};

$Object* allocate$XMLSchemaFactory$XMLGrammarPoolImplExtension($Class* clazz) {
	return $of($alloc(XMLSchemaFactory$XMLGrammarPoolImplExtension));
}

void XMLSchemaFactory$XMLGrammarPoolImplExtension::init$() {
	$XMLGrammarPoolImpl::init$();
}

void XMLSchemaFactory$XMLGrammarPoolImplExtension::init$(int32_t initialCapacity) {
	$XMLGrammarPoolImpl::init$(initialCapacity);
}

int32_t XMLSchemaFactory$XMLGrammarPoolImplExtension::getGrammarCount() {
	return this->fGrammarCount;
}

XMLSchemaFactory$XMLGrammarPoolImplExtension::XMLSchemaFactory$XMLGrammarPoolImplExtension() {
}

$Class* XMLSchemaFactory$XMLGrammarPoolImplExtension::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaFactory$XMLGrammarPoolImplExtension, name, initialize, &_XMLSchemaFactory$XMLGrammarPoolImplExtension_ClassInfo_, allocate$XMLSchemaFactory$XMLGrammarPoolImplExtension);
	return class$;
}

$Class* XMLSchemaFactory$XMLGrammarPoolImplExtension::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com