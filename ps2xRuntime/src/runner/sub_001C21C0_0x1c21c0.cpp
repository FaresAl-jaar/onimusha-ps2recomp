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

// Function: sub_001C21C0
// Address: 0x1c21c0 - 0x1c2230
void sub_001C21C0_0x1c21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C21C0_0x1c21c0");
#endif

    ctx->pc = 0x1c21c0u;

    // 0x1c21c0: 0x8c897840  lw          $t1, 0x7840($a0)
    ctx->pc = 0x1c21c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c21c4: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C21C4u;
    {
        const bool branch_taken_0x1c21c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c21c4) {
            ctx->pc = 0x1C2208u;
            goto label_1c2208;
        }
    }
    ctx->pc = 0x1C21CCu;
    // 0x1c21cc: 0x8c86783c  lw          $a2, 0x783C($a0)
    ctx->pc = 0x1c21ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c21d0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1c21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c21d4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1c21d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c21d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C21D8u;
    {
        const bool branch_taken_0x1c21d8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21D8u;
        // 0x1c21dc: 0x34103  sra         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21d8) {
            ctx->pc = 0x1C21E8u;
            goto label_1c21e8;
        }
    }
    ctx->pc = 0x1C21E0u;
    // 0x1c21e0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1c21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c21e4: 0x34103  sra         $t0, $v1, 4
    ctx->pc = 0x1c21e4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
label_1c21e8:
    // 0x1c21e8: 0x9523000e  lhu         $v1, 0xE($t1)
    ctx->pc = 0x1c21e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x1c21ec: 0x8c877840  lw          $a3, 0x7840($a0)
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c21f0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1c21f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c21f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c21f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c21f8: 0xa526000e  sh          $a2, 0xE($t1)
    ctx->pc = 0x1c21f8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c21fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c21fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c2200: 0xa4680010  sh          $t0, 0x10($v1)
    ctx->pc = 0x1c2200u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x1c2204: 0x0  nop
    ctx->pc = 0x1c2204u;
    // NOP
label_1c2208:
    // 0x1c2208: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c220c: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x1c220cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c2210: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2214: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x1c2214u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c2218: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c221c: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1c221cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1c2220: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2224: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c2224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c2228: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2228u;
        // 0x1c222c: 0xac83783c  sw          $v1, 0x783C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2230u;
}
