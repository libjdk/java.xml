#ifndef _com_sun_org_apache_bcel_internal_generic_MONITOREXIT_h_
#define _com_sun_org_apache_bcel_internal_generic_MONITOREXIT_h_
//$ class com.sun.org.apache.bcel.internal.generic.MONITOREXIT
//$ extends com.sun.org.apache.bcel.internal.generic.Instruction
//$ implements com.sun.org.apache.bcel.internal.generic.ExceptionThrower,com.sun.org.apache.bcel.internal.generic.StackConsumer

#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <java/lang/Array.h>

#pragma push_macro("MONITOREXIT")
#undef MONITOREXIT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Visitor;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class MONITOREXIT : public ::com::sun::org::apache::bcel::internal::generic::Instruction, public ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, public ::com::sun::org::apache::bcel::internal::generic::StackConsumer {
	$class(MONITOREXIT, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::Instruction, ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower, ::com::sun::org::apache::bcel::internal::generic::StackConsumer)
public:
	MONITOREXIT();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual int32_t consumeStack(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpg) override;
	virtual bool equals(Object$* that) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(::com::sun::org::apache::bcel::internal::generic::Visitor* v) override;
	virtual $ClassArray* getExceptions() override;
	using ::com::sun::org::apache::bcel::internal::generic::Instruction::toString;
	virtual $String* toString() override;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MONITOREXIT")

#endif // _com_sun_org_apache_bcel_internal_generic_MONITOREXIT_h_