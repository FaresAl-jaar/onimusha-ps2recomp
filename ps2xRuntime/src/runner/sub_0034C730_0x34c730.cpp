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

// Function: sub_0034C730
// Address: 0x34c730 - 0x34cb6c
void sub_0034C730_0x34c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C730_0x34c730");
#endif

    switch (ctx->pc) {
        case 0x34c7a0u: goto label_34c7a0;
        case 0x34c7b0u: goto label_34c7b0;
        case 0x34c804u: goto label_34c804;
        case 0x34c814u: goto label_34c814;
        case 0x34c824u: goto label_34c824;
        case 0x34c880u: goto label_34c880;
        case 0x34c8c0u: goto label_34c8c0;
        case 0x34c8d8u: goto label_34c8d8;
        case 0x34c990u: goto label_34c990;
        case 0x34c9acu: goto label_34c9ac;
        case 0x34c9c4u: goto label_34c9c4;
        case 0x34c9fcu: goto label_34c9fc;
        case 0x34ca30u: goto label_34ca30;
        case 0x34ca40u: goto label_34ca40;
        case 0x34caacu: goto label_34caac;
        case 0x34cb58u: goto label_34cb58;
        default: break;
    }

    ctx->pc = 0x34c730u;

    // 0x34c730: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x34c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x34c734: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34c738: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34c73c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34c73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34c740: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34c740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34c744: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34c744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c748: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x34c748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x34c74c: 0x10a300b4  beq         $a1, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x34C74Cu;
    {
        const bool branch_taken_0x34c74c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C74Cu;
        // 0x34c750: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c74c) {
            ctx->pc = 0x34CA20u;
            goto label_34ca20;
        }
    }
    ctx->pc = 0x34C754u;
    // 0x34c754: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34c754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34c758: 0x10a3008f  beq         $a1, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x34C758u;
    {
        const bool branch_taken_0x34c758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C758u;
        // 0x34c75c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c758) {
            ctx->pc = 0x34C998u;
            goto label_34c998;
        }
    }
    ctx->pc = 0x34C760u;
    // 0x34c760: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x34C760u;
    {
        const bool branch_taken_0x34c760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34c760) {
            ctx->pc = 0x34C7E0u;
            goto label_34c7e0;
        }
    }
    ctx->pc = 0x34C768u;
    // 0x34c768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c76c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34C76Cu;
    {
        const bool branch_taken_0x34c76c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34c76c) {
            ctx->pc = 0x34C7C0u;
            goto label_34c7c0;
        }
    }
    ctx->pc = 0x34C774u;
    // 0x34c774: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C774u;
    {
        const bool branch_taken_0x34c774 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c774) {
            ctx->pc = 0x34C788u;
            goto label_34c788;
        }
    }
    ctx->pc = 0x34C77Cu;
    // 0x34c77c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x34C77Cu;
    {
        const bool branch_taken_0x34c77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c77c) {
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34C784u;
    // 0x34c784: 0x0  nop
    ctx->pc = 0x34c784u;
    // NOP
label_34c788:
    // 0x34c788: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C788u;
    {
        const bool branch_taken_0x34c788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c788) {
            ctx->pc = 0x34C7A8u;
            goto label_34c7a8;
        }
    }
    ctx->pc = 0x34C790u;
    // 0x34c790: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x34c790u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x34c794: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x34c794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34c798: 0xc0a97e0  jal         func_2A5F80
    ctx->pc = 0x34C798u;
    SET_GPR_U32(ctx, 31, 0x34C7A0u);
    ctx->pc = 0x34C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C798u;
    // 0x34c79c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5F80u, 0x34C798u, 0x34C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C7A0u;
label_34c7a0:
    // 0x34c7a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34C7A0u;
    {
        const bool branch_taken_0x34c7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C7A0u;
        // 0x34c7a4: 0xae220550  sw          $v0, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c7a0) {
            ctx->pc = 0x34C7B0u;
            goto label_34c7b0;
        }
    }
    ctx->pc = 0x34C7A8u;
