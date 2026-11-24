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

// Function: sub_00387C30
// Address: 0x387c30 - 0x387d4c
void sub_00387C30_0x387c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387C30_0x387c30");
#endif

    switch (ctx->pc) {
        case 0x387c5cu: goto label_387c5c;
        case 0x387c6cu: goto label_387c6c;
        case 0x387c90u: goto label_387c90;
        case 0x387ca8u: goto label_387ca8;
        case 0x387cc4u: goto label_387cc4;
        case 0x387ce0u: goto label_387ce0;
        case 0x387d08u: goto label_387d08;
        case 0x387d30u: goto label_387d30;
        default: break;
    }

    ctx->pc = 0x387c30u;

    // 0x387c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x387c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x387c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x387c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x387c40: 0x90832b62  lbu         $v1, 0x2B62($a0)
    ctx->pc = 0x387c40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11106)));
    // 0x387c44: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x387C44u;
    {
        const bool branch_taken_0x387c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C44u;
        // 0x387c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c44) {
            ctx->pc = 0x387D38u;
            goto label_387d38;
        }
    }
    ctx->pc = 0x387C4Cu;
    // 0x387c4c: 0x8e052b38  lw          $a1, 0x2B38($s0)
    ctx->pc = 0x387c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11064)));
    // 0x387c50: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x387c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x387c54: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x387C54u;
    SET_GPR_U32(ctx, 31, 0x387C5Cu);
    ctx->pc = 0x387C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C54u;
    // 0x387c58: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x387C54u, 0x387C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C5Cu;
label_387c5c:
    // 0x387c5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387C5Cu;
    {
        const bool branch_taken_0x387c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C5Cu;
        // 0x387c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c5c) {
            ctx->pc = 0x387C78u;
            goto label_387c78;
        }
    }
    ctx->pc = 0x387C64u;
    // 0x387c64: 0xc0e1ec0  jal         func_387B00
    ctx->pc = 0x387C64u;
    SET_GPR_U32(ctx, 31, 0x387C6Cu);
    ctx->pc = 0x387B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387B00u, 0x387C64u, 0x387C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C6Cu;
label_387c6c:
    // 0x387c6c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x387C6Cu;
    {
        const bool branch_taken_0x387c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387c6c) {
            ctx->pc = 0x387D38u;
            goto label_387d38;
        }
    }
    ctx->pc = 0x387C74u;
    // 0x387c74: 0x0  nop
    ctx->pc = 0x387c74u;
    // NOP
label_387c78:
    // 0x387c78: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x387c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x387c7c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x387c7cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x387c80: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x387C80u;
    {
        const bool branch_taken_0x387c80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x387C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C80u;
        // 0x387c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c80) {
            ctx->pc = 0x387C98u;
            goto label_387c98;
        }
    }
    ctx->pc = 0x387C88u;
    // 0x387c88: 0xc0e1ec0  jal         func_387B00
    ctx->pc = 0x387C88u;
    SET_GPR_U32(ctx, 31, 0x387C90u);
    ctx->pc = 0x387B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387B00u, 0x387C88u, 0x387C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C90u;
label_387c90:
    // 0x387c90: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x387C90u;
    {
        const bool branch_taken_0x387c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387c90) {
            ctx->pc = 0x387D38u;
            goto label_387d38;
        }
    }
    ctx->pc = 0x387C98u;
label_387c98:
    // 0x387c98: 0x96032b66  lhu         $v1, 0x2B66($s0)
    ctx->pc = 0x387c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11110)));
    // 0x387c9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ca0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x387CA0u;
    SET_GPR_U32(ctx, 31, 0x387CA8u);
    ctx->pc = 0x387CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CA0u;
    // 0x387ca4: 0x658823  subu        $s1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x387CA0u, 0x387CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CA8u;
label_387ca8:
    // 0x387ca8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x387ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x387cac: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x387cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x387cb0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x387cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x387cb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387CB4u;
    {
        const bool branch_taken_0x387cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CB4u;
        // 0x387cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387cb4) {
            ctx->pc = 0x387CD0u;
            goto label_387cd0;
        }
    }
    ctx->pc = 0x387CBCu;
    // 0x387cbc: 0xc0e1ec0  jal         func_387B00
    ctx->pc = 0x387CBCu;
    SET_GPR_U32(ctx, 31, 0x387CC4u);
    ctx->pc = 0x387B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387B00u, 0x387CBCu, 0x387CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CC4u;
label_387cc4:
    // 0x387cc4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x387CC4u;
    {
        const bool branch_taken_0x387cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387cc4) {
            ctx->pc = 0x387D38u;
            goto label_387d38;
        }
    }
    ctx->pc = 0x387CCCu;
    // 0x387ccc: 0x0  nop
    ctx->pc = 0x387cccu;
    // NOP
label_387cd0:
    // 0x387cd0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x387cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x387cd4: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x387cd4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x387cd8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x387CD8u;
    SET_GPR_U32(ctx, 31, 0x387CE0u);
    ctx->pc = 0x387CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CD8u;
    // 0x387cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x387CD8u, 0x387CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CE0u;
label_387ce0:
    // 0x387ce0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x387ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x387ce4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x387ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x387ce8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x387ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x387cec: 0x96032b66  lhu         $v1, 0x2B66($s0)
    ctx->pc = 0x387cecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11110)));
    // 0x387cf0: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x387cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x387cf4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x387cf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x387cf8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x387CF8u;
    {
        const bool branch_taken_0x387cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CF8u;
        // 0x387cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387cf8) {
            ctx->pc = 0x387D10u;
            goto label_387d10;
        }
    }
    ctx->pc = 0x387D00u;
    // 0x387d00: 0xc0e1ec0  jal         func_387B00
    ctx->pc = 0x387D00u;
    SET_GPR_U32(ctx, 31, 0x387D08u);
    ctx->pc = 0x387B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387B00u, 0x387D00u, 0x387D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D08u;
label_387d08:
    // 0x387d08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x387D08u;
    {
        const bool branch_taken_0x387d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387d08) {
            ctx->pc = 0x387D38u;
            goto label_387d38;
        }
    }
    ctx->pc = 0x387D10u;
label_387d10:
    // 0x387d10: 0x86032b64  lh          $v1, 0x2B64($s0)
    ctx->pc = 0x387d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11108)));
    // 0x387d14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x387d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x387d18: 0xa6032b64  sh          $v1, 0x2B64($s0)
    ctx->pc = 0x387d18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11108), (uint16_t)GPR_U32(ctx, 3));
    // 0x387d1c: 0x86032b64  lh          $v1, 0x2B64($s0)
    ctx->pc = 0x387d1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11108)));
    // 0x387d20: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x387D20u;
    {
        const bool branch_taken_0x387d20 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x387D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D20u;
        // 0x387d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d20) {
            ctx->pc = 0x387D38u;
            goto label_387d38;
        }
    }
    ctx->pc = 0x387D28u;
    // 0x387d28: 0xc0e1ec0  jal         func_387B00
    ctx->pc = 0x387D28u;
    SET_GPR_U32(ctx, 31, 0x387D30u);
    ctx->pc = 0x387B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387B00u, 0x387D28u, 0x387D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D30u;
label_387d30:
    // 0x387d30: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x387D30u;
    {
        const bool branch_taken_0x387d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387d30) {
            ctx->pc = 0x387D38u;
            goto label_387d38;
        }
    }
    ctx->pc = 0x387D38u;
label_387d38:
    // 0x387d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x387d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387d44: 0x3e00008  jr          $ra
    ctx->pc = 0x387D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D44u;
        // 0x387d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387D4Cu;
}
