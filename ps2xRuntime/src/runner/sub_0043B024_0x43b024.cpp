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

// Function: sub_0043B024
// Address: 0x43b024 - 0x43b06c
void sub_0043B024_0x43b024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B024_0x43b024");
#endif

    switch (ctx->pc) {
        case 0x43b024u: goto label_43b024;
        case 0x43b028u: goto label_43b028;
        case 0x43b02cu: goto label_43b02c;
        case 0x43b030u: goto label_43b030;
        case 0x43b034u: goto label_43b034;
        case 0x43b038u: goto label_43b038;
        case 0x43b03cu: goto label_43b03c;
        case 0x43b040u: goto label_43b040;
        case 0x43b044u: goto label_43b044;
        case 0x43b048u: goto label_43b048;
        case 0x43b04cu: goto label_43b04c;
        case 0x43b050u: goto label_43b050;
        case 0x43b054u: goto label_43b054;
        case 0x43b058u: goto label_43b058;
        case 0x43b05cu: goto label_43b05c;
        case 0x43b060u: goto label_43b060;
        case 0x43b064u: goto label_43b064;
        case 0x43b068u: goto label_43b068;
        default: break;
    }

    ctx->pc = 0x43b024u;

label_43b024:
    // 0x43b024: 0x4c  syscall     1
    ctx->pc = 0x43b024u;
    ctx->pc = 0x43B028u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_43b028:
    // 0x43b028: 0x0  nop
    ctx->pc = 0x43b028u;
    // NOP
label_43b02c:
    // 0x43b02c: 0x0  nop
    ctx->pc = 0x43b02cu;
    // NOP
label_43b030:
    // 0x43b030: 0x20082  srl         $zero, $v0, 2
    ctx->pc = 0x43b030u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_43b034:
    // 0x43b034: 0x20002  srl         $zero, $v0, 0
    ctx->pc = 0x43b034u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 0));
label_43b038:
    // 0x43b038: 0x10  mfhi        $zero
    ctx->pc = 0x43b038u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_43b03c:
    // 0x43b03c: 0x0  nop
    ctx->pc = 0x43b03cu;
    // NOP
label_43b040:
    // 0x43b040: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x43b040u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_43b044:
    // 0x43b044: 0x0  nop
    ctx->pc = 0x43b044u;
    // NOP
label_43b048:
    // 0x43b048: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x43b048u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_43b04c:
    // 0x43b04c: 0x0  nop
    ctx->pc = 0x43b04cu;
    // NOP
label_43b050:
    // 0x43b050: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x43b050u;
    
label_43b054:
    // 0x43b054: 0x0  nop
    ctx->pc = 0x43b054u;
    // NOP
label_43b058:
    // 0x43b058: 0x0  nop
    ctx->pc = 0x43b058u;
    // NOP
label_43b05c:
    // 0x43b05c: 0x0  nop
    ctx->pc = 0x43b05cu;
    // NOP
label_43b060:
    // 0x43b060: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x43b060u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_43b064:
    // 0x43b064: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_43b068:
    if (ctx->pc == 0x43B068u) {
        ctx->pc = 0x43B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B064u;
        // 0x43b068: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x43B06Cu;
        goto label_fallthrough_0x43b064;
    }
    ctx->pc = 0x43B064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x43B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B064u;
        // 0x43b068: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B064u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x43b064:
    ctx->pc = 0x43B06Cu;
}
