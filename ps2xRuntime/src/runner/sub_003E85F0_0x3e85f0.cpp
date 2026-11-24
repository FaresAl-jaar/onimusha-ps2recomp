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

// Function: sub_003E85F0
// Address: 0x3e85f0 - 0x3e892c
void sub_003E85F0_0x3e85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E85F0_0x3e85f0");
#endif

    switch (ctx->pc) {
        case 0x3e8680u: goto label_3e8680;
        case 0x3e8690u: goto label_3e8690;
        case 0x3e8698u: goto label_3e8698;
        case 0x3e86ccu: goto label_3e86cc;
        case 0x3e86e8u: goto label_3e86e8;
        case 0x3e86f8u: goto label_3e86f8;
        case 0x3e8700u: goto label_3e8700;
        case 0x3e8734u: goto label_3e8734;
        case 0x3e8750u: goto label_3e8750;
        case 0x3e8760u: goto label_3e8760;
        case 0x3e8768u: goto label_3e8768;
        case 0x3e879cu: goto label_3e879c;
        case 0x3e87b0u: goto label_3e87b0;
        case 0x3e87f0u: goto label_3e87f0;
        case 0x3e8800u: goto label_3e8800;
        case 0x3e886cu: goto label_3e886c;
        case 0x3e8918u: goto label_3e8918;
        default: break;
    }

    ctx->pc = 0x3e85f0u;

    // 0x3e85f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e85f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3e85f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3e85f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e85f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e85f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e85fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e85fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e8600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e8600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e8604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8608: 0x90830521  lbu         $v1, 0x521($a0)
    ctx->pc = 0x3e8608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3e860c: 0x10660074  beq         $v1, $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x3E860Cu;
    {
        const bool branch_taken_0x3e860c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3E8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E860Cu;
        // 0x3e8610: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e860c) {
            ctx->pc = 0x3E87E0u;
            goto label_3e87e0;
        }
    }
    ctx->pc = 0x3E8614u;
    // 0x3e8614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e8614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8618: 0x10650069  beq         $v1, $a1, . + 4 + (0x69 << 2)
    ctx->pc = 0x3E8618u;
    {
        const bool branch_taken_0x3e8618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e8618) {
            ctx->pc = 0x3E87C0u;
            goto label_3e87c0;
        }
    }
    ctx->pc = 0x3E8620u;
    // 0x3e8620: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E8620u;
    {
        const bool branch_taken_0x3e8620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8620) {
            ctx->pc = 0x3E8630u;
            goto label_3e8630;
        }
    }
    ctx->pc = 0x3E8628u;
    // 0x3e8628: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x3E8628u;
    {
        const bool branch_taken_0x3e8628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8628) {
            ctx->pc = 0x3E8918u;
            goto label_3e8918;
        }
    }
    ctx->pc = 0x3E8630u;
label_3e8630:
    // 0x3e8630: 0x1200005d  beqz        $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3E8630u;
    {
        const bool branch_taken_0x3e8630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8630) {
            ctx->pc = 0x3E87A8u;
            goto label_3e87a8;
        }
    }
    ctx->pc = 0x3E8638u;
    // 0x3e8638: 0x92240559  lbu         $a0, 0x559($s1)
    ctx->pc = 0x3e8638u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1369)));
    // 0x3e863c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e863cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e8640: 0x246349d1  addiu       $v1, $v1, 0x49D1
    ctx->pc = 0x3e8640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18897));
    // 0x3e8644: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3e8644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3e8648: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e8648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e864c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3e864cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8650: 0x1066003b  beq         $v1, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x3E8650u;
    {
        const bool branch_taken_0x3e8650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3e8650) {
            ctx->pc = 0x3E8740u;
            goto label_3e8740;
        }
    }
    ctx->pc = 0x3E8658u;
    // 0x3e8658: 0x1065001f  beq         $v1, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E8658u;
    {
        const bool branch_taken_0x3e8658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3e8658) {
            ctx->pc = 0x3E86D8u;
            goto label_3e86d8;
        }
    }
    ctx->pc = 0x3E8660u;
    // 0x3e8660: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E8660u;
    {
        const bool branch_taken_0x3e8660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8660) {
            ctx->pc = 0x3E8670u;
            goto label_3e8670;
        }
    }
    ctx->pc = 0x3E8668u;
    // 0x3e8668: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3E8668u;
    {
        const bool branch_taken_0x3e8668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8668) {
            ctx->pc = 0x3E87B0u;
            goto label_3e87b0;
        }
    }
    ctx->pc = 0x3E8670u;
