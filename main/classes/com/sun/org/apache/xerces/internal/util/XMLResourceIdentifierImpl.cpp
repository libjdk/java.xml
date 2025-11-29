#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>

#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLResourceIdentifierImpl_FieldInfo_[] = {
	{"fPublicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLResourceIdentifierImpl, fPublicId)},
	{"fLiteralSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLResourceIdentifierImpl, fLiteralSystemId)},
	{"fBaseSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLResourceIdentifierImpl, fBaseSystemId)},
	{"fExpandedSystemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLResourceIdentifierImpl, fExpandedSystemId)},
	{"fNamespace", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLResourceIdentifierImpl, fNamespace)},
	{}
};

$MethodInfo _XMLResourceIdentifierImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLResourceIdentifierImpl::*)()>(&XMLResourceIdentifierImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLResourceIdentifierImpl::*)($String*,$String*,$String*,$String*)>(&XMLResourceIdentifierImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLResourceIdentifierImpl::*)($String*,$String*,$String*,$String*,$String*)>(&XMLResourceIdentifierImpl::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLResourceIdentifierImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier",
	_XMLResourceIdentifierImpl_FieldInfo_,
	_XMLResourceIdentifierImpl_MethodInfo_
};

$Object* allocate$XMLResourceIdentifierImpl($Class* clazz) {
	return $of($alloc(XMLResourceIdentifierImpl));
}

void XMLResourceIdentifierImpl::init$() {
}

void XMLResourceIdentifierImpl::init$($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId) {
	setValues(publicId, literalSystemId, baseSystemId, expandedSystemId, nullptr);
}

void XMLResourceIdentifierImpl::init$($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$) {
	setValues(publicId, literalSystemId, baseSystemId, expandedSystemId, namespace$);
}

void XMLResourceIdentifierImpl::setValues($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId) {
	setValues(publicId, literalSystemId, baseSystemId, expandedSystemId, nullptr);
}

void XMLResourceIdentifierImpl::setValues($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$) {
	$set(this, fPublicId, publicId);
	$set(this, fLiteralSystemId, literalSystemId);
	$set(this, fBaseSystemId, baseSystemId);
	$set(this, fExpandedSystemId, expandedSystemId);
	$set(this, fNamespace, namespace$);
}

void XMLResourceIdentifierImpl::clear() {
	$set(this, fPublicId, nullptr);
	$set(this, fLiteralSystemId, nullptr);
	$set(this, fBaseSystemId, nullptr);
	$set(this, fExpandedSystemId, nullptr);
	$set(this, fNamespace, nullptr);
}

void XMLResourceIdentifierImpl::setPublicId($String* publicId) {
	$set(this, fPublicId, publicId);
}

void XMLResourceIdentifierImpl::setLiteralSystemId($String* literalSystemId) {
	$set(this, fLiteralSystemId, literalSystemId);
}

void XMLResourceIdentifierImpl::setBaseSystemId($String* baseSystemId) {
	$set(this, fBaseSystemId, baseSystemId);
}

void XMLResourceIdentifierImpl::setExpandedSystemId($String* expandedSystemId) {
	$set(this, fExpandedSystemId, expandedSystemId);
}

void XMLResourceIdentifierImpl::setNamespace($String* namespace$) {
	$set(this, fNamespace, namespace$);
}

$String* XMLResourceIdentifierImpl::getPublicId() {
	return this->fPublicId;
}

$String* XMLResourceIdentifierImpl::getLiteralSystemId() {
	return this->fLiteralSystemId;
}

$String* XMLResourceIdentifierImpl::getBaseSystemId() {
	return this->fBaseSystemId;
}

$String* XMLResourceIdentifierImpl::getExpandedSystemId() {
	return this->fExpandedSystemId;
}

$String* XMLResourceIdentifierImpl::getNamespace() {
	return this->fNamespace;
}

int32_t XMLResourceIdentifierImpl::hashCode() {
	int32_t code = 0;
	if (this->fPublicId != nullptr) {
		code += $nc(this->fPublicId)->hashCode();
	}
	if (this->fLiteralSystemId != nullptr) {
		code += $nc(this->fLiteralSystemId)->hashCode();
	}
	if (this->fBaseSystemId != nullptr) {
		code += $nc(this->fBaseSystemId)->hashCode();
	}
	if (this->fExpandedSystemId != nullptr) {
		code += $nc(this->fExpandedSystemId)->hashCode();
	}
	if (this->fNamespace != nullptr) {
		code += $nc(this->fNamespace)->hashCode();
	}
	return code;
}

$String* XMLResourceIdentifierImpl::toString() {
	$var($StringBuffer, str, $new($StringBuffer));
	if (this->fPublicId != nullptr) {
		str->append(this->fPublicId);
	}
	str->append(u':');
	if (this->fLiteralSystemId != nullptr) {
		str->append(this->fLiteralSystemId);
	}
	str->append(u':');
	if (this->fBaseSystemId != nullptr) {
		str->append(this->fBaseSystemId);
	}
	str->append(u':');
	if (this->fExpandedSystemId != nullptr) {
		str->append(this->fExpandedSystemId);
	}
	str->append(u':');
	if (this->fNamespace != nullptr) {
		str->append(this->fNamespace);
	}
	return str->toString();
}

XMLResourceIdentifierImpl::XMLResourceIdentifierImpl() {
}

$Class* XMLResourceIdentifierImpl::load$($String* name, bool initialize) {
	$loadClass(XMLResourceIdentifierImpl, name, initialize, &_XMLResourceIdentifierImpl_ClassInfo_, allocate$XMLResourceIdentifierImpl);
	return class$;
}

$Class* XMLResourceIdentifierImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com