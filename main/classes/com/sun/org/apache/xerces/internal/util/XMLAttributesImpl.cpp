#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>

#include <com/sun/org/apache/xerces/internal/util/PrimeNumberSequenceGenerator.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <jcpp.h>

#undef MAX_HASH_COLLISIONS
#undef MAX_VALUE
#undef MULTIPLIERS_MASK
#undef MULTIPLIERS_SIZE
#undef SIZE_LIMIT
#undef TABLE_SIZE

using $XMLAttributesImpl$AttributeArray = $Array<::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl$Attribute>;
using $PrimeNumberSequenceGenerator = ::com::sun::org::apache::xerces::internal::util::PrimeNumberSequenceGenerator;
using $XMLAttributesImpl$Attribute = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl$Attribute;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLBufferListener = ::com::sun::xml::internal::stream::XMLBufferListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLAttributesImpl_FieldInfo_[] = {
	{"TABLE_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLAttributesImpl, TABLE_SIZE)},
	{"MAX_HASH_COLLISIONS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLAttributesImpl, MAX_HASH_COLLISIONS)},
	{"MULTIPLIERS_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLAttributesImpl, MULTIPLIERS_SIZE)},
	{"MULTIPLIERS_MASK", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLAttributesImpl, MULTIPLIERS_MASK)},
	{"SIZE_LIMIT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLAttributesImpl, SIZE_LIMIT)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(XMLAttributesImpl, fNamespaces)},
	{"fLargeCount", "I", nullptr, $PROTECTED, $field(XMLAttributesImpl, fLargeCount)},
	{"fLength", "I", nullptr, $PROTECTED, $field(XMLAttributesImpl, fLength)},
	{"fAttributes", "[Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute;", nullptr, $PROTECTED, $field(XMLAttributesImpl, fAttributes)},
	{"fAttributeTableView", "[Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute;", nullptr, $PROTECTED, $field(XMLAttributesImpl, fAttributeTableView)},
	{"fAttributeTableViewChainState", "[I", nullptr, $PROTECTED, $field(XMLAttributesImpl, fAttributeTableViewChainState)},
	{"fTableViewBuckets", "I", nullptr, $PROTECTED, $field(XMLAttributesImpl, fTableViewBuckets)},
	{"fIsTableViewConsistent", "Z", nullptr, $PROTECTED, $field(XMLAttributesImpl, fIsTableViewConsistent)},
	{"fHashMultipliers", "[I", nullptr, $PROTECTED, $field(XMLAttributesImpl, fHashMultipliers)},
	{}
};

$MethodInfo _XMLAttributesImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLAttributesImpl::*)()>(&XMLAttributesImpl::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(XMLAttributesImpl::*)(int32_t)>(&XMLAttributesImpl::init$))},
	{"addAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"addAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)I", nullptr, $PUBLIC},
	{"addAttributeNS", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkDuplicatesNS", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC},
	{"checkManyDuplicatesNS", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $method(static_cast<$QName*(XMLAttributesImpl::*)()>(&XMLAttributesImpl::checkManyDuplicatesNS))},
	{"cleanTableView", "()V", nullptr, $PROTECTED},
	{"getAugmentations", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC},
	{"getAugmentations", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC},
	{"getAugmentations", "(I)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndexByLocalName", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndexFast", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndexFast", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNonNormalizedValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getQualifiedName", "(I)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC},
	{"getReportableType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(XMLAttributesImpl::*)($String*)>(&XMLAttributesImpl::getReportableType))},
	{"getTableViewBucket", "(Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"getTableViewBucket", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"growTableView", "()V", nullptr, $PRIVATE, $method(static_cast<void(XMLAttributesImpl::*)()>(&XMLAttributesImpl::growTableView))},
	{"hash", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XMLAttributesImpl::*)($String*)>(&XMLAttributesImpl::hash))},
	{"hash", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XMLAttributesImpl::*)($String*,$String*)>(&XMLAttributesImpl::hash))},
	{"hash0", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XMLAttributesImpl::*)($String*)>(&XMLAttributesImpl::hash0))},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC},
	{"prepareAndPopulateTableView", "()V", nullptr, $PROTECTED},
	{"prepareAndPopulateTableView", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(XMLAttributesImpl::*)(int32_t)>(&XMLAttributesImpl::prepareAndPopulateTableView))},
	{"prepareAndPopulateTableViewNS", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(XMLAttributesImpl::*)(int32_t)>(&XMLAttributesImpl::prepareAndPopulateTableViewNS))},
	{"prepareTableView", "()V", nullptr, $PROTECTED},
	{"rebalanceTableView", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(XMLAttributesImpl::*)(int32_t)>(&XMLAttributesImpl::rebalanceTableView))},
	{"rebalanceTableViewNS", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(XMLAttributesImpl::*)(int32_t)>(&XMLAttributesImpl::rebalanceTableViewNS))},
	{"refresh", "()V", nullptr, $PUBLIC},
	{"refresh", "(I)V", nullptr, $PUBLIC},
	{"removeAllAttributes", "()V", nullptr, $PUBLIC},
	{"removeAttributeAt", "(I)V", nullptr, $PUBLIC},
	{"setAugmentations", "(ILcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC},
	{"setName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC},
	{"setNamespaces", "(Z)V", nullptr, $PUBLIC},
	{"setNonNormalizedValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setSpecified", "(IZ)V", nullptr, $PUBLIC},
	{"setType", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setURI", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setValue", "(ILjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLAttributesImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute", "com.sun.org.apache.xerces.internal.util.XMLAttributesImpl", "Attribute", $STATIC},
	{}
};

$ClassInfo _XMLAttributesImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLAttributes,com.sun.xml.internal.stream.XMLBufferListener",
	_XMLAttributesImpl_FieldInfo_,
	_XMLAttributesImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLAttributesImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute"
};

