#include <com/sun/org/apache/bcel/internal/generic/EmptyVisitor.h>

#include <com/sun/org/apache/bcel/internal/generic/AALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/AASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ACONST_NULL.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ARETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ARRAYLENGTH.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ATHROW.h>
#include <com/sun/org/apache/bcel/internal/generic/AllocationInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/BALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/BASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BIPUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/BREAKPOINT.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/CASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/D2F.h>
#include <com/sun/org/apache/bcel/internal/generic/D2I.h>
#include <com/sun/org/apache/bcel/internal/generic/D2L.h>
#include <com/sun/org/apache/bcel/internal/generic/DADD.h>
#include <com/sun/org/apache/bcel/internal/generic/DALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/DCMPG.h>
#include <com/sun/org/apache/bcel/internal/generic/DCMPL.h>
#include <com/sun/org/apache/bcel/internal/generic/DCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/DDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/DLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/DMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/DNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/DREM.h>
#include <com/sun/org/apache/bcel/internal/generic/DRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/DSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/DSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2_X1.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP2_X2.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP_X1.h>
#include <com/sun/org/apache/bcel/internal/generic/DUP_X2.h>
#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>
#include <com/sun/org/apache/bcel/internal/generic/F2D.h>
#include <com/sun/org/apache/bcel/internal/generic/F2I.h>
#include <com/sun/org/apache/bcel/internal/generic/F2L.h>
#include <com/sun/org/apache/bcel/internal/generic/FADD.h>
#include <com/sun/org/apache/bcel/internal/generic/FALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/FASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FCMPG.h>
#include <com/sun/org/apache/bcel/internal/generic/FCMPL.h>
#include <com/sun/org/apache/bcel/internal/generic/FCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/FDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/FLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/FMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/FNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/FREM.h>
#include <com/sun/org/apache/bcel/internal/generic/FRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/FSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/FSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/I2B.h>
#include <com/sun/org/apache/bcel/internal/generic/I2C.h>
#include <com/sun/org/apache/bcel/internal/generic/I2D.h>
#include <com/sun/org/apache/bcel/internal/generic/I2F.h>
#include <com/sun/org/apache/bcel/internal/generic/I2L.h>
#include <com/sun/org/apache/bcel/internal/generic/I2S.h>
#include <com/sun/org/apache/bcel/internal/generic/IADD.h>
#include <com/sun/org/apache/bcel/internal/generic/IALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/IAND.h>
#include <com/sun/org/apache/bcel/internal/generic/IASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/generic/IDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ACMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPGT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLE.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IINC.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/IMPDEP1.h>
#include <com/sun/org/apache/bcel/internal/generic/IMPDEP2.h>
#include <com/sun/org/apache/bcel/internal/generic/IMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/INEG.h>
#include <com/sun/org/apache/bcel/internal/generic/INSTANCEOF.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEDYNAMIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IOR.h>
#include <com/sun/org/apache/bcel/internal/generic/IREM.h>
#include <com/sun/org/apache/bcel/internal/generic/IRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ISHL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISHR.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ISUB.h>
#include <com/sun/org/apache/bcel/internal/generic/IUSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/IXOR.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR.h>
#include <com/sun/org/apache/bcel/internal/generic/JSR_W.h>
#include <com/sun/org/apache/bcel/internal/generic/JsrInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/L2D.h>
#include <com/sun/org/apache/bcel/internal/generic/L2F.h>
#include <com/sun/org/apache/bcel/internal/generic/L2I.h>
#include <com/sun/org/apache/bcel/internal/generic/LADD.h>
#include <com/sun/org/apache/bcel/internal/generic/LALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LAND.h>
#include <com/sun/org/apache/bcel/internal/generic/LASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LCMP.h>
#include <com/sun/org/apache/bcel/internal/generic/LCONST.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC.h>
#include <com/sun/org/apache/bcel/internal/generic/LDC2_W.h>
#include <com/sun/org/apache/bcel/internal/generic/LDIV.h>
#include <com/sun/org/apache/bcel/internal/generic/LLOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/LMUL.h>
#include <com/sun/org/apache/bcel/internal/generic/LNEG.h>
#include <com/sun/org/apache/bcel/internal/generic/LOOKUPSWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/LOR.h>
#include <com/sun/org/apache/bcel/internal/generic/LREM.h>
#include <com/sun/org/apache/bcel/internal/generic/LRETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/LSHL.h>
#include <com/sun/org/apache/bcel/internal/generic/LSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/LSTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/LSUB.h>
#include <com/sun/org/apache/bcel/internal/generic/LUSHR.h>
#include <com/sun/org/apache/bcel/internal/generic/LXOR.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadClass.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/MONITORENTER.h>
#include <com/sun/org/apache/bcel/internal/generic/MONITOREXIT.h>
#include <com/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/NEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/NOP.h>
#include <com/sun/org/apache/bcel/internal/generic/POP.h>
#include <com/sun/org/apache/bcel/internal/generic/POP2.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTSTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/PopInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PushInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/RET.h>
#include <com/sun/org/apache/bcel/internal/generic/RETURN.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/SALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/SASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/SIPUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/SWAP.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TABLESWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>
#include <com/sun/org/apache/bcel/internal/generic/VariableLengthInstruction.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AALOAD = ::com::sun::org::apache::bcel::internal::generic::AALOAD;
using $AASTORE = ::com::sun::org::apache::bcel::internal::generic::AASTORE;
using $ACONST_NULL = ::com::sun::org::apache::bcel::internal::generic::ACONST_NULL;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::ANEWARRAY;
using $ARETURN = ::com::sun::org::apache::bcel::internal::generic::ARETURN;
using $ARRAYLENGTH = ::com::sun::org::apache::bcel::internal::generic::ARRAYLENGTH;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $ATHROW = ::com::sun::org::apache::bcel::internal::generic::ATHROW;
using $AllocationInstruction = ::com::sun::org::apache::bcel::internal::generic::AllocationInstruction;
using $ArithmeticInstruction = ::com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction;
using $ArrayInstruction = ::com::sun::org::apache::bcel::internal::generic::ArrayInstruction;
using $BALOAD = ::com::sun::org::apache::bcel::internal::generic::BALOAD;
using $BASTORE = ::com::sun::org::apache::bcel::internal::generic::BASTORE;
using $BIPUSH = ::com::sun::org::apache::bcel::internal::generic::BIPUSH;
using $BREAKPOINT = ::com::sun::org::apache::bcel::internal::generic::BREAKPOINT;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CALOAD = ::com::sun::org::apache::bcel::internal::generic::CALOAD;
using $CASTORE = ::com::sun::org::apache::bcel::internal::generic::CASTORE;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPushInstruction = ::com::sun::org::apache::bcel::internal::generic::ConstantPushInstruction;
using $ConversionInstruction = ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction;
using $D2F = ::com::sun::org::apache::bcel::internal::generic::D2F;
using $D2I = ::com::sun::org::apache::bcel::internal::generic::D2I;
using $D2L = ::com::sun::org::apache::bcel::internal::generic::D2L;
using $DADD = ::com::sun::org::apache::bcel::internal::generic::DADD;
using $DALOAD = ::com::sun::org::apache::bcel::internal::generic::DALOAD;
using $DASTORE = ::com::sun::org::apache::bcel::internal::generic::DASTORE;
using $DCMPG = ::com::sun::org::apache::bcel::internal::generic::DCMPG;
using $DCMPL = ::com::sun::org::apache::bcel::internal::generic::DCMPL;
using $DCONST = ::com::sun::org::apache::bcel::internal::generic::DCONST;
using $DDIV = ::com::sun::org::apache::bcel::internal::generic::DDIV;
using $DLOAD = ::com::sun::org::apache::bcel::internal::generic::DLOAD;
using $DMUL = ::com::sun::org::apache::bcel::internal::generic::DMUL;
using $DNEG = ::com::sun::org::apache::bcel::internal::generic::DNEG;
using $DREM = ::com::sun::org::apache::bcel::internal::generic::DREM;
using $DRETURN = ::com::sun::org::apache::bcel::internal::generic::DRETURN;
using $DSTORE = ::com::sun::org::apache::bcel::internal::generic::DSTORE;
using $DSUB = ::com::sun::org::apache::bcel::internal::generic::DSUB;
using $DUP = ::com::sun::org::apache::bcel::internal::generic::DUP;
using $DUP2 = ::com::sun::org::apache::bcel::internal::generic::DUP2;
using $DUP2_X1 = ::com::sun::org::apache::bcel::internal::generic::DUP2_X1;
using $DUP2_X2 = ::com::sun::org::apache::bcel::internal::generic::DUP2_X2;
using $DUP_X1 = ::com::sun::org::apache::bcel::internal::generic::DUP_X1;
using $DUP_X2 = ::com::sun::org::apache::bcel::internal::generic::DUP_X2;
using $ExceptionThrower = ::com::sun::org::apache::bcel::internal::generic::ExceptionThrower;
using $F2D = ::com::sun::org::apache::bcel::internal::generic::F2D;
using $F2I = ::com::sun::org::apache::bcel::internal::generic::F2I;
using $F2L = ::com::sun::org::apache::bcel::internal::generic::F2L;
using $FADD = ::com::sun::org::apache::bcel::internal::generic::FADD;
using $FALOAD = ::com::sun::org::apache::bcel::internal::generic::FALOAD;
using $FASTORE = ::com::sun::org::apache::bcel::internal::generic::FASTORE;
using $FCMPG = ::com::sun::org::apache::bcel::internal::generic::FCMPG;
using $FCMPL = ::com::sun::org::apache::bcel::internal::generic::FCMPL;
using $FCONST = ::com::sun::org::apache::bcel::internal::generic::FCONST;
using $FDIV = ::com::sun::org::apache::bcel::internal::generic::FDIV;
using $FLOAD = ::com::sun::org::apache::bcel::internal::generic::FLOAD;
using $FMUL = ::com::sun::org::apache::bcel::internal::generic::FMUL;
using $FNEG = ::com::sun::org::apache::bcel::internal::generic::FNEG;
using $FREM = ::com::sun::org::apache::bcel::internal::generic::FREM;
using $FRETURN = ::com::sun::org::apache::bcel::internal::generic::FRETURN;
using $FSTORE = ::com::sun::org::apache::bcel::internal::generic::FSTORE;
using $FSUB = ::com::sun::org::apache::bcel::internal::generic::FSUB;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GETSTATIC = ::com::sun::org::apache::bcel::internal::generic::GETSTATIC;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GOTO_W = ::com::sun::org::apache::bcel::internal::generic::GOTO_W;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $I2B = ::com::sun::org::apache::bcel::internal::generic::I2B;
using $I2C = ::com::sun::org::apache::bcel::internal::generic::I2C;
using $I2D = ::com::sun::org::apache::bcel::internal::generic::I2D;
using $I2F = ::com::sun::org::apache::bcel::internal::generic::I2F;
using $I2L = ::com::sun::org::apache::bcel::internal::generic::I2L;
using $I2S = ::com::sun::org::apache::bcel::internal::generic::I2S;
using $IADD = ::com::sun::org::apache::bcel::internal::generic::IADD;
using $IALOAD = ::com::sun::org::apache::bcel::internal::generic::IALOAD;
using $IAND = ::com::sun::org::apache::bcel::internal::generic::IAND;
using $IASTORE = ::com::sun::org::apache::bcel::internal::generic::IASTORE;
using $ICONST = ::com::sun::org::apache::bcel::internal::generic::ICONST;
using $IDIV = ::com::sun::org::apache::bcel::internal::generic::IDIV;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFGE = ::com::sun::org::apache::bcel::internal::generic::IFGE;
using $IFGT = ::com::sun::org::apache::bcel::internal::generic::IFGT;
using $IFLE = ::com::sun::org::apache::bcel::internal::generic::IFLE;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $IFNE = ::com::sun::org::apache::bcel::internal::generic::IFNE;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
using $IFNULL = ::com::sun::org::apache::bcel::internal::generic::IFNULL;
using $IF_ACMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ACMPEQ;
using $IF_ACMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ACMPNE;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
using $IF_ICMPGE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGE;
using $IF_ICMPGT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPGT;
using $IF_ICMPLE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLE;
using $IF_ICMPLT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLT;
using $IF_ICMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE;
using $IINC = ::com::sun::org::apache::bcel::internal::generic::IINC;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $IMPDEP1 = ::com::sun::org::apache::bcel::internal::generic::IMPDEP1;
using $IMPDEP2 = ::com::sun::org::apache::bcel::internal::generic::IMPDEP2;
using $IMUL = ::com::sun::org::apache::bcel::internal::generic::IMUL;
using $INEG = ::com::sun::org::apache::bcel::internal::generic::INEG;
using $INSTANCEOF = ::com::sun::org::apache::bcel::internal::generic::INSTANCEOF;
using $INVOKEDYNAMIC = ::com::sun::org::apache::bcel::internal::generic::INVOKEDYNAMIC;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IOR = ::com::sun::org::apache::bcel::internal::generic::IOR;
using $IREM = ::com::sun::org::apache::bcel::internal::generic::IREM;
using $IRETURN = ::com::sun::org::apache::bcel::internal::generic::IRETURN;
using $ISHL = ::com::sun::org::apache::bcel::internal::generic::ISHL;
using $ISHR = ::com::sun::org::apache::bcel::internal::generic::ISHR;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $ISUB = ::com::sun::org::apache::bcel::internal::generic::ISUB;
using $IUSHR = ::com::sun::org::apache::bcel::internal::generic::IUSHR;
using $IXOR = ::com::sun::org::apache::bcel::internal::generic::IXOR;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $JSR = ::com::sun::org::apache::bcel::internal::generic::JSR;
using $JSR_W = ::com::sun::org::apache::bcel::internal::generic::JSR_W;
using $JsrInstruction = ::com::sun::org::apache::bcel::internal::generic::JsrInstruction;
using $L2D = ::com::sun::org::apache::bcel::internal::generic::L2D;
using $L2F = ::com::sun::org::apache::bcel::internal::generic::L2F;
using $L2I = ::com::sun::org::apache::bcel::internal::generic::L2I;
using $LADD = ::com::sun::org::apache::bcel::internal::generic::LADD;
using $LALOAD = ::com::sun::org::apache::bcel::internal::generic::LALOAD;
using $LAND = ::com::sun::org::apache::bcel::internal::generic::LAND;
using $LASTORE = ::com::sun::org::apache::bcel::internal::generic::LASTORE;
using $LCMP = ::com::sun::org::apache::bcel::internal::generic::LCMP;
using $LCONST = ::com::sun::org::apache::bcel::internal::generic::LCONST;
using $LDC = ::com::sun::org::apache::bcel::internal::generic::LDC;
using $LDC2_W = ::com::sun::org::apache::bcel::internal::generic::LDC2_W;
using $LDIV = ::com::sun::org::apache::bcel::internal::generic::LDIV;
using $LLOAD = ::com::sun::org::apache::bcel::internal::generic::LLOAD;
using $LMUL = ::com::sun::org::apache::bcel::internal::generic::LMUL;
using $LNEG = ::com::sun::org::apache::bcel::internal::generic::LNEG;
using $LOOKUPSWITCH = ::com::sun::org::apache::bcel::internal::generic::LOOKUPSWITCH;
using $LOR = ::com::sun::org::apache::bcel::internal::generic::LOR;
using $LREM = ::com::sun::org::apache::bcel::internal::generic::LREM;
using $LRETURN = ::com::sun::org::apache::bcel::internal::generic::LRETURN;
using $LSHL = ::com::sun::org::apache::bcel::internal::generic::LSHL;
using $LSHR = ::com::sun::org::apache::bcel::internal::generic::LSHR;
using $LSTORE = ::com::sun::org::apache::bcel::internal::generic::LSTORE;
using $LSUB = ::com::sun::org::apache::bcel::internal::generic::LSUB;
using $LUSHR = ::com::sun::org::apache::bcel::internal::generic::LUSHR;
using $LXOR = ::com::sun::org::apache::bcel::internal::generic::LXOR;
using $LoadClass = ::com::sun::org::apache::bcel::internal::generic::LoadClass;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $MONITORENTER = ::com::sun::org::apache::bcel::internal::generic::MONITORENTER;
using $MONITOREXIT = ::com::sun::org::apache::bcel::internal::generic::MONITOREXIT;
using $MULTIANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::MULTIANEWARRAY;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $NEWARRAY = ::com::sun::org::apache::bcel::internal::generic::NEWARRAY;
using $NOP = ::com::sun::org::apache::bcel::internal::generic::NOP;
using $POP = ::com::sun::org::apache::bcel::internal::generic::POP;
using $POP2 = ::com::sun::org::apache::bcel::internal::generic::POP2;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $PUTSTATIC = ::com::sun::org::apache::bcel::internal::generic::PUTSTATIC;
using $PopInstruction = ::com::sun::org::apache::bcel::internal::generic::PopInstruction;
using $PushInstruction = ::com::sun::org::apache::bcel::internal::generic::PushInstruction;
using $RET = ::com::sun::org::apache::bcel::internal::generic::RET;
using $RETURN = ::com::sun::org::apache::bcel::internal::generic::RETURN;
using $ReturnInstruction = ::com::sun::org::apache::bcel::internal::generic::ReturnInstruction;
using $SALOAD = ::com::sun::org::apache::bcel::internal::generic::SALOAD;
using $SASTORE = ::com::sun::org::apache::bcel::internal::generic::SASTORE;
using $SIPUSH = ::com::sun::org::apache::bcel::internal::generic::SIPUSH;
using $SWAP = ::com::sun::org::apache::bcel::internal::generic::SWAP;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $TABLESWITCH = ::com::sun::org::apache::bcel::internal::generic::TABLESWITCH;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
using $UnconditionalBranch = ::com::sun::org::apache::bcel::internal::generic::UnconditionalBranch;
using $VariableLengthInstruction = ::com::sun::org::apache::bcel::internal::generic::VariableLengthInstruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _EmptyVisitor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EmptyVisitor::*)()>(&EmptyVisitor::init$))},
	{"visitAALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/AALOAD;)V", nullptr, $PUBLIC},
	{"visitAASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/AASTORE;)V", nullptr, $PUBLIC},
	{"visitACONST_NULL", "(Lcom/sun/org/apache/bcel/internal/generic/ACONST_NULL;)V", nullptr, $PUBLIC},
	{"visitALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/ALOAD;)V", nullptr, $PUBLIC},
	{"visitANEWARRAY", "(Lcom/sun/org/apache/bcel/internal/generic/ANEWARRAY;)V", nullptr, $PUBLIC},
	{"visitARETURN", "(Lcom/sun/org/apache/bcel/internal/generic/ARETURN;)V", nullptr, $PUBLIC},
	{"visitARRAYLENGTH", "(Lcom/sun/org/apache/bcel/internal/generic/ARRAYLENGTH;)V", nullptr, $PUBLIC},
	{"visitASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/ASTORE;)V", nullptr, $PUBLIC},
	{"visitATHROW", "(Lcom/sun/org/apache/bcel/internal/generic/ATHROW;)V", nullptr, $PUBLIC},
	{"visitAllocationInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/AllocationInstruction;)V", nullptr, $PUBLIC},
	{"visitArithmeticInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ArithmeticInstruction;)V", nullptr, $PUBLIC},
	{"visitArrayInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ArrayInstruction;)V", nullptr, $PUBLIC},
	{"visitBALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/BALOAD;)V", nullptr, $PUBLIC},
	{"visitBASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/BASTORE;)V", nullptr, $PUBLIC},
	{"visitBIPUSH", "(Lcom/sun/org/apache/bcel/internal/generic/BIPUSH;)V", nullptr, $PUBLIC},
	{"visitBREAKPOINT", "(Lcom/sun/org/apache/bcel/internal/generic/BREAKPOINT;)V", nullptr, $PUBLIC},
	{"visitBranchInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/BranchInstruction;)V", nullptr, $PUBLIC},
	{"visitCALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/CALOAD;)V", nullptr, $PUBLIC},
	{"visitCASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/CASTORE;)V", nullptr, $PUBLIC},
	{"visitCHECKCAST", "(Lcom/sun/org/apache/bcel/internal/generic/CHECKCAST;)V", nullptr, $PUBLIC},
	{"visitCPInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/CPInstruction;)V", nullptr, $PUBLIC},
	{"visitConstantPushInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPushInstruction;)V", nullptr, $PUBLIC},
	{"visitConversionInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ConversionInstruction;)V", nullptr, $PUBLIC},
	{"visitD2F", "(Lcom/sun/org/apache/bcel/internal/generic/D2F;)V", nullptr, $PUBLIC},
	{"visitD2I", "(Lcom/sun/org/apache/bcel/internal/generic/D2I;)V", nullptr, $PUBLIC},
	{"visitD2L", "(Lcom/sun/org/apache/bcel/internal/generic/D2L;)V", nullptr, $PUBLIC},
	{"visitDADD", "(Lcom/sun/org/apache/bcel/internal/generic/DADD;)V", nullptr, $PUBLIC},
	{"visitDALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/DALOAD;)V", nullptr, $PUBLIC},
	{"visitDASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/DASTORE;)V", nullptr, $PUBLIC},
	{"visitDCMPG", "(Lcom/sun/org/apache/bcel/internal/generic/DCMPG;)V", nullptr, $PUBLIC},
	{"visitDCMPL", "(Lcom/sun/org/apache/bcel/internal/generic/DCMPL;)V", nullptr, $PUBLIC},
	{"visitDCONST", "(Lcom/sun/org/apache/bcel/internal/generic/DCONST;)V", nullptr, $PUBLIC},
	{"visitDDIV", "(Lcom/sun/org/apache/bcel/internal/generic/DDIV;)V", nullptr, $PUBLIC},
	{"visitDLOAD", "(Lcom/sun/org/apache/bcel/internal/generic/DLOAD;)V", nullptr, $PUBLIC},
	{"visitDMUL", "(Lcom/sun/org/apache/bcel/internal/generic/DMUL;)V", nullptr, $PUBLIC},
	{"visitDNEG", "(Lcom/sun/org/apache/bcel/internal/generic/DNEG;)V", nullptr, $PUBLIC},
	{"visitDREM", "(Lcom/sun/org/apache/bcel/internal/generic/DREM;)V", nullptr, $PUBLIC},
	{"visitDRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/DRETURN;)V", nullptr, $PUBLIC},
	{"visitDSTORE", "(Lcom/sun/org/apache/bcel/internal/generic/DSTORE;)V", nullptr, $PUBLIC},
	{"visitDSUB", "(Lcom/sun/org/apache/bcel/internal/generic/DSUB;)V", nullptr, $PUBLIC},
	{"visitDUP", "(Lcom/sun/org/apache/bcel/internal/generic/DUP;)V", nullptr, $PUBLIC},
	{"visitDUP2", "(Lcom/sun/org/apache/bcel/internal/generic/DUP2;)V", nullptr, $PUBLIC},
	{"visitDUP2_X1", "(Lcom/sun/org/apache/bcel/internal/generic/DUP2_X1;)V", nullptr, $PUBLIC},
	{"visitDUP2_X2", "(Lcom/sun/org/apache/bcel/internal/generic/DUP2_X2;)V", nullptr, $PUBLIC},
	{"visitDUP_X1", "(Lcom/sun/org/apache/bcel/internal/generic/DUP_X1;)V", nullptr, $PUBLIC},
	{"visitDUP_X2", "(Lcom/sun/org/apache/bcel/internal/generic/DUP_X2;)V", nullptr, $PUBLIC},
	{"visitExceptionThrower", "(Lcom/sun/org/apache/bcel/internal/generic/ExceptionThrower;)V", nullptr, $PUBLIC},
	{"visitF2D", "(Lcom/sun/org/apache/bcel/internal/generic/F2D;)V", nullptr, $PUBLIC},
	{"visitF2I", "(Lcom/sun/org/apache/bcel/internal/generic/F2I;)V", nullptr, $PUBLIC},
	{"visitF2L", "(Lcom/sun/org/apache/bcel/internal/generic/F2L;)V", nullptr, $PUBLIC},
	{"visitFADD", "(Lcom/sun/org/apache/bcel/internal/generic/FADD;)V", nullptr, $PUBLIC},
	{"visitFALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/FALOAD;)V", nullptr, $PUBLIC},
	{"visitFASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/FASTORE;)V", nullptr, $PUBLIC},
	{"visitFCMPG", "(Lcom/sun/org/apache/bcel/internal/generic/FCMPG;)V", nullptr, $PUBLIC},
	{"visitFCMPL", "(Lcom/sun/org/apache/bcel/internal/generic/FCMPL;)V", nullptr, $PUBLIC},
	{"visitFCONST", "(Lcom/sun/org/apache/bcel/internal/generic/FCONST;)V", nullptr, $PUBLIC},
	{"visitFDIV", "(Lcom/sun/org/apache/bcel/internal/generic/FDIV;)V", nullptr, $PUBLIC},
	{"visitFLOAD", "(Lcom/sun/org/apache/bcel/internal/generic/FLOAD;)V", nullptr, $PUBLIC},
	{"visitFMUL", "(Lcom/sun/org/apache/bcel/internal/generic/FMUL;)V", nullptr, $PUBLIC},
	{"visitFNEG", "(Lcom/sun/org/apache/bcel/internal/generic/FNEG;)V", nullptr, $PUBLIC},
	{"visitFREM", "(Lcom/sun/org/apache/bcel/internal/generic/FREM;)V", nullptr, $PUBLIC},
	{"visitFRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/FRETURN;)V", nullptr, $PUBLIC},
	{"visitFSTORE", "(Lcom/sun/org/apache/bcel/internal/generic/FSTORE;)V", nullptr, $PUBLIC},
	{"visitFSUB", "(Lcom/sun/org/apache/bcel/internal/generic/FSUB;)V", nullptr, $PUBLIC},
	{"visitFieldInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/FieldInstruction;)V", nullptr, $PUBLIC},
	{"visitFieldOrMethod", "(Lcom/sun/org/apache/bcel/internal/generic/FieldOrMethod;)V", nullptr, $PUBLIC},
	{"visitGETFIELD", "(Lcom/sun/org/apache/bcel/internal/generic/GETFIELD;)V", nullptr, $PUBLIC},
	{"visitGETSTATIC", "(Lcom/sun/org/apache/bcel/internal/generic/GETSTATIC;)V", nullptr, $PUBLIC},
	{"visitGOTO", "(Lcom/sun/org/apache/bcel/internal/generic/GOTO;)V", nullptr, $PUBLIC},
	{"visitGOTO_W", "(Lcom/sun/org/apache/bcel/internal/generic/GOTO_W;)V", nullptr, $PUBLIC},
	{"visitGotoInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/GotoInstruction;)V", nullptr, $PUBLIC},
	{"visitI2B", "(Lcom/sun/org/apache/bcel/internal/generic/I2B;)V", nullptr, $PUBLIC},
	{"visitI2C", "(Lcom/sun/org/apache/bcel/internal/generic/I2C;)V", nullptr, $PUBLIC},
	{"visitI2D", "(Lcom/sun/org/apache/bcel/internal/generic/I2D;)V", nullptr, $PUBLIC},
	{"visitI2F", "(Lcom/sun/org/apache/bcel/internal/generic/I2F;)V", nullptr, $PUBLIC},
	{"visitI2L", "(Lcom/sun/org/apache/bcel/internal/generic/I2L;)V", nullptr, $PUBLIC},
	{"visitI2S", "(Lcom/sun/org/apache/bcel/internal/generic/I2S;)V", nullptr, $PUBLIC},
	{"visitIADD", "(Lcom/sun/org/apache/bcel/internal/generic/IADD;)V", nullptr, $PUBLIC},
	{"visitIALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/IALOAD;)V", nullptr, $PUBLIC},
	{"visitIAND", "(Lcom/sun/org/apache/bcel/internal/generic/IAND;)V", nullptr, $PUBLIC},
	{"visitIASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/IASTORE;)V", nullptr, $PUBLIC},
	{"visitICONST", "(Lcom/sun/org/apache/bcel/internal/generic/ICONST;)V", nullptr, $PUBLIC},
	{"visitIDIV", "(Lcom/sun/org/apache/bcel/internal/generic/IDIV;)V", nullptr, $PUBLIC},
	{"visitIFEQ", "(Lcom/sun/org/apache/bcel/internal/generic/IFEQ;)V", nullptr, $PUBLIC},
	{"visitIFGE", "(Lcom/sun/org/apache/bcel/internal/generic/IFGE;)V", nullptr, $PUBLIC},
	{"visitIFGT", "(Lcom/sun/org/apache/bcel/internal/generic/IFGT;)V", nullptr, $PUBLIC},
	{"visitIFLE", "(Lcom/sun/org/apache/bcel/internal/generic/IFLE;)V", nullptr, $PUBLIC},
	{"visitIFLT", "(Lcom/sun/org/apache/bcel/internal/generic/IFLT;)V", nullptr, $PUBLIC},
	{"visitIFNE", "(Lcom/sun/org/apache/bcel/internal/generic/IFNE;)V", nullptr, $PUBLIC},
	{"visitIFNONNULL", "(Lcom/sun/org/apache/bcel/internal/generic/IFNONNULL;)V", nullptr, $PUBLIC},
	{"visitIFNULL", "(Lcom/sun/org/apache/bcel/internal/generic/IFNULL;)V", nullptr, $PUBLIC},
	{"visitIF_ACMPEQ", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ACMPEQ;)V", nullptr, $PUBLIC},
	{"visitIF_ACMPNE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ACMPNE;)V", nullptr, $PUBLIC},
	{"visitIF_ICMPEQ", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPEQ;)V", nullptr, $PUBLIC},
	{"visitIF_ICMPGE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPGE;)V", nullptr, $PUBLIC},
	{"visitIF_ICMPGT", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPGT;)V", nullptr, $PUBLIC},
	{"visitIF_ICMPLE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPLE;)V", nullptr, $PUBLIC},
	{"visitIF_ICMPLT", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPLT;)V", nullptr, $PUBLIC},
	{"visitIF_ICMPNE", "(Lcom/sun/org/apache/bcel/internal/generic/IF_ICMPNE;)V", nullptr, $PUBLIC},
	{"visitIINC", "(Lcom/sun/org/apache/bcel/internal/generic/IINC;)V", nullptr, $PUBLIC},
	{"visitILOAD", "(Lcom/sun/org/apache/bcel/internal/generic/ILOAD;)V", nullptr, $PUBLIC},
	{"visitIMPDEP1", "(Lcom/sun/org/apache/bcel/internal/generic/IMPDEP1;)V", nullptr, $PUBLIC},
	{"visitIMPDEP2", "(Lcom/sun/org/apache/bcel/internal/generic/IMPDEP2;)V", nullptr, $PUBLIC},
	{"visitIMUL", "(Lcom/sun/org/apache/bcel/internal/generic/IMUL;)V", nullptr, $PUBLIC},
	{"visitINEG", "(Lcom/sun/org/apache/bcel/internal/generic/INEG;)V", nullptr, $PUBLIC},
	{"visitINSTANCEOF", "(Lcom/sun/org/apache/bcel/internal/generic/INSTANCEOF;)V", nullptr, $PUBLIC},
	{"visitINVOKEDYNAMIC", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKEDYNAMIC;)V", nullptr, $PUBLIC},
	{"visitINVOKEINTERFACE", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE;)V", nullptr, $PUBLIC},
	{"visitINVOKESPECIAL", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKESPECIAL;)V", nullptr, $PUBLIC},
	{"visitINVOKESTATIC", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKESTATIC;)V", nullptr, $PUBLIC},
	{"visitINVOKEVIRTUAL", "(Lcom/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL;)V", nullptr, $PUBLIC},
	{"visitIOR", "(Lcom/sun/org/apache/bcel/internal/generic/IOR;)V", nullptr, $PUBLIC},
	{"visitIREM", "(Lcom/sun/org/apache/bcel/internal/generic/IREM;)V", nullptr, $PUBLIC},
	{"visitIRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/IRETURN;)V", nullptr, $PUBLIC},
	{"visitISHL", "(Lcom/sun/org/apache/bcel/internal/generic/ISHL;)V", nullptr, $PUBLIC},
	{"visitISHR", "(Lcom/sun/org/apache/bcel/internal/generic/ISHR;)V", nullptr, $PUBLIC},
	{"visitISTORE", "(Lcom/sun/org/apache/bcel/internal/generic/ISTORE;)V", nullptr, $PUBLIC},
	{"visitISUB", "(Lcom/sun/org/apache/bcel/internal/generic/ISUB;)V", nullptr, $PUBLIC},
	{"visitIUSHR", "(Lcom/sun/org/apache/bcel/internal/generic/IUSHR;)V", nullptr, $PUBLIC},
	{"visitIXOR", "(Lcom/sun/org/apache/bcel/internal/generic/IXOR;)V", nullptr, $PUBLIC},
	{"visitIfInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/IfInstruction;)V", nullptr, $PUBLIC},
	{"visitInvokeInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/InvokeInstruction;)V", nullptr, $PUBLIC},
	{"visitJSR", "(Lcom/sun/org/apache/bcel/internal/generic/JSR;)V", nullptr, $PUBLIC},
	{"visitJSR_W", "(Lcom/sun/org/apache/bcel/internal/generic/JSR_W;)V", nullptr, $PUBLIC},
	{"visitJsrInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/JsrInstruction;)V", nullptr, $PUBLIC},
	{"visitL2D", "(Lcom/sun/org/apache/bcel/internal/generic/L2D;)V", nullptr, $PUBLIC},
	{"visitL2F", "(Lcom/sun/org/apache/bcel/internal/generic/L2F;)V", nullptr, $PUBLIC},
	{"visitL2I", "(Lcom/sun/org/apache/bcel/internal/generic/L2I;)V", nullptr, $PUBLIC},
	{"visitLADD", "(Lcom/sun/org/apache/bcel/internal/generic/LADD;)V", nullptr, $PUBLIC},
	{"visitLALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/LALOAD;)V", nullptr, $PUBLIC},
	{"visitLAND", "(Lcom/sun/org/apache/bcel/internal/generic/LAND;)V", nullptr, $PUBLIC},
	{"visitLASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/LASTORE;)V", nullptr, $PUBLIC},
	{"visitLCMP", "(Lcom/sun/org/apache/bcel/internal/generic/LCMP;)V", nullptr, $PUBLIC},
	{"visitLCONST", "(Lcom/sun/org/apache/bcel/internal/generic/LCONST;)V", nullptr, $PUBLIC},
	{"visitLDC", "(Lcom/sun/org/apache/bcel/internal/generic/LDC;)V", nullptr, $PUBLIC},
	{"visitLDC2_W", "(Lcom/sun/org/apache/bcel/internal/generic/LDC2_W;)V", nullptr, $PUBLIC},
	{"visitLDIV", "(Lcom/sun/org/apache/bcel/internal/generic/LDIV;)V", nullptr, $PUBLIC},
	{"visitLLOAD", "(Lcom/sun/org/apache/bcel/internal/generic/LLOAD;)V", nullptr, $PUBLIC},
	{"visitLMUL", "(Lcom/sun/org/apache/bcel/internal/generic/LMUL;)V", nullptr, $PUBLIC},
	{"visitLNEG", "(Lcom/sun/org/apache/bcel/internal/generic/LNEG;)V", nullptr, $PUBLIC},
	{"visitLOOKUPSWITCH", "(Lcom/sun/org/apache/bcel/internal/generic/LOOKUPSWITCH;)V", nullptr, $PUBLIC},
	{"visitLOR", "(Lcom/sun/org/apache/bcel/internal/generic/LOR;)V", nullptr, $PUBLIC},
	{"visitLREM", "(Lcom/sun/org/apache/bcel/internal/generic/LREM;)V", nullptr, $PUBLIC},
	{"visitLRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/LRETURN;)V", nullptr, $PUBLIC},
	{"visitLSHL", "(Lcom/sun/org/apache/bcel/internal/generic/LSHL;)V", nullptr, $PUBLIC},
	{"visitLSHR", "(Lcom/sun/org/apache/bcel/internal/generic/LSHR;)V", nullptr, $PUBLIC},
	{"visitLSTORE", "(Lcom/sun/org/apache/bcel/internal/generic/LSTORE;)V", nullptr, $PUBLIC},
	{"visitLSUB", "(Lcom/sun/org/apache/bcel/internal/generic/LSUB;)V", nullptr, $PUBLIC},
	{"visitLUSHR", "(Lcom/sun/org/apache/bcel/internal/generic/LUSHR;)V", nullptr, $PUBLIC},
	{"visitLXOR", "(Lcom/sun/org/apache/bcel/internal/generic/LXOR;)V", nullptr, $PUBLIC},
	{"visitLoadClass", "(Lcom/sun/org/apache/bcel/internal/generic/LoadClass;)V", nullptr, $PUBLIC},
	{"visitLoadInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/LoadInstruction;)V", nullptr, $PUBLIC},
	{"visitLocalVariableInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableInstruction;)V", nullptr, $PUBLIC},
	{"visitMONITORENTER", "(Lcom/sun/org/apache/bcel/internal/generic/MONITORENTER;)V", nullptr, $PUBLIC},
	{"visitMONITOREXIT", "(Lcom/sun/org/apache/bcel/internal/generic/MONITOREXIT;)V", nullptr, $PUBLIC},
	{"visitMULTIANEWARRAY", "(Lcom/sun/org/apache/bcel/internal/generic/MULTIANEWARRAY;)V", nullptr, $PUBLIC},
	{"visitNEW", "(Lcom/sun/org/apache/bcel/internal/generic/NEW;)V", nullptr, $PUBLIC},
	{"visitNEWARRAY", "(Lcom/sun/org/apache/bcel/internal/generic/NEWARRAY;)V", nullptr, $PUBLIC},
	{"visitNOP", "(Lcom/sun/org/apache/bcel/internal/generic/NOP;)V", nullptr, $PUBLIC},
	{"visitPOP", "(Lcom/sun/org/apache/bcel/internal/generic/POP;)V", nullptr, $PUBLIC},
	{"visitPOP2", "(Lcom/sun/org/apache/bcel/internal/generic/POP2;)V", nullptr, $PUBLIC},
	{"visitPUTFIELD", "(Lcom/sun/org/apache/bcel/internal/generic/PUTFIELD;)V", nullptr, $PUBLIC},
	{"visitPUTSTATIC", "(Lcom/sun/org/apache/bcel/internal/generic/PUTSTATIC;)V", nullptr, $PUBLIC},
	{"visitPopInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/PopInstruction;)V", nullptr, $PUBLIC},
	{"visitPushInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/PushInstruction;)V", nullptr, $PUBLIC},
	{"visitRET", "(Lcom/sun/org/apache/bcel/internal/generic/RET;)V", nullptr, $PUBLIC},
	{"visitRETURN", "(Lcom/sun/org/apache/bcel/internal/generic/RETURN;)V", nullptr, $PUBLIC},
	{"visitReturnInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/ReturnInstruction;)V", nullptr, $PUBLIC},
	{"visitSALOAD", "(Lcom/sun/org/apache/bcel/internal/generic/SALOAD;)V", nullptr, $PUBLIC},
	{"visitSASTORE", "(Lcom/sun/org/apache/bcel/internal/generic/SASTORE;)V", nullptr, $PUBLIC},
	{"visitSIPUSH", "(Lcom/sun/org/apache/bcel/internal/generic/SIPUSH;)V", nullptr, $PUBLIC},
	{"visitSWAP", "(Lcom/sun/org/apache/bcel/internal/generic/SWAP;)V", nullptr, $PUBLIC},
	{"visitSelect", "(Lcom/sun/org/apache/bcel/internal/generic/Select;)V", nullptr, $PUBLIC},
	{"visitStackConsumer", "(Lcom/sun/org/apache/bcel/internal/generic/StackConsumer;)V", nullptr, $PUBLIC},
	{"visitStackInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/StackInstruction;)V", nullptr, $PUBLIC},
	{"visitStackProducer", "(Lcom/sun/org/apache/bcel/internal/generic/StackProducer;)V", nullptr, $PUBLIC},
	{"visitStoreInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/StoreInstruction;)V", nullptr, $PUBLIC},
	{"visitTABLESWITCH", "(Lcom/sun/org/apache/bcel/internal/generic/TABLESWITCH;)V", nullptr, $PUBLIC},
	{"visitTypedInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/TypedInstruction;)V", nullptr, $PUBLIC},
	{"visitUnconditionalBranch", "(Lcom/sun/org/apache/bcel/internal/generic/UnconditionalBranch;)V", nullptr, $PUBLIC},
	{"visitVariableLengthInstruction", "(Lcom/sun/org/apache/bcel/internal/generic/VariableLengthInstruction;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EmptyVisitor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.EmptyVisitor",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.generic.Visitor",
	nullptr,
	_EmptyVisitor_MethodInfo_
};

