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

// Function: sub_002CC1A0
// Address: 0x2cc1a0 - 0x2cc278
void sub_002CC1A0_0x2cc1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC1A0_0x2cc1a0");
#endif

    switch (ctx->pc) {
        case 0x2cc264u: goto label_2cc264;
        default: break;
    }

    ctx->pc = 0x2cc1a0u;

    // 0x2cc1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cc1a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2cc1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc1ac: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2cc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2cc1b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cc1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc1b4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x2cc1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc1b8: 0xa3a40011  sb          $a0, 0x11($sp)
    ctx->pc = 0x2cc1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc1bc: 0x27aa0016  addiu       $t2, $sp, 0x16
    ctx->pc = 0x2cc1bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 22));
    // 0x2cc1c0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2cc1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2cc1c4: 0xa3a00012  sb          $zero, 0x12($sp)
    ctx->pc = 0x2cc1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc1c8: 0xa3a00013  sb          $zero, 0x13($sp)
    ctx->pc = 0x2cc1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc1cc: 0x27a90017  addiu       $t1, $sp, 0x17
    ctx->pc = 0x2cc1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 23));
    // 0x2cc1d0: 0xa3a50014  sb          $a1, 0x14($sp)
    ctx->pc = 0x2cc1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cc1d4: 0x27a80018  addiu       $t0, $sp, 0x18
    ctx->pc = 0x2cc1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2cc1d8: 0xa3a00015  sb          $zero, 0x15($sp)
    ctx->pc = 0x2cc1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc1dc: 0x27a60019  addiu       $a2, $sp, 0x19
    ctx->pc = 0x2cc1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 25));
    // 0x2cc1e0: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x2cc1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc1e4: 0x240304e0  addiu       $v1, $zero, 0x4E0
    ctx->pc = 0x2cc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1248));
    // 0x2cc1e8: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x2cc1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc1ec: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2cc1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc1f0: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x2cc1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc1f4: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2cc1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x2cc1f8: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC1F8u;
    {
        const bool branch_taken_0x2cc1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1F8u;
        // 0x2cc1fc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1f8) {
            ctx->pc = 0x2CC210u;
            goto label_2cc210;
        }
    }
    ctx->pc = 0x2CC200u;
    // 0x2cc200: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC200u;
    {
        const bool branch_taken_0x2cc200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc200) {
            ctx->pc = 0x2CC228u;
            goto label_2cc228;
        }
    }
    ctx->pc = 0x2CC208u;
    // 0x2cc208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC208u;
    {
        const bool branch_taken_0x2cc208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc208) {
            ctx->pc = 0x2CC228u;
            goto label_2cc228;
        }
    }
    ctx->pc = 0x2CC210u;
label_2cc210:
    // 0x2cc210: 0xa1450000  sb          $a1, 0x0($t2)
    ctx->pc = 0x2cc210u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cc214: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cc214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc218: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cc218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cc21c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x2cc21cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc220: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2cc220u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc224: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2cc224u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_2cc228:
    // 0x2cc228: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2cc228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cc22c: 0xaf828a2c  sw          $v0, -0x75D4($gp)
    ctx->pc = 0x2cc22cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
    // 0x2cc230: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2cc230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc234: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x2cc238: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2cc238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2cc23c: 0x2442c160  addiu       $v0, $v0, -0x3EA0
    ctx->pc = 0x2cc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951264));
    // 0x2cc240: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2cc240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2cc244: 0xaf828a34  sw          $v0, -0x75CC($gp)
    ctx->pc = 0x2cc244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 2));
    // 0x2cc248: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2cc248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2cc24c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2cc24cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cc250: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2cc250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cc254: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cc254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc258: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cc258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc25c: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2CC25Cu;
    SET_GPR_U32(ctx, 31, 0x2CC264u);
    ctx->pc = 0x2CC260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC25Cu;
    // 0x2cc260: 0xaf808a30  sw          $zero, -0x75D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2CC25Cu, 0x2CC264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC264u;
label_2cc264:
    // 0x2cc264: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x2cc264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x2cc268: 0xaf808a34  sw          $zero, -0x75CC($gp)
    ctx->pc = 0x2cc268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 0));
    // 0x2cc26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc270: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC270u;
        // 0x2cc274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC278u;
}
