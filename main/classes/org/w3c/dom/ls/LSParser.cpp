#include <org/w3c/dom/ls/LSParser.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSParserFilter.h>
#include <jcpp.h>

#undef ACTION_APPEND_AS_CHILDREN
#undef ACTION_INSERT_AFTER
#undef ACTION_INSERT_BEFORE
#undef ACTION_REPLACE
#undef ACTION_REPLACE_CHILDREN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSParserFilter = ::org::w3c::dom::ls::LSParserFilter;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$FieldInfo _LSParser_FieldInfo_[] = {
	{"ACTION_APPEND_AS_CHILDREN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_APPEND_AS_CHILDREN)},
	{"ACTION_REPLACE_CHILDREN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_REPLACE_CHILDREN)},
	{"ACTION_INSERT_BEFORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_INSERT_BEFORE)},
	{"ACTION_INSERT_AFTER", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_INSERT_AFTER)},
	{"ACTION_REPLACE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_REPLACE)},
	{}
};

$MethodInfo _LSParser_MethodInfo_[] = {
	{"abort", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAsync", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getBusy", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFilter", "()Lorg/w3c/dom/ls/LSParserFilter;", nullptr, $PUBLIC | $ABSTRACT},
	{"parse", "(Lorg/w3c/dom/ls/LSInput;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
	{"parseURI", "(Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
	{"parseWithContext", "(Lorg/w3c/dom/ls/LSInput;Lorg/w3c/dom/Node;S)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
	{"setFilter", "(Lorg/w3c/dom/ls/LSParserFilter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LSParser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSParser",
	nullptr,
	nullptr,
	_LSParser_FieldInfo_,
	_LSParser_MethodInfo_
};

$Object* allocate$LSParser($Class* clazz) {
	return $of($alloc(LSParser));
}

$Class* LSParser::load$($String* name, bool initialize) {
	$loadClass(LSParser, name, initialize, &_LSParser_ClassInfo_, allocate$LSParser);
	return class$;
}

$Class* LSParser::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org