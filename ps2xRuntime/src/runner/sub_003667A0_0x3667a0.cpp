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

// Function: sub_003667A0
// Address: 0x3667a0 - 0x366a44
void sub_003667A0_0x3667a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003667A0_0x3667a0");
#endif

    switch (ctx->pc) {
        case 0x3667dcu: goto label_3667dc;
        case 0x3667e4u: goto label_3667e4;
        case 0x3667ecu: goto label_3667ec;
        case 0x366820u: goto label_366820;
        case 0x36683cu: goto label_36683c;
        case 0x366870u: goto label_366870;
        case 0x36688cu: goto label_36688c;
        case 0x36689cu: goto label_36689c;
        case 0x3668d0u: goto label_3668d0;
        case 0x36690cu: goto label_36690c;
        case 0x366920u: goto label_366920;
        case 0x36693cu: goto label_36693c;
        case 0x366944u: goto label_366944;
        case 0x36694cu: goto label_36694c;
        case 0x3669c4u: goto label_3669c4;
        case 0x3669ccu: goto label_3669cc;
        case 0x3669d4u: goto label_3669d4;
        case 0x3669f8u: goto label_3669f8;
        case 0x366a08u: goto label_366a08;
        case 0x366a14u: goto label_366a14;
        case 0x366a2cu: goto label_366a2c;
        default: break;
    }

    ctx->pc = 0x3667a0u;

    // 0x3667a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3667a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3667a4: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3667a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3667a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3667a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3667ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3667acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3667b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3667b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3667b4: 0x9022e020  lbu         $v0, -0x1FE0($at)
    ctx->pc = 0x3667b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8DE020u));
    // 0x3667b8: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x3667B8u;
    {
        const bool branch_taken_0x3667b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3667BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3667B8u;
        // 0x3667bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3667b8) {
            ctx->pc = 0x3669D8u;
            goto label_3669d8;
        }
    }
    ctx->pc = 0x3667C0u;
    // 0x3667c0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3667c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3667c4: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3667c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3667c8: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x3667c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3667cc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3667CCu;
    {
        const bool branch_taken_0x3667cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3667cc) {
            ctx->pc = 0x366828u;
            goto label_366828;
        }
    }
    ctx->pc = 0x3667D4u;
    // 0x3667d4: 0xc0d27e8  jal         func_349FA0
    ctx->pc = 0x3667D4u;
    SET_GPR_U32(ctx, 31, 0x3667DCu);
    ctx->pc = 0x349FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349FA0u, 0x3667D4u, 0x3667DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667DCu;
label_3667dc:
    // 0x3667dc: 0xc0d2800  jal         func_34A000
    ctx->pc = 0x3667DCu;
    SET_GPR_U32(ctx, 31, 0x3667E4u);
    ctx->pc = 0x34A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A000u, 0x3667DCu, 0x3667E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667E4u;
label_3667e4:
    // 0x3667e4: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x3667E4u;
    SET_GPR_U32(ctx, 31, 0x3667ECu);
    ctx->pc = 0x3667E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3667E4u;
    // 0x3667e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x3667E4u, 0x3667ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667ECu;
label_3667ec:
    // 0x3667ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3667ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3667f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3667f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3667f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3667f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3667f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3667f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3667fc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3667fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x366800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366804: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366808: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36680c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36680cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366810: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366814: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366818: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366818u;
    SET_GPR_U32(ctx, 31, 0x366820u);
    ctx->pc = 0x36681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366818u;
    // 0x36681c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366818u, 0x366820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366820u;
label_366820:
    // 0x366820: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x366820u;
    {
        const bool branch_taken_0x366820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366820) {
            ctx->pc = 0x366A30u;
            goto label_366a30;
        }
    }
    ctx->pc = 0x366828u;
label_366828:
    // 0x366828: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x366828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x36682c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36682Cu;
    {
        const bool branch_taken_0x36682c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36682c) {
            ctx->pc = 0x366878u;
            goto label_366878;
        }
    }
    ctx->pc = 0x366834u;
    // 0x366834: 0xc0d9a9c  jal         func_366A70
    ctx->pc = 0x366834u;
    SET_GPR_U32(ctx, 31, 0x36683Cu);
    ctx->pc = 0x366A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366A70u, 0x366834u, 0x36683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36683Cu;
label_36683c:
    // 0x36683c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366840: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x366844: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x366844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x366848: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36684c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36684cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x366850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366854: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x366854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x366858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36685c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36685cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366864: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366864u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366868: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366868u;
    SET_GPR_U32(ctx, 31, 0x366870u);
    ctx->pc = 0x36686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366868u;
    // 0x36686c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366868u, 0x366870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366870u;
