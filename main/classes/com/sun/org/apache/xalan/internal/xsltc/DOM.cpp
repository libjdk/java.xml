#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>

#include <com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef ADAPTIVE_RTF
#undef DOM
#undef FIRST_TYPE
#undef NO_TYPE
#undef NULL
#undef RETURN_CURRENT
#undef RETURN_PARENT
#undef SIMPLE_RTF
#undef TREE_RTF

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

$FieldInfo _DOM_FieldInfo_[] = {
	{"FIRST_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, FIRST_TYPE)},
	{"NO_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, NO_TYPE)},
	{"NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, NULL)},
	{"RETURN_CURRENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, RETURN_CURRENT)},
	{"RETURN_PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, RETURN_PARENT)},
	{"SIMPLE_RTF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, SIMPLE_RTF)},
	{"ADAPTIVE_RTF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, ADAPTIVE_RTF)},
	{"TREE_RTF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOM, TREE_RTF)},
	{}
};

$MethodInfo _DOM_MethodInfo_[] = {
	{"characters", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"copy", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"getAttributeNode", "(II)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocument", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocumentURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getElementsWithIDs", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PUBLIC | $ABSTRACT},
	{"getExpandedTypeID", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLanguage", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNSType", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespaceType", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeHandle", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeIdent", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeNameX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNodeValueIterator", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;ILjava/lang/String;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNthDescendant", "(IIZ)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOutputDomBuilder", "()Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParent", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getResultTreeFrag", "(II)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResultTreeFrag", "(IIZ)Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getStringValueX", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypedChildren", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnparsedEntityURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isAttribute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isElement", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lessThan", "(II)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"lookupNamespace", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"makeNode", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeNode", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeNodeList", "(I)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"makeNodeList", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"orderNodes", "(Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"release", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/StripFilter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setupMapping", "([Ljava/lang/String;[Ljava/lang/String;[I[Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"shallowCopy", "(ILcom/sun/org/apache/xml/internal/serializer/SerializationHandler;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{}
};

$ClassInfo _DOM_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.DOM",
	nullptr,
	nullptr,
	_DOM_FieldInfo_,
	_DOM_MethodInfo_
};

$Object* allocate$DOM($Class* clazz) {
	return $of($alloc(DOM));
}

$Class* DOM::load$($String* name, bool initialize) {
	$loadClass(DOM, name, initialize, &_DOM_ClassInfo_, allocate$DOM);
	return class$;
}

$Class* DOM::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com