$Object* allocate$EmptyVisitor($Class* clazz) {
	return $of($alloc(EmptyVisitor));
}

void EmptyVisitor::init$() {
}

void EmptyVisitor::visitStackInstruction($StackInstruction* obj) {
}

void EmptyVisitor::visitLocalVariableInstruction($LocalVariableInstruction* obj) {
}

void EmptyVisitor::visitBranchInstruction($BranchInstruction* obj) {
}

void EmptyVisitor::visitLoadClass($LoadClass* obj) {
}

void EmptyVisitor::visitFieldInstruction($FieldInstruction* obj) {
}

void EmptyVisitor::visitIfInstruction($IfInstruction* obj) {
}

void EmptyVisitor::visitConversionInstruction($ConversionInstruction* obj) {
}

void EmptyVisitor::visitPopInstruction($PopInstruction* obj) {
}

void EmptyVisitor::visitJsrInstruction($JsrInstruction* obj) {
}

void EmptyVisitor::visitGotoInstruction($GotoInstruction* obj) {
}

void EmptyVisitor::visitStoreInstruction($StoreInstruction* obj) {
}

void EmptyVisitor::visitTypedInstruction($TypedInstruction* obj) {
}

void EmptyVisitor::visitSelect($Select* obj) {
}

void EmptyVisitor::visitUnconditionalBranch($UnconditionalBranch* obj) {
}

