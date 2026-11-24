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

// Function: sub_00337CD0
// Address: 0x337cd0 - 0x337f64
void sub_00337CD0_0x337cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337CD0_0x337cd0");
#endif

    switch (ctx->pc) {
        case 0x337ce8u: goto label_337ce8;
        case 0x337d98u: goto label_337d98;
        case 0x337eb8u: goto label_337eb8;
        default: break;
    }

    ctx->pc = 0x337cd0u;

    // 0x337cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337cdc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x337cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x337ce0: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x337CE0u;
    SET_GPR_U32(ctx, 31, 0x337CE8u);
    ctx->pc = 0x337CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337CE0u;
    // 0x337ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x337CE0u, 0x337CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337CE8u;
label_337ce8:
    // 0x337ce8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x337ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x337cec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x337cecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x337cf0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337CF0u;
    {
        const bool branch_taken_0x337cf0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x337cf0) {
            ctx->pc = 0x337D00u;
            goto label_337d00;
        }
    }
    ctx->pc = 0x337CF8u;
    // 0x337cf8: 0xa6030f50  sh          $v1, 0xF50($s0)
    ctx->pc = 0x337cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3920), (uint16_t)GPR_U32(ctx, 3));
    // 0x337cfc: 0x0  nop
    ctx->pc = 0x337cfcu;
    // NOP
label_337d00:
    // 0x337d00: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x337d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x337d04: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x337d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x337d08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x337d0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d10: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x337d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x337d14: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x337d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x337d1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d20: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x337d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x337d24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x337d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x337d2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d30: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x337d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x337d34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d38: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x337d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x337d3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d40: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x337d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x337d44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d48: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x337d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x337d4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d50: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x337d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x337d54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d58: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x337d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x337d5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d60: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x337d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x337d64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d68: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x337d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x337d6c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d70: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x337d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x337d74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d78: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x337d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x337d7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d80: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x337d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x337d84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x337d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337d88: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x337d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x337d8c: 0xa2000dce  sb          $zero, 0xDCE($s0)
    ctx->pc = 0x337d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3534), (uint8_t)GPR_U32(ctx, 0));
    // 0x337d90: 0xa2000dcd  sb          $zero, 0xDCD($s0)
    ctx->pc = 0x337d90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3533), (uint8_t)GPR_U32(ctx, 0));
    // 0x337d94: 0xa2000dcc  sb          $zero, 0xDCC($s0)
    ctx->pc = 0x337d94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3532), (uint8_t)GPR_U32(ctx, 0));