label_366870:
    // 0x366870: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x366870u;
    {
        const bool branch_taken_0x366870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366870) {
            ctx->pc = 0x366A30u;
            goto label_366a30;
        }
    }
    ctx->pc = 0x366878u;
label_366878:
    // 0x366878: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x366878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x36687c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x36687Cu;
    {
        const bool branch_taken_0x36687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36687c) {
            ctx->pc = 0x366918u;
            goto label_366918;
        }
    }
    ctx->pc = 0x366884u;
    // 0x366884: 0xc0d9cb4  jal         func_3672D0
    ctx->pc = 0x366884u;
    SET_GPR_U32(ctx, 31, 0x36688Cu);
    ctx->pc = 0x3672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D0u, 0x366884u, 0x36688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36688Cu;
label_36688c:
    // 0x36688c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36688Cu;
    {
        const bool branch_taken_0x36688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36688Cu;
        // 0x366890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36688c) {
            ctx->pc = 0x3668D8u;
            goto label_3668d8;
        }
    }
    ctx->pc = 0x366894u;
    // 0x366894: 0xc0d9b20  jal         func_366C80
    ctx->pc = 0x366894u;
    SET_GPR_U32(ctx, 31, 0x36689Cu);
    ctx->pc = 0x366C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C80u, 0x366894u, 0x36689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36689Cu;
label_36689c:
    // 0x36689c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3668a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3668a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3668a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3668a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3668a8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3668a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3668ac: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3668acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3668b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3668b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668b4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3668b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3668b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3668b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3668bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3668c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3668c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668c8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3668C8u;
    SET_GPR_U32(ctx, 31, 0x3668D0u);
    ctx->pc = 0x3668CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3668C8u;
    // 0x3668cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3668C8u, 0x3668D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668D0u;
label_3668d0:
    // 0x3668d0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3668D0u;
    {
        const bool branch_taken_0x3668d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3668d0) {
            ctx->pc = 0x366A30u;
            goto label_366a30;
        }
    }
    ctx->pc = 0x3668D8u;
label_3668d8:
    // 0x3668d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3668d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3668dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3668dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3668e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3668e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3668e4: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3668e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3668e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3668e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3668ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3668ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668f0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3668f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3668f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3668f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3668f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3668fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3668fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366900: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366904: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x366904u;
    SET_GPR_U32(ctx, 31, 0x36690Cu);
    ctx->pc = 0x366908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366904u;
    // 0x366908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x366904u, 0x36690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36690Cu;
label_36690c:
    // 0x36690c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x36690Cu;
    {
        const bool branch_taken_0x36690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36690c) {
            ctx->pc = 0x366A30u;
            goto label_366a30;
        }
    }
    ctx->pc = 0x366914u;
    // 0x366914: 0x0  nop
    ctx->pc = 0x366914u;
    // NOP
label_366918:
    // 0x366918: 0xc0f32ec  jal         func_3CCBB0
    ctx->pc = 0x366918u;
    SET_GPR_U32(ctx, 31, 0x366920u);
    ctx->pc = 0x3CCBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCBB0u, 0x366918u, 0x366920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366920u;
label_366920:
    // 0x366920: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x366920u;
    {
        const bool branch_taken_0x366920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366920) {
            ctx->pc = 0x366950u;
            goto label_366950;
        }
    }
    ctx->pc = 0x366928u;
    // 0x366928: 0x8202032e  lb          $v0, 0x32E($s0)
    ctx->pc = 0x366928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 814)));
    // 0x36692c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x366930: 0x904501bd  lbu         $a1, 0x1BD($v0)
    ctx->pc = 0x366930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 445)));
    // 0x366934: 0xc0d9f2c  jal         func_367CB0
    ctx->pc = 0x366934u;
    SET_GPR_U32(ctx, 31, 0x36693Cu);
    ctx->pc = 0x366938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366934u;
    // 0x366938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367CB0u, 0x366934u, 0x36693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36693Cu;
label_36693c:
    // 0x36693c: 0xc0d9a94  jal         func_366A50
    ctx->pc = 0x36693Cu;
    SET_GPR_U32(ctx, 31, 0x366944u);
    ctx->pc = 0x366940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36693Cu;
    // 0x366940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366A50u, 0x36693Cu, 0x366944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366944u;
label_366944:
    // 0x366944: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x366944u;
    SET_GPR_U32(ctx, 31, 0x36694Cu);
    ctx->pc = 0x366948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366944u;
    // 0x366948: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x366944u, 0x36694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36694Cu;
