#include <com/sun/org/apache/xpath/internal/SourceTree.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _SourceTree_FieldInfo_[] = {
	{"m_url", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SourceTree, m_url)},
	{"m_root", "I", nullptr, $PUBLIC, $field(SourceTree, m_root)},
	{}
};

$MethodInfo _SourceTree_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SourceTree::*)(int32_t,$String*)>(&SourceTree::init$))},
	{}
};

$ClassInfo _SourceTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.SourceTree",
	"java.lang.Object",
	nullptr,
	_SourceTree_FieldInfo_,
	_SourceTree_MethodInfo_
};

$Object* allocate$SourceTree($Class* clazz) {
	return $of($alloc(SourceTree));
}

void SourceTree::init$(int32_t root, $String* url) {
	this->m_root = root;
	$set(this, m_url, url);
}

SourceTree::SourceTree() {
}

$Class* SourceTree::load$($String* name, bool initialize) {
	$loadClass(SourceTree, name, initialize, &_SourceTree_ClassInfo_, allocate$SourceTree);
	return class$;
}

$Class* SourceTree::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com