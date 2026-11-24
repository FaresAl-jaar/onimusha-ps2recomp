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

// Function: sub_002CD290
// Address: 0x2cd290 - 0x2cd338
void sub_002CD290_0x2cd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD290_0x2cd290");
#endif

    switch (ctx->pc) {
        case 0x2cd2acu: goto label_2cd2ac;
        case 0x2cd2d8u: goto label_2cd2d8;
        default: break;
    }

    ctx->pc = 0x2cd290u;

    // 0x2cd290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd294: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cd294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cd298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd29c: 0x24846c10  addiu       $a0, $a0, 0x6C10
    ctx->pc = 0x2cd29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27664));
    // 0x2cd2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2a4: 0xc049590  jal         func_125640
    ctx->pc = 0x2CD2A4u;
    SET_GPR_U32(ctx, 31, 0x2CD2ACu);
    ctx->pc = 0x2CD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2A4u;
    // 0x2cd2a8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2CD2A4u, 0x2CD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2ACu;
label_2cd2ac:
    // 0x2cd2ac: 0x93838a90  lbu         $v1, -0x7570($gp)
    ctx->pc = 0x2cd2acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937232)));
    // 0x2cd2b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd2b4: 0xa0206c1c  sb          $zero, 0x6C1C($at)
    ctx->pc = 0x2cd2b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6C1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Cu, _value); } while (0);
    // 0x2cd2b8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2cd2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2cd2bc: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x2cd2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x2cd2c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cd2c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cd2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd2c8: 0x24c677d0  addiu       $a2, $a2, 0x77D0
    ctx->pc = 0x2cd2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30672));
    // 0x2cd2cc: 0x24a56c10  addiu       $a1, $a1, 0x6C10
    ctx->pc = 0x2cd2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27664));
    // 0x2cd2d0: 0xa0236c10  sb          $v1, 0x6C10($at)
    ctx->pc = 0x2cd2d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D6C10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C10u, _value); } while (0);
    // 0x2cd2d4: 0x0  nop
    ctx->pc = 0x2cd2d4u;
    // NOP
label_2cd2d8:
    // 0x2cd2d8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2cd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cd2dc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2cd2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2cd2e0: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x2cd2e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2cd2e4: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x2cd2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x2cd2e8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2cd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2cd2ec: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x2cd2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x2cd2f0: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x2cd2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2cd2f4: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x2cd2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x2cd2f8: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x2cd2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2cd2fc: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x2cd2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x2cd300: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x2cd300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2cd304: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x2cd304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x2cd308: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x2cd308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2cd30c: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x2cd30cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x2cd310: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x2cd310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2cd314: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x2cd314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
    // 0x2cd318: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x2cd318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2cd31c: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x2cd31cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x2cd320: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2cd320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2cd324: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2CD324u;
    {
        const bool branch_taken_0x2cd324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD324u;
        // 0x2cd328: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd324) {
            ctx->pc = 0x2CD2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd2d8;
        }
    }
    ctx->pc = 0x2CD32Cu;
    // 0x2cd32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd330: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD330u;
        // 0x2cd334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD338u;
}