void EmptyVisitor::visitPushInstruction($PushInstruction* obj) {
}

void EmptyVisitor::visitArithmeticInstruction($ArithmeticInstruction* obj) {
}

void EmptyVisitor::visitCPInstruction($CPInstruction* obj) {
}

void EmptyVisitor::visitInvokeInstruction($InvokeInstruction* obj) {
}

void EmptyVisitor::visitArrayInstruction($ArrayInstruction* obj) {
}

void EmptyVisitor::visitAllocationInstruction($AllocationInstruction* obj) {
}

void EmptyVisitor::visitReturnInstruction($ReturnInstruction* obj) {
}

void EmptyVisitor::visitFieldOrMethod($FieldOrMethod* obj) {
}

void EmptyVisitor::visitConstantPushInstruction($ConstantPushInstruction* obj) {
}

void EmptyVisitor::visitExceptionThrower($ExceptionThrower* obj) {
}

void EmptyVisitor::visitLoadInstruction($LoadInstruction* obj) {
}

void EmptyVisitor::visitVariableLengthInstruction($VariableLengthInstruction* obj) {
}

void EmptyVisitor::visitStackProducer($StackProducer* obj) {
}

void EmptyVisitor::visitStackConsumer($StackConsumer* obj) {
}

void EmptyVisitor::visitACONST_NULL($ACONST_NULL* obj) {
}