$Object* allocate$XMLAttributesImpl($Class* clazz) {
	return $of($alloc(XMLAttributesImpl));
}

int32_t XMLAttributesImpl::hashCode() {
	 return this->$XMLAttributes::hashCode();
}

bool XMLAttributesImpl::equals(Object$* arg0) {
	 return this->$XMLAttributes::equals(arg0);
}

$Object* XMLAttributesImpl::clone() {
	 return this->$XMLAttributes::clone();
}

$String* XMLAttributesImpl::toString() {
	 return this->$XMLAttributes::toString();
}

void XMLAttributesImpl::finalize() {
	this->$XMLAttributes::finalize();
}

void XMLAttributesImpl::init$() {
	XMLAttributesImpl::init$(XMLAttributesImpl::TABLE_SIZE);
}

void XMLAttributesImpl::init$(int32_t tableSize) {
	$useLocalCurrentObjectStackCache();
	this->fNamespaces = true;
	this->fLargeCount = 1;
	$set(this, fAttributes, $new($XMLAttributesImpl$AttributeArray, 4));
	this->fTableViewBuckets = tableSize;
	for (int32_t i = 0; i < $nc(this->fAttributes)->length; ++i) {
		$nc(this->fAttributes)->set(i, $$new($XMLAttributesImpl$Attribute));
	}
}

void XMLAttributesImpl::setNamespaces(bool namespaces) {
	this->fNamespaces = namespaces;
}

int32_t XMLAttributesImpl::addAttribute($QName* name, $String* type, $String* value) {
	return addAttribute(name, type, value, nullptr);
}

