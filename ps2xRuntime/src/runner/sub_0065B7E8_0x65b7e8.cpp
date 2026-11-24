#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0065B7E8
// Address: 0x65b7e8 - 0x65b88c
void sub_0065B7E8_0x65b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065B7E8_0x65b7e8");
#endif

    switch (ctx->pc) {
        case 0x65b7e8u: goto label_65b7e8;
        case 0x65b7ecu: goto label_65b7ec;
        case 0x65b7f0u: goto label_65b7f0;
        case 0x65b7f4u: goto label_65b7f4;
        case 0x65b7f8u: goto label_65b7f8;
        case 0x65b7fcu: goto label_65b7fc;
        case 0x65b800u: goto label_65b800;
        case 0x65b804u: goto label_65b804;
        case 0x65b808u: goto label_65b808;
        case 0x65b80cu: goto label_65b80c;
        case 0x65b810u: goto label_65b810;
        case 0x65b814u: goto label_65b814;
        case 0x65b818u: goto label_65b818;
        case 0x65b81cu: goto label_65b81c;
        case 0x65b820u: goto label_65b820;
        case 0x65b824u: goto label_65b824;
        case 0x65b828u: goto label_65b828;
        case 0x65b82cu: goto label_65b82c;
        case 0x65b830u: goto label_65b830;
        case 0x65b834u: goto label_65b834;
        case 0x65b838u: goto label_65b838;
        case 0x65b83cu: goto label_65b83c;
        case 0x65b840u: goto label_65b840;
        case 0x65b844u: goto label_65b844;
        case 0x65b848u: goto label_65b848;
        case 0x65b84cu: goto label_65b84c;
        case 0x65b850u: goto label_65b850;
        case 0x65b854u: goto label_65b854;
        case 0x65b858u: goto label_65b858;
        case 0x65b85cu: goto label_65b85c;
        case 0x65b860u: goto label_65b860;
        case 0x65b864u: goto label_65b864;
        case 0x65b868u: goto label_65b868;
        case 0x65b86cu: goto label_65b86c;
        case 0x65b870u: goto label_65b870;
        case 0x65b874u: goto label_65b874;
        case 0x65b878u: goto label_65b878;
        case 0x65b87cu: goto label_65b87c;
        case 0x65b880u: goto label_65b880;
        case 0x65b884u: goto label_65b884;
        case 0x65b888u: goto label_65b888;
        default: break;
    }

    ctx->pc = 0x65b7e8u;

label_65b7e8:
    // 0x65b7e8: 0x9  jalr        $zero, $zero
label_65b7ec:
    if (ctx->pc == 0x65B7ECu) {
        ctx->pc = 0x65B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7E8u;
        // 0x65b7ec: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B7F0u;
        goto label_65b7f0;
    }
    ctx->pc = 0x65B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7E8u;
        // 0x65b7ec: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B7E8u, 0x65B7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x65B7F0u;
label_65b7f0:
    // 0x65b7f0: 0x0  nop
    ctx->pc = 0x65b7f0u;
    // NOP
label_65b7f4:
    // 0x65b7f4: 0x0  nop
    ctx->pc = 0x65b7f4u;
    // NOP
label_65b7f8:
    // 0x65b7f8: 0x0  nop
    ctx->pc = 0x65b7f8u;
    // NOP
label_65b7fc:
    // 0x65b7fc: 0x9  jalr        $zero, $zero
label_65b800:
    if (ctx->pc == 0x65B800u) {
        ctx->pc = 0x65B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7FCu;
        // 0x65b800: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B804u;
        goto label_65b804;
    }
    ctx->pc = 0x65B7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B7FCu;
        // 0x65b800: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B7FCu, 0x65B804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x65B804u;
label_65b804:
    // 0x65b804: 0x0  nop
    ctx->pc = 0x65b804u;
    // NOP