label_3e8670:
    // 0x3e8670: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3e8670u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3e8674: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3e8674u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3e8678: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x3E8678u;
    SET_GPR_U32(ctx, 31, 0x3E8680u);
    ctx->pc = 0x3E867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8678u;
    // 0x3e867c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6720u, 0x3E8678u, 0x3E8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8680u;
label_3e8680:
    // 0x3e8680: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3e8680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3e8684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8688: 0xc0e2698  jal         func_389A60
    ctx->pc = 0x3E8688u;
    SET_GPR_U32(ctx, 31, 0x3E8690u);
    ctx->pc = 0x3E868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8688u;
    // 0x3e868c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x3E8688u, 0x3E8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8690u;
label_3e8690:
    // 0x3e8690: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x3E8690u;
    SET_GPR_U32(ctx, 31, 0x3E8698u);
    ctx->pc = 0x3E8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8690u;
    // 0x3e8694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x3E8690u, 0x3E8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8698u;
label_3e8698:
    // 0x3e8698: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3e8698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3e869c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e869cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e86a0: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x3e86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x3e86a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e86a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e86a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e86a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e86ac: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3e86acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3e86b0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3e86b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3e86b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e86b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e86b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e86b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e86bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e86bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e86c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3e86c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e86c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E86C4u;
    SET_GPR_U32(ctx, 31, 0x3E86CCu);
    ctx->pc = 0x3E86C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E86C4u;
    // 0x3e86c8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E86C4u, 0x3E86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E86CCu;
label_3e86cc:
    // 0x3e86cc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3E86CCu;
    {
        const bool branch_taken_0x3e86cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e86cc) {
            ctx->pc = 0x3E87B0u;
            goto label_3e87b0;
        }
    }
    ctx->pc = 0x3E86D4u;
    // 0x3e86d4: 0x0  nop
    ctx->pc = 0x3e86d4u;
    // NOP
label_3e86d8:
    // 0x3e86d8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3e86d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3e86dc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3e86dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3e86e0: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x3E86E0u;
    SET_GPR_U32(ctx, 31, 0x3E86E8u);
    ctx->pc = 0x3E86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E86E0u;
    // 0x3e86e4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x3E86E0u, 0x3E86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E86E8u;
label_3e86e8:
    // 0x3e86e8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3e86e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3e86ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e86ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e86f0: 0xc0e2698  jal         func_389A60
    ctx->pc = 0x3E86F0u;
    SET_GPR_U32(ctx, 31, 0x3E86F8u);
    ctx->pc = 0x3E86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E86F0u;
    // 0x3e86f4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x3E86F0u, 0x3E86F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E86F8u;
label_3e86f8:
    // 0x3e86f8: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x3E86F8u;
    SET_GPR_U32(ctx, 31, 0x3E8700u);
    ctx->pc = 0x3E86FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E86F8u;
    // 0x3e86fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x3E86F8u, 0x3E8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8700u;
label_3e8700:
    // 0x3e8700: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3e8700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3e8704: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e8704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e8708: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3e8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3e870c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e8710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e8710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8714: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3e8714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3e8718: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3e8718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3e871c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e871cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e8720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8724: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e8724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8728: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3e8728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e872c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E872Cu;
    SET_GPR_U32(ctx, 31, 0x3E8734u);
    ctx->pc = 0x3E8730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E872Cu;
    // 0x3e8730: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E872Cu, 0x3E8734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8734u;
label_3e8734:
    // 0x3e8734: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3E8734u;
    {
        const bool branch_taken_0x3e8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8734) {
            ctx->pc = 0x3E87B0u;
            goto label_3e87b0;
        }
    }
    ctx->pc = 0x3E873Cu;
    // 0x3e873c: 0x0  nop
    ctx->pc = 0x3e873cu;
    // NOP
label_3e8740:
    // 0x3e8740: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3e8740u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3e8744: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3e8744u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3e8748: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x3E8748u;
    SET_GPR_U32(ctx, 31, 0x3E8750u);
    ctx->pc = 0x3E874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8748u;
    // 0x3e874c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x3E8748u, 0x3E8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8750u;