label_36694c:
    // 0x36694c: 0x0  nop
    ctx->pc = 0x36694cu;
    // NOP
label_366950:
    // 0x366950: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x366950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x366954: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x366954u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x366958: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x366958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x36695c: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x36695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x366960: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x366960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x366964: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x366964u;
    {
        const bool branch_taken_0x366964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366964u;
        // 0x366968: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366964) {
            ctx->pc = 0x3669D8u;
            goto label_3669d8;
        }
    }
    ctx->pc = 0x36696Cu;
    // 0x36696c: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x36696cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366970: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x366970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x366974: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x366974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x366978: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x366978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36697c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366980: 0x82030334  lb          $v1, 0x334($s0)
    ctx->pc = 0x366980u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x366984: 0x44600a  movz        $t4, $v0, $a0
    ctx->pc = 0x366984u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
    // 0x366988: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36698c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366990: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x366990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x366994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366998: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x366998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36699c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36699cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3669a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3669a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3669a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3669ac: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x3669acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3669b0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3669b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3669b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3669b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3669b8: 0xa2030334  sb          $v1, 0x334($s0)
    ctx->pc = 0x3669b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 820), (uint8_t)GPR_U32(ctx, 3));
    // 0x3669bc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3669BCu;
    SET_GPR_U32(ctx, 31, 0x3669C4u);
    ctx->pc = 0x3669C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3669BCu;
    // 0x3669c0: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3669BCu, 0x3669C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3669C4u;
label_3669c4:
    // 0x3669c4: 0xc0d9a94  jal         func_366A50
    ctx->pc = 0x3669C4u;
    SET_GPR_U32(ctx, 31, 0x3669CCu);
    ctx->pc = 0x3669C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3669C4u;
    // 0x3669c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366A50u, 0x3669C4u, 0x3669CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3669CCu;
label_3669cc:
    // 0x3669cc: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3669CCu;
    SET_GPR_U32(ctx, 31, 0x3669D4u);
    ctx->pc = 0x3669D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3669CCu;
    // 0x3669d0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3669CCu, 0x3669D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3669D4u;
label_3669d4:
    // 0x3669d4: 0x0  nop
    ctx->pc = 0x3669d4u;
    // NOP
label_3669d8:
    // 0x3669d8: 0x82020334  lb          $v0, 0x334($s0)
    ctx->pc = 0x3669d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x3669dc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3669dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3669e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3669e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3669e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3669e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3669e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3669e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3669ec: 0x8c510120  lw          $s1, 0x120($v0)
    ctx->pc = 0x3669ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x3669f0: 0xc0ceb84  jal         func_33AE10
    ctx->pc = 0x3669F0u;
    SET_GPR_U32(ctx, 31, 0x3669F8u);
    ctx->pc = 0x3669F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3669F0u;
    // 0x3669f4: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE10u, 0x3669F0u, 0x3669F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3669F8u;
label_3669f8:
    // 0x3669f8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3669f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3669fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3669fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a00: 0xc0cebb4  jal         func_33AED0
    ctx->pc = 0x366A00u;
    SET_GPR_U32(ctx, 31, 0x366A08u);
    ctx->pc = 0x366A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A00u;
    // 0x366a04: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AED0u, 0x366A00u, 0x366A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A08u;
label_366a08:
    // 0x366a08: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x366a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x366a0c: 0xc0ceb88  jal         func_33AE20
    ctx->pc = 0x366A0Cu;
    SET_GPR_U32(ctx, 31, 0x366A14u);
    ctx->pc = 0x366A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366A0Cu;
    // 0x366a10: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AE20u, 0x366A0Cu, 0x366A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A14u;
label_366a14:
    // 0x366a14: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x366a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x366a18: 0x9023e020  lbu         $v1, -0x1FE0($at)
    ctx->pc = 0x366a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8DE020u));
    // 0x366a1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x366A1Cu;
    {
        const bool branch_taken_0x366a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A1Cu;
        // 0x366a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366a1c) {
            ctx->pc = 0x366A30u;
            goto label_366a30;
        }
    }
    ctx->pc = 0x366A24u;
    // 0x366a24: 0xc0d9d3c  jal         func_3674F0
    ctx->pc = 0x366A24u;
    SET_GPR_U32(ctx, 31, 0x366A2Cu);
    ctx->pc = 0x3674F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3674F0u, 0x366A24u, 0x366A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A2Cu;
label_366a2c:
    // 0x366a2c: 0x0  nop
    ctx->pc = 0x366a2cu;
    // NOP
label_366a30:
    // 0x366a30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x366a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366a34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x366a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x366a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x366A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366A3Cu;
        // 0x366a40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366A44u;
}
