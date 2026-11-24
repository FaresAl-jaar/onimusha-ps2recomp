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

// Function: sub_00329AB0
// Address: 0x329ab0 - 0x329b58
void sub_00329AB0_0x329ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329AB0_0x329ab0");
#endif

    switch (ctx->pc) {
        case 0x329ad0u: goto label_329ad0;
        case 0x329b00u: goto label_329b00;
        case 0x329b1cu: goto label_329b1c;
        case 0x329b34u: goto label_329b34;
        default: break;
    }

    ctx->pc = 0x329ab0u;

    // 0x329ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x329ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x329ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x329ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x329ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x329ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x329abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x329ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x329ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ac8: 0xc0ca6a4  jal         func_329A90
    ctx->pc = 0x329AC8u;
    SET_GPR_U32(ctx, 31, 0x329AD0u);
    ctx->pc = 0x329ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329AC8u;
    // 0x329acc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329A90u, 0x329AC8u, 0x329AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329AD0u;
label_329ad0:
    // 0x329ad0: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x329ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x329ad4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x329AD4u;
    {
        const bool branch_taken_0x329ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ad4) {
            ctx->pc = 0x329AE4u;
            goto label_329ae4;
        }
    }
    ctx->pc = 0x329ADCu;
    // 0x329adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x329ADCu;
    {
        const bool branch_taken_0x329adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ADCu;
        // 0x329ae0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329adc) {
            ctx->pc = 0x329AECu;
            goto label_329aec;
        }
    }
    ctx->pc = 0x329AE4u;
label_329ae4:
    // 0x329ae4: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x329ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x329ae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329aec:
    // 0x329aec: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x329aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x329af0: 0xa243000e  sb          $v1, 0xE($s2)
    ctx->pc = 0x329af0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x329af4: 0xa251000f  sb          $s1, 0xF($s2)
    ctx->pc = 0x329af4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 15), (uint8_t)GPR_U32(ctx, 17));
    // 0x329af8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x329AF8u;
    {
        const bool branch_taken_0x329af8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AF8u;
        // 0x329afc: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329af8) {
            ctx->pc = 0x329B40u;
            goto label_329b40;
        }
    }
    ctx->pc = 0x329B00u;
label_329b00:
    // 0x329b00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x329b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329b04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x329b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x329b08: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x329b08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x329b0c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x329b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x329b10: 0x34451000  ori         $a1, $v0, 0x1000
    ctx->pc = 0x329b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x329b14: 0xc05e3a4  jal         func_178E90
    ctx->pc = 0x329B14u;
    SET_GPR_U32(ctx, 31, 0x329B1Cu);
    ctx->pc = 0x329B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B14u;
    // 0x329b18: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E90u, 0x329B14u, 0x329B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B1Cu;
label_329b1c:
    // 0x329b1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x329b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x329b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329b24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x329b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x329b28: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x329b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x329b2c: 0xc049590  jal         func_125640
    ctx->pc = 0x329B2Cu;
    SET_GPR_U32(ctx, 31, 0x329B34u);
    ctx->pc = 0x329B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B2Cu;
    // 0x329b30: 0x34461000  ori         $a2, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x329B2Cu, 0x329B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B34u;
label_329b34:
    // 0x329b34: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x329b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x329b38: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x329B38u;
    {
        const bool branch_taken_0x329b38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x329B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B38u;
        // 0x329b3c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b38) {
            ctx->pc = 0x329B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329b00;
        }
    }
    ctx->pc = 0x329B40u;
label_329b40:
    // 0x329b40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x329b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x329b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x329b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329b50: 0x3e00008  jr          $ra
    ctx->pc = 0x329B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B50u;
        // 0x329b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B58u;
}