label_3e8750:
    // 0x3e8750: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3e8750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3e8754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8758: 0xc0e2698  jal         func_389A60
    ctx->pc = 0x3E8758u;
    SET_GPR_U32(ctx, 31, 0x3E8760u);
    ctx->pc = 0x3E875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8758u;
    // 0x3e875c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x3E8758u, 0x3E8760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8760u;
label_3e8760:
    // 0x3e8760: 0xc097838  jal         func_25E0E0
    ctx->pc = 0x3E8760u;
    SET_GPR_U32(ctx, 31, 0x3E8768u);
    ctx->pc = 0x3E8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8760u;
    // 0x3e8764: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0E0u, 0x3E8760u, 0x3E8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8768u;
label_3e8768:
    // 0x3e8768: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3e8768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3e876c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e876cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e8770: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3e8770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3e8774: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e8774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e8778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e8778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e877c: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3e877cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3e8780: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3e8780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3e8784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e8784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e8788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e878c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e878cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8790: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3e8790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8794: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E8794u;
    SET_GPR_U32(ctx, 31, 0x3E879Cu);
    ctx->pc = 0x3E8798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8794u;
    // 0x3e8798: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E8794u, 0x3E879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E879Cu;
label_3e879c:
    // 0x3e879c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E879Cu;
    {
        const bool branch_taken_0x3e879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e879c) {
            ctx->pc = 0x3E87B0u;
            goto label_3e87b0;
        }
    }
    ctx->pc = 0x3E87A4u;
    // 0x3e87a4: 0x0  nop
    ctx->pc = 0x3e87a4u;
    // NOP
label_3e87a8:
    // 0x3e87a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3E87A8u;
    SET_GPR_U32(ctx, 31, 0x3E87B0u);
    ctx->pc = 0x3E87ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E87A8u;
    // 0x3e87ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3E87A8u, 0x3E87B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E87B0u;
label_3e87b0:
    // 0x3e87b0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3e87b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3e87b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e87b8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3E87B8u;
    {
        const bool branch_taken_0x3e87b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87B8u;
        // 0x3e87bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e87b8) {
            ctx->pc = 0x3E8918u;
            goto label_3e8918;
        }
    }
    ctx->pc = 0x3E87C0u;
label_3e87c0:
    // 0x3e87c0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3e87c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3e87c4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3e87c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e87c8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3e87c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e87cc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3e87ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e87d0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3e87d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e87d4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3e87d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3e87d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e87dc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3e87dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3e87e0:
    // 0x3e87e0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3e87e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3e87e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e87e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e87e8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3E87E8u;
    SET_GPR_U32(ctx, 31, 0x3E87F0u);
    ctx->pc = 0x3E87ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E87E8u;
    // 0x3e87ec: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3E87E8u, 0x3E87F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E87F0u;
label_3e87f0:
    // 0x3e87f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E87F0u;
    {
        const bool branch_taken_0x3e87f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E87F0u;
        // 0x3e87f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e87f0) {
            ctx->pc = 0x3E8800u;
            goto label_3e8800;
        }
    }
    ctx->pc = 0x3E87F8u;
    // 0x3e87f8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3E87F8u;
    SET_GPR_U32(ctx, 31, 0x3E8800u);
    ctx->pc = 0x3E87FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E87F8u;
    // 0x3e87fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3E87F8u, 0x3E8800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8800u;
label_3e8800:
    // 0x3e8800: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3e8800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3e8804: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E8804u;
    {
        const bool branch_taken_0x3e8804 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3E8808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8804u;
        // 0x3e8808: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8804) {
            ctx->pc = 0x3E8870u;
            goto label_3e8870;
        }
    }
    ctx->pc = 0x3E880Cu;
    // 0x3e880c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E880Cu;
    {
        const bool branch_taken_0x3e880c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e880c) {
            ctx->pc = 0x3E8870u;
            goto label_3e8870;
        }
    }
    ctx->pc = 0x3E8814u;
    // 0x3e8814: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8818: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x3e8818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e881c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3e881cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3e8820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e8820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8824: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3e8824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e8828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e8828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e882c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e882cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8830: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x3e8830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x3e8834: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3e8834u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3e8838: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e883c: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3e883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x3e8840: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3e8840u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3e8844: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e8844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e8848: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3e8848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3e884c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3e884cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3e8850: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3e8850u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3e8854: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3e8854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3e8858: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3e8858u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3e885c: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3e885cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3e8860: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3e8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e8864: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3E8864u;
    SET_GPR_U32(ctx, 31, 0x3E886Cu);
    ctx->pc = 0x3E8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8864u;
    // 0x3e8868: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3E8864u, 0x3E886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E886Cu;
