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

// Function: sub_002A1E80
// Address: 0x2a1e80 - 0x2a1f48
void sub_002A1E80_0x2a1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1E80_0x2a1e80");
#endif

    switch (ctx->pc) {
        case 0x2a1ed0u: goto label_2a1ed0;
        case 0x2a1f10u: goto label_2a1f10;
        default: break;
    }

    ctx->pc = 0x2a1e80u;

    // 0x2a1e80: 0x8c880140  lw          $t0, 0x140($a0)
    ctx->pc = 0x2a1e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x2a1e84: 0x61a3c  dsll32      $v1, $a2, 8
    ctx->pc = 0x2a1e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 8));
    // 0x2a1e88: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2a1e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2a1e8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a1e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1e90: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x2a1e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1e94: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2a1e94u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2a1e98: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a1e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1e9c: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2a1e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2a1ea0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2a1ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a1ea4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2a1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a1ea8: 0xad090010  sw          $t1, 0x10($t0)
    ctx->pc = 0x2a1ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 9));
    // 0x2a1eac: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2a1eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2a1eb0: 0x8c8c007c  lw          $t4, 0x7C($a0)
    ctx->pc = 0x2a1eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1eb4: 0x948b0068  lhu         $t3, 0x68($a0)
    ctx->pc = 0x2a1eb4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a1eb8: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A1EB8u;
    {
        const bool branch_taken_0x2a1eb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EB8u;
        // 0x2a1ebc: 0x65500a  movz        $t2, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1eb8) {
            ctx->pc = 0x2A1F38u;
            goto label_2a1f38;
        }
    }
    ctx->pc = 0x2A1EC0u;
    // 0x2a1ec0: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x2a1ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2a1ec4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a1ec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ec8: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x2a1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x2a1ecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a1ed0:
    // 0x2a1ed0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2a1ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ed4: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x2a1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a1ed8: 0x308900ff  andi        $t1, $a0, 0xFF
    ctx->pc = 0x2a1ed8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a1edc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2a1edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2a1ee0: 0x852014  dsllv       $a0, $a1, $a0
    ctx->pc = 0x2a1ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x2a1ee4: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x2a1ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2a1ee8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1EE8u;
    {
        const bool branch_taken_0x2a1ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EE8u;
        // 0x2a1eec: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ee8) {
            ctx->pc = 0x2A1EF8u;
            goto label_2a1ef8;
        }
    }
    ctx->pc = 0x2A1EF0u;
    // 0x2a1ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1EF0u;
    {
        const bool branch_taken_0x2a1ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1EF0u;
        // 0x2a1ef4: 0xad88016c  sw          $t0, 0x16C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 364), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1ef0) {
            ctx->pc = 0x2A1F00u;
            goto label_2a1f00;
        }
    }
    ctx->pc = 0x2A1EF8u;
label_2a1ef8:
    // 0x2a1ef8: 0xad83016c  sw          $v1, 0x16C($t4)
    ctx->pc = 0x2a1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 364), GPR_U32(ctx, 3));
    // 0x2a1efc: 0x0  nop
    ctx->pc = 0x2a1efcu;
    // NOP
label_2a1f00:
    // 0x2a1f00: 0x1d60fff3  bgtz        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A1F00u;
    {
        const bool branch_taken_0x2a1f00 = (GPR_S64(ctx, 11) > 0);
        ctx->pc = 0x2A1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F00u;
        // 0x2a1f04: 0x258c01f0  addiu       $t4, $t4, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f00) {
            ctx->pc = 0x2A1ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1ed0;
        }
    }
    ctx->pc = 0x2A1F08u;
    // 0x2a1f08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1F08u;
    {
        const bool branch_taken_0x2a1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1f08) {
            ctx->pc = 0x2A1F30u;
            goto label_2a1f30;
        }
    }
    ctx->pc = 0x2A1F10u;
label_2a1f10:
    // 0x2a1f10: 0xad83016c  sw          $v1, 0x16C($t4)
    ctx->pc = 0x2a1f10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 364), GPR_U32(ctx, 3));
    // 0x2a1f14: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2a1f14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2a1f18: 0x258c01f0  addiu       $t4, $t4, 0x1F0
    ctx->pc = 0x2a1f18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 496));
    // 0x2a1f1c: 0x0  nop
    ctx->pc = 0x2a1f1cu;
    // NOP
    // 0x2a1f20: 0x0  nop
    ctx->pc = 0x2a1f20u;
    // NOP
    // 0x2a1f24: 0x1d60fffa  bgtz        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1F24u;
    {
        const bool branch_taken_0x2a1f24 = (GPR_S64(ctx, 11) > 0);
        if (branch_taken_0x2a1f24) {
            ctx->pc = 0x2A1F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1f10;
        }
    }
    ctx->pc = 0x2A1F2Cu;
    // 0x2a1f2c: 0x0  nop
    ctx->pc = 0x2a1f2cu;
    // NOP
label_2a1f30:
    // 0x2a1f30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1F30u;
    {
        const bool branch_taken_0x2a1f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1f30) {
            ctx->pc = 0x2A1F40u;
            goto label_2a1f40;
        }
    }
    ctx->pc = 0x2A1F38u;
label_2a1f38:
    // 0x2a1f38: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x2A1F38u;
    {
        const bool branch_taken_0x2a1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F38u;
        // 0x2a1f3c: 0xa1900  sll         $v1, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1f38) {
            ctx->pc = 0x2A1F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1f10;
        }
    }
    ctx->pc = 0x2A1F40u;
label_2a1f40:
    // 0x2a1f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1F48u;
}