label_34c7a8:
    // 0x34c7a8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34C7A8u;
    SET_GPR_U32(ctx, 31, 0x34C7B0u);
    ctx->pc = 0x34C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C7A8u;
    // 0x34c7ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34C7A8u, 0x34C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C7B0u;
label_34c7b0:
    // 0x34c7b0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34c7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34c7b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34c7b8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x34C7B8u;
    {
        const bool branch_taken_0x34c7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C7B8u;
        // 0x34c7bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c7b8) {
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34C7C0u;
label_34c7c0:
    // 0x34c7c0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x34c7c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x34c7c4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x34c7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34c7c8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x34c7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c7cc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34c7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c7d0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x34c7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c7d4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x34c7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34c7d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34c7dc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34c7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34c7e0:
    // 0x34c7e0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x34c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x34c7e4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x34c7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x34c7e8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x34c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34c7ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34c7f0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x34c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x34c7f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34c7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34c7f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34c7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34c7fc: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x34C7FCu;
    SET_GPR_U32(ctx, 31, 0x34C804u);
    ctx->pc = 0x34C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C7FCu;
    // 0x34c800: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x34C7FCu, 0x34C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C804u;
label_34c804:
    // 0x34c804: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x34c804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x34c808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c80c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34C80Cu;
    SET_GPR_U32(ctx, 31, 0x34C814u);
    ctx->pc = 0x34C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C80Cu;
    // 0x34c810: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34C80Cu, 0x34C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C814u;
label_34c814:
    // 0x34c814: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C814u;
    {
        const bool branch_taken_0x34c814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C814u;
        // 0x34c818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c814) {
            ctx->pc = 0x34C828u;
            goto label_34c828;
        }
    }
    ctx->pc = 0x34C81Cu;
    // 0x34c81c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34C81Cu;
    SET_GPR_U32(ctx, 31, 0x34C824u);
    ctx->pc = 0x34C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C81Cu;
    // 0x34c820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34C81Cu, 0x34C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C824u;
label_34c824:
    // 0x34c824: 0x0  nop
    ctx->pc = 0x34c824u;
    // NOP
label_34c828:
    // 0x34c828: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34c828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34c82c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34c82cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34c830: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x34c830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34c834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c838: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x34c838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34c83c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34c83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c840: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34c840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34c844: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x34c844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x34c848: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34c848u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34c84c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34c84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34c850: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x34c850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x34c854: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34c854u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34c858: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34c858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34c85c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34c860: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34c860u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34c864: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34c864u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34c868: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x34c868u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34c86c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34c86cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34c870: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x34c870u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x34c874: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x34c874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34c878: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34C878u;
    SET_GPR_U32(ctx, 31, 0x34C880u);
    ctx->pc = 0x34C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C878u;
    // 0x34c87c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34C878u, 0x34C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C880u;
label_34c880:
    // 0x34c880: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34C880u;
    {
        const bool branch_taken_0x34c880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c880) {
            ctx->pc = 0x34C898u;
            goto label_34c898;
        }
    }
    ctx->pc = 0x34C888u;
    // 0x34c888: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34c888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34c88c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34c890: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x34C890u;
    {
        const bool branch_taken_0x34c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C890u;
        // 0x34c894: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c890) {
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34C898u;
label_34c898:
    // 0x34c898: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x34c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34c89c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x34c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x34c8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c8a4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x34c8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34c8a8: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x34c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x34c8ac: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x34c8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34c8b0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x34c8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34c8b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x34c8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c8b8: 0xc0c0980  jal         func_302600
    ctx->pc = 0x34C8B8u;
    SET_GPR_U32(ctx, 31, 0x34C8C0u);
    ctx->pc = 0x34C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C8B8u;
    // 0x34c8bc: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x34C8B8u, 0x34C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C8C0u;
label_34c8c0:
    // 0x34c8c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34C8C0u;
    {
        const bool branch_taken_0x34c8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c8c0) {
            ctx->pc = 0x34C8E8u;
            goto label_34c8e8;
        }
    }
    ctx->pc = 0x34C8C8u;
    // 0x34c8c8: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x34c8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x34c8cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c8d0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34C8D0u;
    SET_GPR_U32(ctx, 31, 0x34C8D8u);
    ctx->pc = 0x34C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C8D0u;
    // 0x34c8d4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34C8D0u, 0x34C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C8D8u;
