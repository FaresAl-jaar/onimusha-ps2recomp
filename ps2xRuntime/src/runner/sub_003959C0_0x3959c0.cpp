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

// Function: sub_003959C0
// Address: 0x3959c0 - 0x395a68
void sub_003959C0_0x3959c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003959C0_0x3959c0");
#endif

    switch (ctx->pc) {
        case 0x3959c0u: goto label_3959c0;
        case 0x3959c4u: goto label_3959c4;
        case 0x3959c8u: goto label_3959c8;
        case 0x3959ccu: goto label_3959cc;
        case 0x3959d0u: goto label_3959d0;
        case 0x3959d4u: goto label_3959d4;
        case 0x3959d8u: goto label_3959d8;
        case 0x3959dcu: goto label_3959dc;
        case 0x3959e0u: goto label_3959e0;
        case 0x3959e4u: goto label_3959e4;
        case 0x3959e8u: goto label_3959e8;
        case 0x3959ecu: goto label_3959ec;
        case 0x3959f0u: goto label_3959f0;
        case 0x3959f4u: goto label_3959f4;
        case 0x3959f8u: goto label_3959f8;
        case 0x3959fcu: goto label_3959fc;
        case 0x395a00u: goto label_395a00;
        case 0x395a04u: goto label_395a04;
        case 0x395a08u: goto label_395a08;
        case 0x395a0cu: goto label_395a0c;
        case 0x395a10u: goto label_395a10;
        case 0x395a14u: goto label_395a14;
        case 0x395a18u: goto label_395a18;
        case 0x395a1cu: goto label_395a1c;
        case 0x395a20u: goto label_395a20;
        case 0x395a24u: goto label_395a24;
        case 0x395a28u: goto label_395a28;
        case 0x395a2cu: goto label_395a2c;
        case 0x395a30u: goto label_395a30;
        case 0x395a34u: goto label_395a34;
        case 0x395a38u: goto label_395a38;
        case 0x395a3cu: goto label_395a3c;
        case 0x395a40u: goto label_395a40;
        case 0x395a44u: goto label_395a44;
        case 0x395a48u: goto label_395a48;
        case 0x395a4cu: goto label_395a4c;
        case 0x395a50u: goto label_395a50;
        case 0x395a54u: goto label_395a54;
        case 0x395a58u: goto label_395a58;
        case 0x395a5cu: goto label_395a5c;
        case 0x395a60u: goto label_395a60;
        case 0x395a64u: goto label_395a64;
        default: break;
    }

    ctx->pc = 0x3959c0u;

label_3959c0:
    // 0x3959c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3959c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3959c4:
    // 0x3959c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3959c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3959c8:
    // 0x3959c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3959c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3959cc:
    // 0x3959cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3959ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3959d0:
    // 0x3959d0: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x3959d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_3959d4:
    // 0x3959d4: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
label_3959d8:
    if (ctx->pc == 0x3959D8u) {
        ctx->pc = 0x3959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959D4u;
        // 0x3959d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3959DCu;
        goto label_3959dc;
    }
    ctx->pc = 0x3959D4u;
    {
        const bool branch_taken_0x3959d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959D4u;
        // 0x3959d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959d4) {
            ctx->pc = 0x395A58u;
            goto label_395a58;
        }
    }
    ctx->pc = 0x3959DCu;
label_3959dc:
    // 0x3959dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3959dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3959e0:
    // 0x3959e0: 0x10c4000f  beq         $a2, $a0, . + 4 + (0xF << 2)
label_3959e4:
    if (ctx->pc == 0x3959E4u) {
        ctx->pc = 0x3959E8u;
        goto label_3959e8;
    }
    ctx->pc = 0x3959E0u;
    {
        const bool branch_taken_0x3959e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3959e0) {
            ctx->pc = 0x395A20u;
            goto label_395a20;
        }
    }
    ctx->pc = 0x3959E8u;
label_3959e8:
    // 0x3959e8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_3959ec:
    if (ctx->pc == 0x3959ECu) {
        ctx->pc = 0x3959F0u;
        goto label_3959f0;
    }
    ctx->pc = 0x3959E8u;
    {
        const bool branch_taken_0x3959e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3959e8) {
            ctx->pc = 0x3959F8u;
            goto label_3959f8;
        }
    }
    ctx->pc = 0x3959F0u;
label_3959f0:
    // 0x3959f0: 0x10000019  b           . + 4 + (0x19 << 2)
label_3959f4:
    if (ctx->pc == 0x3959F4u) {
        ctx->pc = 0x3959F8u;
        goto label_3959f8;
    }
    ctx->pc = 0x3959F0u;
    {
        const bool branch_taken_0x3959f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3959f0) {
            ctx->pc = 0x395A58u;
            goto label_395a58;
        }
    }
    ctx->pc = 0x3959F8u;
label_3959f8:
    // 0x3959f8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3959f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3959fc:
    // 0x3959fc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3959fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_395a00:
    // 0x395a00: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x395a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_395a04:
    // 0x395a04: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x395a04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_395a08:
    // 0x395a08: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x395a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
label_395a0c:
    // 0x395a0c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x395a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_395a10:
    // 0x395a10: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x395a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_395a14:
    // 0x395a14: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x395a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_395a18:
    // 0x395a18: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x395a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_395a1c:
    // 0x395a1c: 0x0  nop
    ctx->pc = 0x395a1cu;
    // NOP
label_395a20:
    // 0x395a20: 0x96040824  lhu         $a0, 0x824($s0)
    ctx->pc = 0x395a20u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
label_395a24:
    // 0x395a24: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x395a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_395a28:
    // 0x395a28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x395a28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_395a2c:
    // 0x395a2c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_395a30:
    if (ctx->pc == 0x395A30u) {
        ctx->pc = 0x395A34u;
        goto label_395a34;
    }
    ctx->pc = 0x395A2Cu;
    {
        const bool branch_taken_0x395a2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x395a2c) {
            ctx->pc = 0x395A58u;
            goto label_395a58;
        }
    }
    ctx->pc = 0x395A34u;
label_395a34:
    // 0x395a34: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x395a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_395a38:
    // 0x395a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x395a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395a3c:
    // 0x395a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395a40:
    // 0x395a40: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x395a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_395a44:
    // 0x395a44: 0x320f809  jalr        $t9
label_395a48:
    if (ctx->pc == 0x395A48u) {
        ctx->pc = 0x395A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A44u;
        // 0x395a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A4Cu;
        goto label_395a4c;
    }
    ctx->pc = 0x395A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395A4Cu);
        ctx->pc = 0x395A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A44u;
        // 0x395a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395A44u, 0x395A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395A4Cu;
label_395a4c:
    // 0x395a4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x395a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395a50:
    // 0x395a50: 0xa6030786  sh          $v1, 0x786($s0)
    ctx->pc = 0x395a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 3));
label_395a54:
    // 0x395a54: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x395a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_395a58:
    // 0x395a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_395a5c:
    // 0x395a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x395a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_395a60:
    // 0x395a60: 0x3e00008  jr          $ra
label_395a64:
    if (ctx->pc == 0x395A64u) {
        ctx->pc = 0x395A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A60u;
        // 0x395a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395A68u;
        goto label_fallthrough_0x395a60;
    }
    ctx->pc = 0x395A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A60u;
        // 0x395a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x395a60:
    ctx->pc = 0x395A68u;
}
