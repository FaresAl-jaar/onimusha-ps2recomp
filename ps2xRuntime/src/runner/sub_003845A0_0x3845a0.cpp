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

// Function: sub_003845A0
// Address: 0x3845a0 - 0x384768
void sub_003845A0_0x3845a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003845A0_0x3845a0");
#endif

    switch (ctx->pc) {
        case 0x3845ccu: goto label_3845cc;
        case 0x3845f8u: goto label_3845f8;
        case 0x38462cu: goto label_38462c;
        case 0x384640u: goto label_384640;
        case 0x384688u: goto label_384688;
        case 0x384690u: goto label_384690;
        case 0x3846d8u: goto label_3846d8;
        case 0x38474cu: goto label_38474c;
        default: break;
    }

    ctx->pc = 0x3845a0u;

    // 0x3845a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3845a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3845a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3845a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3845a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3845a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3845ac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3845acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3845b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3845B0u;
    {
        const bool branch_taken_0x3845b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3845B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845B0u;
        // 0x3845b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3845b0) {
            ctx->pc = 0x3845C0u;
            goto label_3845c0;
        }
    }
    ctx->pc = 0x3845B8u;
    // 0x3845b8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x3845B8u;
    {
        const bool branch_taken_0x3845b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3845b8) {
            ctx->pc = 0x384758u;
            goto label_384758;
        }
    }
    ctx->pc = 0x3845C0u;
label_3845c0:
    // 0x3845c0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3845c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3845c4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3845C4u;
    SET_GPR_U32(ctx, 31, 0x3845CCu);
    ctx->pc = 0x3845C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3845C4u;
    // 0x3845c8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3845C4u, 0x3845CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3845CCu;
label_3845cc:
    // 0x3845cc: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3845CCu;
    {
        const bool branch_taken_0x3845cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3845D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845CCu;
        // 0x3845d0: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3845cc) {
            ctx->pc = 0x384758u;
            goto label_384758;
        }
    }
    ctx->pc = 0x3845D4u;
    // 0x3845d4: 0x8c25ea24  lw          $a1, -0x15DC($at)
    ctx->pc = 0x3845d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x3845d8: 0x30a32008  andi        $v1, $a1, 0x2008
    ctx->pc = 0x3845d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8200);
    // 0x3845dc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3845DCu;
    {
        const bool branch_taken_0x3845dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3845dc) {
            ctx->pc = 0x384648u;
            goto label_384648;
        }
    }
    ctx->pc = 0x3845E4u;
    // 0x3845e4: 0x8202002a  lb          $v0, 0x2A($s0)
    ctx->pc = 0x3845e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x3845e8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3845E8u;
    {
        const bool branch_taken_0x3845e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3845ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845E8u;
        // 0x3845ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3845e8) {
            ctx->pc = 0x384638u;
            goto label_384638;
        }
    }
    ctx->pc = 0x3845F0u;
    // 0x3845f0: 0xc0e122c  jal         func_3848B0
    ctx->pc = 0x3845F0u;
    SET_GPR_U32(ctx, 31, 0x3845F8u);
    ctx->pc = 0x3848B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3848B0u, 0x3845F0u, 0x3845F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3845F8u;
label_3845f8:
    // 0x3845f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3845f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3845fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3845fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384600: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384604: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384608: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x384608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x38460c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38460cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384610: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x384610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384618: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38461c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38461cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384620: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384620u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384624: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384624u;
    SET_GPR_U32(ctx, 31, 0x38462Cu);
    ctx->pc = 0x384628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384624u;
    // 0x384628: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384624u, 0x38462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38462Cu;
label_38462c:
    // 0x38462c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x38462Cu;
    {
        const bool branch_taken_0x38462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38462c) {
            ctx->pc = 0x384758u;
            goto label_384758;
        }
    }
    ctx->pc = 0x384634u;
    // 0x384634: 0x0  nop
    ctx->pc = 0x384634u;
    // NOP
label_384638:
    // 0x384638: 0xc0e1370  jal         func_384DC0
    ctx->pc = 0x384638u;
    SET_GPR_U32(ctx, 31, 0x384640u);
    ctx->pc = 0x38463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384638u;
    // 0x38463c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384DC0u, 0x384638u, 0x384640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384640u;
