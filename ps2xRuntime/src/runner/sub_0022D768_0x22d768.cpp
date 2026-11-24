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

// Function: sub_0022D768
// Address: 0x22d768 - 0x22d868
void sub_0022D768_0x22d768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D768_0x22d768");
#endif

    ctx->pc = 0x22d768u;

    // 0x22d768: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x22d768u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22d76c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x22d76cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d770: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x22d770u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22d774: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x22D774u;
    {
        const bool branch_taken_0x22d774 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D774u;
        // 0x22d778: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d774) {
            ctx->pc = 0x22D860u;
            goto label_22d860;
        }
    }
    ctx->pc = 0x22D77Cu;
    // 0x22d77c: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x22d77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x22d780: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22d784: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x22d784u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x22d788: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22d788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22d78c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22d78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22d790: 0x14850033  bne         $a0, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x22D790u;
    {
        const bool branch_taken_0x22d790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x22D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D790u;
        // 0x22d794: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d790) {
            ctx->pc = 0x22D860u;
            goto label_22d860;
        }
    }
    ctx->pc = 0x22D798u;
    // 0x22d798: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x22d798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x22d79c: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x22d79cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x22d7a0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22d7a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22d7a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x22d7ac: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x22d7acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d7b0: 0x91830004  lbu         $v1, 0x4($t4)
    ctx->pc = 0x22d7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x22d7b4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x22d7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d7b8: 0x91820005  lbu         $v0, 0x5($t4)
    ctx->pc = 0x22d7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x22d7bc: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x22d7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22d7c0: 0x91830006  lbu         $v1, 0x6($t4)
    ctx->pc = 0x22d7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x22d7c4: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x22d7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22d7c8: 0x91840007  lbu         $a0, 0x7($t4)
    ctx->pc = 0x22d7c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x22d7cc: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x22d7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22d7d0: 0x91820008  lbu         $v0, 0x8($t4)
    ctx->pc = 0x22d7d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x22d7d4: 0x9183000a  lbu         $v1, 0xA($t4)
    ctx->pc = 0x22d7d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x22d7d8: 0x91840009  lbu         $a0, 0x9($t4)
    ctx->pc = 0x22d7d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x22d7dc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22d7e0: 0x9185000b  lbu         $a1, 0xB($t4)
    ctx->pc = 0x22d7e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x22d7e4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22d7e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22d7ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22d7f0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22d7f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22d7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22d7f8: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x22d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x22d7fc: 0x9183000d  lbu         $v1, 0xD($t4)
    ctx->pc = 0x22d7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x22d800: 0x9182000c  lbu         $v0, 0xC($t4)
    ctx->pc = 0x22d800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x22d804: 0x9184000e  lbu         $a0, 0xE($t4)
    ctx->pc = 0x22d804u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x22d808: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22d808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22d80c: 0x9185000f  lbu         $a1, 0xF($t4)
    ctx->pc = 0x22d80cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x22d810: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x22d810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x22d814: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22d814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22d818: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22d818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22d81c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x22d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d820: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x22d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x22d824: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x22d824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x22d828: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22d828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22d82c: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x22d82cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x22d830: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D830u;
    {
        const bool branch_taken_0x22d830 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d830) {
            ctx->pc = 0x22D834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D830u;
            // 0x22d834: 0x81220000  lb          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D840u;
            goto label_22d840;
        }
    }
    ctx->pc = 0x22D838u;
    // 0x22d838: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22D838u;
    {
        const bool branch_taken_0x22d838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D838u;
        // 0x22d83c: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d838) {
            ctx->pc = 0x22D85Cu;
            goto label_22d85c;
        }
    }
    ctx->pc = 0x22D840u;
label_22d840:
    // 0x22d840: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22D840u;
    {
        const bool branch_taken_0x22d840 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d840) {
            ctx->pc = 0x22D844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D840u;
            // 0x22d844: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D848u;
            goto label_22d848;
        }
    }
    ctx->pc = 0x22D848u;
label_22d848:
    // 0x22d848: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x22d848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x22d84c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x22d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x22d850: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x22d850u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22d854: 0x1012  mflo        $v0
    ctx->pc = 0x22d854u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x22d858: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x22d858u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_22d85c:
    // 0x22d85c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d860:
    // 0x22d860: 0x3e00008  jr          $ra
    ctx->pc = 0x22D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D868u;
}
