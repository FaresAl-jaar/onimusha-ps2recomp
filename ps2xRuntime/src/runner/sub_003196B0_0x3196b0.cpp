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

// Function: sub_003196B0
// Address: 0x3196b0 - 0x319754
void sub_003196B0_0x3196b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003196B0_0x3196b0");
#endif

    ctx->pc = 0x3196b0u;

    // 0x3196b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3196b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3196b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3196b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3196b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3196b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3196bc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3196bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3196c0: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3196c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3196c4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3196c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x3196c8: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x3196c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x3196cc: 0x344203f0  ori         $v0, $v0, 0x3F0
    ctx->pc = 0x3196ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x3196d0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3196d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x3196d4: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x3196d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x3196d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3196d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3196dc: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3196dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3196e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3196e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3196e4: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x3196e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3196e8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3196e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3196ec: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x3196ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3196f0: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x3196f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x3196f4: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x3196f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3196f8: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x3196f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x3196fc: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x3196fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x319700: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x319700u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x319704: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x319704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x319708: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x319708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x31970c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31970cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x319710: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x319710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x319714: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x319714u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x319718: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x319718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x31971c: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x31971cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x319720: 0x78c30030  lq          $v1, 0x30($a2)
    ctx->pc = 0x319720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x319724: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x319724u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    // 0x319728: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x319728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x31972c: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x31972cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x319730: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319730u;
    {
        const bool branch_taken_0x319730 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x319734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319730u;
        // 0x319734: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319730) {
            ctx->pc = 0x319740u;
            goto label_319740;
        }
    }
    ctx->pc = 0x319738u;
    // 0x319738: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x319738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31973c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31973cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_319740:
    // 0x319740: 0x8f838b28  lw          $v1, -0x74D8($gp)
    ctx->pc = 0x319740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x319744: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x319744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x319748: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x319748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31974c: 0x3e00008  jr          $ra
    ctx->pc = 0x31974Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31974Cu;
        // 0x319750: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31974Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319754u;
}