void EmptyVisitor::visitGETSTATIC($GETSTATIC* obj) {
}

void EmptyVisitor::visitIF_ICMPLT($IF_ICMPLT* obj) {
}

void EmptyVisitor::visitMONITOREXIT($MONITOREXIT* obj) {
}

void EmptyVisitor::visitIFLT($IFLT* obj) {
}

void EmptyVisitor::visitLSTORE($LSTORE* obj) {
}

void EmptyVisitor::visitPOP2($POP2* obj) {
}

void EmptyVisitor::visitBASTORE($BASTORE* obj) {
}

void EmptyVisitor::visitISTORE($ISTORE* obj) {
}

void EmptyVisitor::visitCHECKCAST($CHECKCAST* obj) {
}

void EmptyVisitor::visitFCMPG($FCMPG* obj) {
}

void EmptyVisitor::visitI2F($I2F* obj) {
}

void EmptyVisitor::visitATHROW($ATHROW* obj) {
}

void EmptyVisitor::visitDCMPL($DCMPL* obj) {
}

void EmptyVisitor::visitARRAYLENGTH($ARRAYLENGTH* obj) {
}

void EmptyVisitor::visitDUP($DUP* obj) {
}

void EmptyVisitor::visitINVOKESTATIC($INVOKESTATIC* obj) {
}

