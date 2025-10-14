#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser$ParticleArray.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractParticleTraverser.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XSParticleDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSDAbstractParticleTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractParticleTraverser;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSDAbstractParticleTraverser$ParticleArray_FieldInfo_[] = {
	{"fParticles", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $field(XSDAbstractParticleTraverser$ParticleArray, fParticles)},
	{"fPos", "[I", nullptr, 0, $field(XSDAbstractParticleTraverser$ParticleArray, fPos)},
	{"fContextCount", "I", nullptr, 0, $field(XSDAbstractParticleTraverser$ParticleArray, fContextCount)},
	{}
};

$MethodInfo _XSDAbstractParticleTraverser$ParticleArray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(XSDAbstractParticleTraverser$ParticleArray::*)()>(&XSDAbstractParticleTraverser$ParticleArray::init$))},
	{"addParticle", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)V", nullptr, 0},
	{"getParticleCount", "()I", nullptr, 0},
	{"popContext", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0},
	{"pushContext", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _XSDAbstractParticleTraverser$ParticleArray_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser$ParticleArray", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser", "ParticleArray", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _XSDAbstractParticleTraverser$ParticleArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser$ParticleArray",
	"java.lang.Object",
	nullptr,
	_XSDAbstractParticleTraverser$ParticleArray_FieldInfo_,
	_XSDAbstractParticleTraverser$ParticleArray_MethodInfo_,
	nullptr,
	nullptr,
	_XSDAbstractParticleTraverser$ParticleArray_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser"
};

$Object* allocate$XSDAbstractParticleTraverser$ParticleArray($Class* clazz) {
	return $of($alloc(XSDAbstractParticleTraverser$ParticleArray));
}

void XSDAbstractParticleTraverser$ParticleArray::init$() {
	$set(this, fParticles, $new($XSParticleDeclArray, 10));
	$set(this, fPos, $new($ints, 5));
	this->fContextCount = 0;
}

void XSDAbstractParticleTraverser$ParticleArray::pushContext() {
	++this->fContextCount;
	if (this->fContextCount == $nc(this->fPos)->length) {
		int32_t newSize = this->fContextCount * 2;
		$var($ints, newArray, $new($ints, newSize));
		$System::arraycopy(this->fPos, 0, newArray, 0, this->fContextCount);
		$set(this, fPos, newArray);
	}
	$nc(this->fPos)->set(this->fContextCount, $nc(this->fPos)->get(this->fContextCount - 1));
}

int32_t XSDAbstractParticleTraverser$ParticleArray::getParticleCount() {
	return $nc(this->fPos)->get(this->fContextCount) - $nc(this->fPos)->get(this->fContextCount - 1);
}

void XSDAbstractParticleTraverser$ParticleArray::addParticle($XSParticleDecl* particle) {
	if ($nc(this->fPos)->get(this->fContextCount) == $nc(this->fParticles)->length) {
		int32_t newSize = $nc(this->fPos)->get(this->fContextCount) * 2;
		$var($XSParticleDeclArray, newArray, $new($XSParticleDeclArray, newSize));
		$System::arraycopy(this->fParticles, 0, newArray, 0, $nc(this->fPos)->get(this->fContextCount));
		$set(this, fParticles, newArray);
	}
	$nc(this->fParticles)->set((*$nc(this->fPos))[this->fContextCount]++, particle);
}

$XSParticleDeclArray* XSDAbstractParticleTraverser$ParticleArray::popContext() {
	int32_t count = $nc(this->fPos)->get(this->fContextCount) - $nc(this->fPos)->get(this->fContextCount - 1);
	$var($XSParticleDeclArray, array, nullptr);
	if (count != 0) {
		$assign(array, $new($XSParticleDeclArray, count));
		$System::arraycopy(this->fParticles, $nc(this->fPos)->get(this->fContextCount - 1), array, 0, count);
		for (int32_t i = $nc(this->fPos)->get(this->fContextCount - 1); i < $nc(this->fPos)->get(this->fContextCount); ++i) {
			$nc(this->fParticles)->set(i, nullptr);
		}
	}
	--this->fContextCount;
	return array;
}

XSDAbstractParticleTraverser$ParticleArray::XSDAbstractParticleTraverser$ParticleArray() {
}

$Class* XSDAbstractParticleTraverser$ParticleArray::load$($String* name, bool initialize) {
	$loadClass(XSDAbstractParticleTraverser$ParticleArray, name, initialize, &_XSDAbstractParticleTraverser$ParticleArray_ClassInfo_, allocate$XSDAbstractParticleTraverser$ParticleArray);
	return class$;
}

$Class* XSDAbstractParticleTraverser$ParticleArray::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com