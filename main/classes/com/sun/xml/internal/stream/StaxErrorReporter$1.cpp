#include <com/sun/xml/internal/stream/StaxErrorReporter$1.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/xml/internal/stream/StaxErrorReporter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $StaxErrorReporter = ::com::sun::xml::internal::stream::StaxErrorReporter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Location = ::javax::xml::stream::Location;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _StaxErrorReporter$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/xml/internal/stream/StaxErrorReporter;", nullptr, $FINAL | $SYNTHETIC, $field(StaxErrorReporter$1, this$0)},
	{"val$location", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $FINAL | $SYNTHETIC, $field(StaxErrorReporter$1, val$location)},
	{}
};

$MethodInfo _StaxErrorReporter$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/xml/internal/stream/StaxErrorReporter;Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)V", "()V", 0, $method(static_cast<void(StaxErrorReporter$1::*)($StaxErrorReporter*,$XMLLocator*)>(&StaxErrorReporter$1::init$))},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC},
	{"getColumnNumber", "()I", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getLocationURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _StaxErrorReporter$1_EnclosingMethodInfo_ = {
	"com.sun.xml.internal.stream.StaxErrorReporter",
	"convertToStaxLocation",
	"(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)Ljavax/xml/stream/Location;"
};

$InnerClassInfo _StaxErrorReporter$1_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.StaxErrorReporter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StaxErrorReporter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.xml.internal.stream.StaxErrorReporter$1",
	"java.lang.Object",
	"javax.xml.stream.Location",
	_StaxErrorReporter$1_FieldInfo_,
	_StaxErrorReporter$1_MethodInfo_,
	nullptr,
	&_StaxErrorReporter$1_EnclosingMethodInfo_,
	_StaxErrorReporter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.StaxErrorReporter"
};

$Object* allocate$StaxErrorReporter$1($Class* clazz) {
	return $of($alloc(StaxErrorReporter$1));
}

void StaxErrorReporter$1::init$($StaxErrorReporter* this$0, $XMLLocator* val$location) {
	$set(this, this$0, this$0);
	$set(this, val$location, val$location);
}

int32_t StaxErrorReporter$1::getColumnNumber() {
	return $nc(this->val$location)->getColumnNumber();
}

int32_t StaxErrorReporter$1::getLineNumber() {
	return $nc(this->val$location)->getLineNumber();
}

$String* StaxErrorReporter$1::getPublicId() {
	return $nc(this->val$location)->getPublicId();
}

$String* StaxErrorReporter$1::getSystemId() {
	return $nc(this->val$location)->getLiteralSystemId();
}

int32_t StaxErrorReporter$1::getCharacterOffset() {
	return $nc(this->val$location)->getCharacterOffset();
}

$String* StaxErrorReporter$1::getLocationURI() {
	return ""_s;
}

StaxErrorReporter$1::StaxErrorReporter$1() {
}

$Class* StaxErrorReporter$1::load$($String* name, bool initialize) {
	$loadClass(StaxErrorReporter$1, name, initialize, &_StaxErrorReporter$1_ClassInfo_, allocate$StaxErrorReporter$1);
	return class$;
}

$Class* StaxErrorReporter$1::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com