void EmptyVisitor::visitLCONST($LCONST* obj) {
}

void EmptyVisitor::visitDREM($DREM* obj) {
}

void EmptyVisitor::visitIFGE($IFGE* obj) {
}

void EmptyVisitor::visitCALOAD($CALOAD* obj) {
}

void EmptyVisitor::visitLASTORE($LASTORE* obj) {
}

void EmptyVisitor::visitI2D($I2D* obj) {
}

void EmptyVisitor::visitDADD($DADD* obj) {
}

void EmptyVisitor::visitINVOKESPECIAL($INVOKESPECIAL* obj) {
}

void EmptyVisitor::visitIAND($IAND* obj) {
}

void EmptyVisitor::visitPUTFIELD($PUTFIELD* obj) {
}

void EmptyVisitor::visitILOAD($ILOAD* obj) {
}

void EmptyVisitor::visitDLOAD($DLOAD* obj) {
}

void EmptyVisitor::visitDCONST($DCONST* obj) {
}

void EmptyVisitor::visitNEW($NEW* obj) {
}

void EmptyVisitor::visitIFNULL($IFNULL* obj) {
}

void EmptyVisitor::visitLSUB($LSUB* obj) {
}

void EmptyVisitor::visitL2I($L2I* obj) {
}

void EmptyVisitor::visitISHR($ISHR* obj) {
}

