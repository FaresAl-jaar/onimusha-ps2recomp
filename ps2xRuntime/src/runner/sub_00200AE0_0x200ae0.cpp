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

// Function: sub_00200AE0
// Address: 0x200ae0 - 0x200b54
void sub_00200AE0_0x200ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200AE0_0x200ae0");
#endif

    switch (ctx->pc) {
        case 0x200ae0u: goto label_200ae0;
        case 0x200ae4u: goto label_200ae4;
        case 0x200ae8u: goto label_200ae8;
        case 0x200aecu: goto label_200aec;
        case 0x200af0u: goto label_200af0;
        case 0x200af4u: goto label_200af4;
        case 0x200af8u: goto label_200af8;
        case 0x200afcu: goto label_200afc;
        case 0x200b00u: goto label_200b00;
        case 0x200b04u: goto label_200b04;
        case 0x200b08u: goto label_200b08;
        case 0x200b0cu: goto label_200b0c;
        case 0x200b10u: goto label_200b10;
        case 0x200b14u: goto label_200b14;
        case 0x200b18u: goto label_200b18;
        case 0x200b1cu: goto label_200b1c;
        case 0x200b20u: goto label_200b20;
        case 0x200b24u: goto label_200b24;
        case 0x200b28u: goto label_200b28;
        case 0x200b2cu: goto label_200b2c;
        case 0x200b30u: goto label_200b30;
        case 0x200b34u: goto label_200b34;
        case 0x200b38u: goto label_200b38;
        case 0x200b3cu: goto label_200b3c;
        case 0x200b40u: goto label_200b40;
        case 0x200b44u: goto label_200b44;
        case 0x200b48u: goto label_200b48;
        case 0x200b4cu: goto label_200b4c;
        case 0x200b50u: goto label_200b50;
        default: break;
    }

    ctx->pc = 0x200ae0u;

label_200ae0:
    // 0x200ae0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x200ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_200ae4:
    // 0x200ae4: 0x3c035a5a  lui         $v1, 0x5A5A
    ctx->pc = 0x200ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
label_200ae8:
    // 0x200ae8: 0x8c4463d8  lw          $a0, 0x63D8($v0)
    ctx->pc = 0x200ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25560)));
label_200aec:
    // 0x200aec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_200af0:
    // 0x200af0: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    ctx->pc = 0x200af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
label_200af4:
    // 0x200af4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_200af8:
    if (ctx->pc == 0x200AF8u) {
        ctx->pc = 0x200AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AF4u;
        // 0x200af8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200AFCu;
        goto label_200afc;
    }
    ctx->pc = 0x200AF4u;
    {
        const bool branch_taken_0x200af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x200AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AF4u;
        // 0x200af8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200af4) {
            ctx->pc = 0x200B18u;
            goto label_200b18;
        }
    }
    ctx->pc = 0x200AFCu;
label_200afc:
    // 0x200afc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x200afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_200b00:
    // 0x200b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200b04:
    // 0x200b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b08:
    // 0x200b08: 0x34a5ff02  ori         $a1, $a1, 0xFF02
    ctx->pc = 0x200b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65282);
label_200b0c:
    // 0x200b0c: 0x807fa1e  j           func_1FE878
label_200b10:
    if (ctx->pc == 0x200B10u) {
        ctx->pc = 0x200B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B0Cu;
        // 0x200b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B14u;
        goto label_200b14;
    }
    ctx->pc = 0x200B0Cu;
    ctx->pc = 0x200B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B0Cu;
    // 0x200b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x200B14u;
label_200b14:
    // 0x200b14: 0x0  nop
    ctx->pc = 0x200b14u;
    // NOP
label_200b18:
    // 0x200b18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x200b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_200b1c:
    // 0x200b1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x200b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_200b20:
    // 0x200b20: 0x904363e8  lbu         $v1, 0x63E8($v0)
    ctx->pc = 0x200b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25576)));
label_200b24:
    // 0x200b24: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_200b28:
    if (ctx->pc == 0x200B28u) {
        ctx->pc = 0x200B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B24u;
        // 0x200b28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B2Cu;
        goto label_200b2c;
    }
    ctx->pc = 0x200B24u;
    {
        const bool branch_taken_0x200b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x200B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B24u;
        // 0x200b28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b24) {
            ctx->pc = 0x200B48u;
            goto label_200b48;
        }
    }
    ctx->pc = 0x200B2Cu;
label_200b2c:
    // 0x200b2c: 0x0  nop
    ctx->pc = 0x200b2cu;
    // NOP
label_200b30:
    // 0x200b30: 0x2401ffff  addiu       $at, $zero, -0x1
    ctx->pc = 0x200b30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_200b34:
    // 0x200b34: 0x20f809  jalr        $at
label_200b38:
    if (ctx->pc == 0x200B38u) {
        ctx->pc = 0x200B3Cu;
        goto label_200b3c;
    }
    ctx->pc = 0x200B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x200B3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B34u, 0x200B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200B3Cu;
label_200b3c:
    // 0x200b3c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_200b40:
    if (ctx->pc == 0x200B40u) {
        ctx->pc = 0x200B44u;
        goto label_200b44;
    }
    ctx->pc = 0x200B3Cu;
    {
        const bool branch_taken_0x200b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b3c) {
            ctx->pc = 0x200B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200b30;
        }
    }
    ctx->pc = 0x200B44u;
label_200b44:
    // 0x200b44: 0x0  nop
    ctx->pc = 0x200b44u;
    // NOP
label_200b48:
    // 0x200b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200b4c:
    // 0x200b4c: 0x3e00008  jr          $ra
label_200b50:
    if (ctx->pc == 0x200B50u) {
        ctx->pc = 0x200B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B4Cu;
        // 0x200b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200B54u;
        goto label_fallthrough_0x200b4c;
    }
    ctx->pc = 0x200B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B4Cu;
        // 0x200b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200b4c:
    ctx->pc = 0x200B54u;
}