int32_t XMLAttributesImpl::addAttribute($QName* name, $String* type, $String* value, $XMLString* valueCache) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	if (this->fLength < XMLAttributesImpl::SIZE_LIMIT) {
		index = $nc(name)->uri != nullptr && $nc(name->uri)->length() != 0 ? getIndexFast($nc(name)->uri, name->localpart) : getIndexFast($nc(name)->rawname);
		if (index == -1) {
			index = this->fLength;
			if (this->fLength++ == $nc(this->fAttributes)->length) {
				$var($XMLAttributesImpl$AttributeArray, attributes, $new($XMLAttributesImpl$AttributeArray, $nc(this->fAttributes)->length + 4));
				$System::arraycopy(this->fAttributes, 0, attributes, 0, $nc(this->fAttributes)->length);
				for (int32_t i = $nc(this->fAttributes)->length; i < attributes->length; ++i) {
					attributes->set(i, $$new($XMLAttributesImpl$Attribute));
				}
				$set(this, fAttributes, attributes);
			}
		}
	} else {
		bool var$1 = $nc(name)->uri == nullptr || $nc($nc(name)->uri)->length() == 0;
		if (var$1 || (index = getIndexFast($nc(name)->uri, name->localpart)) == -1) {
			if (!this->fIsTableViewConsistent || this->fLength == XMLAttributesImpl::SIZE_LIMIT || (this->fLength > XMLAttributesImpl::SIZE_LIMIT && this->fLength > this->fTableViewBuckets)) {
				prepareAndPopulateTableView();
				this->fIsTableViewConsistent = true;
			}
			int32_t bucket = getTableViewBucket($nc(name)->rawname);
			if ($nc(this->fAttributeTableViewChainState)->get(bucket) != this->fLargeCount) {
				index = this->fLength;
				if (this->fLength++ == $nc(this->fAttributes)->length) {
					$var($XMLAttributesImpl$AttributeArray, attributes, $new($XMLAttributesImpl$AttributeArray, $nc(this->fAttributes)->length << 1));
					$System::arraycopy(this->fAttributes, 0, attributes, 0, $nc(this->fAttributes)->length);
					for (int32_t i = $nc(this->fAttributes)->length; i < attributes->length; ++i) {
						attributes->set(i, $$new($XMLAttributesImpl$Attribute));
					}
					$set(this, fAttributes, attributes);
				}
				$nc(this->fAttributeTableViewChainState)->set(bucket, this->fLargeCount);
				$set($nc($nc(this->fAttributes)->get(index)), next, nullptr);
				$nc(this->fAttributeTableView)->set(bucket, $nc(this->fAttributes)->get(index));
			} else {
				int32_t collisionCount = 0;
				$var($XMLAttributesImpl$Attribute, found, $nc(this->fAttributeTableView)->get(bucket));
				while (found != nullptr) {
					if ($nc(found->name)->rawname == $nc(name)->rawname) {
						break;
					}
					$assign(found, found->next);
					++collisionCount;
				}
				if (found == nullptr) {
					index = this->fLength;
					if (this->fLength++ == $nc(this->fAttributes)->length) {
						$var($XMLAttributesImpl$AttributeArray, attributes, $new($XMLAttributesImpl$AttributeArray, $nc(this->fAttributes)->length << 1));
						$System::arraycopy(this->fAttributes, 0, attributes, 0, $nc(this->fAttributes)->length);
						for (int32_t i = $nc(this->fAttributes)->length; i < attributes->length; ++i) {
							attributes->set(i, $$new($XMLAttributesImpl$Attribute));
						}
						$set(this, fAttributes, attributes);
					}
					if (collisionCount >= XMLAttributesImpl::MAX_HASH_COLLISIONS) {
						$nc($nc($nc(this->fAttributes)->get(index))->name)->setValues(name);
						rebalanceTableView(this->fLength);
					} else {
						$set($nc($nc(this->fAttributes)->get(index)), next, $nc(this->fAttributeTableView)->get(bucket));
						$nc(this->fAttributeTableView)->set(bucket, $nc(this->fAttributes)->get(index));
					}
				} else {
					index = getIndexFast($nc(name)->rawname);
				}
			}
		}
	}
	$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(index));
	$nc($nc(attribute)->name)->setValues(name);
	$set(attribute, type, type);
	$set(attribute, value, value);
	$set(attribute, xmlValue, valueCache);
	$set(attribute, nonNormalizedValue, value);
	attribute->specified = false;
	if (attribute->augs != nullptr) {
		$nc(attribute->augs)->removeAllItems();
	}
	return index;
}

