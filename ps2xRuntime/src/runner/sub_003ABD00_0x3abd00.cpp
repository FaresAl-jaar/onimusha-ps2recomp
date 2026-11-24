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

// Function: sub_003ABD00
// Address: 0x3abd00 - 0x3abddc
void sub_003ABD00_0x3abd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABD00_0x3abd00");
#endif

    switch (ctx->pc) {
        case 0x3abd40u: goto label_3abd40;
        case 0x3abd70u: goto label_3abd70;
        case 0x3abda0u: goto label_3abda0;
        default: break;
    }

    ctx->pc = 0x3abd00u;

    // 0x3abd00: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abd04: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3abd04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3abd08: 0x8c239da0  lw          $v1, -0x6260($at)
    ctx->pc = 0x3abd08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x929DA0u));
    // 0x3abd0c: 0x24e79db0  addiu       $a3, $a3, -0x6250
    ctx->pc = 0x3abd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942128));
    // 0x3abd10: 0x24860800  addiu       $a2, $a0, 0x800
    ctx->pc = 0x3abd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x3abd14: 0x240505e7  addiu       $a1, $zero, 0x5E7
    ctx->pc = 0x3abd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1511));
    // 0x3abd18: 0xac8307f0  sw          $v1, 0x7F0($a0)
    ctx->pc = 0x3abd18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2032), GPR_U32(ctx, 3));
    // 0x3abd1c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abd20: 0x94239da4  lhu         $v1, -0x625C($at)
    ctx->pc = 0x3abd20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x929DA4u));
    // 0x3abd24: 0xa48307f4  sh          $v1, 0x7F4($a0)
    ctx->pc = 0x3abd24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2036), (uint16_t)GPR_U32(ctx, 3));
    // 0x3abd28: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abd2c: 0x90239da6  lbu         $v1, -0x625A($at)
    ctx->pc = 0x3abd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x929DA6u));
    // 0x3abd30: 0xa08307f6  sb          $v1, 0x7F6($a0)
    ctx->pc = 0x3abd30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abd34: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abd38: 0x90239da7  lbu         $v1, -0x6259($at)
    ctx->pc = 0x3abd38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x929DA7u));
    // 0x3abd3c: 0xa08307f7  sb          $v1, 0x7F7($a0)
    ctx->pc = 0x3abd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2039), (uint8_t)GPR_U32(ctx, 3));
label_3abd40:
    // 0x3abd40: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3abd40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3abd44: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3abd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3abd48: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3abd48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3abd4c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3abd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3abd50: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3abd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3abd54: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3ABD54u;
    {
        const bool branch_taken_0x3abd54 = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x3abd54) {
            ctx->pc = 0x3ABD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abd40;
        }
    }
    ctx->pc = 0x3ABD5Cu;
    // 0x3abd5c: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x3abd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x3abd60: 0x24876670  addiu       $a3, $a0, 0x6670
    ctx->pc = 0x3abd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 26224));
    // 0x3abd64: 0x2508fc20  addiu       $t0, $t0, -0x3E0
    ctx->pc = 0x3abd64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966304));
    // 0x3abd68: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3abd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3abd6c: 0x0  nop
    ctx->pc = 0x3abd6cu;
    // NOP
label_3abd70:
    // 0x3abd70: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x3abd70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3abd74: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3abd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3abd78: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x3abd78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3abd7c: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3abd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3abd80: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3abd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3abd84: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x3abd84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abd88: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3ABD88u;
    {
        const bool branch_taken_0x3abd88 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3ABD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD88u;
        // 0x3abd8c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd88) {
            ctx->pc = 0x3ABD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abd70;
        }
    }
    ctx->pc = 0x3ABD90u;
    // 0x3abd90: 0x3c080093  lui         $t0, 0x93
    ctx->pc = 0x3abd90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)147 << 16));
    // 0x3abd94: 0x24876680  addiu       $a3, $a0, 0x6680
    ctx->pc = 0x3abd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 26240));
    // 0x3abd98: 0x2508fc30  addiu       $t0, $t0, -0x3D0
    ctx->pc = 0x3abd98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966320));
    // 0x3abd9c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3abd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3abda0:
    // 0x3abda0: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x3abda0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3abda4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3abda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3abda8: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x3abda8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3abdac: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3abdacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3abdb0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x3abdb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x3abdb4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x3abdb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abdb8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3ABDB8u;
    {
        const bool branch_taken_0x3abdb8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x3ABDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDB8u;
        // 0x3abdbc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abdb8) {
            ctx->pc = 0x3ABDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abda0;
        }
    }
    ctx->pc = 0x3ABDC0u;
    // 0x3abdc0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abdc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abdc4: 0x8c23fc48  lw          $v1, -0x3B8($at)
    ctx->pc = 0x3abdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FC48u));
    // 0x3abdc8: 0xac836698  sw          $v1, 0x6698($a0)
    ctx->pc = 0x3abdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 26264), GPR_U32(ctx, 3));
    // 0x3abdcc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abdd0: 0x8c23fc4c  lw          $v1, -0x3B4($at)
    ctx->pc = 0x3abdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FC4Cu));
    // 0x3abdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDD4u;
        // 0x3abdd8: 0xac83669c  sw          $v1, 0x669C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 26268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABDDCu;
}
