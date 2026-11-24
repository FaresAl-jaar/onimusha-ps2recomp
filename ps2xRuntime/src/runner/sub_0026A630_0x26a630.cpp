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

// Function: sub_0026A630
// Address: 0x26a630 - 0x26ae30
void sub_0026A630_0x26a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A630_0x26a630");
#endif

    switch (ctx->pc) {
        case 0x26a680u: goto label_26a680;
        case 0x26a778u: goto label_26a778;
        case 0x26a7d0u: goto label_26a7d0;
        case 0x26a814u: goto label_26a814;
        case 0x26a850u: goto label_26a850;
        case 0x26a860u: goto label_26a860;
        case 0x26a8acu: goto label_26a8ac;
        case 0x26a92cu: goto label_26a92c;
        case 0x26a99cu: goto label_26a99c;
        case 0x26aa0cu: goto label_26aa0c;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26aaccu: goto label_26aacc;
        case 0x26ab34u: goto label_26ab34;
        case 0x26abb4u: goto label_26abb4;
        case 0x26ac24u: goto label_26ac24;
        case 0x26ac94u: goto label_26ac94;
        case 0x26ad04u: goto label_26ad04;
        case 0x26ad54u: goto label_26ad54;
        case 0x26ad98u: goto label_26ad98;
        case 0x26ae04u: goto label_26ae04;
        default: break;
    }

    ctx->pc = 0x26a630u;

    // 0x26a630: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26a634: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26a638: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26a63c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26a640: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x26a640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a644: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26a648: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26a64c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26a64cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a654: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26a654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a65c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x26a65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a664: 0x8f838ab4  lw          $v1, -0x754C($gp)
    ctx->pc = 0x26a664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x26a668: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A668u;
    {
        const bool branch_taken_0x26a668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A668u;
        // 0x26a66c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a668) {
            ctx->pc = 0x26A688u;
            goto label_26a688;
        }
    }
    ctx->pc = 0x26A670u;
    // 0x26a670: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x26a670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x26a674: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x26a674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x26a678: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x26A678u;
    SET_GPR_U32(ctx, 31, 0x26A680u);
    ctx->pc = 0x26A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A678u;
    // 0x26a67c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x26A678u, 0x26A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A680u;
label_26a680:
    // 0x26a680: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a684: 0x0  nop
    ctx->pc = 0x26a684u;
    // NOP
label_26a688:
    // 0x26a688: 0x9283000a  lbu         $v1, 0xA($s4)
    ctx->pc = 0x26a688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x26a68c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x26a68cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x26a690: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x26A690u;
    {
        const bool branch_taken_0x26a690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A690u;
        // 0x26a694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a690) {
            ctx->pc = 0x26A710u;
            goto label_26a710;
        }
    }
    ctx->pc = 0x26A698u;
    // 0x26a698: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x26a698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x26a69c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a6a0: 0x248458e0  addiu       $a0, $a0, 0x58E0
    ctx->pc = 0x26a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22752));
    // 0x26a6a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26a6a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26a6ac: 0x600008  jr          $v1
    ctx->pc = 0x26A6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A6B8u: goto label_26a6b8;
            case 0x26A6D8u: goto label_26a6d8;
            case 0x26A6F8u: goto label_26a6f8;
            case 0x26A700u: goto label_26a700;
            case 0x26A708u: goto label_26a708;
            case 0x26A710u: goto label_26a710;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A6ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26A6B4u;
    // 0x26a6b4: 0x0  nop
    ctx->pc = 0x26a6b4u;
    // NOP
label_26a6b8:
    // 0x26a6b8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26a6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26a6bc: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x26a6bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26a6c0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x26a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a6c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26a6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26a6c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26a6cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26A6CCu;
    {
        const bool branch_taken_0x26a6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6CCu;
        // 0x26a6d0: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6cc) {
            ctx->pc = 0x26A710u;
            goto label_26a710;
        }
    }
    ctx->pc = 0x26A6D4u;
    // 0x26a6d4: 0x0  nop
    ctx->pc = 0x26a6d4u;
    // NOP
