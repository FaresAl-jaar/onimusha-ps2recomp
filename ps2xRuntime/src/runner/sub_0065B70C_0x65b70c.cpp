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

// Function: sub_0065B70C
// Address: 0x65b70c - 0x65b784
void sub_0065B70C_0x65b70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0065B70C_0x65b70c");
#endif

    switch (ctx->pc) {
        case 0x65b70cu: goto label_65b70c;
        case 0x65b710u: goto label_65b710;
        case 0x65b714u: goto label_65b714;
        case 0x65b718u: goto label_65b718;
        case 0x65b71cu: goto label_65b71c;
        case 0x65b720u: goto label_65b720;
        case 0x65b724u: goto label_65b724;
        case 0x65b728u: goto label_65b728;
        case 0x65b72cu: goto label_65b72c;
        case 0x65b730u: goto label_65b730;
        case 0x65b734u: goto label_65b734;
        case 0x65b738u: goto label_65b738;
        case 0x65b73cu: goto label_65b73c;
        case 0x65b740u: goto label_65b740;
        case 0x65b744u: goto label_65b744;
        case 0x65b748u: goto label_65b748;
        case 0x65b74cu: goto label_65b74c;
        case 0x65b750u: goto label_65b750;
        case 0x65b754u: goto label_65b754;
        case 0x65b758u: goto label_65b758;
        case 0x65b75cu: goto label_65b75c;
        case 0x65b760u: goto label_65b760;
        case 0x65b764u: goto label_65b764;
        case 0x65b768u: goto label_65b768;
        case 0x65b76cu: goto label_65b76c;
        case 0x65b770u: goto label_65b770;
        case 0x65b774u: goto label_65b774;
        case 0x65b778u: goto label_65b778;
        case 0x65b77cu: goto label_65b77c;
        case 0x65b780u: goto label_65b780;
        default: break;
    }

    ctx->pc = 0x65b70cu;

label_65b70c:
    // 0x65b70c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x65b70cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_65b710:
    // 0x65b710: 0x9  jalr        $zero, $zero
label_65b714:
    if (ctx->pc == 0x65B714u) {
        ctx->pc = 0x65B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B710u;
        // 0x65b714: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x65B718u;
        goto label_65b718;
    }
    ctx->pc = 0x65B710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x65B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x65B710u;
        // 0x65b714: 0x28  mfsa        $zero (Delay Slot)
        SET_GPR_U32(ctx, 0, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x65B710u, 0x65B718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x65B718u;
label_65b718:
    // 0x65b718: 0x0  nop
    ctx->pc = 0x65b718u;
    // NOP
label_65b71c:
    // 0x65b71c: 0x0  nop
    ctx->pc = 0x65b71cu;
    // NOP
label_65b720:
    // 0x65b720: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x65b720u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_65b724:
    // 0x65b724: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x65b724u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b728:
    // 0x65b728: 0x28  mfsa        $zero
    ctx->pc = 0x65b728u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_65b72c:
    // 0x65b72c: 0x0  nop
    ctx->pc = 0x65b72cu;
    // NOP
label_65b730:
    // 0x65b730: 0x0  nop
    ctx->pc = 0x65b730u;
    // NOP
label_65b734:
    // 0x65b734: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x65b734u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b738:
    // 0x65b738: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x65b738u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b73c:
    // 0x65b73c: 0x0  nop
    ctx->pc = 0x65b73cu;
    // NOP
label_65b740:
    // 0x65b740: 0x0  nop
    ctx->pc = 0x65b740u;
    // NOP
label_65b744:
    // 0x65b744: 0x0  nop
    ctx->pc = 0x65b744u;
    // NOP
label_65b748:
    // 0x65b748: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x65b748u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b74c:
    // 0x65b74c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x65b74cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_65b750:
    // 0x65b750: 0x0  nop
    ctx->pc = 0x65b750u;
    // NOP
label_65b754:
    // 0x65b754: 0x0  nop
    ctx->pc = 0x65b754u;
    // NOP
label_65b758:
    // 0x65b758: 0x0  nop
    ctx->pc = 0x65b758u;
    // NOP
label_65b75c:
    // 0x65b75c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x65b75cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_65b760:
    // 0x65b760: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x65b760u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_65b764:
    // 0x65b764: 0x0  nop
    ctx->pc = 0x65b764u;
    // NOP
label_65b768:
    // 0x65b768: 0x0  nop
    ctx->pc = 0x65b768u;
    // NOP
label_65b76c:
    // 0x65b76c: 0x0  nop
    ctx->pc = 0x65b76cu;
    // NOP
label_65b770:
    // 0x65b770: 0xd  break       0
    ctx->pc = 0x65b770u;
    runtime->handleBreak(rdram, ctx);
label_65b774:
    // 0x65b774: 0x0  nop
    ctx->pc = 0x65b774u;
    // NOP
label_65b778:
    // 0x65b778: 0x0  nop
    ctx->pc = 0x65b778u;
    // NOP
label_65b77c:
    // 0x65b77c: 0x0  nop
    ctx->pc = 0x65b77cu;
    // NOP
label_65b780:
    // 0x65b780: 0x0  nop
    ctx->pc = 0x65b780u;
    // NOP
    ctx->pc = 0x65b784u;
}
