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

// Function: sub_0020EE68
// Address: 0x20ee68 - 0x20eefc
void sub_0020EE68_0x20ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EE68_0x20ee68");
#endif

    switch (ctx->pc) {
        case 0x20eec4u: goto label_20eec4;
        default: break;
    }

    ctx->pc = 0x20ee68u;

    // 0x20ee68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ee6c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x20ee6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ee74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ee74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee78: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x20ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20ee7c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x20ee7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee80: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20ee80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20ee84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20ee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20ee88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee8c: 0x34a5040c  ori         $a1, $a1, 0x40C
    ctx->pc = 0x20ee8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1036);
    // 0x20ee90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x20ee94: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x20ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x20ee98: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EE98u;
    {
        const bool branch_taken_0x20ee98 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE98u;
        // 0x20ee9c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee98) {
            ctx->pc = 0x20EEB0u;
            goto label_20eeb0;
        }
    }
    ctx->pc = 0x20EEA0u;
    // 0x20eea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20eea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eea4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20eea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eea8: 0x80848e0  j           func_212380
    ctx->pc = 0x20EEA8u;
    ctx->pc = 0x20EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEA8u;
    // 0x20eeac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20EEB0u;
label_20eeb0:
    // 0x20eeb0: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x20eeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x20eeb4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20eeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eeb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x20eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x20eebc: 0xc09422c  jal         func_2508B0
    ctx->pc = 0x20EEBCu;
    SET_GPR_U32(ctx, 31, 0x20EEC4u);
    ctx->pc = 0x20EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEBCu;
    // 0x20eec0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x20EEBCu, 0x20EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEC4u;
label_20eec4:
    // 0x20eec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20eec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eec8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20eecc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20eed0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EED0u;
    {
        const bool branch_taken_0x20eed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EED0u;
        // 0x20eed4: 0x34a5040a  ori         $a1, $a1, 0x40A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1034);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eed0) {
            ctx->pc = 0x20EEE8u;
            goto label_20eee8;
        }
    }
    ctx->pc = 0x20EED8u;
    // 0x20eed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20eed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eedc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20eedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eee0: 0x80848e0  j           func_212380
    ctx->pc = 0x20EEE0u;
    ctx->pc = 0x20EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEE0u;
    // 0x20eee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x20EEE8u;
label_20eee8:
    // 0x20eee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20eee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eeec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20eeecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20eef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20eef4: 0x3e00008  jr          $ra
    ctx->pc = 0x20EEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEF4u;
        // 0x20eef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EEFCu;
}
