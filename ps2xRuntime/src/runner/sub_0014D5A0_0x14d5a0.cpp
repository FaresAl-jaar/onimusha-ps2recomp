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

// Function: sub_0014D5A0
// Address: 0x14d5a0 - 0x14d6a4
void sub_0014D5A0_0x14d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D5A0_0x14d5a0");
#endif

    switch (ctx->pc) {
        case 0x14d638u: goto label_14d638;
        case 0x14d680u: goto label_14d680;
        default: break;
    }

    ctx->pc = 0x14d5a0u;

    // 0x14d5a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14d5a4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x14d5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x14d5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14d5ac: 0x3402fffe  ori         $v0, $zero, 0xFFFE
    ctx->pc = 0x14d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x14d5b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d5b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d5c0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14D5C0u;
    {
        const bool branch_taken_0x14d5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5C0u;
        // 0x14d5c4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5c0) {
            ctx->pc = 0x14D610u;
            goto label_14d610;
        }
    }
    ctx->pc = 0x14D5C8u;
    // 0x14d5c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14d5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14d5cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D5CCu;
    {
        const bool branch_taken_0x14d5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d5cc) {
            ctx->pc = 0x14D5E0u;
            goto label_14d5e0;
        }
    }
    ctx->pc = 0x14D5D4u;
    // 0x14d5d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14D5D4u;
    {
        const bool branch_taken_0x14d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5d4) {
            ctx->pc = 0x14D628u;
            goto label_14d628;
        }
    }
    ctx->pc = 0x14D5DCu;
    // 0x14d5dc: 0x0  nop
    ctx->pc = 0x14d5dcu;
    // NOP
label_14d5e0:
    // 0x14d5e0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x14d5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x14d5e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D5E4u;
    {
        const bool branch_taken_0x14d5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5E4u;
        // 0x14d5e8: 0x64120002  daddiu      $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5e4) {
            ctx->pc = 0x14D600u;
            goto label_14d600;
        }
    }
    ctx->pc = 0x14D5ECu;
    // 0x14d5ec: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x14d5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x14d5f0: 0x24131860  addiu       $s3, $zero, 0x1860
    ctx->pc = 0x14d5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6240));
    // 0x14d5f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14D5F4u;
    {
        const bool branch_taken_0x14d5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5F4u;
        // 0x14d5f8: 0x2631a040  addiu       $s1, $s1, -0x5FC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5f4) {
            ctx->pc = 0x14D630u;
            goto label_14d630;
        }
    }
    ctx->pc = 0x14D5FCu;
    // 0x14d5fc: 0x0  nop
    ctx->pc = 0x14d5fcu;
    // NOP
label_14d600:
    // 0x14d600: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x14d600u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x14d604: 0x24130420  addiu       $s3, $zero, 0x420
    ctx->pc = 0x14d604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x14d608: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14D608u;
    {
        const bool branch_taken_0x14d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D608u;
        // 0x14d60c: 0x2631a060  addiu       $s1, $s1, -0x5FA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d608) {
            ctx->pc = 0x14D630u;
            goto label_14d630;
        }
    }
    ctx->pc = 0x14D610u;
label_14d610:
    // 0x14d610: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x14d610u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x14d614: 0x64120003  daddiu      $s2, $zero, 0x3
    ctx->pc = 0x14d614u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x14d618: 0x24130820  addiu       $s3, $zero, 0x820
    ctx->pc = 0x14d618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
    // 0x14d61c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D61Cu;
    {
        const bool branch_taken_0x14d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D61Cu;
        // 0x14d620: 0x2631a050  addiu       $s1, $s1, -0x5FB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d61c) {
            ctx->pc = 0x14D630u;
            goto label_14d630;
        }
    }
    ctx->pc = 0x14D624u;
    // 0x14d624: 0x0  nop
    ctx->pc = 0x14d624u;
    // NOP
label_14d628:
    // 0x14d628: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14D628u;
    {
        const bool branch_taken_0x14d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D628u;
        // 0x14d62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d628) {
            ctx->pc = 0x14D688u;
            goto label_14d688;
        }
    }
    ctx->pc = 0x14D630u;
label_14d630:
    // 0x14d630: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x14D630u;
    SET_GPR_U32(ctx, 31, 0x14D638u);
    ctx->pc = 0x14D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D630u;
    // 0x14d634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1343A0u, 0x14D630u, 0x14D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D638u;
label_14d638:
    // 0x14d638: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x14d638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x14d63c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x14d63cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d640: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D640u;
    {
        const bool branch_taken_0x14d640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d640) {
            ctx->pc = 0x14D650u;
            goto label_14d650;
        }
    }
    ctx->pc = 0x14D648u;
    // 0x14d648: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14D648u;
    {
        const bool branch_taken_0x14d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D648u;
        // 0x14d64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d648) {
            ctx->pc = 0x14D688u;
            goto label_14d688;
        }
    }
    ctx->pc = 0x14D650u;
label_14d650:
    // 0x14d650: 0x92080002  lbu         $t0, 0x2($s0)
    ctx->pc = 0x14d650u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x14d654: 0x92070001  lbu         $a3, 0x1($s0)
    ctx->pc = 0x14d654u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x14d658: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x14d658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x14d65c: 0x92090003  lbu         $t1, 0x3($s0)
    ctx->pc = 0x14d65cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x14d660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d664: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x14d664u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d668: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x14d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x14d66c: 0x240600c5  addiu       $a2, $zero, 0xC5
    ctx->pc = 0x14d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x14d670: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x14d670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x14d674: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d678: 0xc050da4  jal         func_143690
    ctx->pc = 0x14D678u;
    SET_GPR_U32(ctx, 31, 0x14D680u);
    ctx->pc = 0x14D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D678u;
    // 0x14d67c: 0x475021  addu        $t2, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143690u, 0x14D678u, 0x14D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D680u;
label_14d680:
    // 0x14d680: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14d680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d684: 0x0  nop
    ctx->pc = 0x14d684u;
    // NOP
label_14d688:
    // 0x14d688: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14d688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d68c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d68cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d69c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D69Cu;
        // 0x14d6a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D6A4u;
}
