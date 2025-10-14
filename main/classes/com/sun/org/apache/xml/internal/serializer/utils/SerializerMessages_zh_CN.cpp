#include <com/sun/org/apache/xml/internal/serializer/utils/SerializerMessages_zh_CN.h>

#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef BAD_MSGFORMAT
#undef BAD_MSGKEY
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CDATA_SECTIONS_SPLIT
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_FACTORY_PROPERTY_MISSING
#undef ER_FEATURE_NOT_FOUND
#undef ER_FEATURE_NOT_SUPPORTED
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_NAMESPACE_PREFIX
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#undef ER_NULL_LOCAL_ATTR_NAME
#undef ER_NULL_LOCAL_ELEMENT_NAME
#undef ER_OIERROR
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_STRING_TOO_LONG
#undef ER_TYPE_MISMATCH_ERR
#undef ER_UNABLE_TO_SERIALIZE_NODE
#undef ER_UNSUPPORTED_ENCODING
#undef ER_WARNING_WF_NOT_CHECKED
#undef ER_WF_DASH_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#undef ER_WF_INVALID_CHARACTER_IN_PI
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#undef ER_WF_LT_IN_ATTVAL
#undef ER_WF_REF_TO_EXTERNAL_ENT
#undef ER_WF_REF_TO_UNPARSED_ENT
#undef ER_WRITING_INTERNAL_SUBSET
#undef ER_XML_VERSION_NOT_SUPPORTED

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$MethodInfo _SerializerMessages_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SerializerMessages_zh_CN::*)()>(&SerializerMessages_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializerMessages_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.SerializerMessages_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_SerializerMessages_zh_CN_MethodInfo_
};

$Object* allocate$SerializerMessages_zh_CN($Class* clazz) {
	return $of($alloc(SerializerMessages_zh_CN));
}