label_26a6d8:
    // 0x26a6d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26a6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26a6dc: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x26a6dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26a6e0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x26a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a6e4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x26a6e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x26a6e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26a6ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26a6f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26A6F0u;
    {
        const bool branch_taken_0x26a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6F0u;
        // 0x26a6f4: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6f0) {
            ctx->pc = 0x26A710u;
            goto label_26a710;
        }
    }
    ctx->pc = 0x26A6F8u;
label_26a6f8:
    // 0x26a6f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26A6F8u;
    {
        const bool branch_taken_0x26a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6F8u;
        // 0x26a6fc: 0x8f908060  lw          $s0, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6f8) {
            ctx->pc = 0x26A710u;
            goto label_26a710;
        }
    }
    ctx->pc = 0x26A700u;
label_26a700:
    // 0x26a700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A700u;
    {
        const bool branch_taken_0x26a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A700u;
        // 0x26a704: 0x8f908064  lw          $s0, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a700) {
            ctx->pc = 0x26A710u;
            goto label_26a710;
        }
    }
    ctx->pc = 0x26A708u;
label_26a708:
    // 0x26a708: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26a708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a70c: 0x0  nop
    ctx->pc = 0x26a70cu;
    // NOP
label_26a710:
    // 0x26a710: 0x120001bd  beqz        $s0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x26A710u;
    {
        const bool branch_taken_0x26a710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a710) {
            ctx->pc = 0x26AE08u;
            goto label_26ae08;
        }
    }
    ctx->pc = 0x26A718u;
    // 0x26a718: 0x9284000b  lbu         $a0, 0xB($s4)
    ctx->pc = 0x26a718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x26a71c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a720: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A720u;
    {
        const bool branch_taken_0x26a720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A720u;
        // 0x26a724: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a720) {
            ctx->pc = 0x26A768u;
            goto label_26a768;
        }
    }
    ctx->pc = 0x26A728u;
    // 0x26a728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a72c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A72Cu;
    {
        const bool branch_taken_0x26a72c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a72c) {
            ctx->pc = 0x26A760u;
            goto label_26a760;
        }
    }
    ctx->pc = 0x26A734u;
    // 0x26a734: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A734u;
    {
        const bool branch_taken_0x26a734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a734) {
            ctx->pc = 0x26A748u;
            goto label_26a748;
        }
    }
    ctx->pc = 0x26A73Cu;
    // 0x26a73c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26A73Cu;
    {
        const bool branch_taken_0x26a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a73c) {
            ctx->pc = 0x26A7C8u;
            goto label_26a7c8;
        }
    }
    ctx->pc = 0x26A744u;
    // 0x26a744: 0x0  nop
    ctx->pc = 0x26a744u;
    // NOP
label_26a748:
    // 0x26a748: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x26a748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x26a74c: 0x8682000e  lh          $v0, 0xE($s4)
    ctx->pc = 0x26a74cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x26a750: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a754: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x26a754u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a758: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26A758u;
    {
        const bool branch_taken_0x26a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A758u;
        // 0x26a75c: 0x15ac3f  dsra32      $s5, $s5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a758) {
            ctx->pc = 0x26A7C8u;
            goto label_26a7c8;
        }
    }
    ctx->pc = 0x26A760u;
label_26a760:
    // 0x26a760: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26A760u;
    {
        const bool branch_taken_0x26a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A760u;
        // 0x26a764: 0x8695000e  lh          $s5, 0xE($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a760) {
            ctx->pc = 0x26A7C8u;
            goto label_26a7c8;
        }
    }
    ctx->pc = 0x26A768u;
