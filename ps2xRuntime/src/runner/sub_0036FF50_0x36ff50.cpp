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

// Function: sub_0036FF50
// Address: 0x36ff50 - 0x370048
void sub_0036FF50_0x36ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FF50_0x36ff50");
#endif

    switch (ctx->pc) {
        case 0x36ffc0u: goto label_36ffc0;
        case 0x37000cu: goto label_37000c;
        case 0x370030u: goto label_370030;
        default: break;
    }

    ctx->pc = 0x36ff50u;

    // 0x36ff50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36ff54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36ff58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36ff5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36ff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36ff60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36ff64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36ff68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36ff68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff6c: 0x80850116  lb          $a1, 0x116($a0)
    ctx->pc = 0x36ff6cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 278)));
    // 0x36ff70: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x36FF70u;
    {
        const bool branch_taken_0x36ff70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF70u;
        // 0x36ff74: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff70) {
            ctx->pc = 0x370030u;
            goto label_370030;
        }
    }
    ctx->pc = 0x36FF78u;
    // 0x36ff78: 0x908b0118  lbu         $t3, 0x118($a0)
    ctx->pc = 0x36ff78u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x36ff7c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x36ff7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x36ff80: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x36ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x36ff84: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x36ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36ff88: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36ff88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x36ff8c: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x36ff8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x36ff90: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x36ff90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x36ff94: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x36ff94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x36ff98: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x36ff98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x36ff9c: 0x25291920  addiu       $t1, $t1, 0x1920
    ctx->pc = 0x36ff9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6432));
    // 0x36ffa0: 0xa3ab004c  sb          $t3, 0x4C($sp)
    ctx->pc = 0x36ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 11));
    // 0x36ffa4: 0xa3aa004d  sb          $t2, 0x4D($sp)
    ctx->pc = 0x36ffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 10));
    // 0x36ffa8: 0xa3a3004e  sb          $v1, 0x4E($sp)
    ctx->pc = 0x36ffa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x36ffac: 0xa3a2004f  sb          $v0, 0x4F($sp)
    ctx->pc = 0x36ffacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x36ffb0: 0x808a0115  lb          $t2, 0x115($a0)
    ctx->pc = 0x36ffb0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 277)));
    // 0x36ffb4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36ffb8: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x36FFB8u;
    SET_GPR_U32(ctx, 31, 0x36FFC0u);
    ctx->pc = 0x36FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FFB8u;
    // 0x36ffbc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x36FFB8u, 0x36FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FFC0u;
label_36ffc0:
    // 0x36ffc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36ffc4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x36ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x36ffc8: 0x8c27ceb0  lw          $a3, -0x3150($at)
    ctx->pc = 0x36ffc8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEB0u));
    // 0x36ffcc: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x36ffccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x36ffd0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x36ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x36ffd4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x36ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x36ffd8: 0x2463abf0  addiu       $v1, $v1, -0x5410
    ctx->pc = 0x36ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945776));
    // 0x36ffdc: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x36ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ffe0: 0x24846a78  addiu       $a0, $a0, 0x6A78
    ctx->pc = 0x36ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27256));
    // 0x36ffe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ffe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ffe8: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x36ffe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x36ffec: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x36ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x36fff0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x36fff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x36fff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36fff8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36fffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x370000: 0x24520014  addiu       $s2, $v0, 0x14
    ctx->pc = 0x370000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x370004: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x370004u;
    SET_GPR_U32(ctx, 31, 0x37000Cu);
    ctx->pc = 0x370008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370004u;
    // 0x370008: 0x2123823  subu        $a3, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x370004u, 0x37000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37000Cu;
label_37000c:
    // 0x37000c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x37000cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x370010: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x370010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x370014: 0x2123821  addu        $a3, $s0, $s2
    ctx->pc = 0x370014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x370018: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x370018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37001c: 0x24846a84  addiu       $a0, $a0, 0x6A84
    ctx->pc = 0x37001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27268));
    // 0x370020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370024: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x370024u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x370028: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x370028u;
    SET_GPR_U32(ctx, 31, 0x370030u);
    ctx->pc = 0x37002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370028u;
    // 0x37002c: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x370028u, 0x370030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370030u;
label_370030:
    // 0x370030: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x370030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x370034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37003c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37003cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370040: 0x3e00008  jr          $ra
    ctx->pc = 0x370040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370040u;
        // 0x370044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370048u;
}