void SerializerMessages_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* SerializerMessages_zh_CN::getContents() {
			$init($MsgKey);
	$var($ObjectArray2, contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGKEY),
			$of(u"\u6d88\u606f\u5173\u952e\u5b57 \'\'{0}\'\' \u4e0d\u5728\u6d88\u606f\u7c7b \'\'{1}\'\' \u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::BAD_MSGFORMAT),
			$of(u"\u6d88\u606f\u7c7b \'\'{1}\'\' \u4e2d\u6d88\u606f \'\'{0}\'\' \u7684\u683c\u5f0f\u5316\u5931\u8d25\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"\u4e32\u884c\u5668\u7c7b \'\'{0}\'\' \u4e0d\u5b9e\u73b0 org.xml.sax.ContentHandler\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"\u627e\u4e0d\u5230\u8d44\u6e90 [ {0} ]\u3002\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"\u8d44\u6e90 [ {0} ] \u65e0\u6cd5\u52a0\u8f7d: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"\u7f13\u51b2\u533a\u5927\u5c0f <=0"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_UTF16_SURROGATE),
			$of(u"\u68c0\u6d4b\u5230\u65e0\u6548\u7684 UTF-16 \u4ee3\u7406: {0}?"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_OIERROR),
			$of(u"IO \u9519\u8bef"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"\u5728\u751f\u6210\u5b50\u8282\u70b9\u4e4b\u540e\u6216\u5728\u751f\u6210\u5143\u7d20\u4e4b\u524d\u65e0\u6cd5\u6dfb\u52a0\u5c5e\u6027 {0}\u3002\u5c06\u5ffd\u7565\u5c5e\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NAMESPACE_PREFIX),
			$of(u"\u6ca1\u6709\u8bf4\u660e\u540d\u79f0\u7a7a\u95f4\u524d\u7f00 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_ATTRIBUTE),
			$of(u"\u5c5e\u6027 \'\'{0}\'\' \u5728\u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRAY_NAMESPACE),
			$of(u"\u540d\u79f0\u7a7a\u95f4\u58f0\u660e \'\'{0}\'\'=\'\'{1}\'\' \u5728\u5143\u7d20\u5916\u90e8\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\u65e0\u6cd5\u52a0\u8f7d \'\'{0}\'\' (\u68c0\u67e5 CLASSPATH), \u73b0\u5728\u53ea\u4f7f\u7528\u9ed8\u8ba4\u503c"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ILLEGAL_CHARACTER),
			$of(u"\u5c1d\u8bd5\u8f93\u51fa\u672a\u4ee5{1}\u7684\u6307\u5b9a\u8f93\u51fa\u7f16\u7801\u8868\u793a\u7684\u6574\u6570\u503c {0} \u7684\u5b57\u7b26\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\u65e0\u6cd5\u4e3a\u8f93\u51fa\u65b9\u6cd5 \'\'{1}\'\' \u52a0\u8f7d\u5c5e\u6027\u6587\u4ef6 \'\'{0}\'\' (\u68c0\u67e5 CLASSPATH)"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_INVALID_PORT),
			$of(u"\u65e0\u6548\u7684\u7aef\u53e3\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PORT_WHEN_HOST_NULL),
			$of(u"\u4e3b\u673a\u4e3a\u7a7a\u65f6, \u65e0\u6cd5\u8bbe\u7f6e\u7aef\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"\u4e3b\u673a\u4e0d\u662f\u683c\u5f0f\u826f\u597d\u7684\u5730\u5740"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_NOT_CONFORMANT),
			$of(u"\u65b9\u6848\u4e0d\u4e00\u81f4\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_FROM_NULL_STRING),
			$of(u"\u65e0\u6cd5\u4ece\u7a7a\u5b57\u7b26\u4e32\u8bbe\u7f6e\u65b9\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"\u8def\u5f84\u5305\u542b\u65e0\u6548\u7684\u8f6c\u4e49\u5e8f\u5217"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_PATH_INVALID_CHAR),
			$of(u"\u8def\u5f84\u5305\u542b\u65e0\u6548\u7684\u5b57\u7b26: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_INVALID_CHAR),
			$of(u"\u7247\u6bb5\u5305\u542b\u65e0\u6548\u7684\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_WHEN_PATH_NULL),
			$of(u"\u8def\u5f84\u4e3a\u7a7a\u65f6, \u65e0\u6cd5\u8bbe\u7f6e\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FRAG_FOR_GENERIC_URI),
			$of(u"\u53ea\u80fd\u4e3a\u4e00\u822c URI \u8bbe\u7f6e\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_SCHEME_IN_URI),
			$of(u"\u5728 URI \u4e2d\u627e\u4e0d\u5230\u65b9\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"\u65e0\u6cd5\u4ee5\u7a7a\u53c2\u6570\u521d\u59cb\u5316 URI"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"\u8def\u5f84\u548c\u7247\u6bb5\u4e2d\u90fd\u65e0\u6cd5\u6307\u5b9a\u7247\u6bb5"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"\u8def\u5f84\u548c\u67e5\u8be2\u5b57\u7b26\u4e32\u4e2d\u4e0d\u80fd\u6307\u5b9a\u67e5\u8be2\u5b57\u7b26\u4e32"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_PORT_IF_NO_HOST),
			$of(u"\u5982\u679c\u6ca1\u6709\u6307\u5b9a\u4e3b\u673a, \u5219\u4e0d\u53ef\u4ee5\u6307\u5b9a\u7aef\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"\u5982\u679c\u6ca1\u6709\u6307\u5b9a\u4e3b\u673a, \u5219\u4e0d\u53ef\u4ee5\u6307\u5b9a Userinfo"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_XML_VERSION_NOT_SUPPORTED),
			$of(u"\u8b66\u544a: \u8f93\u51fa\u6587\u6863\u7684\u7248\u672c\u5e94\u4e3a \'\'{0}\'\'\u3002\u4e0d\u652f\u6301\u6b64\u7248\u672c\u7684 XML\u3002\u8f93\u51fa\u6587\u6863\u7684\u7248\u672c\u5c06\u4e3a \'\'1.0\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_SCHEME_REQUIRED),
			$of(u"\u65b9\u6848\u662f\u5fc5\u9700\u7684!"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FACTORY_PROPERTY_MISSING),
			$of(u"\u4f20\u9012\u5230 SerializerFactory \u7684 Properties \u5bf9\u8c61\u6ca1\u6709 \'\'{0}\'\' \u5c5e\u6027\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ENCODING_NOT_SUPPORTED),
			$of(u"\u8b66\u544a: Java \u8fd0\u884c\u65f6\u4e0d\u652f\u6301\u7f16\u7801 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_FOUND),
			$of(u"\u672a\u8bc6\u522b\u53c2\u6570 \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_FEATURE_NOT_SUPPORTED),
			$of(u"\u5df2\u8bc6\u522b\u53c2\u6570 \'\'{0}\'\', \u4f46\u65e0\u6cd5\u8bbe\u7f6e\u8bf7\u6c42\u7684\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_STRING_TOO_LONG),
			$of(u"\u751f\u6210\u7684\u5b57\u7b26\u4e32\u592a\u957f, \u4e0d\u9002\u5408 DOMString: \'\'{0}\'\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_TYPE_MISMATCH_ERR),
			$of(u"\u6b64\u53c2\u6570\u540d\u79f0\u7684\u503c\u7c7b\u578b\u4e0e\u9884\u671f\u7684\u503c\u7c7b\u578b\u4e0d\u517c\u5bb9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NO_OUTPUT_SPECIFIED),
			$of(u"\u8981\u5c06\u6570\u636e\u5199\u5165\u7684\u8f93\u51fa\u76ee\u6807\u4e3a\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNSUPPORTED_ENCODING),
			$of(u"\u9047\u5230\u4e0d\u652f\u6301\u7684\u7f16\u7801\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_UNABLE_TO_SERIALIZE_NODE),
			$of(u"\u65e0\u6cd5\u5e8f\u5217\u5316\u8282\u70b9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_CDATA_SECTIONS_SPLIT),
			$of(u"CDATA \u8282\u5305\u542b\u4e00\u4e2a\u6216\u591a\u4e2a\u7ec8\u6b62\u6807\u8bb0 \']]>\'\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WARNING_WF_NOT_CHECKED),
			$of(u"\u65e0\u6cd5\u521b\u5efa\u683c\u5f0f\u5408\u89c4\u6027\u68c0\u67e5\u5668\u7684\u5b9e\u4f8b\u3002\u683c\u5f0f\u5408\u89c4\u6027\u53c2\u6570\u5df2\u8bbe\u7f6e\u4e3a\u201c\u771f\u201d, \u4f46\u65e0\u6cd5\u6267\u884c\u683c\u5f0f\u5408\u89c4\u6027\u68c0\u67e5\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER),
			$of(u"\u8282\u70b9 \'\'{0}\'\' \u5305\u542b\u65e0\u6548\u7684 XML \u5b57\u7b26\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT),
			$of(u"\u5728\u6ce8\u91ca\u4e2d\u627e\u5230\u65e0\u6548\u7684 XML \u5b57\u7b26 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_PI),
			$of(u"\u5728\u5904\u7406\u6307\u4ee4\u6570\u636e\u4e2d\u627e\u5230\u65e0\u6548\u7684 XML \u5b57\u7b26 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA),
			$of(u"\u5728 CDATA \u8282\u7684\u5185\u5bb9\u4e2d\u627e\u5230\u65e0\u6548\u7684 XML \u5b57\u7b26 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT),
			$of(u"\u5728\u8282\u70b9\u7684\u5b57\u7b26\u6570\u636e\u5185\u5bb9\u4e2d\u627e\u5230\u65e0\u6548\u7684 XML \u5b57\u7b26 (Unicode: 0x{0})\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME),
			$of(u"\u5728\u540d\u4e3a \'\'{1}\'\' \u7684{0}\u8282\u70b9\u4e2d\u627e\u5230\u65e0\u6548\u7684 XML \u5b57\u7b26\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_DASH_IN_COMMENT),
			$of(u"\u6ce8\u91ca\u4e2d\u4e0d\u5141\u8bb8\u51fa\u73b0\u5b57\u7b26\u4e32 \"--\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_LT_IN_ATTVAL),
			$of(u"\u4e0e\u5143\u7d20\u7c7b\u578b \"{0}\" \u76f8\u5173\u8054\u7684 \"{1}\" \u5c5e\u6027\u503c\u4e0d\u80fd\u5305\u542b \'\'<\'\' \u5b57\u7b26\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_UNPARSED_ENT),
			$of(u"\u4e0d\u5141\u8bb8\u4f7f\u7528\u672a\u89e3\u6790\u7684\u5b9e\u4f53\u5f15\u7528 \"&{0};\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WF_REF_TO_EXTERNAL_ENT),
			$of(u"\u5c5e\u6027\u503c\u4e2d\u4e0d\u5141\u8bb8\u91c7\u7528\u5916\u90e8\u5b9e\u4f53\u5f15\u7528 \"&{0};\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND),
			$of(u"\u524d\u7f00 \"{0}\" \u65e0\u6cd5\u7ed1\u5b9a\u5230\u540d\u79f0\u7a7a\u95f4 \"{1}\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ELEMENT_NAME),
			$of(u"\u5143\u7d20 \"{0}\" \u7684\u672c\u5730\u540d\u79f0\u4e3a\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_NULL_LOCAL_ATTR_NAME),
			$of(u"\u5c5e\u6027 \"{0}\" \u7684\u672c\u5730\u540d\u79f0\u4e3a\u7a7a\u503c\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\u5b9e\u4f53\u8282\u70b9 \"{0}\" \u7684\u66ff\u6362\u6587\u672c\u5305\u542b\u5e26\u6709\u672a\u7ed1\u5b9a\u524d\u7f00 \"{2}\" \u7684\u5143\u7d20\u8282\u70b9 \"{1}\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF),
			$of(u"\u5b9e\u4f53\u8282\u70b9 \"{0}\" \u7684\u66ff\u6362\u6587\u672c\u5305\u542b\u5e26\u6709\u672a\u7ed1\u5b9a\u524d\u7f00 \"{2}\" \u7684\u5c5e\u6027\u8282\u70b9 \"{1}\"\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of($MsgKey::ER_WRITING_INTERNAL_SUBSET),
			$of(u"\u5199\u5165\u5185\u90e8\u5b50\u96c6\u65f6\u51fa\u73b0\u9519\u8bef\u3002"_s)
		})
	}));
	return contents;
}

SerializerMessages_zh_CN::SerializerMessages_zh_CN() {
}

$Class* SerializerMessages_zh_CN::load$($String* name, bool initialize) {
	$loadClass(SerializerMessages_zh_CN, name, initialize, &_SerializerMessages_zh_CN_ClassInfo_, allocate$SerializerMessages_zh_CN);
	return class$;
}

$Class* SerializerMessages_zh_CN::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com