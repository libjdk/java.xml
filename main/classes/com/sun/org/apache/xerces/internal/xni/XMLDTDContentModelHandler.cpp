#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <jcpp.h>

#undef OCCURS_ONE_OR_MORE
#undef OCCURS_ZERO_OR_MORE
#undef OCCURS_ZERO_OR_ONE
#undef SEPARATOR_CHOICE
#undef SEPARATOR_SEQUENCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$FieldInfo _XMLDTDContentModelHandler_FieldInfo_[] = {
	{"SEPARATOR_CHOICE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, SEPARATOR_CHOICE)},
	{"SEPARATOR_SEQUENCE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, SEPARATOR_SEQUENCE)},
	{"OCCURS_ZERO_OR_ONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, OCCURS_ZERO_OR_ONE)},
	{"OCCURS_ZERO_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, OCCURS_ZERO_OR_MORE)},
	{"OCCURS_ONE_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, OCCURS_ONE_OR_MORE)},
	{}
};

$MethodInfo _XMLDTDContentModelHandler_MethodInfo_[] = {
	{"any", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"empty", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDContentModelSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PUBLIC | $ABSTRACT},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLDTDContentModelHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler",
	nullptr,
	nullptr,
	_XMLDTDContentModelHandler_FieldInfo_,
	_XMLDTDContentModelHandler_MethodInfo_
};

$Object* allocate$XMLDTDContentModelHandler($Class* clazz) {
	return $of($alloc(XMLDTDContentModelHandler));
}

$Class* XMLDTDContentModelHandler::load$($String* name, bool initialize) {
	$loadClass(XMLDTDContentModelHandler, name, initialize, &_XMLDTDContentModelHandler_ClassInfo_, allocate$XMLDTDContentModelHandler);
	return class$;
}

$Class* XMLDTDContentModelHandler::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com