label_34c8d8:
    // 0x34c8d8: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34c8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34c8dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34c8e0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x34C8E0u;
    {
        const bool branch_taken_0x34c8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8E0u;
        // 0x34c8e4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8e0) {
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34C8E8u;
label_34c8e8:
    // 0x34c8e8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x34c8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34c8ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C8ECu;
    {
        const bool branch_taken_0x34c8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C8ECu;
        // 0x34c8f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c8ec) {
            ctx->pc = 0x34C900u;
            goto label_34c900;
        }
    }
    ctx->pc = 0x34C8F4u;
    // 0x34c8f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34C8F4u;
    {
        const bool branch_taken_0x34c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c8f4) {
            ctx->pc = 0x34C980u;
            goto label_34c980;
        }
    }
    ctx->pc = 0x34C8FCu;
    // 0x34c8fc: 0x0  nop
    ctx->pc = 0x34c8fcu;
    // NOP
label_34c900:
    // 0x34c900: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x34c900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34c904: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34c908: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34c908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34c90c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34c90cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34c910: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x34c910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x34c914: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34C914u;
    {
        const bool branch_taken_0x34c914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34c914) {
            ctx->pc = 0x34C950u;
            goto label_34c950;
        }
    }
    ctx->pc = 0x34C91Cu;
    // 0x34c91c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x34c91cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34c920: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34c920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34c924: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34C924u;
    {
        const bool branch_taken_0x34c924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C924u;
        // 0x34c928: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c924) {
            ctx->pc = 0x34C978u;
            goto label_34c978;
        }
    }
    ctx->pc = 0x34C92Cu;
    // 0x34c92c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c930: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34c930u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34c934: 0x0  nop
    ctx->pc = 0x34c934u;
    // NOP
    // 0x34c938: 0x0  nop
    ctx->pc = 0x34c938u;
    // NOP
    // 0x34c93c: 0x2010  mfhi        $a0
    ctx->pc = 0x34c93cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34c940: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34c940u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34c944: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34C944u;
    {
        const bool branch_taken_0x34c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C944u;
        // 0x34c948: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c944) {
            ctx->pc = 0x34C978u;
            goto label_34c978;
        }
    }
    ctx->pc = 0x34C94Cu;
    // 0x34c94c: 0x0  nop
    ctx->pc = 0x34c94cu;
    // NOP
label_34c950:
    // 0x34c950: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34c950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34c954: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34c954u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34c958: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34C958u;
    {
        const bool branch_taken_0x34c958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c958) {
            ctx->pc = 0x34C978u;
            goto label_34c978;
        }
    }
    ctx->pc = 0x34C960u;
    // 0x34c960: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34c960u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34c964: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c968: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x34c968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34c96c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34C96Cu;
    {
        const bool branch_taken_0x34c96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C96Cu;
        // 0x34c970: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c96c) {
            ctx->pc = 0x34C980u;
            goto label_34c980;
        }
    }
    ctx->pc = 0x34C974u;
    // 0x34c974: 0x0  nop
    ctx->pc = 0x34c974u;
    // NOP
label_34c978:
    // 0x34c978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c97c: 0x0  nop
    ctx->pc = 0x34c97cu;
    // NOP
label_34c980:
    // 0x34c980: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x34C980u;
    {
        const bool branch_taken_0x34c980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C980u;
        // 0x34c984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c980) {
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34C988u;
    // 0x34c988: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34C988u;
    SET_GPR_U32(ctx, 31, 0x34C990u);
    ctx->pc = 0x34C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C988u;
    // 0x34c98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34C988u, 0x34C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C990u;
label_34c990:
    // 0x34c990: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x34C990u;
    {
        const bool branch_taken_0x34c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c990) {
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34C998u;
label_34c998:
    // 0x34c998: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x34c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x34c99c: 0xa2220558  sb          $v0, 0x558($s1)
    ctx->pc = 0x34c99cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x34c9a0: 0xa620053c  sh          $zero, 0x53C($s1)
    ctx->pc = 0x34c9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1340), (uint16_t)GPR_U32(ctx, 0));
    // 0x34c9a4: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x34C9A4u;
    SET_GPR_U32(ctx, 31, 0x34C9ACu);
    ctx->pc = 0x34C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C9A4u;
    // 0x34c9a8: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x34C9A4u, 0x34C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9ACu;