void EmptyVisitor::visitTABLESWITCH($TABLESWITCH* obj) {
}

void EmptyVisitor::visitIINC($IINC* obj) {
}

void EmptyVisitor::visitDRETURN($DRETURN* obj) {
}

void EmptyVisitor::visitFSTORE($FSTORE* obj) {
}

void EmptyVisitor::visitDASTORE($DASTORE* obj) {
}

void EmptyVisitor::visitIALOAD($IALOAD* obj) {
}

void EmptyVisitor::visitDDIV($DDIV* obj) {
}

void EmptyVisitor::visitIF_ICMPGE($IF_ICMPGE* obj) {
}

void EmptyVisitor::visitLAND($LAND* obj) {
}

void EmptyVisitor::visitIDIV($IDIV* obj) {
}

void EmptyVisitor::visitLOR($LOR* obj) {
}

void EmptyVisitor::visitCASTORE($CASTORE* obj) {
}

void EmptyVisitor::visitFREM($FREM* obj) {
}

void EmptyVisitor::visitLDC($LDC* obj) {
}

void EmptyVisitor::visitBIPUSH($BIPUSH* obj) {
}

void EmptyVisitor::visitDSTORE($DSTORE* obj) {
}

void EmptyVisitor::visitF2L($F2L* obj) {
}