void XMLAttributesImpl::removeAllAttributes() {
	this->fLength = 0;
}

void XMLAttributesImpl::removeAttributeAt(int32_t attrIndex) {
	this->fIsTableViewConsistent = false;
	if (attrIndex < this->fLength - 1) {
		$var($XMLAttributesImpl$Attribute, removedAttr, $nc(this->fAttributes)->get(attrIndex));
		$System::arraycopy(this->fAttributes, attrIndex + 1, this->fAttributes, attrIndex, this->fLength - attrIndex - 1);
		$nc(this->fAttributes)->set(this->fLength - 1, removedAttr);
	}
	--this->fLength;
}

void XMLAttributesImpl::setName(int32_t attrIndex, $QName* attrName) {
	$nc($nc($nc(this->fAttributes)->get(attrIndex))->name)->setValues(attrName);
}

void XMLAttributesImpl::getName(int32_t attrIndex, $QName* attrName) {
	$nc(attrName)->setValues($nc($nc(this->fAttributes)->get(attrIndex))->name);
}

void XMLAttributesImpl::setType(int32_t attrIndex, $String* attrType) {
	$set($nc($nc(this->fAttributes)->get(attrIndex)), type, attrType);
}

void XMLAttributesImpl::setValue(int32_t attrIndex, $String* attrValue) {
	setValue(attrIndex, attrValue, nullptr);
}

void XMLAttributesImpl::setValue(int32_t attrIndex, $String* attrValue, $XMLString* value) {
	$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(attrIndex));
	$set($nc(attribute), value, attrValue);
	$set(attribute, nonNormalizedValue, attrValue);
	$set(attribute, xmlValue, value);
}

void XMLAttributesImpl::setNonNormalizedValue(int32_t attrIndex, $String* attrValue$renamed) {
	$var($String, attrValue, attrValue$renamed);
	if (attrValue == nullptr) {
		$assign(attrValue, $nc($nc(this->fAttributes)->get(attrIndex))->value);
	}
	$set($nc($nc(this->fAttributes)->get(attrIndex)), nonNormalizedValue, attrValue);
}

$String* XMLAttributesImpl::getNonNormalizedValue(int32_t attrIndex) {
	$var($String, value, $nc($nc(this->fAttributes)->get(attrIndex))->nonNormalizedValue);
	return value;
}

void XMLAttributesImpl::setSpecified(int32_t attrIndex, bool specified) {
	$nc($nc(this->fAttributes)->get(attrIndex))->specified = specified;
}

bool XMLAttributesImpl::isSpecified(int32_t attrIndex) {
	return $nc($nc(this->fAttributes)->get(attrIndex))->specified;
}

int32_t XMLAttributesImpl::getLength() {
	return this->fLength;
}

$String* XMLAttributesImpl::getType(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	return getReportableType($nc($nc(this->fAttributes)->get(index))->type);
}

$String* XMLAttributesImpl::getType($String* qname) {
	int32_t index = getIndex(qname);
	return index != -1 ? getReportableType($nc($nc(this->fAttributes)->get(index))->type) : ($String*)nullptr;
}

$String* XMLAttributesImpl::getValue(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	if ($nc($nc(this->fAttributes)->get(index))->value == nullptr && $nc($nc(this->fAttributes)->get(index))->xmlValue != nullptr) {
		$set($nc($nc(this->fAttributes)->get(index)), value, $nc($nc($nc(this->fAttributes)->get(index))->xmlValue)->toString());
	}
	return $nc($nc(this->fAttributes)->get(index))->value;
}