label_34c9ac:
    // 0x34c9ac: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34C9ACu;
    {
        const bool branch_taken_0x34c9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C9ACu;
        // 0x34c9b0: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c9ac) {
            ctx->pc = 0x34CA00u;
            goto label_34ca00;
        }
    }
    ctx->pc = 0x34C9B4u;
    // 0x34c9b4: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x34c9b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x34c9b8: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x34c9b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34c9bc: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x34C9BCu;
    SET_GPR_U32(ctx, 31, 0x34C9C4u);
    ctx->pc = 0x34C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C9BCu;
    // 0x34c9c0: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x34C9BCu, 0x34C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9C4u;
label_34c9c4:
    // 0x34c9c4: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x34c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x34c9c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34c9cc: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x34c9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34c9d0: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x34c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x34c9d4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x34c9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34c9d8: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x34c9d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x34c9dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34c9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9e0: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x34c9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34c9e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34c9e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34c9e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34c9ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34c9f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34C9F4u;
    SET_GPR_U32(ctx, 31, 0x34C9FCu);
    ctx->pc = 0x34C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C9F4u;
    // 0x34c9f8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34C9F4u, 0x34C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9FCu;
label_34c9fc:
    // 0x34c9fc: 0x0  nop
    ctx->pc = 0x34c9fcu;
    // NOP
label_34ca00:
    // 0x34ca00: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x34ca00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x34ca04: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x34ca04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34ca08: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x34ca08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34ca0c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34ca0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ca10: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x34ca10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34ca14: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x34ca14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34ca18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34ca1c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34ca1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34ca20:
    // 0x34ca20: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x34ca20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x34ca24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca28: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34CA28u;
    SET_GPR_U32(ctx, 31, 0x34CA30u);
    ctx->pc = 0x34CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CA28u;
    // 0x34ca2c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34CA28u, 0x34CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA30u;
label_34ca30:
    // 0x34ca30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CA30u;
    {
        const bool branch_taken_0x34ca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA30u;
        // 0x34ca34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca30) {
            ctx->pc = 0x34CA40u;
            goto label_34ca40;
        }
    }
    ctx->pc = 0x34CA38u;
    // 0x34ca38: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34CA38u;
    SET_GPR_U32(ctx, 31, 0x34CA40u);
    ctx->pc = 0x34CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CA38u;
    // 0x34ca3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34CA38u, 0x34CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA40u;
label_34ca40:
    // 0x34ca40: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34ca40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34ca44: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x34CA44u;
    {
        const bool branch_taken_0x34ca44 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x34CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA44u;
        // 0x34ca48: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca44) {
            ctx->pc = 0x34CAB0u;
            goto label_34cab0;
        }
    }
    ctx->pc = 0x34CA4Cu;
    // 0x34ca4c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x34CA4Cu;
    {
        const bool branch_taken_0x34ca4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca4c) {
            ctx->pc = 0x34CAB0u;
            goto label_34cab0;
        }
    }
    ctx->pc = 0x34CA54u;
    // 0x34ca54: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ca54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ca58: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x34ca58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34ca5c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34ca5cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34ca60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca64: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x34ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34ca68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34ca68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca6c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ca70: 0x7fa90060  sq          $t1, 0x60($sp)
    ctx->pc = 0x34ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 9));
    // 0x34ca74: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34ca74u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34ca78: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ca78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ca7c: 0x7fa60070  sq          $a2, 0x70($sp)
    ctx->pc = 0x34ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 6));
    // 0x34ca80: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34ca80u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34ca84: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34ca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34ca88: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x34ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x34ca8c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34ca8cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34ca90: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34ca94: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x34ca94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34ca98: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34ca98u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34ca9c: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x34ca9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x34caa0: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x34caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34caa4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34CAA4u;
    SET_GPR_U32(ctx, 31, 0x34CAACu);
    ctx->pc = 0x34CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CAA4u;
    // 0x34caa8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34CAA4u, 0x34CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CAACu;
