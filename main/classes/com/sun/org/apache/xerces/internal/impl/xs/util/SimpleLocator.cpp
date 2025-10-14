#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$FieldInfo _SimpleLocator_FieldInfo_[] = {
	{"lsid", "Ljava/lang/String;", nullptr, 0, $field(SimpleLocator, lsid)},
	{"esid", "Ljava/lang/String;", nullptr, 0, $field(SimpleLocator, esid)},
	{"line", "I", nullptr, 0, $field(SimpleLocator, line)},
	{"column", "I", nullptr, 0, $field(SimpleLocator, column)},
	{"charOffset", "I", nullptr, 0, $field(SimpleLocator, charOffset)},
	{}
};

$MethodInfo _SimpleLocator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleLocator::*)()>(&SimpleLocator::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleLocator::*)($String*,$String*,int32_t,int32_t)>(&SimpleLocator::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleLocator::*)($String*,$String*,int32_t,int32_t,int32_t)>(&SimpleLocator::init$))},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setCharacterOffset", "(I)V", nullptr, $PUBLIC},
	{"setColumnNumber", "(I)V", nullptr, $PUBLIC},
	{"setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC},
	{"setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;III)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleLocator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.SimpleLocator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_SimpleLocator_FieldInfo_,
	_SimpleLocator_MethodInfo_
};

$Object* allocate$SimpleLocator($Class* clazz) {
	return $of($alloc(SimpleLocator));
}

void SimpleLocator::init$() {
}

void SimpleLocator::init$($String* lsid, $String* esid, int32_t line, int32_t column) {
	SimpleLocator::init$(lsid, esid, line, column, -1);
}

void SimpleLocator::setValues($String* lsid, $String* esid, int32_t line, int32_t column) {
	setValues(lsid, esid, line, column, -1);
}

void SimpleLocator::init$($String* lsid, $String* esid, int32_t line, int32_t column, int32_t offset) {
	this->line = line;
	this->column = column;
	$set(this, lsid, lsid);
	$set(this, esid, esid);
	this->charOffset = offset;
}

void SimpleLocator::setValues($String* lsid, $String* esid, int32_t line, int32_t column, int32_t offset) {
	this->line = line;
	this->column = column;
	$set(this, lsid, lsid);
	$set(this, esid, esid);
	this->charOffset = offset;
}

int32_t SimpleLocator::getLineNumber() {
	return this->line;
}

int32_t SimpleLocator::getColumnNumber() {
	return this->column;
}

int32_t SimpleLocator::getCharacterOffset() {
	return this->charOffset;
}

$String* SimpleLocator::getPublicId() {
	return nullptr;
}

$String* SimpleLocator::getExpandedSystemId() {
	return this->esid;
}

$String* SimpleLocator::getLiteralSystemId() {
	return this->lsid;
}

$String* SimpleLocator::getBaseSystemId() {
	return nullptr;
}

void SimpleLocator::setColumnNumber(int32_t col) {
	this->column = col;
}

void SimpleLocator::setLineNumber(int32_t line) {
	this->line = line;
}

void SimpleLocator::setCharacterOffset(int32_t offset) {
	this->charOffset = offset;
}

void SimpleLocator::setBaseSystemId($String* systemId) {
}

void SimpleLocator::setExpandedSystemId($String* systemId) {
	$set(this, esid, systemId);
}

void SimpleLocator::setLiteralSystemId($String* systemId) {
	$set(this, lsid, systemId);
}

void SimpleLocator::setPublicId($String* publicId) {
}

$String* SimpleLocator::getEncoding() {
	return nullptr;
}

$String* SimpleLocator::getXMLVersion() {
	return nullptr;
}

SimpleLocator::SimpleLocator() {
}

$Class* SimpleLocator::load$($String* name, bool initialize) {
	$loadClass(SimpleLocator, name, initialize, &_SimpleLocator_ClassInfo_, allocate$SimpleLocator);
	return class$;
}

$Class* SimpleLocator::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com