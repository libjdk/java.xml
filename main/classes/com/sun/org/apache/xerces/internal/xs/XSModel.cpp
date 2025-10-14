#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>

#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItemList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSAttributeGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSIDCDefinition = ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition;
using $XSModelGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSNamespaceItemList = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSModel_MethodInfo_[] = {
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributeGroup", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getComponents", "(S)Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"getComponentsByNamespace", "(SLjava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIDCDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModelGroupDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceItems", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItemList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaces", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNotationDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubstitutionGroup", "(Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;)Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XSModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSModel",
	nullptr,
	nullptr,
	nullptr,
	_XSModel_MethodInfo_
};

$Object* allocate$XSModel($Class* clazz) {
	return $of($alloc(XSModel));
}

$Class* XSModel::load$($String* name, bool initialize) {
	$loadClass(XSModel, name, initialize, &_XSModel_ClassInfo_, allocate$XSModel);
	return class$;
}

$Class* XSModel::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com