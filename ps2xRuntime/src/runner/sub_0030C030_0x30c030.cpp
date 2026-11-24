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

// Function: sub_0030C030
// Address: 0x30c030 - 0x30c0b8
void sub_0030C030_0x30c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C030_0x30c030");
#endif

    switch (ctx->pc) {
        case 0x30c060u: goto label_30c060;
        default: break;
    }

    ctx->pc = 0x30c030u;

    // 0x30c030: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x30c030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x30c034: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x30c034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c038: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x30C038u;
    {
        const bool branch_taken_0x30c038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c038) {
            ctx->pc = 0x30C0B0u;
            goto label_30c0b0;
        }
    }
    ctx->pc = 0x30C040u;
    // 0x30c040: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x30c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30c044: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30c044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c048: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x30c048u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30c04c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x30C04Cu;
    {
        const bool branch_taken_0x30c04c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C04Cu;
        // 0x30c050: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c04c) {
            ctx->pc = 0x30C098u;
            goto label_30c098;
        }
    }
    ctx->pc = 0x30C054u;
    // 0x30c054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30c054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c058: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30c058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c05c: 0x0  nop
    ctx->pc = 0x30c05cu;
    // NOP
label_30c060:
    // 0x30c060: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x30c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x30c064: 0xa4650038  sh          $a1, 0x38($v1)
    ctx->pc = 0x30c064u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x30c068: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C068u;
    {
        const bool branch_taken_0x30c068 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C068u;
        // 0x30c06c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c068) {
            ctx->pc = 0x30C078u;
            goto label_30c078;
        }
    }
    ctx->pc = 0x30C070u;
    // 0x30c070: 0xa5280028  sh          $t0, 0x28($t1)
    ctx->pc = 0x30c070u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 40), (uint16_t)GPR_U32(ctx, 8));
    // 0x30c074: 0x0  nop
    ctx->pc = 0x30c074u;
    // NOP
label_30c078:
    // 0x30c078: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x30c078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c07c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x30c07cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c080: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x30c080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x30c084: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x30c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30c088: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x30c088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30c08c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x30C08Cu;
    {
        const bool branch_taken_0x30c08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C08Cu;
        // 0x30c090: 0x24e70044  addiu       $a3, $a3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c08c) {
            ctx->pc = 0x30C060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c060;
        }
    }
    ctx->pc = 0x30C094u;
    // 0x30c094: 0x0  nop
    ctx->pc = 0x30c094u;
    // NOP
label_30c098:
    // 0x30c098: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x30c098u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x30c09c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c0a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c0a8: 0xa0a60008  sb          $a2, 0x8($a1)
    ctx->pc = 0x30c0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x30c0ac: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x30c0acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_30c0b0:
    // 0x30c0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30C0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C0B8u;
}
