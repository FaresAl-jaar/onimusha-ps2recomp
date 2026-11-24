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

// Function: sub_003D6500
// Address: 0x3d6500 - 0x3d65d4
void sub_003D6500_0x3d6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6500_0x3d6500");
#endif

    switch (ctx->pc) {
        case 0x3d6500u: goto label_3d6500;
        case 0x3d6504u: goto label_3d6504;
        case 0x3d6508u: goto label_3d6508;
        case 0x3d650cu: goto label_3d650c;
        case 0x3d6510u: goto label_3d6510;
        case 0x3d6514u: goto label_3d6514;
        case 0x3d6518u: goto label_3d6518;
        case 0x3d651cu: goto label_3d651c;
        case 0x3d6520u: goto label_3d6520;
        case 0x3d6524u: goto label_3d6524;
        case 0x3d6528u: goto label_3d6528;
        case 0x3d652cu: goto label_3d652c;
        case 0x3d6530u: goto label_3d6530;
        case 0x3d6534u: goto label_3d6534;
        case 0x3d6538u: goto label_3d6538;
        case 0x3d653cu: goto label_3d653c;
        case 0x3d6540u: goto label_3d6540;
        case 0x3d6544u: goto label_3d6544;
        case 0x3d6548u: goto label_3d6548;
        case 0x3d654cu: goto label_3d654c;
        case 0x3d6550u: goto label_3d6550;
        case 0x3d6554u: goto label_3d6554;
        case 0x3d6558u: goto label_3d6558;
        case 0x3d655cu: goto label_3d655c;
        case 0x3d6560u: goto label_3d6560;
        case 0x3d6564u: goto label_3d6564;
        case 0x3d6568u: goto label_3d6568;
        case 0x3d656cu: goto label_3d656c;
        case 0x3d6570u: goto label_3d6570;
        case 0x3d6574u: goto label_3d6574;
        case 0x3d6578u: goto label_3d6578;
        case 0x3d657cu: goto label_3d657c;
        case 0x3d6580u: goto label_3d6580;
        case 0x3d6584u: goto label_3d6584;
        case 0x3d6588u: goto label_3d6588;
        case 0x3d658cu: goto label_3d658c;
        case 0x3d6590u: goto label_3d6590;
        case 0x3d6594u: goto label_3d6594;
        case 0x3d6598u: goto label_3d6598;
        case 0x3d659cu: goto label_3d659c;
        case 0x3d65a0u: goto label_3d65a0;
        case 0x3d65a4u: goto label_3d65a4;
        case 0x3d65a8u: goto label_3d65a8;
        case 0x3d65acu: goto label_3d65ac;
        case 0x3d65b0u: goto label_3d65b0;
        case 0x3d65b4u: goto label_3d65b4;
        case 0x3d65b8u: goto label_3d65b8;
        case 0x3d65bcu: goto label_3d65bc;
        case 0x3d65c0u: goto label_3d65c0;
        case 0x3d65c4u: goto label_3d65c4;
        case 0x3d65c8u: goto label_3d65c8;
        case 0x3d65ccu: goto label_3d65cc;
        case 0x3d65d0u: goto label_3d65d0;
        default: break;
    }

    ctx->pc = 0x3d6500u;

label_3d6500:
    // 0x3d6500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3d6504:
    // 0x3d6504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d6504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d6508:
    // 0x3d6508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d650c:
    // 0x3d650c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d6510:
    // 0x3d6510: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3d6510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d6514:
    // 0x3d6514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d6514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d6518:
    // 0x3d6518: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d6518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d651c:
    // 0x3d651c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d6520:
    // 0x3d6520: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
label_3d6524:
    if (ctx->pc == 0x3D6524u) {
        ctx->pc = 0x3D6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6520u;
        // 0x3d6524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6528u;
        goto label_3d6528;
    }
    ctx->pc = 0x3D6520u;
    {
        const bool branch_taken_0x3d6520 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x3D6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6520u;
        // 0x3d6524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6520) {
            ctx->pc = 0x3D6538u;
            goto label_3d6538;
        }
    }
    ctx->pc = 0x3D6528u;
label_3d6528:
    // 0x3d6528: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x3d6528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_3d652c:
    // 0x3d652c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_3d6530:
    if (ctx->pc == 0x3D6530u) {
        ctx->pc = 0x3D6534u;
        goto label_3d6534;
    }
    ctx->pc = 0x3D652Cu;
    {
        const bool branch_taken_0x3d652c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d652c) {
            ctx->pc = 0x3D6540u;
            goto label_3d6540;
        }
    }
    ctx->pc = 0x3D6534u;
label_3d6534:
    // 0x3d6534: 0x0  nop
    ctx->pc = 0x3d6534u;
    // NOP
label_3d6538:
    // 0x3d6538: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3d653c:
    if (ctx->pc == 0x3D653Cu) {
        ctx->pc = 0x3D6540u;
        goto label_3d6540;
    }
    ctx->pc = 0x3D6538u;
    {
        const bool branch_taken_0x3d6538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6538) {
            ctx->pc = 0x3D65B8u;
            goto label_3d65b8;
        }
    }
    ctx->pc = 0x3D6540u;
label_3d6540:
    // 0x3d6540: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x3d6540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_3d6544:
    // 0x3d6544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d6544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6548:
    // 0x3d6548: 0xc0b2ebc  jal         func_2CBAF0