label_34caac:
    // 0x34caac: 0x0  nop
    ctx->pc = 0x34caacu;
    // NOP
label_34cab0:
    // 0x34cab0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x34cab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34cab4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34CAB4u;
    {
        const bool branch_taken_0x34cab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAB4u;
        // 0x34cab8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cab4) {
            ctx->pc = 0x34CAC8u;
            goto label_34cac8;
        }
    }
    ctx->pc = 0x34CABCu;
    // 0x34cabc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34CABCu;
    {
        const bool branch_taken_0x34cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cabc) {
            ctx->pc = 0x34CB48u;
            goto label_34cb48;
        }
    }
    ctx->pc = 0x34CAC4u;
    // 0x34cac4: 0x0  nop
    ctx->pc = 0x34cac4u;
    // NOP
label_34cac8:
    // 0x34cac8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x34cac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34cacc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34cad0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34cad4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34cad4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34cad8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x34cad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x34cadc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34CADCu;
    {
        const bool branch_taken_0x34cadc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34cadc) {
            ctx->pc = 0x34CB18u;
            goto label_34cb18;
        }
    }
    ctx->pc = 0x34CAE4u;
    // 0x34cae4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x34cae4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34cae8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34cae8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34caec: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34CAECu;
    {
        const bool branch_taken_0x34caec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAECu;
        // 0x34caf0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34caec) {
            ctx->pc = 0x34CB40u;
            goto label_34cb40;
        }
    }
    ctx->pc = 0x34CAF4u;
    // 0x34caf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34caf8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34caf8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34cafc: 0x0  nop
    ctx->pc = 0x34cafcu;
    // NOP
    // 0x34cb00: 0x0  nop
    ctx->pc = 0x34cb00u;
    // NOP
    // 0x34cb04: 0x2010  mfhi        $a0
    ctx->pc = 0x34cb04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34cb08: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34cb08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34cb0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34CB0Cu;
    {
        const bool branch_taken_0x34cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB0Cu;
        // 0x34cb10: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb0c) {
            ctx->pc = 0x34CB40u;
            goto label_34cb40;
        }
    }
    ctx->pc = 0x34CB14u;
    // 0x34cb14: 0x0  nop
    ctx->pc = 0x34cb14u;
    // NOP
label_34cb18:
    // 0x34cb18: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34cb18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34cb1c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34cb1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34cb20: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34CB20u;
    {
        const bool branch_taken_0x34cb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34cb20) {
            ctx->pc = 0x34CB40u;
            goto label_34cb40;
        }
    }
    ctx->pc = 0x34CB28u;
    // 0x34cb28: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34cb28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34cb2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cb30: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x34cb30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34cb34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34CB34u;
    {
        const bool branch_taken_0x34cb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB34u;
        // 0x34cb38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb34) {
            ctx->pc = 0x34CB48u;
            goto label_34cb48;
        }
    }
    ctx->pc = 0x34CB3Cu;
    // 0x34cb3c: 0x0  nop
    ctx->pc = 0x34cb3cu;
    // NOP
label_34cb40:
    // 0x34cb40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cb44: 0x0  nop
    ctx->pc = 0x34cb44u;
    // NOP
label_34cb48:
    // 0x34cb48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34CB48u;
    {
        const bool branch_taken_0x34cb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB48u;
        // 0x34cb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb48) {
            ctx->pc = 0x34CB58u;
            goto label_34cb58;
        }
    }
    ctx->pc = 0x34CB50u;
    // 0x34cb50: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34CB50u;
    SET_GPR_U32(ctx, 31, 0x34CB58u);
    ctx->pc = 0x34CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CB50u;
    // 0x34cb54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34CB50u, 0x34CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CB58u;
label_34cb58:
    // 0x34cb58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34cb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34cb5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34cb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34cb60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34cb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34cb64: 0x3e00008  jr          $ra
    ctx->pc = 0x34CB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB64u;
        // 0x34cb68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CB6Cu;
}