$String* XMLAttributesImpl::getValue($String* qname) {
	int32_t index = getIndex(qname);
	if (index == -1) {
		return nullptr;
	}
	if ($nc($nc(this->fAttributes)->get(index))->value == nullptr) {
		$set($nc($nc(this->fAttributes)->get(index)), value, $nc($nc($nc(this->fAttributes)->get(index))->xmlValue)->toString());
	}
	return $nc($nc(this->fAttributes)->get(index))->value;
}

$String* XMLAttributesImpl::getName(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	return $nc($nc($nc(this->fAttributes)->get(index))->name)->rawname;
}

int32_t XMLAttributesImpl::getIndex($String* qName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fLength; ++i) {
		$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(i));
		if ($nc($nc(attribute)->name)->rawname != nullptr && $nc($nc(attribute->name)->rawname)->equals(qName)) {
			return i;
		}
	}
	return -1;
}

int32_t XMLAttributesImpl::getIndex($String* uri, $String* localPart) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fLength; ++i) {
		$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(i));
		bool var$0 = $nc($nc(attribute)->name)->localpart != nullptr && $nc($nc(attribute->name)->localpart)->equals(localPart);
		if (var$0 && ((uri == $nc(attribute->name)->uri) || (uri != nullptr && $nc($nc(attribute)->name)->uri != nullptr && $nc($nc(attribute->name)->uri)->equals(uri)))) {
			return i;
		}
	}
	return -1;
}

int32_t XMLAttributesImpl::getIndexByLocalName($String* localPart) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fLength; ++i) {
		$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(i));
		if ($nc($nc(attribute)->name)->localpart != nullptr && $nc($nc(attribute->name)->localpart)->equals(localPart)) {
			return i;
		}
	}
	return -1;
}

$String* XMLAttributesImpl::getLocalName(int32_t index) {
	if (!this->fNamespaces) {
		return ""_s;
	}
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	return $nc($nc($nc(this->fAttributes)->get(index))->name)->localpart;
}

$String* XMLAttributesImpl::getQName(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	$var($String, rawname, $nc($nc($nc(this->fAttributes)->get(index))->name)->rawname);
	return rawname != nullptr ? rawname : ""_s;
}

$QName* XMLAttributesImpl::getQualifiedName(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	return $nc($nc(this->fAttributes)->get(index))->name;
}

$String* XMLAttributesImpl::getType($String* uri, $String* localName) {
	if (!this->fNamespaces) {
		return nullptr;
	}
	int32_t index = getIndex(uri, localName);
	return index != -1 ? getType(index) : ($String*)nullptr;
}

int32_t XMLAttributesImpl::getIndexFast($String* qName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fLength; ++i) {
		$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(i));
		if ($nc($nc(attribute)->name)->rawname == qName) {
			return i;
		}
	}
	return -1;
}

void XMLAttributesImpl::addAttributeNS($QName* name, $String* type, $String* value) {
	$useLocalCurrentObjectStackCache();
	int32_t index = this->fLength;
	if (this->fLength++ == $nc(this->fAttributes)->length) {
		$var($XMLAttributesImpl$AttributeArray, attributes, nullptr);
		if (this->fLength < XMLAttributesImpl::SIZE_LIMIT) {
			$assign(attributes, $new($XMLAttributesImpl$AttributeArray, $nc(this->fAttributes)->length + 4));
		} else {
			$assign(attributes, $new($XMLAttributesImpl$AttributeArray, $nc(this->fAttributes)->length << 1));
		}
		$System::arraycopy(this->fAttributes, 0, attributes, 0, $nc(this->fAttributes)->length);
		for (int32_t i = $nc(this->fAttributes)->length; i < $nc(attributes)->length; ++i) {
			attributes->set(i, $$new($XMLAttributesImpl$Attribute));
		}
		$set(this, fAttributes, attributes);
	}
	$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(index));
	$nc($nc(attribute)->name)->setValues(name);
	$set(attribute, type, type);
	$set(attribute, value, value);
	$set(attribute, nonNormalizedValue, value);
	attribute->specified = false;
	$nc(attribute->augs)->removeAllItems();
}