label_3d654c:
    if (ctx->pc == 0x3D654Cu) {
        ctx->pc = 0x3D654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6548u;
        // 0x3d654c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6550u;
        goto label_3d6550;
    }
    ctx->pc = 0x3D6548u;
    SET_GPR_U32(ctx, 31, 0x3D6550u);
    ctx->pc = 0x3D654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6548u;
    // 0x3d654c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x3D6548u, 0x3D6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6550u;
label_3d6550:
    // 0x3d6550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d6550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d6554:
    // 0x3d6554: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_3d6558:
    if (ctx->pc == 0x3D6558u) {
        ctx->pc = 0x3D655Cu;
        goto label_3d655c;
    }
    ctx->pc = 0x3D6554u;
    {
        const bool branch_taken_0x3d6554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6554) {
            ctx->pc = 0x3D6580u;
            goto label_3d6580;
        }
    }
    ctx->pc = 0x3D655Cu;
label_3d655c:
    // 0x3d655c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d6560:
    // 0x3d6560: 0xa22207d8  sb          $v0, 0x7D8($s1)
    ctx->pc = 0x3d6560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2008), (uint8_t)GPR_U32(ctx, 2));
label_3d6564:
    // 0x3d6564: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d6564u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3d6568:
    // 0x3d6568: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3d6568u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3d656c:
    // 0x3d656c: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x3d656cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_3d6570:
    // 0x3d6570: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3d6570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3d6574:
    // 0x3d6574: 0x320f809  jalr        $t9
label_3d6578:
    if (ctx->pc == 0x3D6578u) {
        ctx->pc = 0x3D6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6574u;
        // 0x3d6578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D657Cu;
        goto label_3d657c;
    }
    ctx->pc = 0x3D6574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D657Cu);
        ctx->pc = 0x3D6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6574u;
        // 0x3d6578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6574u, 0x3D657Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D657Cu;
label_3d657c:
    // 0x3d657c: 0x0  nop
    ctx->pc = 0x3d657cu;
    // NOP
label_3d6580:
    // 0x3d6580: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_3d6584:
    if (ctx->pc == 0x3D6584u) {
        ctx->pc = 0x3D6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6580u;
        // 0x3d6584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6588u;
        goto label_3d6588;
    }
    ctx->pc = 0x3D6580u;
    {
        const bool branch_taken_0x3d6580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6580u;
        // 0x3d6584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6580) {
            ctx->pc = 0x3D65B8u;
            goto label_3d65b8;
        }
    }
    ctx->pc = 0x3D6588u;
label_3d6588:
    // 0x3d6588: 0xc096fb8  jal         func_25BEE0
label_3d658c:
    if (ctx->pc == 0x3D658Cu) {
        ctx->pc = 0x3D658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6588u;
        // 0x3d658c: 0xa2332c73  sb          $s3, 0x2C73($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11379), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D6590u;
        goto label_3d6590;
    }
    ctx->pc = 0x3D6588u;
    SET_GPR_U32(ctx, 31, 0x3D6590u);
    ctx->pc = 0x3D658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6588u;
    // 0x3d658c: 0xa2332c73  sb          $s3, 0x2C73($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11379), (uint8_t)GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3D6588u, 0x3D6590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6590u;
label_3d6590:
    // 0x3d6590: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3d6590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_3d6594:
    // 0x3d6594: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d6594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d6598:
    // 0x3d6598: 0xc0aaab4  jal         func_2AAAD0
label_3d659c:
    if (ctx->pc == 0x3D659Cu) {
        ctx->pc = 0x3D659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6598u;
        // 0x3d659c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D65A0u;
        goto label_3d65a0;
    }
    ctx->pc = 0x3D6598u;
    SET_GPR_U32(ctx, 31, 0x3D65A0u);
    ctx->pc = 0x3D659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6598u;
    // 0x3d659c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAAD0u, 0x3D6598u, 0x3D65A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D65A0u;
label_3d65a0:
    // 0x3d65a0: 0xae222c74  sw          $v0, 0x2C74($s1)
    ctx->pc = 0x3d65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11380), GPR_U32(ctx, 2));
label_3d65a4:
    // 0x3d65a4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x3d65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3d65a8:
    // 0x3d65a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3d65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d65ac:
    // 0x3d65ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3d65acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3d65b0:
    // 0x3d65b0: 0xac642b98  sw          $a0, 0x2B98($v1)
    ctx->pc = 0x3d65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11160), GPR_U32(ctx, 4));
label_3d65b4:
    // 0x3d65b4: 0x0  nop
    ctx->pc = 0x3d65b4u;
    // NOP
label_3d65b8:
    // 0x3d65b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d65b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d65bc:
    // 0x3d65bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d65bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d65c0:
    // 0x3d65c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d65c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d65c4:
    // 0x3d65c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d65c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d65c8:
    // 0x3d65c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d65c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d65cc:
    // 0x3d65cc: 0x3e00008  jr          $ra
label_3d65d0:
    if (ctx->pc == 0x3D65D0u) {
        ctx->pc = 0x3D65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65CCu;
        // 0x3d65d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D65D4u;
        goto label_fallthrough_0x3d65cc;
    }
    ctx->pc = 0x3D65CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D65CCu;
        // 0x3d65d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D65CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d65cc:
    ctx->pc = 0x3D65D4u;
}