void EmptyVisitor::visitFMUL($FMUL* obj) {
}

void EmptyVisitor::visitLLOAD($LLOAD* obj) {
}

void EmptyVisitor::visitJSR($JSR* obj) {
}

void EmptyVisitor::visitFSUB($FSUB* obj) {
}

void EmptyVisitor::visitSASTORE($SASTORE* obj) {
}

void EmptyVisitor::visitALOAD($ALOAD* obj) {
}

void EmptyVisitor::visitDUP2_X2($DUP2_X2* obj) {
}

void EmptyVisitor::visitRETURN($RETURN* obj) {
}

void EmptyVisitor::visitDALOAD($DALOAD* obj) {
}

void EmptyVisitor::visitSIPUSH($SIPUSH* obj) {
}

void EmptyVisitor::visitDSUB($DSUB* obj) {
}

void EmptyVisitor::visitL2F($L2F* obj) {
}

void EmptyVisitor::visitIF_ICMPGT($IF_ICMPGT* obj) {
}

void EmptyVisitor::visitF2D($F2D* obj) {
}

void EmptyVisitor::visitI2L($I2L* obj) {
}

void EmptyVisitor::visitIF_ACMPNE($IF_ACMPNE* obj) {
}

void EmptyVisitor::visitPOP($POP* obj) {
}

