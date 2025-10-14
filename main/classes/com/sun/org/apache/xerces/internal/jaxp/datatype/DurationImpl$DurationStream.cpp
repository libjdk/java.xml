#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl$DurationStream.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DurationImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$FieldInfo _DurationImpl$DurationStream_FieldInfo_[] = {
	{"lexical", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DurationImpl$DurationStream, lexical)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DurationImpl$DurationStream, serialVersionUID)},
	{}
};

$MethodInfo _DurationImpl$DurationStream_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DurationImpl$DurationStream::*)($String*)>(&DurationImpl$DurationStream::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DurationImpl$DurationStream::*)()>(&DurationImpl$DurationStream::readResolve)), "java.io.ObjectStreamException"},
	{}
};

$InnerClassInfo _DurationImpl$DurationStream_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl$DurationStream", "com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl", "DurationStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DurationImpl$DurationStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl$DurationStream",
	"java.lang.Object",
	"java.io.Serializable",
	_DurationImpl$DurationStream_FieldInfo_,
	_DurationImpl$DurationStream_MethodInfo_,
	nullptr,
	nullptr,
	_DurationImpl$DurationStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl"
};

$Object* allocate$DurationImpl$DurationStream($Class* clazz) {
	return $of($alloc(DurationImpl$DurationStream));
}

void DurationImpl$DurationStream::init$($String* _lexical) {
	$set(this, lexical, _lexical);
}

$Object* DurationImpl$DurationStream::readResolve() {
	return $of($new($DurationImpl, this->lexical));
}

DurationImpl$DurationStream::DurationImpl$DurationStream() {
}

$Class* DurationImpl$DurationStream::load$($String* name, bool initialize) {
	$loadClass(DurationImpl$DurationStream, name, initialize, &_DurationImpl$DurationStream_ClassInfo_, allocate$DurationImpl$DurationStream);
	return class$;
}

$Class* DurationImpl$DurationStream::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com