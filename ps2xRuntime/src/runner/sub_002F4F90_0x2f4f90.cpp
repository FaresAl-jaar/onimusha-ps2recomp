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

// Function: sub_002F4F90
// Address: 0x2f4f90 - 0x2f5054
void sub_002F4F90_0x2f4f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4F90_0x2f4f90");
#endif

    ctx->pc = 0x2f4f90u;

    // 0x2f4f90: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x2f4f90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2f4f94: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2f4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2f4f98: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2f4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2f4f9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f4fa0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2f4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2f4fa4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f4fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4fa8: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x2f4fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4fac: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f4facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f4fb0: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x2f4fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4fb4: 0x24639100  addiu       $v1, $v1, -0x6F00
    ctx->pc = 0x2f4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938880));
    // 0x2f4fb8: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x2f4fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4fbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f4fc0: 0xa080000f  sb          $zero, 0xF($a0)
    ctx->pc = 0x2f4fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4fc4: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x2f4fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f4fc8: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x2f4fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2f4fcc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2f4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2f4fd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f4fd4: 0x8c28cec8  lw          $t0, -0x3138($at)
    ctx->pc = 0x2f4fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x2f4fd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f4fdc: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x2f4fdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2f4fe0: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x2f4fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2f4fe4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f4fe8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2f4fe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2f4fec: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x2f4fecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2f4ff0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f4ff4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2f4ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2f4ff8: 0x8c25ced8  lw          $a1, -0x3128($at)
    ctx->pc = 0x2f4ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2f4ffc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f4ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5000: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2f5000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2f5004: 0xac23cedc  sw          $v1, -0x3124($at)
    ctx->pc = 0x2f5004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEDCu, _value); } while (0);
    // 0x2f5008: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f500c: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x2f500cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2f5010: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f5010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f5014: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5018: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2f5018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2f501c: 0x91430004  lbu         $v1, 0x4($t2)
    ctx->pc = 0x2f501cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2f5020: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5020u;
    {
        const bool branch_taken_0x2f5020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5020) {
            ctx->pc = 0x2F5048u;
            goto label_2f5048;
        }
    }
    ctx->pc = 0x2F5028u;
    // 0x2f5028: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f5028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f502c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f502cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5030: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2f5030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2f5034: 0xa32806  srlv        $a1, $v1, $a1
    ctx->pc = 0x2f5034u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x2f5038: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2f5038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2f503c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f503cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f5040: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2f5040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2f5044: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2f5044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_2f5048:
    // 0x2f5048: 0x91430007  lbu         $v1, 0x7($t2)
    ctx->pc = 0x2f5048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
    // 0x2f504c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F504Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F504Cu;
        // 0x2f5050: 0xa0830015  sb          $v1, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F504Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5054u;
}
