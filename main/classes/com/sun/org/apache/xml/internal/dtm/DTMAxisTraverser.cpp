#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$MethodInfo _DTMAxisTraverser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DTMAxisTraverser::*)()>(&DTMAxisTraverser::init$))},
	{"first", "(I)I", nullptr, $PUBLIC},
	{"first", "(II)I", nullptr, $PUBLIC},
	{"next", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"next", "(III)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMAxisTraverser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DTMAxisTraverser_MethodInfo_
};

$Object* allocate$DTMAxisTraverser($Class* clazz) {
	return $of($alloc(DTMAxisTraverser));
}

void DTMAxisTraverser::init$() {
}

int32_t DTMAxisTraverser::first(int32_t context) {
	return next(context, context);
}

int32_t DTMAxisTraverser::first(int32_t context, int32_t extendedTypeID) {
	return next(context, context, extendedTypeID);
}

DTMAxisTraverser::DTMAxisTraverser() {
}

$Class* DTMAxisTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMAxisTraverser, name, initialize, &_DTMAxisTraverser_ClassInfo_, allocate$DTMAxisTraverser);
	return class$;
}

$Class* DTMAxisTraverser::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com