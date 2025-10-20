#include <com/sun/org/apache/xerces/internal/xpointer/ShortHandPointer.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerPart.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ATTRIBUTE_PSVI
#undef EVENT_ELEMENT_EMPTY
#undef EVENT_ELEMENT_START

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XPointerPart = ::com::sun::org::apache::xerces::internal::xpointer::XPointerPart;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ItemPSVI = ::com::sun::org::apache::xerces::internal::xs::ItemPSVI;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

$FieldInfo _ShortHandPointer_FieldInfo_[] = {
	{"fShortHandPointer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ShortHandPointer, fShortHandPointer)},
	{"fIsFragmentResolved", "Z", nullptr, $PRIVATE, $field(ShortHandPointer, fIsFragmentResolved)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(ShortHandPointer, fSymbolTable)},
	{"fMatchingChildCount", "I", nullptr, 0, $field(ShortHandPointer, fMatchingChildCount)},
	{}
};

$MethodInfo _ShortHandPointer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShortHandPointer::*)()>(&ShortHandPointer::init$))},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(static_cast<void(ShortHandPointer::*)($SymbolTable*)>(&ShortHandPointer::init$))},
	{"getChildrenSchemaDeterminedID", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ShortHandPointer::*)($XMLAttributes*,int32_t)>(&ShortHandPointer::getChildrenSchemaDeterminedID)), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDDeterminedID", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ShortHandPointer::*)($XMLAttributes*,int32_t)>(&ShortHandPointer::getDTDDeterminedID)), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getSchemaDeterminedID", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(ShortHandPointer::*)($XMLAttributes*,int32_t)>(&ShortHandPointer::getSchemaDeterminedID)), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getSchemeData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSchemeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasMatchingIdentifier", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ShortHandPointer::*)($QName*,$XMLAttributes*,$Augmentations*,int32_t)>(&ShortHandPointer::hasMatchingIdentifier)), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isChildFragmentResolved", "()Z", nullptr, $PUBLIC},
	{"isFragmentResolved", "()Z", nullptr, $PUBLIC},
	{"parseXPointer", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"resolveXPointer", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;I)Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setSchemeData", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSchemeName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ShortHandPointer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xpointer.ShortHandPointer",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xpointer.XPointerPart",
	_ShortHandPointer_FieldInfo_,
	_ShortHandPointer_MethodInfo_
};

$Object* allocate$ShortHandPointer($Class* clazz) {
	return $of($alloc(ShortHandPointer));
}

void ShortHandPointer::init$() {
	this->fIsFragmentResolved = false;
	this->fMatchingChildCount = 0;
}

void ShortHandPointer::init$($SymbolTable* symbolTable) {
	this->fIsFragmentResolved = false;
	this->fMatchingChildCount = 0;
	$set(this, fSymbolTable, symbolTable);
}

void ShortHandPointer::parseXPointer($String* part) {
	$set(this, fShortHandPointer, part);
	this->fIsFragmentResolved = false;
}

bool ShortHandPointer::resolveXPointer($QName* element, $XMLAttributes* attributes, $Augmentations* augs, int32_t event) {
	if (this->fMatchingChildCount == 0) {
		this->fIsFragmentResolved = false;
	}
	if (event == $XPointerPart::EVENT_ELEMENT_START) {
		if (this->fMatchingChildCount == 0) {
			this->fIsFragmentResolved = hasMatchingIdentifier(element, attributes, augs, event);
		}
		if (this->fIsFragmentResolved) {
			++this->fMatchingChildCount;
		}
	} else if (event == $XPointerPart::EVENT_ELEMENT_EMPTY) {
		if (this->fMatchingChildCount == 0) {
			this->fIsFragmentResolved = hasMatchingIdentifier(element, attributes, augs, event);
		}
	} else if (this->fIsFragmentResolved) {
		--this->fMatchingChildCount;
	}
	return this->fIsFragmentResolved;
}

bool ShortHandPointer::hasMatchingIdentifier($QName* element, $XMLAttributes* attributes, $Augmentations* augs, int32_t event) {
	$var($String, normalizedValue, nullptr);
	if (attributes != nullptr) {
		for (int32_t i = 0; i < attributes->getLength(); ++i) {
			$assign(normalizedValue, getSchemaDeterminedID(attributes, i));
			if (normalizedValue != nullptr) {
				break;
			}
			$assign(normalizedValue, getChildrenSchemaDeterminedID(attributes, i));
			if (normalizedValue != nullptr) {
				break;
			}
			$assign(normalizedValue, getDTDDeterminedID(attributes, i));
			if (normalizedValue != nullptr) {
				break;
			}
		}
	}
	if (normalizedValue != nullptr && normalizedValue->equals(this->fShortHandPointer)) {
		return true;
	}
	return false;
}

$String* ShortHandPointer::getDTDDeterminedID($XMLAttributes* attributes, int32_t index) {
	if ($nc($($nc(attributes)->getType(index)))->equals("ID"_s)) {
		return attributes->getValue(index);
	}
	return nullptr;
}

$String* ShortHandPointer::getSchemaDeterminedID($XMLAttributes* attributes, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Augmentations, augs, $nc(attributes)->getAugmentations(index));
	$init($Constants);
	$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $nc(augs)->getItem($Constants::ATTRIBUTE_PSVI)));
	if (attrPSVI != nullptr) {
		$var($XSTypeDefinition, typeDef, attrPSVI->getMemberTypeDefinition());
		if (typeDef != nullptr) {
			$assign(typeDef, attrPSVI->getTypeDefinition());
		}
		if (typeDef != nullptr && $nc(($cast($XSSimpleType, typeDef)))->isIDType()) {
			return $nc($(attrPSVI->getSchemaValue()))->getNormalizedValue();
		}
	}
	return nullptr;
}

$String* ShortHandPointer::getChildrenSchemaDeterminedID($XMLAttributes* attributes, int32_t index) {
	return nullptr;
}

bool ShortHandPointer::isFragmentResolved() {
	return this->fIsFragmentResolved;
}

bool ShortHandPointer::isChildFragmentResolved() {
	return this->fIsFragmentResolved && (this->fMatchingChildCount > 0);
}

$String* ShortHandPointer::getSchemeName() {
	return this->fShortHandPointer;
}

$String* ShortHandPointer::getSchemeData() {
	return nullptr;
}

void ShortHandPointer::setSchemeName($String* schemeName) {
	$set(this, fShortHandPointer, schemeName);
}

void ShortHandPointer::setSchemeData($String* schemeData) {
}

ShortHandPointer::ShortHandPointer() {
}

$Class* ShortHandPointer::load$($String* name, bool initialize) {
	$loadClass(ShortHandPointer, name, initialize, &_ShortHandPointer_ClassInfo_, allocate$ShortHandPointer);
	return class$;
}

$Class* ShortHandPointer::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com