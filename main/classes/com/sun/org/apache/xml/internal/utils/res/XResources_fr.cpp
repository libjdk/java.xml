#include <com/sun/org/apache/xml/internal/utils/res/XResources_fr.h>

#include <com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/XResourceBundle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $CharArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper;
using $XResourceBundle = ::com::sun::org::apache::xml::internal::utils::res::XResourceBundle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

$FieldInfo _XResources_fr_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_fr, _contents)},
	{}
};

$MethodInfo _XResources_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XResources_fr::*)()>(&XResources_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XResources_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_fr",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_fr_FieldInfo_,
	_XResources_fr_MethodInfo_
};

$Object* allocate$XResources_fr($Class* clazz) {
	return $of($alloc(XResources_fr));
}

$ObjectArray2* XResources_fr::_contents = nullptr;

void XResources_fr::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_fr::getContents() {
	return XResources_fr::_contents;
}

void clinit$XResources_fr($Class* class$) {
	$assignStatic(XResources_fr::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("fr"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("fr"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("fr"_s)
		}),
		$$new($ObjectArray, {
			$of("alphabet"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				u'A',
				u'B',
				u'C',
				u'D',
				u'E',
				u'F',
				u'G',
				u'H',
				u'I',
				u'J',
				u'K',
				u'L',
				u'M',
				u'N',
				u'O',
				u'P',
				u'Q',
				u'R',
				u'S',
				u'T',
				u'U',
				u'V',
				u'W',
				u'X',
				u'Y',
				u'Z'
			})))
		}),
		$$new($ObjectArray, {
			$of("tradAlphabet"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				u'A',
				u'B',
				u'C',
				u'D',
				u'E',
				u'F',
				u'G',
				u'H',
				u'I',
				u'J',
				u'K',
				u'L',
				u'M',
				u'N',
				u'O',
				u'P',
				u'Q',
				u'R',
				u'S',
				u'T',
				u'U',
				u'V',
				u'W',
				u'X',
				u'Y',
				u'Z'
			})))
		}),
		$$new($ObjectArray, {
			$of("orientation"_s),
			$of("LeftToRight"_s)
		}),
		$$new($ObjectArray, {
			$of("numbering"_s),
			$of("additive"_s)
		})
	}));
}

XResources_fr::XResources_fr() {
}

$Class* XResources_fr::load$($String* name, bool initialize) {
	$loadClass(XResources_fr, name, initialize, &_XResources_fr_ClassInfo_, clinit$XResources_fr, allocate$XResources_fr);
	return class$;
}

$Class* XResources_fr::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com