label_26a768:
    // 0x26a768: 0x122001a7  beqz        $s1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x26A768u;
    {
        const bool branch_taken_0x26a768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A768u;
        // 0x26a76c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a768) {
            ctx->pc = 0x26AE08u;
            goto label_26ae08;
        }
    }
    ctx->pc = 0x26A770u;
    // 0x26a770: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A770u;
    SET_GPR_U32(ctx, 31, 0x26A778u);
    ctx->pc = 0x26A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A770u;
    // 0x26a774: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A770u, 0x26A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A778u;
label_26a778:
    // 0x26a778: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a77c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a780: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a784: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a78c: 0x0  nop
    ctx->pc = 0x26a78cu;
    // NOP
    // 0x26a790: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a794: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a794u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a798: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a79c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a7a0: 0x0  nop
    ctx->pc = 0x26a7a0u;
    // NOP
    // 0x26a7a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a7a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a7a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a7ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a7b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a7b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a7b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a7b8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x26a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x26a7bc: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x26a7bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a7c0: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x26a7c0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x26a7c4: 0x0  nop
    ctx->pc = 0x26a7c4u;
    // NOP
label_26a7c8:
    // 0x26a7c8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x26A7C8u;
    SET_GPR_U32(ctx, 31, 0x26A7D0u);
    ctx->pc = 0x26A7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7C8u;
    // 0x26a7cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x26A7C8u, 0x26A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7D0u;
label_26a7d0:
    // 0x26a7d0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x26a7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a7d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26a7d8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x26a7d8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x26a7dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a7e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x26a7e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a7e4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x26a7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a7e8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x26a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x26a7ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26a7ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26a7f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a7f8: 0x0  nop
    ctx->pc = 0x26a7f8u;
    // NOP
    // 0x26a7fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x26a7fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x26a800: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x26a800u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x26a804: 0x0  nop
    ctx->pc = 0x26a804u;
    // NOP
    // 0x26a808: 0x0  nop
    ctx->pc = 0x26a808u;
    // NOP
    // 0x26a80c: 0xc096784  jal         func_259E10
    ctx->pc = 0x26A80Cu;
    SET_GPR_U32(ctx, 31, 0x26A814u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x26A80Cu, 0x26A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A814u;
label_26a814:
    // 0x26a814: 0x96820010  lhu         $v0, 0x10($s4)
    ctx->pc = 0x26a814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x26a818: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A818u;
    {
        const bool branch_taken_0x26a818 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x26A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A818u;
        // 0x26a81c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a818) {
            ctx->pc = 0x26A82Cu;
            goto label_26a82c;
        }
    }
    ctx->pc = 0x26A820u;
    // 0x26a820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a824: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26A824u;
    {
        const bool branch_taken_0x26a824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A824u;
        // 0x26a828: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a824) {
            ctx->pc = 0x26A844u;
            goto label_26a844;
        }
    }
    ctx->pc = 0x26A82Cu;
label_26a82c:
    // 0x26a82c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26a830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26a830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26a834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26a834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a838: 0x0  nop
    ctx->pc = 0x26a838u;
    // NOP
    // 0x26a83c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x26a83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26a840: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x26a840u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_26a844:
    // 0x26a844: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x26a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26a848: 0xc0414dc  jal         func_105370
    ctx->pc = 0x26A848u;
    SET_GPR_U32(ctx, 31, 0x26A850u);
    ctx->pc = 0x26A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A848u;
    // 0x26a84c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x26A848u, 0x26A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A850u;
label_26a850:
    // 0x26a850: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a854: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x26a854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26a858: 0xc0414ca  jal         func_105328
    ctx->pc = 0x26A858u;
    SET_GPR_U32(ctx, 31, 0x26A860u);
    ctx->pc = 0x26A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A858u;
    // 0x26a85c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x26A858u, 0x26A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A860u;