$QName* XMLAttributesImpl::checkDuplicatesNS() {
	$useLocalCurrentObjectStackCache();
	int32_t length = this->fLength;
	if (length <= XMLAttributesImpl::SIZE_LIMIT) {
		$var($XMLAttributesImpl$AttributeArray, attributes, this->fAttributes);
		for (int32_t i = 0; i < length - 1; ++i) {
			$var($XMLAttributesImpl$Attribute, att1, $nc(attributes)->get(i));
			for (int32_t j = i + 1; j < length; ++j) {
				$var($XMLAttributesImpl$Attribute, att2, attributes->get(j));
				if ($nc($nc(att1)->name)->localpart == $nc($nc(att2)->name)->localpart && $nc(att1->name)->uri == $nc(att2->name)->uri) {
					return att2->name;
				}
			}
		}
		return nullptr;
	} else {
		return checkManyDuplicatesNS();
	}
}

$QName* XMLAttributesImpl::checkManyDuplicatesNS() {
	$useLocalCurrentObjectStackCache();
	this->fIsTableViewConsistent = false;
	prepareTableView();
	$var($XMLAttributesImpl$Attribute, attr, nullptr);
	int32_t bucket = 0;
	int32_t length = this->fLength;
	$var($XMLAttributesImpl$AttributeArray, attributes, this->fAttributes);
	$var($XMLAttributesImpl$AttributeArray, attributeTableView, this->fAttributeTableView);
	$var($ints, attributeTableViewChainState, this->fAttributeTableViewChainState);
	int32_t largeCount = this->fLargeCount;
	for (int32_t i = 0; i < length; ++i) {
		$assign(attr, $nc(attributes)->get(i));
		bucket = getTableViewBucket($nc($nc(attr)->name)->localpart, $nc(attr->name)->uri);
		if ($nc(attributeTableViewChainState)->get(bucket) != largeCount) {
			attributeTableViewChainState->set(bucket, largeCount);
			$set($nc(attr), next, nullptr);
			$nc(attributeTableView)->set(bucket, attr);
		} else {
			int32_t collisionCount = 0;
			$var($XMLAttributesImpl$Attribute, found, $nc(attributeTableView)->get(bucket));
			while (found != nullptr) {
				if ($nc(found->name)->localpart == $nc($nc(attr)->name)->localpart && $nc(found->name)->uri == $nc(attr->name)->uri) {
					return attr->name;
				}
				$assign(found, found->next);
				++collisionCount;
			}
			if (collisionCount >= XMLAttributesImpl::MAX_HASH_COLLISIONS) {
				rebalanceTableViewNS(i + 1);
				largeCount = this->fLargeCount;
			} else {
				$set($nc(attr), next, attributeTableView->get(bucket));
				attributeTableView->set(bucket, attr);
			}
		}
	}
	return nullptr;
}

int32_t XMLAttributesImpl::getIndexFast($String* uri, $String* localPart) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fLength; ++i) {
		$var($XMLAttributesImpl$Attribute, attribute, $nc(this->fAttributes)->get(i));
		if ($nc($nc(attribute)->name)->localpart == localPart && $nc(attribute->name)->uri == uri) {
			return i;
		}
	}
	return -1;
}

$String* XMLAttributesImpl::getReportableType($String* type) {
	if ($nc(type)->charAt(0) == u'(') {
		return "NMTOKEN"_s;
	}
	return type;
}

int32_t XMLAttributesImpl::getTableViewBucket($String* qname) {
	return $mod(((int32_t)(hash(qname) & (uint32_t)0x7FFFFFFF)), this->fTableViewBuckets);
}

int32_t XMLAttributesImpl::getTableViewBucket($String* localpart, $String* uri) {
	if (uri == nullptr) {
		return $mod(((int32_t)(hash(localpart) & (uint32_t)0x7FFFFFFF)), this->fTableViewBuckets);
	} else {
		return $mod(((int32_t)(hash(localpart, uri) & (uint32_t)0x7FFFFFFF)), this->fTableViewBuckets);
	}
}

