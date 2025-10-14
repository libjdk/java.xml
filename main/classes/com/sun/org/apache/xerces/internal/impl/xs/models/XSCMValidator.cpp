#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef FIRST_ERROR
#undef SUBSEQUENT_ERROR

using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _XSCMValidator_FieldInfo_[] = {
	{"FIRST_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSCMValidator, FIRST_ERROR)},
	{"SUBSEQUENT_ERROR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSCMValidator, SUBSEQUENT_ERROR)},
	{}
};

$MethodInfo _XSCMValidator_MethodInfo_[] = {
	{"checkMinMaxBounds", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"checkUniqueParticleAttribution", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"endContentModel", "([I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getTermName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCompactedForUPA", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"occurenceInfo", "([I)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"oneTransition", "(Lcom/sun/org/apache/xerces/internal/xni/QName;[ILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"startContentModel", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"whatCanGoHere", "([I)Ljava/util/List;", "([I)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSCMValidator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator",
	nullptr,
	nullptr,
	_XSCMValidator_FieldInfo_,
	_XSCMValidator_MethodInfo_
};

$Object* allocate$XSCMValidator($Class* clazz) {
	return $of($alloc(XSCMValidator));
}

$Class* XSCMValidator::load$($String* name, bool initialize) {
	$loadClass(XSCMValidator, name, initialize, &_XSCMValidator_ClassInfo_, allocate$XSCMValidator);
	return class$;
}

$Class* XSCMValidator::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com