label_337d98:
    // 0x337d98: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x337d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x337d9c: 0x90c50e44  lbu         $a1, 0xE44($a2)
    ctx->pc = 0x337d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3652)));
    // 0x337da0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x337da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x337da4: 0x2864002e  slti        $a0, $v1, 0x2E
    ctx->pc = 0x337da4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x337da8: 0xa0c50e0e  sb          $a1, 0xE0E($a2)
    ctx->pc = 0x337da8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3598), (uint8_t)GPR_U32(ctx, 5));
    // 0x337dac: 0x90c50eb0  lbu         $a1, 0xEB0($a2)
    ctx->pc = 0x337dacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3760)));
    // 0x337db0: 0xa0c50e7a  sb          $a1, 0xE7A($a2)
    ctx->pc = 0x337db0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3706), (uint8_t)GPR_U32(ctx, 5));
    // 0x337db4: 0x90c50e45  lbu         $a1, 0xE45($a2)
    ctx->pc = 0x337db4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3653)));
    // 0x337db8: 0xa0c50e0f  sb          $a1, 0xE0F($a2)
    ctx->pc = 0x337db8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3599), (uint8_t)GPR_U32(ctx, 5));
    // 0x337dbc: 0x90c50eb1  lbu         $a1, 0xEB1($a2)
    ctx->pc = 0x337dbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3761)));
    // 0x337dc0: 0xa0c50e7b  sb          $a1, 0xE7B($a2)
    ctx->pc = 0x337dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3707), (uint8_t)GPR_U32(ctx, 5));
    // 0x337dc4: 0x90c50e46  lbu         $a1, 0xE46($a2)
    ctx->pc = 0x337dc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3654)));
    // 0x337dc8: 0xa0c50e10  sb          $a1, 0xE10($a2)
    ctx->pc = 0x337dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3600), (uint8_t)GPR_U32(ctx, 5));
    // 0x337dcc: 0x90c50eb2  lbu         $a1, 0xEB2($a2)
    ctx->pc = 0x337dccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3762)));
    // 0x337dd0: 0xa0c50e7c  sb          $a1, 0xE7C($a2)
    ctx->pc = 0x337dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3708), (uint8_t)GPR_U32(ctx, 5));
    // 0x337dd4: 0x90c50e47  lbu         $a1, 0xE47($a2)
    ctx->pc = 0x337dd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3655)));
    // 0x337dd8: 0xa0c50e11  sb          $a1, 0xE11($a2)
    ctx->pc = 0x337dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3601), (uint8_t)GPR_U32(ctx, 5));
    // 0x337ddc: 0x90c50eb3  lbu         $a1, 0xEB3($a2)
    ctx->pc = 0x337ddcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3763)));
    // 0x337de0: 0xa0c50e7d  sb          $a1, 0xE7D($a2)
    ctx->pc = 0x337de0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3709), (uint8_t)GPR_U32(ctx, 5));
    // 0x337de4: 0x90c50e48  lbu         $a1, 0xE48($a2)
    ctx->pc = 0x337de4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3656)));
    // 0x337de8: 0xa0c50e12  sb          $a1, 0xE12($a2)
    ctx->pc = 0x337de8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3602), (uint8_t)GPR_U32(ctx, 5));
    // 0x337dec: 0x90c50eb4  lbu         $a1, 0xEB4($a2)
    ctx->pc = 0x337decu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3764)));
    // 0x337df0: 0xa0c50e7e  sb          $a1, 0xE7E($a2)
    ctx->pc = 0x337df0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3710), (uint8_t)GPR_U32(ctx, 5));
    // 0x337df4: 0x90c50e49  lbu         $a1, 0xE49($a2)
    ctx->pc = 0x337df4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3657)));
    // 0x337df8: 0xa0c50e13  sb          $a1, 0xE13($a2)
    ctx->pc = 0x337df8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3603), (uint8_t)GPR_U32(ctx, 5));
    // 0x337dfc: 0x90c50eb5  lbu         $a1, 0xEB5($a2)
    ctx->pc = 0x337dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3765)));
    // 0x337e00: 0xa0c50e7f  sb          $a1, 0xE7F($a2)
    ctx->pc = 0x337e00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3711), (uint8_t)GPR_U32(ctx, 5));
    // 0x337e04: 0x90c50e4a  lbu         $a1, 0xE4A($a2)
    ctx->pc = 0x337e04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3658)));
    // 0x337e08: 0xa0c50e14  sb          $a1, 0xE14($a2)
    ctx->pc = 0x337e08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3604), (uint8_t)GPR_U32(ctx, 5));
    // 0x337e0c: 0x90c50eb6  lbu         $a1, 0xEB6($a2)
    ctx->pc = 0x337e0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3766)));
    // 0x337e10: 0xa0c50e80  sb          $a1, 0xE80($a2)
    ctx->pc = 0x337e10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3712), (uint8_t)GPR_U32(ctx, 5));
    // 0x337e14: 0x90c50e4b  lbu         $a1, 0xE4B($a2)
    ctx->pc = 0x337e14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3659)));
    // 0x337e18: 0xa0c50e15  sb          $a1, 0xE15($a2)
    ctx->pc = 0x337e18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3605), (uint8_t)GPR_U32(ctx, 5));
    // 0x337e1c: 0x90c50eb7  lbu         $a1, 0xEB7($a2)
    ctx->pc = 0x337e1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3767)));
    // 0x337e20: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x337E20u;
    {
        const bool branch_taken_0x337e20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x337E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E20u;
        // 0x337e24: 0xa0c50e81  sb          $a1, 0xE81($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3713), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e20) {
            ctx->pc = 0x337D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337d98;
        }
    }
    ctx->pc = 0x337E28u;
    // 0x337e28: 0x705821  addu        $t3, $v1, $s0
    ctx->pc = 0x337e28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337e2c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x337e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x337e30: 0x916a0e44  lbu         $t2, 0xE44($t3)
    ctx->pc = 0x337e30u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3652)));
    // 0x337e34: 0x904821  addu        $t1, $a0, $s0
    ctx->pc = 0x337e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x337e38: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x337e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x337e3c: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x337e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x337e40: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x337e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x337e44: 0xb04021  addu        $t0, $a1, $s0
    ctx->pc = 0x337e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337e48: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x337e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337e4c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x337e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x337e50: 0x903021  addu        $a2, $a0, $s0
    ctx->pc = 0x337e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x337e54: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x337e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337e58: 0xa16a0e0e  sb          $t2, 0xE0E($t3)
    ctx->pc = 0x337e58u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3598), (uint8_t)GPR_U32(ctx, 10));
    // 0x337e5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x337e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e60: 0x91640eb0  lbu         $a0, 0xEB0($t3)
    ctx->pc = 0x337e60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3760)));
    // 0x337e64: 0xa1640e7a  sb          $a0, 0xE7A($t3)
    ctx->pc = 0x337e64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3706), (uint8_t)GPR_U32(ctx, 4));
    // 0x337e68: 0x91240e44  lbu         $a0, 0xE44($t1)
    ctx->pc = 0x337e68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3652)));
    // 0x337e6c: 0xa1240e0e  sb          $a0, 0xE0E($t1)
    ctx->pc = 0x337e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3598), (uint8_t)GPR_U32(ctx, 4));
    // 0x337e70: 0x91240eb0  lbu         $a0, 0xEB0($t1)
    ctx->pc = 0x337e70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3760)));
    // 0x337e74: 0xa1240e7a  sb          $a0, 0xE7A($t1)
    ctx->pc = 0x337e74u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3706), (uint8_t)GPR_U32(ctx, 4));
    // 0x337e78: 0x91040e44  lbu         $a0, 0xE44($t0)
    ctx->pc = 0x337e78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3652)));
    // 0x337e7c: 0xa1040e0e  sb          $a0, 0xE0E($t0)
    ctx->pc = 0x337e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3598), (uint8_t)GPR_U32(ctx, 4));
    // 0x337e80: 0x91040eb0  lbu         $a0, 0xEB0($t0)
    ctx->pc = 0x337e80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3760)));
    // 0x337e84: 0xa1040e7a  sb          $a0, 0xE7A($t0)
    ctx->pc = 0x337e84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3706), (uint8_t)GPR_U32(ctx, 4));
    // 0x337e88: 0x90e40e44  lbu         $a0, 0xE44($a3)
    ctx->pc = 0x337e88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3652)));
    // 0x337e8c: 0xa0e40e0e  sb          $a0, 0xE0E($a3)
    ctx->pc = 0x337e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3598), (uint8_t)GPR_U32(ctx, 4));
    // 0x337e90: 0x90e40eb0  lbu         $a0, 0xEB0($a3)
    ctx->pc = 0x337e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3760)));
    // 0x337e94: 0xa0e40e7a  sb          $a0, 0xE7A($a3)
    ctx->pc = 0x337e94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3706), (uint8_t)GPR_U32(ctx, 4));
    // 0x337e98: 0x90c40e44  lbu         $a0, 0xE44($a2)
    ctx->pc = 0x337e98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3652)));
    // 0x337e9c: 0xa0c40e0e  sb          $a0, 0xE0E($a2)
    ctx->pc = 0x337e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3598), (uint8_t)GPR_U32(ctx, 4));
    // 0x337ea0: 0x90c40eb0  lbu         $a0, 0xEB0($a2)
    ctx->pc = 0x337ea0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3760)));
    // 0x337ea4: 0xa0c40e7a  sb          $a0, 0xE7A($a2)
    ctx->pc = 0x337ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3706), (uint8_t)GPR_U32(ctx, 4));
    // 0x337ea8: 0x90a40e44  lbu         $a0, 0xE44($a1)
    ctx->pc = 0x337ea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3652)));
    // 0x337eac: 0xa0a40e0e  sb          $a0, 0xE0E($a1)
    ctx->pc = 0x337eacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3598), (uint8_t)GPR_U32(ctx, 4));
    // 0x337eb0: 0x90a40eb0  lbu         $a0, 0xEB0($a1)
    ctx->pc = 0x337eb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3760)));
    // 0x337eb4: 0xa0a40e7a  sb          $a0, 0xE7A($a1)
    ctx->pc = 0x337eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3706), (uint8_t)GPR_U32(ctx, 4));