int32_t XMLAttributesImpl::hash($String* localpart) {
	if (this->fHashMultipliers == nullptr) {
		return $nc(localpart)->hashCode();
	}
	return hash0(localpart);
}

int32_t XMLAttributesImpl::hash($String* localpart, $String* uri) {
	if (this->fHashMultipliers == nullptr) {
		int32_t var$0 = $nc(localpart)->hashCode();
		return var$0 + $nc(uri)->hashCode() * 31;
	}
	int32_t var$1 = hash0(localpart);
	return var$1 + hash0(uri) * $nc(this->fHashMultipliers)->get(XMLAttributesImpl::MULTIPLIERS_SIZE);
}

int32_t XMLAttributesImpl::hash0($String* symbol) {
	int32_t code = 0;
	int32_t length = $nc(symbol)->length();
	$var($ints, multipliers, this->fHashMultipliers);
	for (int32_t i = 0; i < length; ++i) {
		code = code * $nc(multipliers)->get((int32_t)(i & (uint32_t)XMLAttributesImpl::MULTIPLIERS_MASK)) + symbol->charAt(i);
	}
	return code;
}

void XMLAttributesImpl::cleanTableView() {
	if (++this->fLargeCount < 0) {
		if (this->fAttributeTableViewChainState != nullptr) {
			for (int32_t i = this->fTableViewBuckets - 1; i >= 0; --i) {
				$nc(this->fAttributeTableViewChainState)->set(i, 0);
			}
		}
		this->fLargeCount = 1;
	}
}

void XMLAttributesImpl::growTableView() {
	int32_t length = this->fLength;
	int32_t tableViewBuckets = this->fTableViewBuckets;
	do {
		tableViewBuckets = (tableViewBuckets << 1) + 1;
		if (tableViewBuckets < 0) {
			tableViewBuckets = $Integer::MAX_VALUE;
			break;
		}
	} while (length > tableViewBuckets);
	this->fTableViewBuckets = tableViewBuckets;
	$set(this, fAttributeTableView, nullptr);
	this->fLargeCount = 1;
}

void XMLAttributesImpl::prepareTableView() {
	if (this->fLength > this->fTableViewBuckets) {
		growTableView();
	}
	if (this->fAttributeTableView == nullptr) {
		$set(this, fAttributeTableView, $new($XMLAttributesImpl$AttributeArray, this->fTableViewBuckets));
		$set(this, fAttributeTableViewChainState, $new($ints, this->fTableViewBuckets));
	} else {
		cleanTableView();
	}
}

void XMLAttributesImpl::prepareAndPopulateTableView() {
	prepareAndPopulateTableView(this->fLength);
}

void XMLAttributesImpl::prepareAndPopulateTableView(int32_t count) {
	prepareTableView();
	$var($XMLAttributesImpl$Attribute, attr, nullptr);
	int32_t bucket = 0;
	for (int32_t i = 0; i < count; ++i) {
		$assign(attr, $nc(this->fAttributes)->get(i));
		bucket = getTableViewBucket($nc($nc(attr)->name)->rawname);
		if ($nc(this->fAttributeTableViewChainState)->get(bucket) != this->fLargeCount) {
			$nc(this->fAttributeTableViewChainState)->set(bucket, this->fLargeCount);
			$set($nc(attr), next, nullptr);
			$nc(this->fAttributeTableView)->set(bucket, attr);
		} else {
			$set($nc(attr), next, $nc(this->fAttributeTableView)->get(bucket));
			$nc(this->fAttributeTableView)->set(bucket, attr);
		}
	}
}

$String* XMLAttributesImpl::getPrefix(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	$var($String, prefix, $nc($nc($nc(this->fAttributes)->get(index))->name)->prefix);
	return prefix != nullptr ? prefix : ""_s;
}

