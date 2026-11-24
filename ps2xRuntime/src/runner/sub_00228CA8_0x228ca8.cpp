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

// Function: sub_00228CA8
// Address: 0x228ca8 - 0x228d9c
void sub_00228CA8_0x228ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228CA8_0x228ca8");
#endif

    switch (ctx->pc) {
        case 0x228ca8u: goto label_228ca8;
        case 0x228cacu: goto label_228cac;
        case 0x228cb0u: goto label_228cb0;
        case 0x228cb4u: goto label_228cb4;
        case 0x228cb8u: goto label_228cb8;
        case 0x228cbcu: goto label_228cbc;
        case 0x228cc0u: goto label_228cc0;
        case 0x228cc4u: goto label_228cc4;
        case 0x228cc8u: goto label_228cc8;
        case 0x228cccu: goto label_228ccc;
        case 0x228cd0u: goto label_228cd0;
        case 0x228cd4u: goto label_228cd4;
        case 0x228cd8u: goto label_228cd8;
        case 0x228cdcu: goto label_228cdc;
        case 0x228ce0u: goto label_228ce0;
        case 0x228ce4u: goto label_228ce4;
        case 0x228ce8u: goto label_228ce8;
        case 0x228cecu: goto label_228cec;
        case 0x228cf0u: goto label_228cf0;
        case 0x228cf4u: goto label_228cf4;
        case 0x228cf8u: goto label_228cf8;
        case 0x228cfcu: goto label_228cfc;
        case 0x228d00u: goto label_228d00;
        case 0x228d04u: goto label_228d04;
        case 0x228d08u: goto label_228d08;
        case 0x228d0cu: goto label_228d0c;
        case 0x228d10u: goto label_228d10;
        case 0x228d14u: goto label_228d14;
        case 0x228d18u: goto label_228d18;
        case 0x228d1cu: goto label_228d1c;
        case 0x228d20u: goto label_228d20;
        case 0x228d24u: goto label_228d24;
        case 0x228d28u: goto label_228d28;
        case 0x228d2cu: goto label_228d2c;
        case 0x228d30u: goto label_228d30;
        case 0x228d34u: goto label_228d34;
        case 0x228d38u: goto label_228d38;
        case 0x228d3cu: goto label_228d3c;
        case 0x228d40u: goto label_228d40;
        case 0x228d44u: goto label_228d44;
        case 0x228d48u: goto label_228d48;
        case 0x228d4cu: goto label_228d4c;
        case 0x228d50u: goto label_228d50;
        case 0x228d54u: goto label_228d54;
        case 0x228d58u: goto label_228d58;
        case 0x228d5cu: goto label_228d5c;
        case 0x228d60u: goto label_228d60;
        case 0x228d64u: goto label_228d64;
        case 0x228d68u: goto label_228d68;
        case 0x228d6cu: goto label_228d6c;
        case 0x228d70u: goto label_228d70;
        case 0x228d74u: goto label_228d74;
        case 0x228d78u: goto label_228d78;
        case 0x228d7cu: goto label_228d7c;
        case 0x228d80u: goto label_228d80;
        case 0x228d84u: goto label_228d84;
        case 0x228d88u: goto label_228d88;
        case 0x228d8cu: goto label_228d8c;
        case 0x228d90u: goto label_228d90;
        case 0x228d94u: goto label_228d94;
        case 0x228d98u: goto label_228d98;
        default: break;
    }

    ctx->pc = 0x228ca8u;

label_228ca8:
    // 0x228ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_228cac:
    // 0x228cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228cb0:
    // 0x228cb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x228cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_228cb4:
    // 0x228cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228cb8:
    // 0x228cb8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x228cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_228cbc:
    // 0x228cbc: 0x24111800  addiu       $s1, $zero, 0x1800
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
label_228cc0:
    // 0x228cc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_228cc4:
    // 0x228cc4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x228cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228cc8:
    // 0x228cc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x228cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_228ccc:
    // 0x228ccc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x228cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_228cd0:
    // 0x228cd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228cd4:
    // 0x228cd4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x228cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_228cd8:
    // 0x228cd8: 0x40f809  jalr        $v0
label_228cdc:
    if (ctx->pc == 0x228CDCu) {
        ctx->pc = 0x228CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CD8u;
        // 0x228cdc: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228CE0u;
        goto label_228ce0;
    }
    ctx->pc = 0x228CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228CE0u);
        ctx->pc = 0x228CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CD8u;
        // 0x228cdc: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228CD8u, 0x228CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228CE0u;
label_228ce0:
    // 0x228ce0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x228ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_228ce4:
    // 0x228ce4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x228ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_228ce8:
    // 0x228ce8: 0xc049522  jal         func_125488
label_228cec:
    if (ctx->pc == 0x228CECu) {
        ctx->pc = 0x228CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CE8u;
        // 0x228cec: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228CF0u;
        goto label_228cf0;
    }
    ctx->pc = 0x228CE8u;
    SET_GPR_U32(ctx, 31, 0x228CF0u);
    ctx->pc = 0x228CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228CE8u;
    // 0x228cec: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x228CE8u, 0x228CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228CF0u;
label_228cf0:
    // 0x228cf0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x228cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_228cf4:
    // 0x228cf4: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x228cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228cf8:
    // 0x228cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228cfc:
    // 0x228cfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228d00:
    // 0x228d00: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x228d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228d04:
    // 0x228d04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x228d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_228d08:
    // 0x228d08: 0x40f809  jalr        $v0
