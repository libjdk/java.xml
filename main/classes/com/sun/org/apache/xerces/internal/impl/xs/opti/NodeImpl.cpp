#include <com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultNode.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DefaultNode = ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {

$FieldInfo _NodeImpl_FieldInfo_[] = {
	{"prefix", "Ljava/lang/String;", nullptr, 0, $field(NodeImpl, prefix)},
	{"localpart", "Ljava/lang/String;", nullptr, 0, $field(NodeImpl, localpart)},
	{"rawname", "Ljava/lang/String;", nullptr, 0, $field(NodeImpl, rawname)},
	{"uri", "Ljava/lang/String;", nullptr, 0, $field(NodeImpl, uri)},
	{"nodeType", "S", nullptr, 0, $field(NodeImpl, nodeType)},
	{"hidden", "Z", nullptr, 0, $field(NodeImpl, hidden)},
	{}
};

$MethodInfo _NodeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NodeImpl::*)()>(&NodeImpl::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;S)V", nullptr, $PUBLIC, $method(static_cast<void(NodeImpl::*)($String*,$String*,$String*,$String*,int16_t)>(&NodeImpl::init$))},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeType", "()S", nullptr, $PUBLIC},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReadOnly", "()Z", nullptr, $PUBLIC},
	{"setReadOnly", "(ZZ)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NodeImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.opti.NodeImpl",
	"com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultNode",
	nullptr,
	_NodeImpl_FieldInfo_,
	_NodeImpl_MethodInfo_
};

$Object* allocate$NodeImpl($Class* clazz) {
	return $of($alloc(NodeImpl));
}

void NodeImpl::init$() {
	$DefaultNode::init$();
}

void NodeImpl::init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int16_t nodeType) {
	$DefaultNode::init$();
	$set(this, prefix, prefix);
	$set(this, localpart, localpart);
	$set(this, rawname, rawname);
	$set(this, uri, uri);
	this->nodeType = nodeType;
}

$String* NodeImpl::getNodeName() {
	return this->rawname;
}

$String* NodeImpl::getNamespaceURI() {
	return this->uri;
}

$String* NodeImpl::getPrefix() {
	return this->prefix;
}

$String* NodeImpl::getLocalName() {
	return this->localpart;
}

int16_t NodeImpl::getNodeType() {
	return this->nodeType;
}

void NodeImpl::setReadOnly(bool hide, bool deep) {
	this->hidden = hide;
}

bool NodeImpl::getReadOnly() {
	return this->hidden;
}

NodeImpl::NodeImpl() {
}

$Class* NodeImpl::load$($String* name, bool initialize) {
	$loadClass(NodeImpl, name, initialize, &_NodeImpl_ClassInfo_, allocate$NodeImpl);
	return class$;
}

$Class* NodeImpl::class$ = nullptr;

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com