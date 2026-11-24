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

// Function: sub_003D5240
// Address: 0x3d5240 - 0x3d52d0
void sub_003D5240_0x3d5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5240_0x3d5240");
#endif

    switch (ctx->pc) {
        case 0x3d5254u: goto label_3d5254;
        case 0x3d5270u: goto label_3d5270;
        default: break;
    }

    ctx->pc = 0x3d5240u;

    // 0x3d5240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d5240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d5244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d5244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d5248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d524c: 0xc0a60b8  jal         func_2982E0
    ctx->pc = 0x3D524Cu;
    SET_GPR_U32(ctx, 31, 0x3D5254u);
    ctx->pc = 0x3D5250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D524Cu;
    // 0x3d5250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x3D524Cu, 0x3D5254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5254u;
label_3d5254:
    // 0x3d5254: 0x8e032b20  lw          $v1, 0x2B20($s0)
    ctx->pc = 0x3d5254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3d5258: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D5258u;
    {
        const bool branch_taken_0x3d5258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5258) {
            ctx->pc = 0x3D52C0u;
            goto label_3d52c0;
        }
    }
    ctx->pc = 0x3D5260u;
    // 0x3d5260: 0x8e0601ec  lw          $a2, 0x1EC($s0)
    ctx->pc = 0x3d5260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x3d5264: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D5264u;
    {
        const bool branch_taken_0x3d5264 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5264u;
        // 0x3d5268: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5264) {
            ctx->pc = 0x3D52C0u;
            goto label_3d52c0;
        }
    }
    ctx->pc = 0x3D526Cu;
    // 0x3d526c: 0x24a50950  addiu       $a1, $a1, 0x950
    ctx->pc = 0x3d526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
label_3d5270:
    // 0x3d5270: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3d5270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d5274: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d5274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d5278: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3D5278u;
    {
        const bool branch_taken_0x3d5278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5278) {
            ctx->pc = 0x3D52B0u;
            goto label_3d52b0;
        }
    }
    ctx->pc = 0x3D5280u;
    // 0x3d5280: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x3d5280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3d5284: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3d5284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3d5288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d5288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d528c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3d528cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3d5290: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3d5290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d5294: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3d5294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d5298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d529c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D529Cu;
    {
        const bool branch_taken_0x3d529c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D529Cu;
        // 0x3d52a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d529c) {
            ctx->pc = 0x3D52B0u;
            goto label_3d52b0;
        }
    }
    ctx->pc = 0x3D52A4u;
    // 0x3d52a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D52A4u;
    {
        const bool branch_taken_0x3d52a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52A4u;
        // 0x3d52a8: 0xae032b20  sw          $v1, 0x2B20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d52a4) {
            ctx->pc = 0x3D52C0u;
            goto label_3d52c0;
        }
    }
    ctx->pc = 0x3D52ACu;
    // 0x3d52ac: 0x0  nop
    ctx->pc = 0x3d52acu;
    // NOP
label_3d52b0:
    // 0x3d52b0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x3d52b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3d52b4: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3D52B4u;
    {
        const bool branch_taken_0x3d52b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d52b4) {
            ctx->pc = 0x3D5270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5270;
        }
    }
    ctx->pc = 0x3D52BCu;
    // 0x3d52bc: 0x0  nop
    ctx->pc = 0x3d52bcu;
    // NOP
label_3d52c0:
    // 0x3d52c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d52c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d52c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d52c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d52c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D52C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52C8u;
        // 0x3d52cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D52C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D52D0u;
}