$String* XMLAttributesImpl::getURI(int32_t index) {
	if (index < 0 || index >= this->fLength) {
		return nullptr;
	}
	$var($String, uri, $nc($nc($nc(this->fAttributes)->get(index))->name)->uri);
	return uri;
}

$String* XMLAttributesImpl::getValue($String* uri, $String* localName) {
	int32_t index = getIndex(uri, localName);
	return index != -1 ? getValue(index) : ($String*)nullptr;
}

$Augmentations* XMLAttributesImpl::getAugmentations($String* uri, $String* localName) {
	int32_t index = getIndex(uri, localName);
	return index != -1 ? $nc($nc(this->fAttributes)->get(index))->augs : ($Augmentations*)nullptr;
}

$Augmentations* XMLAttributesImpl::getAugmentations($String* qName) {
	int32_t index = getIndex(qName);
	return index != -1 ? $nc($nc(this->fAttributes)->get(index))->augs : ($Augmentations*)nullptr;
}

$Augmentations* XMLAttributesImpl::getAugmentations(int32_t attributeIndex) {
	if (attributeIndex < 0 || attributeIndex >= this->fLength) {
		return nullptr;
	}
	return $nc($nc(this->fAttributes)->get(attributeIndex))->augs;
}

void XMLAttributesImpl::setAugmentations(int32_t attrIndex, $Augmentations* augs) {
	$set($nc($nc(this->fAttributes)->get(attrIndex)), augs, augs);
}

void XMLAttributesImpl::setURI(int32_t attrIndex, $String* uri) {
	$set($nc($nc($nc(this->fAttributes)->get(attrIndex))->name), uri, uri);
}

void XMLAttributesImpl::refresh() {
	if (this->fLength > 0) {
		for (int32_t i = 0; i < this->fLength; ++i) {
			getValue(i);
		}
	}
}

void XMLAttributesImpl::refresh(int32_t pos) {
}

void XMLAttributesImpl::prepareAndPopulateTableViewNS(int32_t count) {
	prepareTableView();
	$var($XMLAttributesImpl$Attribute, attr, nullptr);
	int32_t bucket = 0;
	for (int32_t i = 0; i < count; ++i) {
		$assign(attr, $nc(this->fAttributes)->get(i));
		bucket = getTableViewBucket($nc($nc(attr)->name)->localpart, $nc(attr->name)->uri);
		if ($nc(this->fAttributeTableViewChainState)->get(bucket) != this->fLargeCount) {
			$nc(this->fAttributeTableViewChainState)->set(bucket, this->fLargeCount);
			$set($nc(attr), next, nullptr);
			$nc(this->fAttributeTableView)->set(bucket, attr);
		} else {
			$set($nc(attr), next, $nc(this->fAttributeTableView)->get(bucket));
			$nc(this->fAttributeTableView)->set(bucket, attr);
		}
	}
}

void XMLAttributesImpl::rebalanceTableView(int32_t count) {
	if (this->fHashMultipliers == nullptr) {
		$set(this, fHashMultipliers, $new($ints, XMLAttributesImpl::MULTIPLIERS_SIZE + 1));
	}
	$PrimeNumberSequenceGenerator::generateSequence(this->fHashMultipliers);
	prepareAndPopulateTableView(count);
}

void XMLAttributesImpl::rebalanceTableViewNS(int32_t count) {
	if (this->fHashMultipliers == nullptr) {
		$set(this, fHashMultipliers, $new($ints, XMLAttributesImpl::MULTIPLIERS_SIZE + 1));
	}
	$PrimeNumberSequenceGenerator::generateSequence(this->fHashMultipliers);
	prepareAndPopulateTableViewNS(count);
}

XMLAttributesImpl::XMLAttributesImpl() {
}

$Class* XMLAttributesImpl::load$($String* name, bool initialize) {
	$loadClass(XMLAttributesImpl, name, initialize, &_XMLAttributesImpl_ClassInfo_, allocate$XMLAttributesImpl);
	return class$;
}

$Class* XMLAttributesImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com