label_26a860:
    // 0x26a860: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x26a860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x26a864: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x26a864u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x26a868: 0x10200149  beqz        $at, . + 4 + (0x149 << 2)
    ctx->pc = 0x26A868u;
    {
        const bool branch_taken_0x26a868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A868u;
        // 0x26a86c: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a868) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26A870u;
    // 0x26a870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a874: 0x246358b0  addiu       $v1, $v1, 0x58B0
    ctx->pc = 0x26a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22704));
    // 0x26a878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a87c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a880: 0x400008  jr          $v0
    ctx->pc = 0x26A880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A888u: goto label_26a888;
            case 0x26A8F0u: goto label_26a8f0;
            case 0x26A970u: goto label_26a970;
            case 0x26A9E0u: goto label_26a9e0;
            case 0x26AA50u: goto label_26aa50;
            case 0x26AAC0u: goto label_26aac0;
            case 0x26AB10u: goto label_26ab10;
            case 0x26AB78u: goto label_26ab78;
            case 0x26ABF8u: goto label_26abf8;
            case 0x26AC68u: goto label_26ac68;
            case 0x26ACD8u: goto label_26acd8;
            case 0x26AD48u: goto label_26ad48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A880u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26A888u;
label_26a888:
    // 0x26a888: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26a888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26a88c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26a88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26a890: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a894: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a89c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a8a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a8a4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A8A4u;
    SET_GPR_U32(ctx, 31, 0x26A8ACu);
    ctx->pc = 0x26A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A8A4u;
    // 0x26a8a8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A8A4u, 0x26A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8ACu;
label_26a8ac:
    // 0x26a8ac: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a8b0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a8b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a8b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a8bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a8c0: 0x0  nop
    ctx->pc = 0x26a8c0u;
    // NOP
    // 0x26a8c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a8c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a8c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a8cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a8ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a8d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a8d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a8d4: 0x0  nop
    ctx->pc = 0x26a8d4u;
    // NOP
    // 0x26a8d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a8dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a8dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a8e0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a8e4: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x26A8E4u;
    {
        const bool branch_taken_0x26a8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8E4u;
        // 0x26a8e8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8e4) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26A8ECu;
    // 0x26a8ec: 0x0  nop
    ctx->pc = 0x26a8ecu;
    // NOP
label_26a8f0:
    // 0x26a8f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26a8f4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x26a8f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26a8f8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x26a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a8fc: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x26a8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x26a900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a904: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a908: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a90c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A90Cu;
    {
        const bool branch_taken_0x26a90c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A90Cu;
        // 0x26a910: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a90c) {
            ctx->pc = 0x26A920u;
            goto label_26a920;
        }
    }
    ctx->pc = 0x26A914u;
    // 0x26a914: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a918: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a91c: 0x0  nop
    ctx->pc = 0x26a91cu;
    // NOP
label_26a920:
    // 0x26a920: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26a924: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A924u;
    SET_GPR_U32(ctx, 31, 0x26A92Cu);
    ctx->pc = 0x26A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A924u;
    // 0x26a928: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A924u, 0x26A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A92Cu;
label_26a92c:
    // 0x26a92c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a930: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a934: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a938: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a93c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a940: 0x0  nop
    ctx->pc = 0x26a940u;
    // NOP
    // 0x26a944: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a948: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a948u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a94c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a94cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a950: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a954: 0x0  nop
    ctx->pc = 0x26a954u;
    // NOP
    // 0x26a958: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a95c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a95cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a960: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a964: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x26A964u;
    {
        const bool branch_taken_0x26a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A964u;
        // 0x26a968: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a964) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26A96Cu;
    // 0x26a96c: 0x0  nop
    ctx->pc = 0x26a96cu;
    // NOP
label_26a970:
    // 0x26a970: 0x8f908060  lw          $s0, -0x7FA0($gp)
    ctx->pc = 0x26a970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x26a974: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A974u;
    {
        const bool branch_taken_0x26a974 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A974u;
        // 0x26a978: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a974) {
            ctx->pc = 0x26A990u;
            goto label_26a990;
        }
    }
    ctx->pc = 0x26A97Cu;
    // 0x26a97c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a980: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26a980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x26a984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a98c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a98cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a990:
    // 0x26a990: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26a994: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A994u;
    SET_GPR_U32(ctx, 31, 0x26A99Cu);
    ctx->pc = 0x26A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A994u;
    // 0x26a998: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A994u, 0x26A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A99Cu;
