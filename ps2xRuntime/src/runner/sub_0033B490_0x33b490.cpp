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

// Function: sub_0033B490
// Address: 0x33b490 - 0x33b5a4
void sub_0033B490_0x33b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B490_0x33b490");
#endif

    switch (ctx->pc) {
        case 0x33b4ccu: goto label_33b4cc;
        case 0x33b4f8u: goto label_33b4f8;
        case 0x33b530u: goto label_33b530;
        case 0x33b560u: goto label_33b560;
        case 0x33b574u: goto label_33b574;
        case 0x33b588u: goto label_33b588;
        default: break;
    }

    ctx->pc = 0x33b490u;

    // 0x33b490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33b494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33b498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b49c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b4a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33b4a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b4a8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33b4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b4b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33b4b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33b4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4b8: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x33b4b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x33b4bc: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x33b4bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x33b4c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x33b4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4c4: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x33B4C4u;
    SET_GPR_U32(ctx, 31, 0x33B4CCu);
    ctx->pc = 0x33B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B4C4u;
    // 0x33b4c8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x33B4C4u, 0x33B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B4CCu;
label_33b4cc:
    // 0x33b4cc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x33b4ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b4d4: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x33b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x33b4d8: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33b4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33b4dc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x33b4dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b4e0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b4e4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x33b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x33b4e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33b4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33b4ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4f0: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33B4F0u;
    SET_GPR_U32(ctx, 31, 0x33B4F8u);
    ctx->pc = 0x33B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B4F0u;
    // 0x33b4f4: 0x2529ef60  addiu       $t1, $t1, -0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33B4F0u, 0x33B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B4F8u;
label_33b4f8:
    // 0x33b4f8: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x33b4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33b4fc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x33b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33b500: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B500u;
    {
        const bool branch_taken_0x33b500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b500) {
            ctx->pc = 0x33B518u;
            goto label_33b518;
        }
    }
    ctx->pc = 0x33B508u;
    // 0x33b508: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x33b508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x33b50c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33B50Cu;
    {
        const bool branch_taken_0x33b50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b50c) {
            ctx->pc = 0x33B560u;
            goto label_33b560;
        }
    }
    ctx->pc = 0x33B514u;
    // 0x33b514: 0x0  nop
    ctx->pc = 0x33b514u;
    // NOP
label_33b518:
    // 0x33b518: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x33b518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x33b51c: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x33b51cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x33b520: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33b520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b524: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33b524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x33b528: 0xc0bcc2c  jal         func_2F30B0
    ctx->pc = 0x33B528u;
    SET_GPR_U32(ctx, 31, 0x33B530u);
    ctx->pc = 0x33B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B528u;
    // 0x33b52c: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F30B0u, 0x33B528u, 0x33B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B530u;
label_33b530:
    // 0x33b530: 0x3c030102  lui         $v1, 0x102
    ctx->pc = 0x33b530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)258 << 16));
    // 0x33b534: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b538: 0x435025  or          $t2, $v0, $v1
    ctx->pc = 0x33b538u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33b53c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33b53cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33b540: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x33b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x33b544: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33b544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b548: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x33b548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b54c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b550: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x33b550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x33b554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33b554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b558: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33B558u;
    SET_GPR_U32(ctx, 31, 0x33B560u);
    ctx->pc = 0x33B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B558u;
    // 0x33b55c: 0x2529ef60  addiu       $t1, $t1, -0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33B558u, 0x33B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B560u;
label_33b560:
    // 0x33b560: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x33b560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33b564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b568: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x33b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x33b56c: 0xc0cecc0  jal         func_33B300
    ctx->pc = 0x33B56Cu;
    SET_GPR_U32(ctx, 31, 0x33B574u);
    ctx->pc = 0x33B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B56Cu;
    // 0x33b570: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B300u, 0x33B56Cu, 0x33B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B574u;
label_33b574:
    // 0x33b574: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x33b574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33b578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33b578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b57c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33b57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b580: 0xc0cecdc  jal         func_33B370
    ctx->pc = 0x33B580u;
    SET_GPR_U32(ctx, 31, 0x33B588u);
    ctx->pc = 0x33B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B580u;
    // 0x33b584: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B370u, 0x33B580u, 0x33B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B588u;
label_33b588:
    // 0x33b588: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33b588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33b58c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b58cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b59c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B59Cu;
        // 0x33b5a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B5A4u;
}
