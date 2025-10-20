#include <com/sun/org/apache/xml/internal/dtm/ref/NodeLocator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _NodeLocator_FieldInfo_[] = {
	{"m_publicId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NodeLocator, m_publicId)},
	{"m_systemId", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NodeLocator, m_systemId)},
	{"m_lineNumber", "I", nullptr, $PROTECTED, $field(NodeLocator, m_lineNumber)},
	{"m_columnNumber", "I", nullptr, $PROTECTED, $field(NodeLocator, m_columnNumber)},
	{}
};

$MethodInfo _NodeLocator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(NodeLocator::*)($String*,$String*,int32_t,int32_t)>(&NodeLocator::init$))},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NodeLocator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.NodeLocator",
	"java.lang.Object",
	"javax.xml.transform.SourceLocator",
	_NodeLocator_FieldInfo_,
	_NodeLocator_MethodInfo_
};

$Object* allocate$NodeLocator($Class* clazz) {
	return $of($alloc(NodeLocator));
}

void NodeLocator::init$($String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber) {
	$set(this, m_publicId, publicId);
	$set(this, m_systemId, systemId);
	this->m_lineNumber = lineNumber;
	this->m_columnNumber = columnNumber;
}

$String* NodeLocator::getPublicId() {
	return this->m_publicId;
}

$String* NodeLocator::getSystemId() {
	return this->m_systemId;
}

int32_t NodeLocator::getLineNumber() {
	return this->m_lineNumber;
}

int32_t NodeLocator::getColumnNumber() {
	return this->m_columnNumber;
}

$String* NodeLocator::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"file \'"_s, this->m_systemId, "\', line #"_s, $$str(this->m_lineNumber), ", column #"_s, $$str(this->m_columnNumber)});
}

NodeLocator::NodeLocator() {
}

$Class* NodeLocator::load$($String* name, bool initialize) {
	$loadClass(NodeLocator, name, initialize, &_NodeLocator_ClassInfo_, allocate$NodeLocator);
	return class$;
}

$Class* NodeLocator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com