label_228d0c:
    if (ctx->pc == 0x228D0Cu) {
        ctx->pc = 0x228D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D08u;
        // 0x228d0c: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D10u;
        goto label_228d10;
    }
    ctx->pc = 0x228D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228D10u);
        ctx->pc = 0x228D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D08u;
        // 0x228d0c: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228D08u, 0x228D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228D10u;
label_228d10:
    // 0x228d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228d14:
    // 0x228d14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x228d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_228d18:
    // 0x228d18: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
label_228d1c:
    if (ctx->pc == 0x228D1Cu) {
        ctx->pc = 0x228D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D18u;
        // 0x228d1c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D20u;
        goto label_228d20;
    }
    ctx->pc = 0x228D18u;
    {
        const bool branch_taken_0x228d18 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x228D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D18u;
        // 0x228d1c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d18) {
            ctx->pc = 0x228D68u;
            goto label_228d68;
        }
    }
    ctx->pc = 0x228D20u;
label_228d20:
    // 0x228d20: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x228d20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_228d24:
    // 0x228d24: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x228d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_228d28:
    // 0x228d28: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x228d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_228d2c:
    // 0x228d2c: 0x60f809  jalr        $v1
label_228d30:
    if (ctx->pc == 0x228D30u) {
        ctx->pc = 0x228D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D2Cu;
        // 0x228d30: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D34u;
        goto label_228d34;
    }
    ctx->pc = 0x228D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x228D34u);
        ctx->pc = 0x228D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D2Cu;
        // 0x228d30: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228D2Cu, 0x228D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228D34u;
label_228d34:
    // 0x228d34: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x228d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_228d38:
    // 0x228d38: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x228d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_228d3c:
    // 0x228d3c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x228d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228d40:
    // 0x228d40: 0xc049522  jal         func_125488
label_228d44:
    if (ctx->pc == 0x228D44u) {
        ctx->pc = 0x228D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D40u;
        // 0x228d44: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D48u;
        goto label_228d48;
    }
    ctx->pc = 0x228D40u;
    SET_GPR_U32(ctx, 31, 0x228D48u);
    ctx->pc = 0x228D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D40u;
    // 0x228d44: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x228D40u, 0x228D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D48u;
label_228d48:
    // 0x228d48: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x228d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_228d4c:
    // 0x228d4c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x228d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_228d50:
    // 0x228d50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x228d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228d54:
    // 0x228d54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x228d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_228d58:
    // 0x228d58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x228d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_228d5c:
    // 0x228d5c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x228d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_228d60:
    // 0x228d60: 0x40f809  jalr        $v0
label_228d64:
    if (ctx->pc == 0x228D64u) {
        ctx->pc = 0x228D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D60u;
        // 0x228d64: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D68u;
        goto label_228d68;
    }
    ctx->pc = 0x228D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228D68u);
        ctx->pc = 0x228D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D60u;
        // 0x228d64: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228D60u, 0x228D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228D68u;
label_228d68:
    // 0x228d68: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_228d6c:
    if (ctx->pc == 0x228D6Cu) {
        ctx->pc = 0x228D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D68u;
        // 0x228d6c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D70u;
        goto label_228d70;
    }
    ctx->pc = 0x228D68u;
    {
        const bool branch_taken_0x228d68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D68u;
        // 0x228d6c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d68) {
            ctx->pc = 0x228D80u;
            goto label_228d80;
        }
    }
    ctx->pc = 0x228D70u;
label_228d70:
    // 0x228d70: 0xc08a0d4  jal         func_228350
label_228d74:
    if (ctx->pc == 0x228D74u) {
        ctx->pc = 0x228D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D70u;
        // 0x228d74: 0x248497f8  addiu       $a0, $a0, -0x6808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D78u;
        goto label_228d78;
    }
    ctx->pc = 0x228D70u;
    SET_GPR_U32(ctx, 31, 0x228D78u);
    ctx->pc = 0x228D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228D70u;
    // 0x228d74: 0x248497f8  addiu       $a0, $a0, -0x6808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228350u, 0x228D70u, 0x228D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228D78u;
label_228d78:
    // 0x228d78: 0x10000002  b           . + 4 + (0x2 << 2)
label_228d7c:
    if (ctx->pc == 0x228D7Cu) {
        ctx->pc = 0x228D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D78u;
        // 0x228d7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D80u;
        goto label_228d80;
    }
    ctx->pc = 0x228D78u;
    {
        const bool branch_taken_0x228d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D78u;
        // 0x228d7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d78) {
            ctx->pc = 0x228D84u;
            goto label_228d84;
        }
    }
    ctx->pc = 0x228D80u;
label_228d80:
    // 0x228d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228d84:
    // 0x228d84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x228d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_228d88:
    // 0x228d88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x228d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_228d8c:
    // 0x228d8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_228d90:
    // 0x228d90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x228d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_228d94:
    // 0x228d94: 0x3e00008  jr          $ra
label_228d98:
    if (ctx->pc == 0x228D98u) {
        ctx->pc = 0x228D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D94u;
        // 0x228d98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228D9Cu;
        goto label_fallthrough_0x228d94;
    }
    ctx->pc = 0x228D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228D94u;
        // 0x228d98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228d94:
    ctx->pc = 0x228D9Cu;
}
