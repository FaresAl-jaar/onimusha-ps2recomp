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

// Function: sub_002170F8
// Address: 0x2170f8 - 0x2171ec
void sub_002170F8_0x2170f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002170F8_0x2170f8");
#endif

    switch (ctx->pc) {
        case 0x217190u: goto label_217190;
        default: break;
    }

    ctx->pc = 0x2170f8u;

    // 0x2170f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2170f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2170fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2170fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217104: 0x25100d30  addiu       $s0, $t0, 0xD30
    ctx->pc = 0x217104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 3376));
    // 0x217108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21710c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217114: 0x8cb10014  lw          $s1, 0x14($a1)
    ctx->pc = 0x217114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x217118: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x21711c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x21711Cu;
    {
        const bool branch_taken_0x21711c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x217120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21711Cu;
        // 0x217120: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21711c) {
            ctx->pc = 0x217148u;
            goto label_217148;
        }
    }
    ctx->pc = 0x217124u;
    // 0x217124: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x217124u;
    {
        const bool branch_taken_0x217124 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x217128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217124u;
        // 0x217128: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217124) {
            ctx->pc = 0x217148u;
            goto label_217148;
        }
    }
    ctx->pc = 0x21712Cu;
    // 0x21712c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21712cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217138: 0x25080d4c  addiu       $t0, $t0, 0xD4C
    ctx->pc = 0x217138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3404));
    // 0x21713c: 0x8085c7c  j           func_2171F0
    ctx->pc = 0x21713Cu;
    ctx->pc = 0x217140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21713Cu;
    // 0x217140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2171F0u;
    sub_002171F0_0x2171f0(rdram, ctx, runtime); return;
    ctx->pc = 0x217144u;
    // 0x217144: 0x0  nop
    ctx->pc = 0x217144u;
    // NOP
label_217148:
    // 0x217148: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x217148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x21714c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21714Cu;
    {
        const bool branch_taken_0x21714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21714c) {
            ctx->pc = 0x217180u;
            goto label_217180;
        }
    }
    ctx->pc = 0x217154u;
    // 0x217154: 0x8d0236b0  lw          $v0, 0x36B0($t0)
    ctx->pc = 0x217154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 14000)));
    // 0x217158: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x217158u;
    {
        const bool branch_taken_0x217158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217158) {
            ctx->pc = 0x21715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217158u;
            // 0x21715c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2171DCu;
            goto label_2171dc;
        }
    }
    ctx->pc = 0x217160u;
    // 0x217160: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x217160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x217164: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x217164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x217168: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x217168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x21716c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x21716cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x217170: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x217170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x217174: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x217174u;
    {
        const bool branch_taken_0x217174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217174u;
        // 0x217178: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217174) {
            ctx->pc = 0x2171D8u;
            goto label_2171d8;
        }
    }
    ctx->pc = 0x21717Cu;
    // 0x21717c: 0x0  nop
    ctx->pc = 0x21717cu;
    // NOP
label_217180:
    // 0x217180: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x217180u;
    {
        const bool branch_taken_0x217180 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x217184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217180u;
        // 0x217184: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217180) {
            ctx->pc = 0x2171A8u;
            goto label_2171a8;
        }
    }
    ctx->pc = 0x217188u;
    // 0x217188: 0xc085d02  jal         func_217408
    ctx->pc = 0x217188u;
    SET_GPR_U32(ctx, 31, 0x217190u);
    ctx->pc = 0x21718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217188u;
    // 0x21718c: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217408u, 0x217188u, 0x217190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217190u;
label_217190:
    // 0x217190: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x217194: 0x9603003a  lhu         $v1, 0x3A($s0)
    ctx->pc = 0x217194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x217198: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x217198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21719c: 0xa60304b2  sh          $v1, 0x4B2($s0)
    ctx->pc = 0x21719cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1202), (uint16_t)GPR_U32(ctx, 3));
    // 0x2171a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2171A0u;
    {
        const bool branch_taken_0x2171a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171A0u;
        // 0x2171a4: 0xa44304b2  sh          $v1, 0x4B2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1202), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171a0) {
            ctx->pc = 0x2171D8u;
            goto label_2171d8;
        }
    }
    ctx->pc = 0x2171A8u;
label_2171a8:
    // 0x2171a8: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2171ac: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2171b0: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x2171b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2171b4: 0x8e060078  lw          $a2, 0x78($s0)
    ctx->pc = 0x2171b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2171b8: 0x8e07007c  lw          $a3, 0x7C($s0)
    ctx->pc = 0x2171b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2171bc: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2171c0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2171c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2171c4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2171c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2171c8: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2171c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2171cc: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x2171ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x2171d0: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x2171d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x2171d4: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x2171d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
label_2171d8:
    // 0x2171d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2171d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2171dc:
    // 0x2171dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2171dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2171e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2171e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2171e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2171E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2171E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171E4u;
        // 0x2171e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2171E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2171ECu;
}
