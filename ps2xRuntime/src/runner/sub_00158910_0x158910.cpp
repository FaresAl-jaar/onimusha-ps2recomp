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

// Function: sub_00158910
// Address: 0x158910 - 0x158974
void sub_00158910_0x158910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158910_0x158910");
#endif

    switch (ctx->pc) {
        case 0x158940u: goto label_158940;
        case 0x158948u: goto label_158948;
        default: break;
    }

    ctx->pc = 0x158910u;

    // 0x158910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15891c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158924: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x158924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x158928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15892c: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x15892cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158930: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x158930u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x158934: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x158934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x158938: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x158938u;
    SET_GPR_U32(ctx, 31, 0x158940u);
    ctx->pc = 0x15893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158938u;
    // 0x15893c: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x158938u, 0x158940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158940u;
label_158940:
    // 0x158940: 0xc056260  jal         func_158980
    ctx->pc = 0x158940u;
    SET_GPR_U32(ctx, 31, 0x158948u);
    ctx->pc = 0x158944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158940u;
    // 0x158944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158980u, 0x158940u, 0x158948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158948u;
label_158948:
    // 0x158948: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x158948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15894c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x15894cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x158950: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x158950u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x158954: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x158954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x158958: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x158958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15895c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15895cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x158960: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x158960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x158964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15896c: 0x3e00008  jr          $ra
    ctx->pc = 0x15896Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15896Cu;
        // 0x158970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15896Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158974u;
}
