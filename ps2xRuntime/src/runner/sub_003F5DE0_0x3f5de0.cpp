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

// Function: sub_003F5DE0
// Address: 0x3f5de0 - 0x3f5e78
void sub_003F5DE0_0x3f5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5DE0_0x3f5de0");
#endif

    ctx->pc = 0x3f5de0u;

    // 0x3f5de0: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x3f5de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x3f5de4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x3f5de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f5de8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3F5DE8u;
    {
        const bool branch_taken_0x3f5de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5de8) {
            ctx->pc = 0x3F5E70u;
            goto label_3f5e70;
        }
    }
    ctx->pc = 0x3F5DF0u;
    // 0x3f5df0: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x3f5df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
    // 0x3f5df4: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x3f5df4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3f5df8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F5DF8u;
    {
        const bool branch_taken_0x3f5df8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5DF8u;
        // 0x3f5dfc: 0x9643c  dsll32      $t4, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5df8) {
            ctx->pc = 0x3F5E70u;
            goto label_3f5e70;
        }
    }
    ctx->pc = 0x3F5E00u;
    // 0x3f5e00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3f5e04: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x3f5e04u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x3f5e08: 0x29810230  slti        $at, $t4, 0x230
    ctx->pc = 0x3f5e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)560) ? 1 : 0);
    // 0x3f5e0c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3F5E0Cu;
    {
        const bool branch_taken_0x3f5e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F5E0Cu;
        // 0x3f5e10: 0x836821  addu        $t5, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e0c) {
            ctx->pc = 0x3F5E38u;
            goto label_3f5e38;
        }
    }
    ctx->pc = 0x3F5E14u;
    // 0x3f5e14: 0x298301f4  slti        $v1, $t4, 0x1F4
    ctx->pc = 0x3f5e14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x3f5e18: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F5E18u;
    {
        const bool branch_taken_0x3f5e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5e18) {
            ctx->pc = 0x3F5E38u;
            goto label_3f5e38;
        }
    }
    ctx->pc = 0x3F5E20u;
    // 0x3f5e20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3f5e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f5e24: 0x2583fe0c  addiu       $v1, $t4, -0x1F4
    ctx->pc = 0x3f5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966796));
    // 0x3f5e28: 0xa3a90000  sb          $t1, 0x0($sp)
    ctx->pc = 0x3f5e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x3f5e2c: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x3f5e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3f5e30: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x3f5e30u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x3f5e34: 0x0  nop
    ctx->pc = 0x3f5e34u;
    // NOP
label_3f5e38:
    // 0x3f5e38: 0xa5a60000  sh          $a2, 0x0($t5)
    ctx->pc = 0x3f5e38u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3f5e3c: 0xa5a70002  sh          $a3, 0x2($t5)
    ctx->pc = 0x3f5e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x3f5e40: 0xa5a80004  sh          $t0, 0x4($t5)
    ctx->pc = 0x3f5e40u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x3f5e44: 0xa5a90006  sh          $t1, 0x6($t5)
    ctx->pc = 0x3f5e44u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 6), (uint16_t)GPR_U32(ctx, 9));
    // 0x3f5e48: 0xa5aa0008  sh          $t2, 0x8($t5)
    ctx->pc = 0x3f5e48u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 8), (uint16_t)GPR_U32(ctx, 10));
    // 0x3f5e4c: 0xa5ab000a  sh          $t3, 0xA($t5)
    ctx->pc = 0x3f5e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 10), (uint16_t)GPR_U32(ctx, 11));
    // 0x3f5e50: 0xa1a5000c  sb          $a1, 0xC($t5)
    ctx->pc = 0x3f5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x3f5e54: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x3f5e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f5e58: 0xa1a3000d  sb          $v1, 0xD($t5)
    ctx->pc = 0x3f5e58u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f5e5c: 0x93a30008  lbu         $v1, 0x8($sp)
    ctx->pc = 0x3f5e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3f5e60: 0xa1a3000e  sb          $v1, 0xE($t5)
    ctx->pc = 0x3f5e60u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3f5e64: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x3f5e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
    // 0x3f5e68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f5e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f5e6c: 0xa083023b  sb          $v1, 0x23B($a0)
    ctx->pc = 0x3f5e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 571), (uint8_t)GPR_U32(ctx, 3));
label_3f5e70:
    // 0x3f5e70: 0x3e00008  jr          $ra
    ctx->pc = 0x3F5E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F5E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5E78u;
}