label_3e886c:
    // 0x3e886c: 0x0  nop
    ctx->pc = 0x3e886cu;
    // NOP
label_3e8870:
    // 0x3e8870: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3e8870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3e8874: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8874u;
    {
        const bool branch_taken_0x3e8874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8874u;
        // 0x3e8878: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8874) {
            ctx->pc = 0x3E8888u;
            goto label_3e8888;
        }
    }
    ctx->pc = 0x3E887Cu;
    // 0x3e887c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3E887Cu;
    {
        const bool branch_taken_0x3e887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e887c) {
            ctx->pc = 0x3E8908u;
            goto label_3e8908;
        }
    }
    ctx->pc = 0x3E8884u;
    // 0x3e8884: 0x0  nop
    ctx->pc = 0x3e8884u;
    // NOP
label_3e8888:
    // 0x3e8888: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3e8888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3e888c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3e888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3e8890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e8890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e8894: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3e8894u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e8898: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3e8898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3e889c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E889Cu;
    {
        const bool branch_taken_0x3e889c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e889c) {
            ctx->pc = 0x3E88D8u;
            goto label_3e88d8;
        }
    }
    ctx->pc = 0x3E88A4u;
    // 0x3e88a4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3e88a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3e88a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3e88a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3e88ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E88ACu;
    {
        const bool branch_taken_0x3e88ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88ACu;
        // 0x3e88b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e88ac) {
            ctx->pc = 0x3E8900u;
            goto label_3e8900;
        }
    }
    ctx->pc = 0x3E88B4u;
    // 0x3e88b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e88b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3e88b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e88bc: 0x0  nop
    ctx->pc = 0x3e88bcu;
    // NOP
    // 0x3e88c0: 0x0  nop
    ctx->pc = 0x3e88c0u;
    // NOP
    // 0x3e88c4: 0x2010  mfhi        $a0
    ctx->pc = 0x3e88c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3e88c8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3e88c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e88cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E88CCu;
    {
        const bool branch_taken_0x3e88cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88CCu;
        // 0x3e88d0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e88cc) {
            ctx->pc = 0x3E8900u;
            goto label_3e8900;
        }
    }
    ctx->pc = 0x3E88D4u;
    // 0x3e88d4: 0x0  nop
    ctx->pc = 0x3e88d4u;
    // NOP
label_3e88d8:
    // 0x3e88d8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3e88d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3e88dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3e88dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3e88e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E88E0u;
    {
        const bool branch_taken_0x3e88e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e88e0) {
            ctx->pc = 0x3E8900u;
            goto label_3e8900;
        }
    }
    ctx->pc = 0x3E88E8u;
    // 0x3e88e8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3e88e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3e88ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e88f0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3e88f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e88f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E88F4u;
    {
        const bool branch_taken_0x3e88f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E88F4u;
        // 0x3e88f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e88f4) {
            ctx->pc = 0x3E8908u;
            goto label_3e8908;
        }
    }
    ctx->pc = 0x3E88FCu;
    // 0x3e88fc: 0x0  nop
    ctx->pc = 0x3e88fcu;
    // NOP
label_3e8900:
    // 0x3e8900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e8900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e8904: 0x0  nop
    ctx->pc = 0x3e8904u;
    // NOP
label_3e8908:
    // 0x3e8908: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E8908u;
    {
        const bool branch_taken_0x3e8908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8908u;
        // 0x3e890c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8908) {
            ctx->pc = 0x3E8918u;
            goto label_3e8918;
        }
    }
    ctx->pc = 0x3E8910u;
    // 0x3e8910: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3E8910u;
    SET_GPR_U32(ctx, 31, 0x3E8918u);
    ctx->pc = 0x3E8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8910u;
    // 0x3e8914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3E8910u, 0x3E8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8918u;
label_3e8918:
    // 0x3e8918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e8918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e891c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e891cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e8920: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e8920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8924: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8924u;
        // 0x3e8928: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E892Cu;
}
