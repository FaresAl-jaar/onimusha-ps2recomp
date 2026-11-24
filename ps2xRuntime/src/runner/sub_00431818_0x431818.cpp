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

// Function: sub_00431818
// Address: 0x431818 - 0x431848
void sub_00431818_0x431818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431818_0x431818");
#endif

    switch (ctx->pc) {
        case 0x431818u: goto label_431818;
        case 0x43181cu: goto label_43181c;
        case 0x431820u: goto label_431820;
        case 0x431824u: goto label_431824;
        case 0x431828u: goto label_431828;
        case 0x43182cu: goto label_43182c;
        case 0x431830u: goto label_431830;
        case 0x431834u: goto label_431834;
        case 0x431838u: goto label_431838;
        case 0x43183cu: goto label_43183c;
        case 0x431840u: goto label_431840;
        case 0x431844u: goto label_431844;
        default: break;
    }

    ctx->pc = 0x431818u;

label_431818:
    // 0x431818: 0x0  nop
    ctx->pc = 0x431818u;
    // NOP
label_43181c:
    // 0x43181c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x43181cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_431820:
    // 0x431820: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x431820u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_431824:
    // 0x431824: 0x0  nop
    ctx->pc = 0x431824u;
    // NOP
label_431828:
    // 0x431828: 0x0  nop
    ctx->pc = 0x431828u;
    // NOP
label_43182c:
    // 0x43182c: 0x0  nop
    ctx->pc = 0x43182cu;
    // NOP
label_431830:
    // 0x431830: 0xfff67ffd  sd          $s6, 0x7FFD($ra)
    ctx->pc = 0x431830u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 32765), GPR_U64(ctx, 22));
label_431834:
    // 0x431834: 0x110002  srl         $zero, $s1, 0
    ctx->pc = 0x431834u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 17), 0));
label_431838:
    // 0x431838: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x431838u;
    
label_43183c:
    // 0x43183c: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x43183cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_431840:
    // 0x431840: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_431844:
    if (ctx->pc == 0x431844u) {
        ctx->pc = 0x431844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431840u;
        // 0x431844: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431848u;
        goto label_fallthrough_0x431840;
    }
    ctx->pc = 0x431840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x431844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431840u;
        // 0x431844: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x431840:
    ctx->pc = 0x431848u;
}