label_26a99c:
    // 0x26a99c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a9a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a9a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a9a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a9ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a9b0: 0x0  nop
    ctx->pc = 0x26a9b0u;
    // NOP
    // 0x26a9b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a9b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a9b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a9b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a9bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a9bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a9c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a9c4: 0x0  nop
    ctx->pc = 0x26a9c4u;
    // NOP
    // 0x26a9c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a9cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a9ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a9d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a9d4: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x26A9D4u;
    {
        const bool branch_taken_0x26a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9D4u;
        // 0x26a9d8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9d4) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26A9DCu;
    // 0x26a9dc: 0x0  nop
    ctx->pc = 0x26a9dcu;
    // NOP
label_26a9e0:
    // 0x26a9e0: 0x8f908064  lw          $s0, -0x7F9C($gp)
    ctx->pc = 0x26a9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x26a9e4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A9E4u;
    {
        const bool branch_taken_0x26a9e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9E4u;
        // 0x26a9e8: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a9e4) {
            ctx->pc = 0x26AA00u;
            goto label_26aa00;
        }
    }
    ctx->pc = 0x26A9ECu;
    // 0x26a9ec: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a9f0: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26a9f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x26a9f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a9fc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26aa00:
    // 0x26aa00: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26aa04: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26AA04u;
    SET_GPR_U32(ctx, 31, 0x26AA0Cu);
    ctx->pc = 0x26AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA04u;
    // 0x26aa08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26AA04u, 0x26AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA0Cu;
label_26aa0c:
    // 0x26aa0c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26aa10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26aa14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26aa14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26aa18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26aa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26aa1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26aa1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aa20: 0x0  nop
    ctx->pc = 0x26aa20u;
    // NOP
    // 0x26aa24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26aa24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26aa28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26aa28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26aa2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26aa2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26aa30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26aa30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26aa34: 0x0  nop
    ctx->pc = 0x26aa34u;
    // NOP
    // 0x26aa38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26aa3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26aa3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26aa40: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26aa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26aa44: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x26AA44u;
    {
        const bool branch_taken_0x26aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA44u;
        // 0x26aa48: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa44) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26AA4Cu;
    // 0x26aa4c: 0x0  nop
    ctx->pc = 0x26aa4cu;
    // NOP
label_26aa50:
    // 0x26aa50: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26AA50u;
    {
        const bool branch_taken_0x26aa50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA50u;
        // 0x26aa54: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa50) {
            ctx->pc = 0x26AA70u;
            goto label_26aa70;
        }
    }
    ctx->pc = 0x26AA58u;
    // 0x26aa58: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26aa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26aa5c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26aa60: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26aa60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26aa64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26aa68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26aa6c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26aa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26aa70:
    // 0x26aa70: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26aa74: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26AA74u;
    SET_GPR_U32(ctx, 31, 0x26AA7Cu);
    ctx->pc = 0x26AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AA74u;
    // 0x26aa78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26AA74u, 0x26AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA7Cu;
