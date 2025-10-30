#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <jcpp.h>

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$MethodInfo _XMLAttributes_MethodInfo_[] = {
	{"addAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAugmentations", "(I)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAugmentations", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAugmentations", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getNonNormalizedValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQualifiedName", "(I)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAllAttributes", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAttributeAt", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAugmentations", "(ILcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setNonNormalizedValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSpecified", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setType", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(ILjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLAttributes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLAttributes",
	nullptr,
	nullptr,
	nullptr,
	_XMLAttributes_MethodInfo_
};

$Object* allocate$XMLAttributes($Class* clazz) {
	return $of($alloc(XMLAttributes));
}

$Class* XMLAttributes::load$($String* name, bool initialize) {
	$loadClass(XMLAttributes, name, initialize, &_XMLAttributes_ClassInfo_, allocate$XMLAttributes);
	return class$;
}

$Class* XMLAttributes::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com