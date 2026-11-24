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

// Function: sub_00237878
// Address: 0x237878 - 0x2378e0
void sub_00237878_0x237878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237878_0x237878");
#endif

    switch (ctx->pc) {
        case 0x23788cu: goto label_23788c;
        default: break;
    }

    ctx->pc = 0x237878u;

    // 0x237878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23787c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237880: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x237884: 0xc08e2aa  jal         func_238AA8
    ctx->pc = 0x237884u;
    SET_GPR_U32(ctx, 31, 0x23788Cu);
    ctx->pc = 0x237888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237884u;
    // 0x237888: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x237884u, 0x23788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23788Cu;
label_23788c:
    // 0x23788c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x237890: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x237890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x237894: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x237894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x237898: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x237898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x23789c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2378a0: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x2378a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x2378a4: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2378A4u;
    {
        const bool branch_taken_0x2378a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2378A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A4u;
        // 0x2378a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a4) {
            ctx->pc = 0x2378C8u;
            goto label_2378c8;
        }
    }
    ctx->pc = 0x2378ACu;
    // 0x2378ac: 0x82030047  lb          $v1, 0x47($s0)
    ctx->pc = 0x2378acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x2378b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2378b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2378b4: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2378B4u;
    {
        const bool branch_taken_0x2378b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2378B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378B4u;
        // 0x2378b8: 0xa2020048  sb          $v0, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378b4) {
            ctx->pc = 0x2378D0u;
            goto label_2378d0;
        }
    }
    ctx->pc = 0x2378BCu;
    // 0x2378bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2378BCu;
    {
        const bool branch_taken_0x2378bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378BCu;
        // 0x2378c0: 0xa2000047  sb          $zero, 0x47($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378bc) {
            ctx->pc = 0x2378D0u;
            goto label_2378d0;
        }
    }
    ctx->pc = 0x2378C4u;
    // 0x2378c4: 0x0  nop
    ctx->pc = 0x2378c4u;
    // NOP
label_2378c8:
    // 0x2378c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2378cc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2378ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_2378d0:
    // 0x2378d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2378d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2378d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2378d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2378d8: 0x808e2b0  j           func_238AC0
    ctx->pc = 0x2378D8u;
    ctx->pc = 0x2378DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2378D8u;
    // 0x2378dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    sub_00238AC0_0x238ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x2378E0u;
}