label_26aa7c:
    // 0x26aa7c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26aa80: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26aa84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26aa84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26aa88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26aa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26aa8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26aa8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aa90: 0x0  nop
    ctx->pc = 0x26aa90u;
    // NOP
    // 0x26aa94: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26aa94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26aa98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26aa98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26aa9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26aa9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26aaa0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26aaa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26aaa4: 0x0  nop
    ctx->pc = 0x26aaa4u;
    // NOP
    // 0x26aaa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26aaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26aaac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26aaacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26aab0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26aab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26aab4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x26AAB4u;
    {
        const bool branch_taken_0x26aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AAB4u;
        // 0x26aab8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aab4) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26AABCu;
    // 0x26aabc: 0x0  nop
    ctx->pc = 0x26aabcu;
    // NOP
label_26aac0:
    // 0x26aac0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26aac4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26AAC4u;
    SET_GPR_U32(ctx, 31, 0x26AACCu);
    ctx->pc = 0x26AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AAC4u;
    // 0x26aac8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26AAC4u, 0x26AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AACCu;
label_26aacc:
    // 0x26aacc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26aad0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26aad4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26aad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26aad8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26aad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26aadc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26aadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aae0: 0x0  nop
    ctx->pc = 0x26aae0u;
    // NOP
    // 0x26aae4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26aae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26aae8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26aae8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26aaec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26aaecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26aaf0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26aaf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26aaf4: 0x0  nop
    ctx->pc = 0x26aaf4u;
    // NOP
    // 0x26aaf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26aaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26aafc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26aafcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26ab00: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ab04: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x26AB04u;
    {
        const bool branch_taken_0x26ab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB04u;
        // 0x26ab08: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab04) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26AB0Cu;
    // 0x26ab0c: 0x0  nop
    ctx->pc = 0x26ab0cu;
    // NOP
label_26ab10:
    // 0x26ab10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26ab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26ab14: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26ab14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26ab18: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26ab1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ab1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ab24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ab28: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26ab28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ab2c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26AB2Cu;
    SET_GPR_U32(ctx, 31, 0x26AB34u);
    ctx->pc = 0x26AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AB2Cu;
    // 0x26ab30: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26AB2Cu, 0x26AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB34u;
label_26ab34:
    // 0x26ab34: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26ab38: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26ab3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26ab3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ab40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26ab44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ab48: 0x0  nop
    ctx->pc = 0x26ab48u;
    // NOP
    // 0x26ab4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26ab4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26ab50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26ab50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26ab54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26ab54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26ab58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26ab58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26ab5c: 0x0  nop
    ctx->pc = 0x26ab5cu;
    // NOP
    // 0x26ab60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26ab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26ab64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26ab64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26ab68: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ab68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ab6c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26AB6Cu;
    {
        const bool branch_taken_0x26ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB6Cu;
        // 0x26ab70: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab6c) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26AB74u;
    // 0x26ab74: 0x0  nop
    ctx->pc = 0x26ab74u;
    // NOP
label_26ab78:
    // 0x26ab78: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26ab78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26ab7c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x26ab7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26ab80: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x26ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26ab84: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x26ab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x26ab88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26ab8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ab90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26ab90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26ab94: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26AB94u;
    {
        const bool branch_taken_0x26ab94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AB94u;
        // 0x26ab98: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ab94) {
            ctx->pc = 0x26ABA8u;
            goto label_26aba8;
        }
    }
    ctx->pc = 0x26AB9Cu;
    // 0x26ab9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26aba0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26aba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26aba4: 0x0  nop
    ctx->pc = 0x26aba4u;
    // NOP
label_26aba8:
    // 0x26aba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26aba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26abac: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26ABACu;
    SET_GPR_U32(ctx, 31, 0x26ABB4u);
    ctx->pc = 0x26ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ABACu;
    // 0x26abb0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26ABACu, 0x26ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABB4u;
label_26abb4:
    // 0x26abb4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26abb8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26abbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26abbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26abc0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26abc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26abc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26abc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26abc8: 0x0  nop
    ctx->pc = 0x26abc8u;
    // NOP
    // 0x26abcc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26abccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26abd0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26abd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26abd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26abd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26abd8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26abd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26abdc: 0x0  nop
    ctx->pc = 0x26abdcu;
    // NOP
    // 0x26abe0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26abe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26abe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26abe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26abe8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26abec: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x26ABECu;
    {
        const bool branch_taken_0x26abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABECu;
        // 0x26abf0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abec) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26ABF4u;
    // 0x26abf4: 0x0  nop
    ctx->pc = 0x26abf4u;
    // NOP
label_26abf8:
    // 0x26abf8: 0x8f908060  lw          $s0, -0x7FA0($gp)
    ctx->pc = 0x26abf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x26abfc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26ABFCu;
    {
        const bool branch_taken_0x26abfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABFCu;
        // 0x26ac00: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abfc) {
            ctx->pc = 0x26AC18u;
            goto label_26ac18;
        }
    }
    ctx->pc = 0x26AC04u;
    // 0x26ac04: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26ac08: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26ac08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x26ac0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ac10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ac14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26ac14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ac18:
    // 0x26ac18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac1c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26AC1Cu;
    SET_GPR_U32(ctx, 31, 0x26AC24u);
    ctx->pc = 0x26AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC1Cu;
    // 0x26ac20: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26AC1Cu, 0x26AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC24u;
label_26ac24:
    // 0x26ac24: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26ac28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26ac2c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26ac2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ac30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26ac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26ac34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ac38: 0x0  nop
    ctx->pc = 0x26ac38u;
    // NOP
    // 0x26ac3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26ac3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26ac40: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26ac40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26ac44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26ac44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26ac48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26ac48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26ac4c: 0x0  nop
    ctx->pc = 0x26ac4cu;
    // NOP
    // 0x26ac50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26ac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26ac54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26ac54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26ac58: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ac58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ac5c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x26AC5Cu;
    {
        const bool branch_taken_0x26ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC5Cu;
        // 0x26ac60: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac5c) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26AC64u;
    // 0x26ac64: 0x0  nop
    ctx->pc = 0x26ac64u;
    // NOP
label_26ac68:
    // 0x26ac68: 0x8f908064  lw          $s0, -0x7F9C($gp)
    ctx->pc = 0x26ac68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x26ac6c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26AC6Cu;
    {
        const bool branch_taken_0x26ac6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC6Cu;
        // 0x26ac70: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac6c) {
            ctx->pc = 0x26AC88u;
            goto label_26ac88;
        }
    }
    ctx->pc = 0x26AC74u;
    // 0x26ac74: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26ac78: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26ac78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x26ac7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ac80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26ac84: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26ac84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26ac88:
    // 0x26ac88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac8c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26AC8Cu;
    SET_GPR_U32(ctx, 31, 0x26AC94u);
    ctx->pc = 0x26AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC8Cu;
    // 0x26ac90: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26AC8Cu, 0x26AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC94u;
label_26ac94:
    // 0x26ac94: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26ac98: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26ac9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26ac9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26aca0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26aca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26aca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26aca8: 0x0  nop
    ctx->pc = 0x26aca8u;
    // NOP
    // 0x26acac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26acacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26acb0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26acb0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26acb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26acb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26acb8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26acb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26acbc: 0x0  nop
    ctx->pc = 0x26acbcu;
    // NOP
    // 0x26acc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26acc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26acc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26acc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26acc8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26acc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26accc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26ACCCu;
    {
        const bool branch_taken_0x26accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACCCu;
        // 0x26acd0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26accc) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26ACD4u;
    // 0x26acd4: 0x0  nop
    ctx->pc = 0x26acd4u;
    // NOP
label_26acd8:
    // 0x26acd8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26ACD8u;
    {
        const bool branch_taken_0x26acd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACD8u;
        // 0x26acdc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26acd8) {
            ctx->pc = 0x26ACF8u;
            goto label_26acf8;
        }
    }
    ctx->pc = 0x26ACE0u;
    // 0x26ace0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26ace0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26ace4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26ace8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26ace8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26acec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26acecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26acf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26acf4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26acf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26acf8:
    // 0x26acf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26acf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26acfc: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26ACFCu;
    SET_GPR_U32(ctx, 31, 0x26AD04u);
    ctx->pc = 0x26AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACFCu;
    // 0x26ad00: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26ACFCu, 0x26AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD04u;
label_26ad04:
    // 0x26ad04: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26ad08: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26ad0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26ad0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ad10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26ad14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ad14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ad18: 0x0  nop
    ctx->pc = 0x26ad18u;
    // NOP
    // 0x26ad1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26ad1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26ad20: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26ad20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26ad24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26ad24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26ad28: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26ad28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26ad2c: 0x0  nop
    ctx->pc = 0x26ad2cu;
    // NOP
    // 0x26ad30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26ad30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26ad34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26ad34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26ad38: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ad38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ad3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26AD3Cu;
    {
        const bool branch_taken_0x26ad3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD3Cu;
        // 0x26ad40: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad3c) {
            ctx->pc = 0x26AD90u;
            goto label_26ad90;
        }
    }
    ctx->pc = 0x26AD44u;
    // 0x26ad44: 0x0  nop
    ctx->pc = 0x26ad44u;
    // NOP
label_26ad48:
    // 0x26ad48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad4c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26AD4Cu;
    SET_GPR_U32(ctx, 31, 0x26AD54u);
    ctx->pc = 0x26AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD4Cu;
    // 0x26ad50: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26AD4Cu, 0x26AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD54u;
label_26ad54:
    // 0x26ad54: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26ad58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26ad5c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26ad5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26ad60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26ad60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26ad64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ad64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ad68: 0x0  nop
    ctx->pc = 0x26ad68u;
    // NOP
    // 0x26ad6c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26ad6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26ad70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26ad70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26ad74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26ad74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26ad78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26ad78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26ad7c: 0x0  nop
    ctx->pc = 0x26ad7cu;
    // NOP
    // 0x26ad80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26ad84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26ad84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26ad88: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26ad88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26ad8c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x26ad8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_26ad90:
    // 0x26ad90: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x26AD90u;
    SET_GPR_U32(ctx, 31, 0x26AD98u);
    ctx->pc = 0x26AD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD90u;
    // 0x26ad94: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x26AD90u, 0x26AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD98u;
label_26ad98:
    // 0x26ad98: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x26ad98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26ad9c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x26ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x26ada0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x26ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x26ada4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26ADA4u;
    {
        const bool branch_taken_0x26ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ada4) {
            ctx->pc = 0x26ADB8u;
            goto label_26adb8;
        }
    }
    ctx->pc = 0x26ADACu;
    // 0x26adac: 0x7a0200d0  lq          $v0, 0xD0($s0)
    ctx->pc = 0x26adacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x26adb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26ADB0u;
    {
        const bool branch_taken_0x26adb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADB0u;
        // 0x26adb4: 0x7ec20000  sq          $v0, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26adb0) {
            ctx->pc = 0x26ADC0u;
            goto label_26adc0;
        }
    }
    ctx->pc = 0x26ADB8u;
label_26adb8:
    // 0x26adb8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x26adb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26adbc: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x26adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_26adc0:
    // 0x26adc0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26adc4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x26adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26adc8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26adc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26adcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26adccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26add0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26add0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26add4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26add8: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x26add8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x26addc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26addcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ade0: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x26ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x26ade4: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x26ade4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26ade8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x26ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26adec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x26adecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26adf0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x26adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x26adf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26adf8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x26adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26adfc: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x26ADFCu;
    SET_GPR_U32(ctx, 31, 0x26AE04u);
    ctx->pc = 0x26AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADFCu;
    // 0x26ae00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B10u, 0x26ADFCu, 0x26AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE04u;
label_26ae04:
    // 0x26ae04: 0x0  nop
    ctx->pc = 0x26ae04u;
    // NOP
label_26ae08:
    // 0x26ae08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26ae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26ae0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26ae0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ae10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26ae10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ae14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26ae14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ae18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26ae18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ae1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ae1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ae20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ae20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ae24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ae24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ae28: 0x3e00008  jr          $ra
    ctx->pc = 0x26AE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE28u;
        // 0x26ae2c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AE30u;
}