void EmptyVisitor::visitI2S($I2S* obj) {
}

void EmptyVisitor::visitIFEQ($IFEQ* obj) {
}

void EmptyVisitor::visitSWAP($SWAP* obj) {
}

void EmptyVisitor::visitIOR($IOR* obj) {
}

void EmptyVisitor::visitIREM($IREM* obj) {
}

void EmptyVisitor::visitIASTORE($IASTORE* obj) {
}

void EmptyVisitor::visitNEWARRAY($NEWARRAY* obj) {
}

void EmptyVisitor::visitINVOKEINTERFACE($INVOKEINTERFACE* obj) {
}

void EmptyVisitor::visitINEG($INEG* obj) {
}

void EmptyVisitor::visitLCMP($LCMP* obj) {
}

void EmptyVisitor::visitJSR_W($JSR_W* obj) {
}

void EmptyVisitor::visitMULTIANEWARRAY($MULTIANEWARRAY* obj) {
}

void EmptyVisitor::visitDUP_X2($DUP_X2* obj) {
}

void EmptyVisitor::visitSALOAD($SALOAD* obj) {
}

void EmptyVisitor::visitIFNONNULL($IFNONNULL* obj) {
}

void EmptyVisitor::visitDMUL($DMUL* obj) {
}

void EmptyVisitor::visitIFNE($IFNE* obj) {
}

void EmptyVisitor::visitIF_ICMPLE($IF_ICMPLE* obj) {
}

void EmptyVisitor::visitLDC2_W($LDC2_W* obj) {
}

void EmptyVisitor::visitGETFIELD($GETFIELD* obj) {
}

void EmptyVisitor::visitLADD($LADD* obj) {
}

void EmptyVisitor::visitNOP($NOP* obj) {
}

void EmptyVisitor::visitFALOAD($FALOAD* obj) {
}

void EmptyVisitor::visitINSTANCEOF($INSTANCEOF* obj) {
}

void EmptyVisitor::visitIFLE($IFLE* obj) {
}

void EmptyVisitor::visitLXOR($LXOR* obj) {
}

void EmptyVisitor::visitLRETURN($LRETURN* obj) {
}

void EmptyVisitor::visitFCONST($FCONST* obj) {
}

void EmptyVisitor::visitIUSHR($IUSHR* obj) {
}

void EmptyVisitor::visitBALOAD($BALOAD* obj) {
}

void EmptyVisitor::visitDUP2($DUP2* obj) {
}

void EmptyVisitor::visitIF_ACMPEQ($IF_ACMPEQ* obj) {
}

void EmptyVisitor::visitIMPDEP1($IMPDEP1* obj) {
}

void EmptyVisitor::visitMONITORENTER($MONITORENTER* obj) {
}

void EmptyVisitor::visitLSHL($LSHL* obj) {
}

void EmptyVisitor::visitDCMPG($DCMPG* obj) {
}

void EmptyVisitor::visitD2L($D2L* obj) {
}

void EmptyVisitor::visitIMPDEP2($IMPDEP2* obj) {
}

void EmptyVisitor::visitL2D($L2D* obj) {
}

void EmptyVisitor::visitRET($RET* obj) {
}

void EmptyVisitor::visitIFGT($IFGT* obj) {
}

void EmptyVisitor::visitIXOR($IXOR* obj) {
}

void EmptyVisitor::visitINVOKEVIRTUAL($INVOKEVIRTUAL* obj) {
}

void EmptyVisitor::visitFASTORE($FASTORE* obj) {
}

void EmptyVisitor::visitIRETURN($IRETURN* obj) {
}

void EmptyVisitor::visitIF_ICMPNE($IF_ICMPNE* obj) {
}

void EmptyVisitor::visitFLOAD($FLOAD* obj) {
}

void EmptyVisitor::visitLDIV($LDIV* obj) {
}

void EmptyVisitor::visitPUTSTATIC($PUTSTATIC* obj) {
}

void EmptyVisitor::visitAALOAD($AALOAD* obj) {
}

void EmptyVisitor::visitD2I($D2I* obj) {
}

void EmptyVisitor::visitIF_ICMPEQ($IF_ICMPEQ* obj) {
}

void EmptyVisitor::visitAASTORE($AASTORE* obj) {
}

void EmptyVisitor::visitARETURN($ARETURN* obj) {
}

void EmptyVisitor::visitDUP2_X1($DUP2_X1* obj) {
}

void EmptyVisitor::visitFNEG($FNEG* obj) {
}

void EmptyVisitor::visitGOTO_W($GOTO_W* obj) {
}

void EmptyVisitor::visitD2F($D2F* obj) {
}

void EmptyVisitor::visitGOTO($GOTO* obj) {
}

void EmptyVisitor::visitISUB($ISUB* obj) {
}

void EmptyVisitor::visitF2I($F2I* obj) {
}

void EmptyVisitor::visitDNEG($DNEG* obj) {
}

void EmptyVisitor::visitICONST($ICONST* obj) {
}

void EmptyVisitor::visitFDIV($FDIV* obj) {
}

void EmptyVisitor::visitI2B($I2B* obj) {
}

void EmptyVisitor::visitLNEG($LNEG* obj) {
}

void EmptyVisitor::visitLREM($LREM* obj) {
}

void EmptyVisitor::visitIMUL($IMUL* obj) {
}

void EmptyVisitor::visitIADD($IADD* obj) {
}

void EmptyVisitor::visitLSHR($LSHR* obj) {
}

void EmptyVisitor::visitLOOKUPSWITCH($LOOKUPSWITCH* obj) {
}

void EmptyVisitor::visitDUP_X1($DUP_X1* obj) {
}

void EmptyVisitor::visitFCMPL($FCMPL* obj) {
}

void EmptyVisitor::visitI2C($I2C* obj) {
}

void EmptyVisitor::visitLMUL($LMUL* obj) {
}

void EmptyVisitor::visitLUSHR($LUSHR* obj) {
}

void EmptyVisitor::visitISHL($ISHL* obj) {
}

void EmptyVisitor::visitLALOAD($LALOAD* obj) {
}

void EmptyVisitor::visitASTORE($ASTORE* obj) {
}

void EmptyVisitor::visitANEWARRAY($ANEWARRAY* obj) {
}

void EmptyVisitor::visitFRETURN($FRETURN* obj) {
}

void EmptyVisitor::visitFADD($FADD* obj) {
}

void EmptyVisitor::visitBREAKPOINT($BREAKPOINT* obj) {
}

void EmptyVisitor::visitINVOKEDYNAMIC($INVOKEDYNAMIC* obj) {
}

EmptyVisitor::EmptyVisitor() {
}

$Class* EmptyVisitor::load$($String* name, bool initialize) {
	$loadClass(EmptyVisitor, name, initialize, &_EmptyVisitor_ClassInfo_, allocate$EmptyVisitor);
	return class$;
}

$Class* EmptyVisitor::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com