label_337eb8:
    // 0x337eb8: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x337eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x337ebc: 0x90c50f1b  lbu         $a1, 0xF1B($a2)
    ctx->pc = 0x337ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3867)));
    // 0x337ec0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x337ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x337ec4: 0x2864002d  slti        $a0, $v1, 0x2D
    ctx->pc = 0x337ec4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x337ec8: 0xa0c50ee6  sb          $a1, 0xEE6($a2)
    ctx->pc = 0x337ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3814), (uint8_t)GPR_U32(ctx, 5));
    // 0x337ecc: 0x90c50f1c  lbu         $a1, 0xF1C($a2)
    ctx->pc = 0x337eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3868)));
    // 0x337ed0: 0xa0c50ee7  sb          $a1, 0xEE7($a2)
    ctx->pc = 0x337ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3815), (uint8_t)GPR_U32(ctx, 5));
    // 0x337ed4: 0x90c50f1d  lbu         $a1, 0xF1D($a2)
    ctx->pc = 0x337ed4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3869)));
    // 0x337ed8: 0xa0c50ee8  sb          $a1, 0xEE8($a2)
    ctx->pc = 0x337ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3816), (uint8_t)GPR_U32(ctx, 5));
    // 0x337edc: 0x90c50f1e  lbu         $a1, 0xF1E($a2)
    ctx->pc = 0x337edcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3870)));
    // 0x337ee0: 0xa0c50ee9  sb          $a1, 0xEE9($a2)
    ctx->pc = 0x337ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3817), (uint8_t)GPR_U32(ctx, 5));
    // 0x337ee4: 0x90c50f1f  lbu         $a1, 0xF1F($a2)
    ctx->pc = 0x337ee4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3871)));
    // 0x337ee8: 0xa0c50eea  sb          $a1, 0xEEA($a2)
    ctx->pc = 0x337ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3818), (uint8_t)GPR_U32(ctx, 5));
    // 0x337eec: 0x90c50f20  lbu         $a1, 0xF20($a2)
    ctx->pc = 0x337eecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3872)));
    // 0x337ef0: 0xa0c50eeb  sb          $a1, 0xEEB($a2)
    ctx->pc = 0x337ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3819), (uint8_t)GPR_U32(ctx, 5));
    // 0x337ef4: 0x90c50f21  lbu         $a1, 0xF21($a2)
    ctx->pc = 0x337ef4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3873)));
    // 0x337ef8: 0xa0c50eec  sb          $a1, 0xEEC($a2)
    ctx->pc = 0x337ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3820), (uint8_t)GPR_U32(ctx, 5));
    // 0x337efc: 0x90c50f22  lbu         $a1, 0xF22($a2)
    ctx->pc = 0x337efcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3874)));
    // 0x337f00: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x337F00u;
    {
        const bool branch_taken_0x337f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x337F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F00u;
        // 0x337f04: 0xa0c50eed  sb          $a1, 0xEED($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3821), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f00) {
            ctx->pc = 0x337EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337eb8;
        }
    }
    ctx->pc = 0x337F08u;
    // 0x337f08: 0x704821  addu        $t1, $v1, $s0
    ctx->pc = 0x337f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337f0c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x337f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x337f10: 0x91280f1b  lbu         $t0, 0xF1B($t1)
    ctx->pc = 0x337f10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3867)));
    // 0x337f14: 0x903821  addu        $a3, $a0, $s0
    ctx->pc = 0x337f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x337f18: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x337f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x337f1c: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x337f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x337f20: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x337f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337f24: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337f28: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x337f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x337f2c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x337f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x337f30: 0xa1280ee6  sb          $t0, 0xEE6($t1)
    ctx->pc = 0x337f30u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3814), (uint8_t)GPR_U32(ctx, 8));
    // 0x337f34: 0x90e30f1b  lbu         $v1, 0xF1B($a3)
    ctx->pc = 0x337f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3867)));
    // 0x337f38: 0xa0e30ee6  sb          $v1, 0xEE6($a3)
    ctx->pc = 0x337f38u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3814), (uint8_t)GPR_U32(ctx, 3));
    // 0x337f3c: 0x90c30f1b  lbu         $v1, 0xF1B($a2)
    ctx->pc = 0x337f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3867)));
    // 0x337f40: 0xa0c30ee6  sb          $v1, 0xEE6($a2)
    ctx->pc = 0x337f40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3814), (uint8_t)GPR_U32(ctx, 3));
    // 0x337f44: 0x90a30f1b  lbu         $v1, 0xF1B($a1)
    ctx->pc = 0x337f44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3867)));
    // 0x337f48: 0xa0a30ee6  sb          $v1, 0xEE6($a1)
    ctx->pc = 0x337f48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3814), (uint8_t)GPR_U32(ctx, 3));
    // 0x337f4c: 0x90830f1b  lbu         $v1, 0xF1B($a0)
    ctx->pc = 0x337f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3867)));
    // 0x337f50: 0xa0830ee6  sb          $v1, 0xEE6($a0)
    ctx->pc = 0x337f50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3814), (uint8_t)GPR_U32(ctx, 3));
    // 0x337f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x337F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F5Cu;
        // 0x337f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337F64u;
}