label_65b808:
    // 0x65b808: 0x0  nop
    ctx->pc = 0x65b808u;
    // NOP
label_65b80c:
    // 0x65b80c: 0x0  nop
    ctx->pc = 0x65b80cu;
    // NOP
label_65b810:
    // 0x65b810: 0x9  jalr        $zero, $zero
label_65b814:
    if (ctx->pc == 0x65B814u) {
        ctx->pc = 0x65B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B810u;
        // 0x65b814: 0x1f4  teq         $zero, $zero, 7 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B818u;
        goto label_65b818;
    }
    ctx->pc = 0x65B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B810u;
        // 0x65b814: 0x1f4  teq         $zero, $zero, 7 (Delay Slot)
        if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B810u, 0x65B818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x65B818u;
label_65b818:
    // 0x65b818: 0x0  nop
    ctx->pc = 0x65b818u;
    // NOP
label_65b81c:
    // 0x65b81c: 0x0  nop
    ctx->pc = 0x65b81cu;
    // NOP
label_65b820:
    // 0x65b820: 0x0  nop
    ctx->pc = 0x65b820u;
    // NOP
label_65b824:
    // 0x65b824: 0x9  jalr        $zero, $zero
label_65b828:
    if (ctx->pc == 0x65B828u) {
        ctx->pc = 0x65B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B824u;
        // 0x65b828: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B82Cu;
        goto label_65b82c;
    }
    ctx->pc = 0x65B824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B824u;
        // 0x65b828: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B824u, 0x65B82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x65B82Cu;
label_65b82c:
    // 0x65b82c: 0x0  nop
    ctx->pc = 0x65b82cu;
    // NOP
label_65b830:
    // 0x65b830: 0x0  nop
    ctx->pc = 0x65b830u;
    // NOP
label_65b834:
    // 0x65b834: 0x0  nop
    ctx->pc = 0x65b834u;
    // NOP
label_65b838:
    // 0x65b838: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x65b838u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b83c:
    // 0x65b83c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x65b83cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_65b840:
    // 0x65b840: 0x0  nop
    ctx->pc = 0x65b840u;
    // NOP
label_65b844:
    // 0x65b844: 0x0  nop
    ctx->pc = 0x65b844u;
    // NOP
label_65b848:
    // 0x65b848: 0x0  nop
    ctx->pc = 0x65b848u;
    // NOP
label_65b84c:
    // 0x65b84c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x65b84cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b850:
    // 0x65b850: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x65b850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_65b854:
    // 0x65b854: 0x0  nop
    ctx->pc = 0x65b854u;
    // NOP
label_65b858:
    // 0x65b858: 0x0  nop
    ctx->pc = 0x65b858u;
    // NOP
label_65b85c:
    // 0x65b85c: 0x0  nop
    ctx->pc = 0x65b85cu;
    // NOP
label_65b860:
    // 0x65b860: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x65b860u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b864:
    // 0x65b864: 0x1f4  teq         $zero, $zero, 7
    ctx->pc = 0x65b864u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_65b868:
    // 0x65b868: 0x0  nop
    ctx->pc = 0x65b868u;
    // NOP
label_65b86c:
    // 0x65b86c: 0x0  nop
    ctx->pc = 0x65b86cu;
    // NOP
label_65b870:
    // 0x65b870: 0x0  nop
    ctx->pc = 0x65b870u;
    // NOP
label_65b874:
    // 0x65b874: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x65b874u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b878:
    // 0x65b878: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x65b878u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_65b87c:
    // 0x65b87c: 0x0  nop
    ctx->pc = 0x65b87cu;
    // NOP
label_65b880:
    // 0x65b880: 0x0  nop
    ctx->pc = 0x65b880u;
    // NOP
label_65b884:
    // 0x65b884: 0x0  nop
    ctx->pc = 0x65b884u;
    // NOP
label_65b888:
    // 0x65b888: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x65b888u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x65b88cu;
}
