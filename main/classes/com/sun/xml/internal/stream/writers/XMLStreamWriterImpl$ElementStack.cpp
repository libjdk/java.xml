#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementStack.h>

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLStreamWriterImpl$ElementStateArray = $Array<::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState>;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLStreamWriterImpl = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl;
using $XMLStreamWriterImpl$ElementState = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLStreamWriterImpl$ElementStack_FieldInfo_[] = {
	{"this$0", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamWriterImpl$ElementStack, this$0)},
	{"fElements", "[Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PROTECTED, $field(XMLStreamWriterImpl$ElementStack, fElements)},
	{"fDepth", "S", nullptr, $PROTECTED, $field(XMLStreamWriterImpl$ElementStack, fDepth)},
	{}
};

$MethodInfo _XMLStreamWriterImpl$ElementStack_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLStreamWriterImpl$ElementStack::*)($XMLStreamWriterImpl*)>(&XMLStreamWriterImpl$ElementStack::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"empty", "()Z", nullptr, $PUBLIC},
	{"peek", "()Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC},
	{"pop", "()Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC},
	{"push", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;)Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC},
	{"push", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XMLStreamWriterImpl$ElementStack_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementStack", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "ElementStack", $PROTECTED},
	{}
};

$ClassInfo _XMLStreamWriterImpl$ElementStack_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementStack",
	"java.lang.Object",
	nullptr,
	_XMLStreamWriterImpl$ElementStack_FieldInfo_,
	_XMLStreamWriterImpl$ElementStack_MethodInfo_,
	nullptr,
	nullptr,
	_XMLStreamWriterImpl$ElementStack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl"
};

$Object* allocate$XMLStreamWriterImpl$ElementStack($Class* clazz) {
	return $of($alloc(XMLStreamWriterImpl$ElementStack));
}

void XMLStreamWriterImpl$ElementStack::init$($XMLStreamWriterImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, fElements, $new($XMLStreamWriterImpl$ElementStateArray, 10));
	for (int32_t i = 0; i < $nc(this->fElements)->length; ++i) {
		$nc(this->fElements)->set(i, $$new($XMLStreamWriterImpl$ElementState, this$0));
	}
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::push($XMLStreamWriterImpl$ElementState* element) {
	if (this->fDepth == $nc(this->fElements)->length) {
		$var($XMLStreamWriterImpl$ElementStateArray, array, $new($XMLStreamWriterImpl$ElementStateArray, $nc(this->fElements)->length * 2));
		$System::arraycopy(this->fElements, 0, array, 0, this->fDepth);
		$set(this, fElements, array);
		for (int32_t i = this->fDepth; i < $nc(this->fElements)->length; ++i) {
			$nc(this->fElements)->set(i, $$new($XMLStreamWriterImpl$ElementState, this->this$0));
		}
	}
	$nc($nc(this->fElements)->get(this->fDepth))->setValues(element);
	return $nc(this->fElements)->get(this->fDepth++);
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::push($String* prefix, $String* localpart, $String* rawname, $String* uri, bool isEmpty) {
	if (this->fDepth == $nc(this->fElements)->length) {
		$var($XMLStreamWriterImpl$ElementStateArray, array, $new($XMLStreamWriterImpl$ElementStateArray, $nc(this->fElements)->length * 2));
		$System::arraycopy(this->fElements, 0, array, 0, this->fDepth);
		$set(this, fElements, array);
		for (int32_t i = this->fDepth; i < $nc(this->fElements)->length; ++i) {
			$nc(this->fElements)->set(i, $$new($XMLStreamWriterImpl$ElementState, this->this$0));
		}
	}
	$nc($nc(this->fElements)->get(this->fDepth))->setValues(prefix, localpart, rawname, uri, isEmpty);
	return $nc(this->fElements)->get(this->fDepth++);
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::pop() {
	return $nc(this->fElements)->get(--this->fDepth);
}

void XMLStreamWriterImpl$ElementStack::clear() {
	this->fDepth = (int16_t)0;
}

$XMLStreamWriterImpl$ElementState* XMLStreamWriterImpl$ElementStack::peek() {
	return $nc(this->fElements)->get(this->fDepth - 1);
}

bool XMLStreamWriterImpl$ElementStack::empty() {
	return (this->fDepth > 0) ? false : true;
}

XMLStreamWriterImpl$ElementStack::XMLStreamWriterImpl$ElementStack() {
}

$Class* XMLStreamWriterImpl$ElementStack::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriterImpl$ElementStack, name, initialize, &_XMLStreamWriterImpl$ElementStack_ClassInfo_, allocate$XMLStreamWriterImpl$ElementStack);
	return class$;
}

$Class* XMLStreamWriterImpl$ElementStack::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com