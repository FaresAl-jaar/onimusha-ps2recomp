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

// Function: sub_0037FAF0
// Address: 0x37faf0 - 0x37fbe8
void sub_0037FAF0_0x37faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FAF0_0x37faf0");
#endif

    ctx->pc = 0x37faf0u;

    // 0x37faf0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x37faf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37faf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37faf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37faf8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37faf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37fafc: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x37fafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37fb00: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x37fb00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x37fb04: 0x28a10801  slti        $at, $a1, 0x801
    ctx->pc = 0x37fb04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37fb08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FB08u;
    {
        const bool branch_taken_0x37fb08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB08u;
        // 0x37fb0c: 0x24a3f000  addiu       $v1, $a1, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb08) {
            ctx->pc = 0x37FB18u;
            goto label_37fb18;
        }
    }
    ctx->pc = 0x37FB10u;
    // 0x37fb10: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x37fb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37fb14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x37fb14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_37fb18:
    // 0x37fb18: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x37fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37fb1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37fb1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37fb20: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37FB20u;
    {
        const bool branch_taken_0x37fb20 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x37fb20) {
            ctx->pc = 0x37FB58u;
            goto label_37fb58;
        }
    }
    ctx->pc = 0x37FB28u;
    // 0x37fb28: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fb28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fb2c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x37fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x37fb30: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37fb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37fb34: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fb34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fb38: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fb38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fb3c: 0x28610800  slti        $at, $v1, 0x800
    ctx->pc = 0x37fb3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x37fb40: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x37FB40u;
    {
        const bool branch_taken_0x37fb40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB40u;
        // 0x37fb44: 0x28610201  slti        $at, $v1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb40) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FB48u;
    // 0x37fb48: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x37FB48u;
    {
        const bool branch_taken_0x37fb48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB48u;
        // 0x37fb4c: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb48) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FB50u;
    // 0x37fb50: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x37FB50u;
    {
        const bool branch_taken_0x37fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB50u;
        // 0x37fb54: 0xa48300c4  sh          $v1, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb50) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FB58u;
label_37fb58:
    // 0x37fb58: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37FB58u;
    {
        const bool branch_taken_0x37fb58 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x37fb58) {
            ctx->pc = 0x37FB90u;
            goto label_37fb90;
        }
    }
    ctx->pc = 0x37FB60u;
    // 0x37fb60: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fb60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fb64: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x37fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x37fb68: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37fb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37fb6c: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fb70: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fb70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fb74: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x37fb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37fb78: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x37FB78u;
    {
        const bool branch_taken_0x37fb78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB78u;
        // 0x37fb7c: 0x28610e00  slti        $at, $v1, 0xE00 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3584) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb78) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FB80u;
    // 0x37fb80: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x37FB80u;
    {
        const bool branch_taken_0x37fb80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB80u;
        // 0x37fb84: 0x24030e00  addiu       $v1, $zero, 0xE00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb80) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FB88u;
    // 0x37fb88: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x37FB88u;
    {
        const bool branch_taken_0x37fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FB88u;
        // 0x37fb8c: 0xa48300c4  sh          $v1, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fb88) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FB90u;
label_37fb90:
    // 0x37fb90: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fb90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fb94: 0x28610800  slti        $at, $v1, 0x800
    ctx->pc = 0x37fb94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x37fb98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x37FB98u;
    {
        const bool branch_taken_0x37fb98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fb98) {
            ctx->pc = 0x37FBC0u;
            goto label_37fbc0;
        }
    }
    ctx->pc = 0x37FBA0u;
    // 0x37fba0: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x37fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x37fba4: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fba8: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fbac: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37FBACu;
    {
        const bool branch_taken_0x37fbac = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x37fbac) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FBB4u;
    // 0x37fbb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37FBB4u;
    {
        const bool branch_taken_0x37fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FBB4u;
        // 0x37fbb8: 0xa48000c4  sh          $zero, 0xC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fbb4) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FBBCu;
    // 0x37fbbc: 0x0  nop
    ctx->pc = 0x37fbbcu;
    // NOP
label_37fbc0:
    // 0x37fbc0: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x37fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x37fbc4: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x37fbc8: 0x848300c4  lh          $v1, 0xC4($a0)
    ctx->pc = 0x37fbc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x37fbcc: 0x28631000  slti        $v1, $v1, 0x1000
    ctx->pc = 0x37fbccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x37fbd0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FBD0u;
    {
        const bool branch_taken_0x37fbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fbd0) {
            ctx->pc = 0x37FBE0u;
            goto label_37fbe0;
        }
    }
    ctx->pc = 0x37FBD8u;
    // 0x37fbd8: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x37fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x37fbdc: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x37fbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
label_37fbe0:
    // 0x37fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x37FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FBE8u;
}