label_384640:
    // 0x384640: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x384640u;
    {
        const bool branch_taken_0x384640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384640) {
            ctx->pc = 0x384758u;
            goto label_384758;
        }
    }
    ctx->pc = 0x384648u;
label_384648:
    // 0x384648: 0x30a34000  andi        $v1, $a1, 0x4000
    ctx->pc = 0x384648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x38464c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x38464Cu;
    {
        const bool branch_taken_0x38464c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38464c) {
            ctx->pc = 0x384698u;
            goto label_384698;
        }
    }
    ctx->pc = 0x384654u;
    // 0x384654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x384654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384658: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x38465c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x38465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384660: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384664: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x384664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x384668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38466c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x38466cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384678: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x384678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38467c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38467cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384680: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384680u;
    SET_GPR_U32(ctx, 31, 0x384688u);
    ctx->pc = 0x384684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384680u;
    // 0x384684: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384680u, 0x384688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384688u;
label_384688:
    // 0x384688: 0xc0e1008  jal         func_384020
    ctx->pc = 0x384688u;
    SET_GPR_U32(ctx, 31, 0x384690u);
    ctx->pc = 0x38468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384688u;
    // 0x38468c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384020u, 0x384688u, 0x384690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384690u;
label_384690:
    // 0x384690: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x384690u;
    {
        const bool branch_taken_0x384690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384690) {
            ctx->pc = 0x384758u;
            goto label_384758;
        }
    }
    ctx->pc = 0x384698u;
label_384698:
    // 0x384698: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x384698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x38469c: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x38469cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x3846a0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3846a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3846a4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3846A4u;
    {
        const bool branch_taken_0x3846a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3846a4) {
            ctx->pc = 0x384758u;
            goto label_384758;
        }
    }
    ctx->pc = 0x3846ACu;
    // 0x3846ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3846acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3846b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3846b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3846b4: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x3846b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3846b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3846b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3846bc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3846bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3846c0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x3846c0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3846c4: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x3846c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x3846c8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3846c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x3846cc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3846ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3846d0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3846d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3846d4: 0x2463c600  addiu       $v1, $v1, -0x3A00
    ctx->pc = 0x3846d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952448));
label_3846d8:
    // 0x3846d8: 0x8202002a  lb          $v0, 0x2A($s0)
    ctx->pc = 0x3846d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x3846dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3846dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3846e0: 0x2442000b  addiu       $v0, $v0, 0xB
    ctx->pc = 0x3846e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x3846e4: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x3846e4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3846e8: 0x0  nop
    ctx->pc = 0x3846e8u;
    // NOP
    // 0x3846ec: 0x0  nop
    ctx->pc = 0x3846ecu;
    // NOP
    // 0x3846f0: 0x1010  mfhi        $v0
    ctx->pc = 0x3846f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3846f4: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x3846f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x3846f8: 0x8204002a  lb          $a0, 0x2A($s0)
    ctx->pc = 0x3846f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x3846fc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3846fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x384700: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x384700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x384704: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x384704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x384708: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x384708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38470c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x38470cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x384710: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x384710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x384714: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x384714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x384718: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x384718u;
    {
        const bool branch_taken_0x384718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384718u;
        // 0x38471c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384718) {
            ctx->pc = 0x3846D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3846d8;
        }
    }
    ctx->pc = 0x384720u;
    // 0x384720: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384724: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384728: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x38472c: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x38472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x384730: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384738: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38473c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38473cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384740: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384740u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384744: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384744u;
    SET_GPR_U32(ctx, 31, 0x38474Cu);
    ctx->pc = 0x384748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384744u;
    // 0x384748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384744u, 0x38474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38474Cu;
label_38474c:
    // 0x38474c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x38474cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x384750: 0xa603002c  sh          $v1, 0x2C($s0)
    ctx->pc = 0x384750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x384754: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x384754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
label_384758:
    // 0x384758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38475c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38475cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384760: 0x3e00008  jr          $ra
    ctx->pc = 0x384760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384760u;
        // 0x384764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384768u;
}
