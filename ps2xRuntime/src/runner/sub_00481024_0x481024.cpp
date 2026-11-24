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

// Function: sub_00481024
// Address: 0x481024 - 0x481040
void sub_00481024_0x481024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481024_0x481024");
#endif

    switch (ctx->pc) {
        case 0x481024u: goto label_481024;
        case 0x481028u: goto label_481028;
        case 0x48102cu: goto label_48102c;
        case 0x481030u: goto label_481030;
        case 0x481034u: goto label_481034;
        case 0x481038u: goto label_481038;
        case 0x48103cu: goto label_48103c;
        default: break;
    }

    ctx->pc = 0x481024u;

label_481024:
    // 0x481024: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x481024u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_481028:
    // 0x481028: 0x0  nop
    ctx->pc = 0x481028u;
    // NOP
label_48102c:
    // 0x48102c: 0x0  nop
    ctx->pc = 0x48102cu;
    // NOP
label_481030:
    // 0x481030: 0x1ff09  .word       0x0001FF09                   # jalr        $zero # 00010700 <InstrIdType: CPU_SPECIAL>
label_481034:
    if (ctx->pc == 0x481034u) {
        ctx->pc = 0x481034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481030u;
        // 0x481034: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x481038u;
        goto label_481038;
    }
    ctx->pc = 0x481030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x481038u);
        ctx->pc = 0x481034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x481030u;
        // 0x481034: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481030u, 0x481038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x481038u;
label_481038:
    // 0x481038: 0x0  nop
    ctx->pc = 0x481038u;
    // NOP
label_48103c:
    // 0x48103c: 0x0  nop
    ctx->pc = 0x48103cu;
    // NOP
    ctx->pc = 0x481040u;
}
