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

// Function: sub_0038C5C0
// Address: 0x38c5c0 - 0x38c6d8
void sub_0038C5C0_0x38c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C5C0_0x38c5c0");
#endif

    switch (ctx->pc) {
        case 0x38c618u: goto label_38c618;
        case 0x38c634u: goto label_38c634;
        case 0x38c654u: goto label_38c654;
        case 0x38c67cu: goto label_38c67c;
        default: break;
    }

    ctx->pc = 0x38c5c0u;

    // 0x38c5c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x38c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x38c5c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x38c5c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x38c5cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x38c5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x38c5d0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x38c5d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c5d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x38c5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x38c5d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x38c5d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c5dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38c5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38c5e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38c5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c5e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38c5e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x38c5e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38c5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38c5f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x38c5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c5f4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x38c5f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c5f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c5fc: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x38c5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x38c600: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x38c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x38c604: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x38c604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x38c608: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38c608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c60c: 0x2508c550  addiu       $t0, $t0, -0x3AB0
    ctx->pc = 0x38c60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952272));
    // 0x38c610: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x38C610u;
    SET_GPR_U32(ctx, 31, 0x38C618u);
    ctx->pc = 0x38C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C610u;
    // 0x38c614: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x38C610u, 0x38C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C618u;
label_38c618:
    // 0x38c618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38c618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c61c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x38C61Cu;
    {
        const bool branch_taken_0x38c61c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C61Cu;
        // 0x38c620: 0x324700ff  andi        $a3, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c61c) {
            ctx->pc = 0x38C6A8u;
            goto label_38c6a8;
        }
    }
    ctx->pc = 0x38C624u;
    // 0x38c624: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38c628: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c62c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x38C62Cu;
    SET_GPR_U32(ctx, 31, 0x38C634u);
    ctx->pc = 0x38C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C62Cu;
    // 0x38c630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x38C62Cu, 0x38C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C634u;
label_38c634:
    // 0x38c634: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x38c634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c638: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x38c638u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c63c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x38c63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c644: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x38c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38c648: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x38c648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38c64c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x38C64Cu;
    SET_GPR_U32(ctx, 31, 0x38C654u);
    ctx->pc = 0x38C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C64Cu;
    // 0x38c650: 0x27aa00b0  addiu       $t2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x38C64Cu, 0x38C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C654u;
label_38c654:
    // 0x38c654: 0x24057ffd  addiu       $a1, $zero, 0x7FFD
    ctx->pc = 0x38c654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x38c658: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x38c658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x38c65c: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x38c65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x38c660: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38c664: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x38c664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x38c668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c66c: 0xa605052a  sh          $a1, 0x52A($s0)
    ctx->pc = 0x38c66cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 5));
    // 0x38c670: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x38c670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x38c674: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x38C674u;
    SET_GPR_U32(ctx, 31, 0x38C67Cu);
    ctx->pc = 0x38C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C674u;
    // 0x38c678: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x38C674u, 0x38C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C67Cu;
label_38c67c:
    // 0x38c67c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x38c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x38c680: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38c680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x38c684: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x38c684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x38c688: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x38c688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x38c68c: 0xae02055c  sw          $v0, 0x55C($s0)
    ctx->pc = 0x38c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 2));
    // 0x38c690: 0xa2160560  sb          $s6, 0x560($s0)
    ctx->pc = 0x38c690u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1376), (uint8_t)GPR_U32(ctx, 22));
    // 0x38c694: 0xa2000561  sb          $zero, 0x561($s0)
    ctx->pc = 0x38c694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1377), (uint8_t)GPR_U32(ctx, 0));
    // 0x38c698: 0xa2120562  sb          $s2, 0x562($s0)
    ctx->pc = 0x38c698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1378), (uint8_t)GPR_U32(ctx, 18));
    // 0x38c69c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38C69Cu;
    {
        const bool branch_taken_0x38c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C69Cu;
        // 0x38c6a0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c69c) {
            ctx->pc = 0x38C6B0u;
            goto label_38c6b0;
        }
    }
    ctx->pc = 0x38C6A4u;
    // 0x38c6a4: 0x0  nop
    ctx->pc = 0x38c6a4u;
    // NOP
label_38c6a8:
    // 0x38c6a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38c6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c6ac: 0x0  nop
    ctx->pc = 0x38c6acu;
    // NOP
label_38c6b0:
    // 0x38c6b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38c6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38c6b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x38c6b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c6b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38c6b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c6bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38c6bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c6c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38c6c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c6c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38c6c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c6c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38c6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x38C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6D0u;
        // 0x38c6d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C6D8u;
}
