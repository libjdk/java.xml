#include <org/xml/sax/helpers/AttributesImpl.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <org/xml/sax/Attributes.h>
#include <jcpp.h>

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

$FieldInfo _AttributesImpl_FieldInfo_[] = {
	{"length", "I", nullptr, 0, $field(AttributesImpl, length)},
	{"data", "[Ljava/lang/String;", nullptr, 0, $field(AttributesImpl, data)},
	{}
};

$MethodInfo _AttributesImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributesImpl::*)()>(&AttributesImpl::init$))},
	{"<init>", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributesImpl::*)($Attributes*)>(&AttributesImpl::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"badIndex", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(AttributesImpl::*)(int32_t)>(&AttributesImpl::badIndex)), "java.lang.ArrayIndexOutOfBoundsException"},
	{"clear", "()V", nullptr, $PUBLIC},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(AttributesImpl::*)(int32_t)>(&AttributesImpl::ensureCapacity))},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"removeAttribute", "(I)V", nullptr, $PUBLIC},
	{"setAttribute", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setAttributes", "(Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC},
	{"setLocalName", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setQName", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setType", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setURI", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"setValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributesImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.xml.sax.helpers.AttributesImpl",
	"java.lang.Object",
	"org.xml.sax.Attributes",
	_AttributesImpl_FieldInfo_,
	_AttributesImpl_MethodInfo_
};

$Object* allocate$AttributesImpl($Class* clazz) {
	return $of($alloc(AttributesImpl));
}

void AttributesImpl::init$() {
	this->length = 0;
	$set(this, data, nullptr);
}

void AttributesImpl::init$($Attributes* atts) {
	setAttributes(atts);
}

int32_t AttributesImpl::getLength() {
	return this->length;
}

$String* AttributesImpl::getURI(int32_t index) {
	if (index >= 0 && index < this->length) {
		return $nc(this->data)->get(index * 5);
	} else {
		return nullptr;
	}
}

$String* AttributesImpl::getLocalName(int32_t index) {
	if (index >= 0 && index < this->length) {
		return $nc(this->data)->get(index * 5 + 1);
	} else {
		return nullptr;
	}
}

$String* AttributesImpl::getQName(int32_t index) {
	if (index >= 0 && index < this->length) {
		return $nc(this->data)->get(index * 5 + 2);
	} else {
		return nullptr;
	}
}

$String* AttributesImpl::getType(int32_t index) {
	if (index >= 0 && index < this->length) {
		return $nc(this->data)->get(index * 5 + 3);
	} else {
		return nullptr;
	}
}

$String* AttributesImpl::getValue(int32_t index) {
	if (index >= 0 && index < this->length) {
		return $nc(this->data)->get(index * 5 + 4);
	} else {
		return nullptr;
	}
}

int32_t AttributesImpl::getIndex($String* uri, $String* localName) {
	int32_t max = this->length * 5;
	for (int32_t i = 0; i < max; i += 5) {
		bool var$0 = $nc($nc(this->data)->get(i))->equals(uri);
		if (var$0 && $nc($nc(this->data)->get(i + 1))->equals(localName)) {
			return i / 5;
		}
	}
	return -1;
}

int32_t AttributesImpl::getIndex($String* qName) {
	int32_t max = this->length * 5;
	for (int32_t i = 0; i < max; i += 5) {
		if ($nc($nc(this->data)->get(i + 2))->equals(qName)) {
			return i / 5;
		}
	}
	return -1;
}

$String* AttributesImpl::getType($String* uri, $String* localName) {
	int32_t max = this->length * 5;
	for (int32_t i = 0; i < max; i += 5) {
		bool var$0 = $nc($nc(this->data)->get(i))->equals(uri);
		if (var$0 && $nc($nc(this->data)->get(i + 1))->equals(localName)) {
			return $nc(this->data)->get(i + 3);
		}
	}
	return nullptr;
}

$String* AttributesImpl::getType($String* qName) {
	int32_t max = this->length * 5;
	for (int32_t i = 0; i < max; i += 5) {
		if ($nc($nc(this->data)->get(i + 2))->equals(qName)) {
			return $nc(this->data)->get(i + 3);
		}
	}
	return nullptr;
}

$String* AttributesImpl::getValue($String* uri, $String* localName) {
	int32_t max = this->length * 5;
	for (int32_t i = 0; i < max; i += 5) {
		bool var$0 = $nc($nc(this->data)->get(i))->equals(uri);
		if (var$0 && $nc($nc(this->data)->get(i + 1))->equals(localName)) {
			return $nc(this->data)->get(i + 4);
		}
	}
	return nullptr;
}

$String* AttributesImpl::getValue($String* qName) {
	int32_t max = this->length * 5;
	for (int32_t i = 0; i < max; i += 5) {
		if ($nc($nc(this->data)->get(i + 2))->equals(qName)) {
			return $nc(this->data)->get(i + 4);
		}
	}
	return nullptr;
}

void AttributesImpl::clear() {
	if (this->data != nullptr) {
		for (int32_t i = 0; i < (this->length * 5); ++i) {
			$nc(this->data)->set(i, nullptr);
		}
	}
	this->length = 0;
}

void AttributesImpl::setAttributes($Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	clear();
	this->length = $nc(atts)->getLength();
	if (this->length > 0) {
		$set(this, data, $new($StringArray, this->length * 5));
		for (int32_t i = 0; i < this->length; ++i) {
			$nc(this->data)->set(i * 5, $(atts->getURI(i)));
			$nc(this->data)->set(i * 5 + 1, $(atts->getLocalName(i)));
			$nc(this->data)->set(i * 5 + 2, $(atts->getQName(i)));
			$nc(this->data)->set(i * 5 + 3, $(atts->getType(i)));
			$nc(this->data)->set(i * 5 + 4, $(atts->getValue(i)));
		}
	}
}

void AttributesImpl::addAttribute($String* uri, $String* localName, $String* qName, $String* type, $String* value) {
	ensureCapacity(this->length + 1);
	$nc(this->data)->set(this->length * 5, uri);
	$nc(this->data)->set(this->length * 5 + 1, localName);
	$nc(this->data)->set(this->length * 5 + 2, qName);
	$nc(this->data)->set(this->length * 5 + 3, type);
	$nc(this->data)->set(this->length * 5 + 4, value);
	++this->length;
}

void AttributesImpl::setAttribute(int32_t index, $String* uri, $String* localName, $String* qName, $String* type, $String* value) {
	if (index >= 0 && index < this->length) {
		$nc(this->data)->set(index * 5, uri);
		$nc(this->data)->set(index * 5 + 1, localName);
		$nc(this->data)->set(index * 5 + 2, qName);
		$nc(this->data)->set(index * 5 + 3, type);
		$nc(this->data)->set(index * 5 + 4, value);
	} else {
		badIndex(index);
	}
}

void AttributesImpl::removeAttribute(int32_t index) {
	if (index >= 0 && index < this->length) {
		if (index < this->length - 1) {
			$System::arraycopy(this->data, (index + 1) * 5, this->data, index * 5, (this->length - index - 1) * 5);
		}
		index = (this->length - 1) * 5;
		$nc(this->data)->set(index++, nullptr);
		$nc(this->data)->set(index++, nullptr);
		$nc(this->data)->set(index++, nullptr);
		$nc(this->data)->set(index++, nullptr);
		$nc(this->data)->set(index, nullptr);
		--this->length;
	} else {
		badIndex(index);
	}
}

void AttributesImpl::setURI(int32_t index, $String* uri) {
	if (index >= 0 && index < this->length) {
		$nc(this->data)->set(index * 5, uri);
	} else {
		badIndex(index);
	}
}

void AttributesImpl::setLocalName(int32_t index, $String* localName) {
	if (index >= 0 && index < this->length) {
		$nc(this->data)->set(index * 5 + 1, localName);
	} else {
		badIndex(index);
	}
}

void AttributesImpl::setQName(int32_t index, $String* qName) {
	if (index >= 0 && index < this->length) {
		$nc(this->data)->set(index * 5 + 2, qName);
	} else {
		badIndex(index);
	}
}

void AttributesImpl::setType(int32_t index, $String* type) {
	if (index >= 0 && index < this->length) {
		$nc(this->data)->set(index * 5 + 3, type);
	} else {
		badIndex(index);
	}
}

void AttributesImpl::setValue(int32_t index, $String* value) {
	if (index >= 0 && index < this->length) {
		$nc(this->data)->set(index * 5 + 4, value);
	} else {
		badIndex(index);
	}
}

void AttributesImpl::ensureCapacity(int32_t n) {
	if (n <= 0) {
		return;
	}
	int32_t max = 0;
	if (this->data == nullptr || $nc(this->data)->length == 0) {
		max = 25;
	} else if ($nc(this->data)->length >= n * 5) {
		return;
	} else {
		max = $nc(this->data)->length;
	}
	while (max < n * 5) {
		max *= 2;
	}
	$var($StringArray, newData, $new($StringArray, max));
	if (this->length > 0) {
		$System::arraycopy(this->data, 0, newData, 0, this->length * 5);
	}
	$set(this, data, newData);
}

void AttributesImpl::badIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($String, msg, $str({"Attempt to modify attribute at illegal index: "_s, $$str(index)}));
	$throwNew($ArrayIndexOutOfBoundsException, msg);
}

AttributesImpl::AttributesImpl() {
}

$Class* AttributesImpl::load$($String* name, bool initialize) {
	$loadClass(AttributesImpl, name, initialize, &_AttributesImpl_ClassInfo_, allocate$AttributesImpl);
	return class$;
}

$Class* AttributesImpl::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org