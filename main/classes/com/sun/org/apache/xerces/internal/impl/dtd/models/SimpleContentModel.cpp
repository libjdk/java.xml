#include <com/sun/org/apache/xerces/internal/impl/dtd/models/SimpleContentModel.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CHOICE
#undef CONTENTSPECNODE_CHOICE
#undef CONTENTSPECNODE_LEAF
#undef CONTENTSPECNODE_ONE_OR_MORE
#undef CONTENTSPECNODE_SEQ
#undef CONTENTSPECNODE_ZERO_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_ONE
#undef SEQUENCE

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $ContentModelValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

$FieldInfo _SimpleContentModel_FieldInfo_[] = {
	{"CHOICE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleContentModel, CHOICE)},
	{"SEQUENCE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SimpleContentModel, SEQUENCE)},
	{"fFirstChild", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(SimpleContentModel, fFirstChild)},
	{"fSecondChild", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(SimpleContentModel, fSecondChild)},
	{"fOperator", "I", nullptr, $PRIVATE, $field(SimpleContentModel, fOperator)},
	{}
};

$MethodInfo _SimpleContentModel_MethodInfo_[] = {
	{"<init>", "(SLcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleContentModel::*)(int16_t,$QName*,$QName*)>(&SimpleContentModel::init$))},
	{"validate", "([Lcom/sun/org/apache/xerces/internal/xni/QName;II)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleContentModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.SimpleContentModel",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator",
	_SimpleContentModel_FieldInfo_,
	_SimpleContentModel_MethodInfo_
};

$Object* allocate$SimpleContentModel($Class* clazz) {
	return $of($alloc(SimpleContentModel));
}

void SimpleContentModel::init$(int16_t operator$, $QName* firstChild, $QName* secondChild) {
	$set(this, fFirstChild, $new($QName));
	$set(this, fSecondChild, $new($QName));
	$nc(this->fFirstChild)->setValues(firstChild);
	if (secondChild != nullptr) {
		$nc(this->fSecondChild)->setValues(secondChild);
	} else {
		$nc(this->fSecondChild)->clear();
	}
	this->fOperator = operator$;
}

int32_t SimpleContentModel::validate($QNameArray* children, int32_t offset, int32_t length) {
	switch (this->fOperator) {
	case $XMLContentSpec::CONTENTSPECNODE_LEAF:
		{
			if (length == 0) {
				return 0;
			}
			if ($nc($nc(children)->get(offset))->rawname != $nc(this->fFirstChild)->rawname) {
				return 0;
			}
			if (length > 1) {
				return 1;
			}
			break;
		}
	case $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE:
		{
			if (length == 1) {
				if ($nc($nc(children)->get(offset))->rawname != $nc(this->fFirstChild)->rawname) {
					return 0;
				}
			}
			if (length > 1) {
				return 1;
			}
			break;
		}
	case $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE:
		{
			if (length > 0) {
				for (int32_t index = 0; index < length; ++index) {
					if ($nc($nc(children)->get(offset + index))->rawname != $nc(this->fFirstChild)->rawname) {
						return index;
					}
				}
			}
			break;
		}
	case $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE:
		{
			if (length == 0) {
				return 0;
			}
			for (int32_t index = 0; index < length; ++index) {
				if ($nc($nc(children)->get(offset + index))->rawname != $nc(this->fFirstChild)->rawname) {
					return index;
				}
			}
			break;
		}
	case $XMLContentSpec::CONTENTSPECNODE_CHOICE:
		{
			if (length == 0) {
				return 0;
			}
			if (($nc($nc(children)->get(offset))->rawname != $nc(this->fFirstChild)->rawname) && ($nc(children->get(offset))->rawname != $nc(this->fSecondChild)->rawname)) {
				return 0;
			}
			if (length > 1) {
				return 1;
			}
			break;
		}
	case $XMLContentSpec::CONTENTSPECNODE_SEQ:
		{
			if (length == 2) {
				if ($nc($nc(children)->get(offset))->rawname != $nc(this->fFirstChild)->rawname) {
					return 0;
				}
				if ($nc($nc(children)->get(offset + 1))->rawname != $nc(this->fSecondChild)->rawname) {
					return 1;
				}
			} else {
				if (length > 2) {
					return 2;
				}
				return length;
			}
			break;
		}
	default:
		{
			$throwNew($RuntimeException, "ImplementationMessages.VAL_CST"_s);
		}
	}
	return -1;
}

SimpleContentModel::SimpleContentModel() {
}

$Class* SimpleContentModel::load$($String* name, bool initialize) {
	$loadClass(SimpleContentModel, name, initialize, &_SimpleContentModel_ClassInfo_, allocate$SimpleContentModel);
	return class$;
}

$Class* SimpleContentModel::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com