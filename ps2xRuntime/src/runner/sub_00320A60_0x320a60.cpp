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

// Function: sub_00320A60
// Address: 0x320a60 - 0x320b18
void sub_00320A60_0x320a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320A60_0x320a60");
#endif

    ctx->pc = 0x320a60u;

    // 0x320a60: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x320a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x320a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x320a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x320a68: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x320a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x320a6c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x320a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x320a70: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x320A70u;
    {
        const bool branch_taken_0x320a70 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x320A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A70u;
        // 0x320a74: 0x30620fff  andi        $v0, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a70) {
            ctx->pc = 0x320A84u;
            goto label_320a84;
        }
    }
    ctx->pc = 0x320A78u;
    // 0x320a78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320A78u;
    {
        const bool branch_taken_0x320a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A78u;
        // 0x320a7c: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a78) {
            ctx->pc = 0x320A88u;
            goto label_320a88;
        }
    }
    ctx->pc = 0x320A80u;
    // 0x320a80: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x320a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_320a84:
    // 0x320a84: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_320a88:
    // 0x320a88: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x320a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x320a8c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320a8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320a90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x320a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x320a94: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x320a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x320a98: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x320a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x320a9c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x320A9Cu;
    {
        const bool branch_taken_0x320a9c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x320AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A9Cu;
        // 0x320aa0: 0x30620fff  andi        $v0, $v1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a9c) {
            ctx->pc = 0x320AB0u;
            goto label_320ab0;
        }
    }
    ctx->pc = 0x320AA4u;
    // 0x320aa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x320AA4u;
    {
        const bool branch_taken_0x320aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AA4u;
        // 0x320aa8: 0x21c3c  dsll32      $v1, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aa4) {
            ctx->pc = 0x320AB4u;
            goto label_320ab4;
        }
    }
    ctx->pc = 0x320AACu;
    // 0x320aac: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x320aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_320ab0:
    // 0x320ab0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x320ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_320ab4:
    // 0x320ab4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x320ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x320ab8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x320ab8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x320abc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x320abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x320ac0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x320ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320ac4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x320AC4u;
    {
        const bool branch_taken_0x320ac4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x320ac4) {
            ctx->pc = 0x320AD0u;
            goto label_320ad0;
        }
    }
    ctx->pc = 0x320ACCu;
    // 0x320acc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x320accu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_320ad0:
    // 0x320ad0: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x320ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x320ad4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x320AD4u;
    {
        const bool branch_taken_0x320ad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x320AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AD4u;
        // 0x320ad8: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ad4) {
            ctx->pc = 0x320AE0u;
            goto label_320ae0;
        }
    }
    ctx->pc = 0x320ADCu;
    // 0x320adc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x320adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_320ae0:
    // 0x320ae0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x320AE0u;
    {
        const bool branch_taken_0x320ae0 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x320ae0) {
            ctx->pc = 0x320AECu;
            goto label_320aec;
        }
    }
    ctx->pc = 0x320AE8u;
    // 0x320ae8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x320ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_320aec:
    // 0x320aec: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x320aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x320af0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x320af0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x320af4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x320af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x320af8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x320AF8u;
    {
        const bool branch_taken_0x320af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AF8u;
        // 0x320afc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320af8) {
            ctx->pc = 0x320B08u;
            goto label_320b08;
        }
    }
    ctx->pc = 0x320B00u;
    // 0x320b00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320B00u;
    {
        const bool branch_taken_0x320b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b00) {
            ctx->pc = 0x320B10u;
            goto label_320b10;
        }
    }
    ctx->pc = 0x320B08u;
label_320b08:
    // 0x320b08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b0c: 0x0  nop
    ctx->pc = 0x320b0cu;
    // NOP
label_320b10:
    // 0x320b10: 0x3e00008  jr          $ra
    ctx->pc = 0x320B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320B18u;
}
