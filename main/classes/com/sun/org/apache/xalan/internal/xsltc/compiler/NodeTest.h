#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_NodeTest_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_NodeTest_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.compiler.NodeTest
//$ extends java.lang.Object

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>

#pragma push_macro("ANODE")
#undef ANODE
#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("ATTRIBUTE_NODE")
#undef ATTRIBUTE_NODE
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("COMMENT_NODE")
#undef COMMENT_NODE
#pragma push_macro("DOCUMENT_NODE")
#undef DOCUMENT_NODE
#pragma push_macro("ELEMENT")
#undef ELEMENT
#pragma push_macro("ELEMENT_NODE")
#undef ELEMENT_NODE
#pragma push_macro("FIRST_TYPE")
#undef FIRST_TYPE
#pragma push_macro("GTYPE")
#undef GTYPE
#pragma push_macro("NTYPES")
#undef NTYPES
#pragma push_macro("PI")
#undef PI
#pragma push_macro("PROCESSING_INSTRUCTION_NODE")
#undef PROCESSING_INSTRUCTION_NODE
#pragma push_macro("ROOT")
#undef ROOT
#pragma push_macro("TEXT")
#undef TEXT
#pragma push_macro("TEXT_NODE")
#undef TEXT_NODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class NodeTest : public ::java::lang::Object {
	$interface(NodeTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t TEXT = ::com::sun::org::apache::xml::internal::dtm::DTM::TEXT_NODE;
	static const int32_t COMMENT = ::com::sun::org::apache::xml::internal::dtm::DTM::COMMENT_NODE;
	static const int32_t PI = ::com::sun::org::apache::xml::internal::dtm::DTM::PROCESSING_INSTRUCTION_NODE;
	static const int32_t ROOT = ::com::sun::org::apache::xml::internal::dtm::DTM::DOCUMENT_NODE;
	static const int32_t ELEMENT = ::com::sun::org::apache::xml::internal::dtm::DTM::ELEMENT_NODE;
	static const int32_t ATTRIBUTE = ::com::sun::org::apache::xml::internal::dtm::DTM::ATTRIBUTE_NODE;
	static const int32_t GTYPE = ::com::sun::org::apache::xml::internal::dtm::DTM::NTYPES;
	static const int32_t ANODE = -1; // ::com::sun::org::apache::xalan::internal::xsltc::DOM::FIRST_TYPE - 1
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ANODE")
#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("ATTRIBUTE_NODE")
#pragma pop_macro("COMMENT")
#pragma pop_macro("COMMENT_NODE")
#pragma pop_macro("DOCUMENT_NODE")
#pragma pop_macro("ELEMENT")
#pragma pop_macro("ELEMENT_NODE")
#pragma pop_macro("FIRST_TYPE")
#pragma pop_macro("GTYPE")
#pragma pop_macro("NTYPES")
#pragma pop_macro("PI")
#pragma pop_macro("PROCESSING_INSTRUCTION_NODE")
#pragma pop_macro("ROOT")
#pragma pop_macro("TEXT")
#pragma pop_macro("TEXT_NODE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_NodeTest_h_