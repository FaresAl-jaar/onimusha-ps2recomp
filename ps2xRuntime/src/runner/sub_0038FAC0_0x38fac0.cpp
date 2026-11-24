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

// Function: sub_0038FAC0
// Address: 0x38fac0 - 0x390024
void sub_0038FAC0_0x38fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FAC0_0x38fac0");
#endif

    switch (ctx->pc) {
        case 0x38fae4u: goto label_38fae4;
        case 0x38fb10u: goto label_38fb10;
        case 0x38fb58u: goto label_38fb58;
        case 0x38fb68u: goto label_38fb68;
        case 0x38fbe8u: goto label_38fbe8;
        case 0x38fc1cu: goto label_38fc1c;
        case 0x38fc34u: goto label_38fc34;
        case 0x38fc74u: goto label_38fc74;
        case 0x38fc84u: goto label_38fc84;
        case 0x38fc9cu: goto label_38fc9c;
        case 0x38fcacu: goto label_38fcac;
        case 0x38fcc8u: goto label_38fcc8;
        case 0x38fcdcu: goto label_38fcdc;
        case 0x38fcfcu: goto label_38fcfc;
        case 0x38fe9cu: goto label_38fe9c;
        case 0x38febcu: goto label_38febc;
        case 0x38fed0u: goto label_38fed0;
        case 0x38fed8u: goto label_38fed8;
        case 0x38fee4u: goto label_38fee4;
        case 0x38ff64u: goto label_38ff64;
        default: break;
    }

    ctx->pc = 0x38fac0u;

    // 0x38fac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38fac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38fac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38fac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38facc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38fad0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38fad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fad4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FAD4u;
    {
        const bool branch_taken_0x38fad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAD4u;
        // 0x38fad8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fad4) {
            ctx->pc = 0x38FAF0u;
            goto label_38faf0;
        }
    }
    ctx->pc = 0x38FADCu;
    // 0x38fadc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FADCu;
    SET_GPR_U32(ctx, 31, 0x38FAE4u);
    ctx->pc = 0x38FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FADCu;
    // 0x38fae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FADCu, 0x38FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FAE4u;
label_38fae4:
    // 0x38fae4: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x38FAE4u;
    {
        const bool branch_taken_0x38fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fae4) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FAECu;
    // 0x38faec: 0x0  nop
    ctx->pc = 0x38faecu;
    // NOP
label_38faf0:
    // 0x38faf0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38FAF0u;
    {
        const bool branch_taken_0x38faf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38faf0) {
            ctx->pc = 0x38FB18u;
            goto label_38fb18;
        }
    }
    ctx->pc = 0x38FAF8u;
    // 0x38faf8: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x38faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x38fafc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x38fafcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38fb00: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FB00u;
    {
        const bool branch_taken_0x38fb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB00u;
        // 0x38fb04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb00) {
            ctx->pc = 0x38FB18u;
            goto label_38fb18;
        }
    }
    ctx->pc = 0x38FB08u;
    // 0x38fb08: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FB08u;
    SET_GPR_U32(ctx, 31, 0x38FB10u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FB08u, 0x38FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FB10u;
label_38fb10:
    // 0x38fb10: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x38FB10u;
    {
        const bool branch_taken_0x38fb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fb10) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FB18u;
label_38fb18:
    // 0x38fb18: 0x92240521  lbu         $a0, 0x521($s1)
    ctx->pc = 0x38fb18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x38fb1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38fb20: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x38FB20u;
    {
        const bool branch_taken_0x38fb20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB20u;
        // 0x38fb24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb20) {
            ctx->pc = 0x38FC68u;
            goto label_38fc68;
        }
    }
    ctx->pc = 0x38FB28u;
    // 0x38fb28: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x38FB28u;
    {
        const bool branch_taken_0x38fb28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38fb28) {
            ctx->pc = 0x38FC48u;
            goto label_38fc48;
        }
    }
    ctx->pc = 0x38FB30u;
    // 0x38fb30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FB30u;
    {
        const bool branch_taken_0x38fb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fb30) {
            ctx->pc = 0x38FB40u;
            goto label_38fb40;
        }
    }
    ctx->pc = 0x38FB38u;
    // 0x38fb38: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x38FB38u;
    {
        const bool branch_taken_0x38fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fb38) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FB40u;
label_38fb40:
    // 0x38fb40: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x38FB40u;
    {
        const bool branch_taken_0x38fb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fb40) {
            ctx->pc = 0x38FC28u;
            goto label_38fc28;
        }
    }
    ctx->pc = 0x38FB48u;
    // 0x38fb48: 0x8e250568  lw          $a1, 0x568($s1)
    ctx->pc = 0x38fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x38fb4c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38fb50: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38FB50u;
    SET_GPR_U32(ctx, 31, 0x38FB58u);
    ctx->pc = 0x38FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FB50u;
    // 0x38fb54: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38FB50u, 0x38FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FB58u;
label_38fb58:
    // 0x38fb58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FB58u;
    {
        const bool branch_taken_0x38fb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB58u;
        // 0x38fb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb58) {
            ctx->pc = 0x38FB70u;
            goto label_38fb70;
        }
    }
    ctx->pc = 0x38FB60u;
    // 0x38fb60: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FB60u;
    SET_GPR_U32(ctx, 31, 0x38FB68u);
    ctx->pc = 0x38FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FB60u;
    // 0x38fb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FB60u, 0x38FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FB68u;
label_38fb68:
    // 0x38fb68: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x38FB68u;
    {
        const bool branch_taken_0x38fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fb68) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FB70u;
label_38fb70:
    // 0x38fb70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38fb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38fb74: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x38fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x38fb78: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x38fb78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38fb7c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x38FB7Cu;
    {
        const bool branch_taken_0x38fb7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB7Cu;
        // 0x38fb80: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb7c) {
            ctx->pc = 0x38FB88u;
            goto label_38fb88;
        }
    }
    ctx->pc = 0x38FB84u;
    // 0x38fb84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fb88:
    // 0x38fb88: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38FB88u;
    {
        const bool branch_taken_0x38fb88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fb88) {
            ctx->pc = 0x38FBB0u;
            goto label_38fbb0;
        }
    }
    ctx->pc = 0x38FB90u;
    // 0x38fb90: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x38fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x38fb94: 0x92230570  lbu         $v1, 0x570($s1)
    ctx->pc = 0x38fb94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x38fb98: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x38fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x38fb9c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x38fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x38fba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38fba4: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x38fba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x38fba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38FBA8u;
    {
        const bool branch_taken_0x38fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBA8u;
        // 0x38fbac: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fba8) {
            ctx->pc = 0x38FBB8u;
            goto label_38fbb8;
        }
    }
    ctx->pc = 0x38FBB0u;
label_38fbb0:
    // 0x38fbb0: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x38fbb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x38fbb4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x38fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_38fbb8:
    // 0x38fbb8: 0x92230565  lbu         $v1, 0x565($s1)
    ctx->pc = 0x38fbb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1381)));
    // 0x38fbbc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38fbc0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x38fbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38fbc4: 0x24422205  addiu       $v0, $v0, 0x2205
    ctx->pc = 0x38fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8709));
    // 0x38fbc8: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x38fbc8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x38fbcc: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x38fbccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x38fbd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x38fbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fbd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x38fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x38fbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38fbdc: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x38fbdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38fbe0: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x38FBE0u;
    SET_GPR_U32(ctx, 31, 0x38FBE8u);
    ctx->pc = 0x38FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FBE0u;
    // 0x38fbe4: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x38FBE0u, 0x38FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FBE8u;
label_38fbe8:
    // 0x38fbe8: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x38fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x38fbec: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x38fbecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38fbf0: 0x92230565  lbu         $v1, 0x565($s1)
    ctx->pc = 0x38fbf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1381)));
    // 0x38fbf4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38fbf8: 0x24422206  addiu       $v0, $v0, 0x2206
    ctx->pc = 0x38fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8710));
    // 0x38fbfc: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x38fbfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x38fc00: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x38fc00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x38fc04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x38fc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x38fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x38fc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38fc10: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x38fc10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38fc14: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x38FC14u;
    SET_GPR_U32(ctx, 31, 0x38FC1Cu);
    ctx->pc = 0x38FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC14u;
    // 0x38fc18: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x38FC14u, 0x38FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC1Cu;
label_38fc1c:
    // 0x38fc1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38FC1Cu;
    {
        const bool branch_taken_0x38fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC1Cu;
        // 0x38fc20: 0xae220554  sw          $v0, 0x554($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc1c) {
            ctx->pc = 0x38FC38u;
            goto label_38fc38;
        }
    }
    ctx->pc = 0x38FC24u;
    // 0x38fc24: 0x0  nop
    ctx->pc = 0x38fc24u;
    // NOP
label_38fc28:
    // 0x38fc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38fc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc2c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FC2Cu;
    SET_GPR_U32(ctx, 31, 0x38FC34u);
    ctx->pc = 0x38FC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC2Cu;
    // 0x38fc30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FC2Cu, 0x38FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC34u;
label_38fc34:
    // 0x38fc34: 0x0  nop
    ctx->pc = 0x38fc34u;
    // NOP
label_38fc38:
    // 0x38fc38: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x38fc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x38fc3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38fc40: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x38FC40u;
    {
        const bool branch_taken_0x38fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC40u;
        // 0x38fc44: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc40) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FC48u;
label_38fc48:
    // 0x38fc48: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x38fc48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x38fc4c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x38fc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x38fc50: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x38fc50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x38fc54: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x38fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x38fc58: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x38fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x38fc5c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x38fc5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x38fc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38fc64: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x38fc64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_38fc68:
    // 0x38fc68: 0x8e250550  lw          $a1, 0x550($s1)
    ctx->pc = 0x38fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x38fc6c: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x38FC6Cu;
    SET_GPR_U32(ctx, 31, 0x38FC74u);
    ctx->pc = 0x38FC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC6Cu;
    // 0x38fc70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x38FC6Cu, 0x38FC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC74u;
label_38fc74:
    // 0x38fc74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FC74u;
    {
        const bool branch_taken_0x38fc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC74u;
        // 0x38fc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc74) {
            ctx->pc = 0x38FC90u;
            goto label_38fc90;
        }
    }
    ctx->pc = 0x38FC7Cu;
    // 0x38fc7c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FC7Cu;
    SET_GPR_U32(ctx, 31, 0x38FC84u);
    ctx->pc = 0x38FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC7Cu;
    // 0x38fc80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FC7Cu, 0x38FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC84u;
label_38fc84:
    // 0x38fc84: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x38FC84u;
    {
        const bool branch_taken_0x38fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fc84) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FC8Cu;
    // 0x38fc8c: 0x0  nop
    ctx->pc = 0x38fc8cu;
    // NOP
label_38fc90:
    // 0x38fc90: 0x8e250554  lw          $a1, 0x554($s1)
    ctx->pc = 0x38fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x38fc94: 0xc0c08ac  jal         func_3022B0
    ctx->pc = 0x38FC94u;
    SET_GPR_U32(ctx, 31, 0x38FC9Cu);
    ctx->pc = 0x38FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC94u;
    // 0x38fc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022B0u, 0x38FC94u, 0x38FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC9Cu;
label_38fc9c:
    // 0x38fc9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FC9Cu;
    {
        const bool branch_taken_0x38fc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC9Cu;
        // 0x38fca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc9c) {
            ctx->pc = 0x38FCB8u;
            goto label_38fcb8;
        }
    }
    ctx->pc = 0x38FCA4u;
    // 0x38fca4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FCA4u;
    SET_GPR_U32(ctx, 31, 0x38FCACu);
    ctx->pc = 0x38FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FCA4u;
    // 0x38fca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FCA4u, 0x38FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCACu;
label_38fcac:
    // 0x38fcac: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x38FCACu;
    {
        const bool branch_taken_0x38fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fcac) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FCB4u;
    // 0x38fcb4: 0x0  nop
    ctx->pc = 0x38fcb4u;
    // NOP
label_38fcb8:
    // 0x38fcb8: 0x8e250568  lw          $a1, 0x568($s1)
    ctx->pc = 0x38fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x38fcbc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38fcc0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38FCC0u;
    SET_GPR_U32(ctx, 31, 0x38FCC8u);
    ctx->pc = 0x38FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FCC0u;
    // 0x38fcc4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38FCC0u, 0x38FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCC8u;
label_38fcc8:
    // 0x38fcc8: 0x8e25056c  lw          $a1, 0x56C($s1)
    ctx->pc = 0x38fcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1388)));
    // 0x38fccc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x38fcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38fcd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38fcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fcd4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x38FCD4u;
    SET_GPR_U32(ctx, 31, 0x38FCDCu);
    ctx->pc = 0x38FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FCD4u;
    // 0x38fcd8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x38FCD4u, 0x38FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCDCu;
label_38fcdc:
    // 0x38fcdc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38FCDCu;
    {
        const bool branch_taken_0x38fcdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fcdc) {
            ctx->pc = 0x38FCF0u;
            goto label_38fcf0;
        }
    }
    ctx->pc = 0x38FCE4u;
    // 0x38fce4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38FCE4u;
    {
        const bool branch_taken_0x38fce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fce4) {
            ctx->pc = 0x38FD08u;
            goto label_38fd08;
        }
    }
    ctx->pc = 0x38FCECu;
    // 0x38fcec: 0x0  nop
    ctx->pc = 0x38fcecu;
    // NOP
label_38fcf0:
    // 0x38fcf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fcf4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FCF4u;
    SET_GPR_U32(ctx, 31, 0x38FCFCu);
    ctx->pc = 0x38FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FCF4u;
    // 0x38fcf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FCF4u, 0x38FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCFCu;
label_38fcfc:
    // 0x38fcfc: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x38FCFCu;
    {
        const bool branch_taken_0x38fcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fcfc) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FD04u;
    // 0x38fd04: 0x0  nop
    ctx->pc = 0x38fd04u;
    // NOP
label_38fd08:
    // 0x38fd08: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x38fd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38fd0c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x38fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x38fd10: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x38fd10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38fd14: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x38FD14u;
    {
        const bool branch_taken_0x38fd14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD14u;
        // 0x38fd18: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd14) {
            ctx->pc = 0x38FD20u;
            goto label_38fd20;
        }
    }
    ctx->pc = 0x38FD1Cu;
    // 0x38fd1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38fd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fd20:
    // 0x38fd20: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38FD20u;
    {
        const bool branch_taken_0x38fd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fd20) {
            ctx->pc = 0x38FD48u;
            goto label_38fd48;
        }
    }
    ctx->pc = 0x38FD28u;
    // 0x38fd28: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x38fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38fd2c: 0x92240570  lbu         $a0, 0x570($s1)
    ctx->pc = 0x38fd2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1392)));
    // 0x38fd30: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x38fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x38fd34: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x38fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x38fd38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38fd3c: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x38fd3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x38fd40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38FD40u;
    {
        const bool branch_taken_0x38fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD40u;
        // 0x38fd44: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd40) {
            ctx->pc = 0x38FD50u;
            goto label_38fd50;
        }
    }
    ctx->pc = 0x38FD48u;
label_38fd48:
    // 0x38fd48: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x38fd48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x38fd4c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x38fd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_38fd50:
    // 0x38fd50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38fd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38fd54: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x38fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x38fd58: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x38fd58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38fd5c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x38FD5Cu;
    {
        const bool branch_taken_0x38fd5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD5Cu;
        // 0x38fd60: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd5c) {
            ctx->pc = 0x38FD68u;
            goto label_38fd68;
        }
    }
    ctx->pc = 0x38FD64u;
    // 0x38fd64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fd68:
    // 0x38fd68: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38FD68u;
    {
        const bool branch_taken_0x38fd68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fd68) {
            ctx->pc = 0x38FD90u;
            goto label_38fd90;
        }
    }
    ctx->pc = 0x38FD70u;
    // 0x38fd70: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x38fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x38fd74: 0x92240571  lbu         $a0, 0x571($s1)
    ctx->pc = 0x38fd74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1393)));
    // 0x38fd78: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x38fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x38fd7c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x38fd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x38fd80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38fd84: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x38fd84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x38fd88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38FD88u;
    {
        const bool branch_taken_0x38fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD88u;
        // 0x38fd8c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd88) {
            ctx->pc = 0x38FD98u;
            goto label_38fd98;
        }
    }
    ctx->pc = 0x38FD90u;
label_38fd90:
    // 0x38fd90: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x38fd90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x38fd94: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x38fd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_38fd98:
    // 0x38fd98: 0x9223053a  lbu         $v1, 0x53A($s1)
    ctx->pc = 0x38fd98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
    // 0x38fd9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x38fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38fda0: 0x10650023  beq         $v1, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x38FDA0u;
    {
        const bool branch_taken_0x38fda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x38fda0) {
            ctx->pc = 0x38FE30u;
            goto label_38fe30;
        }
    }
    ctx->pc = 0x38FDA8u;
    // 0x38fda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fdac: 0x1065003e  beq         $v1, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x38FDACu;
    {
        const bool branch_taken_0x38fdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x38fdac) {
            ctx->pc = 0x38FEA8u;
            goto label_38fea8;
        }
    }
    ctx->pc = 0x38FDB4u;
    // 0x38fdb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38FDB4u;
    {
        const bool branch_taken_0x38fdb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fdb4) {
            ctx->pc = 0x38FDC8u;
            goto label_38fdc8;
        }
    }
    ctx->pc = 0x38FDBCu;
    // 0x38fdbc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x38FDBCu;
    {
        const bool branch_taken_0x38fdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fdbc) {
            ctx->pc = 0x38FEA8u;
            goto label_38fea8;
        }
    }
    ctx->pc = 0x38FDC4u;
    // 0x38fdc4: 0x0  nop
    ctx->pc = 0x38fdc4u;
    // NOP
label_38fdc8:
    // 0x38fdc8: 0x3c043d00  lui         $a0, 0x3D00
    ctx->pc = 0x38fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15616 << 16));
    // 0x38fdcc: 0xc622055c  lwc1        $f2, 0x55C($s1)
    ctx->pc = 0x38fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38fdd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x38fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x38fdd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x38fdd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38fdd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38fdd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fddc: 0x0  nop
    ctx->pc = 0x38fddcu;
    // NOP
    // 0x38fde0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x38fde0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x38fde4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38fde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38fde8: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x38FDE8u;
    {
        const bool branch_taken_0x38fde8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDE8u;
        // 0x38fdec: 0xe621055c  swc1        $f1, 0x55C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fde8) {
            ctx->pc = 0x38FEA8u;
            goto label_38fea8;
        }
    }
    ctx->pc = 0x38FDF0u;
    // 0x38fdf0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x38fdf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38fdf4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38fdf8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38FDF8u;
    {
        const bool branch_taken_0x38fdf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38fdf8) {
            ctx->pc = 0x38FE18u;
            goto label_38fe18;
        }
    }
    ctx->pc = 0x38FE00u;
    // 0x38fe00: 0x9043053a  lbu         $v1, 0x53A($v0)
    ctx->pc = 0x38fe00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1338)));
    // 0x38fe04: 0x2444053a  addiu       $a0, $v0, 0x53A
    ctx->pc = 0x38fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1338));
    // 0x38fe08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38fe0c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38FE0Cu;
    {
        const bool branch_taken_0x38fe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38fe0c) {
            ctx->pc = 0x38FE18u;
            goto label_38fe18;
        }
    }
    ctx->pc = 0x38FE14u;
    // 0x38fe14: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x38fe14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_38fe18:
    // 0x38fe18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x38fe1c: 0xae22055c  sw          $v0, 0x55C($s1)
    ctx->pc = 0x38fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1372), GPR_U32(ctx, 2));
    // 0x38fe20: 0x9222053a  lbu         $v0, 0x53A($s1)
    ctx->pc = 0x38fe20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1338)));
    // 0x38fe24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38fe28: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x38FE28u;
    {
        const bool branch_taken_0x38fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE28u;
        // 0x38fe2c: 0xa222053a  sb          $v0, 0x53A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1338), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe28) {
            ctx->pc = 0x38FEA8u;
            goto label_38fea8;
        }
    }
    ctx->pc = 0x38FE30u;
label_38fe30:
    // 0x38fe30: 0x3c033d2a  lui         $v1, 0x3D2A
    ctx->pc = 0x38fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15658 << 16));
    // 0x38fe34: 0xc6210560  lwc1        $f1, 0x560($s1)
    ctx->pc = 0x38fe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38fe38: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x38fe38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x38fe3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38fe3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fe40: 0x0  nop
    ctx->pc = 0x38fe40u;
    // NOP
    // 0x38fe44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x38fe44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x38fe48: 0xe6200560  swc1        $f0, 0x560($s1)
    ctx->pc = 0x38fe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1376), bits); }
    // 0x38fe4c: 0xc621055c  lwc1        $f1, 0x55C($s1)
    ctx->pc = 0x38fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38fe50: 0xc6200560  lwc1        $f0, 0x560($s1)
    ctx->pc = 0x38fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38fe54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x38fe54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38fe58: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x38FE58u;
    {
        const bool branch_taken_0x38fe58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38fe58) {
            ctx->pc = 0x38FEA8u;
            goto label_38fea8;
        }
    }
    ctx->pc = 0x38FE60u;
    // 0x38fe60: 0xe6210560  swc1        $f1, 0x560($s1)
    ctx->pc = 0x38fe60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1376), bits); }
    // 0x38fe64: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38fe68: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x38fe68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38fe6c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x38FE6Cu;
    {
        const bool branch_taken_0x38fe6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38fe6c) {
            ctx->pc = 0x38FE90u;
            goto label_38fe90;
        }
    }
    ctx->pc = 0x38FE74u;
    // 0x38fe74: 0x9043053a  lbu         $v1, 0x53A($v0)
    ctx->pc = 0x38fe74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1338)));
    // 0x38fe78: 0x2444053a  addiu       $a0, $v0, 0x53A
    ctx->pc = 0x38fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1338));
    // 0x38fe7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38fe80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FE80u;
    {
        const bool branch_taken_0x38fe80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38fe80) {
            ctx->pc = 0x38FE90u;
            goto label_38fe90;
        }
    }
    ctx->pc = 0x38FE88u;
    // 0x38fe88: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x38fe88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x38fe8c: 0x0  nop
    ctx->pc = 0x38fe8cu;
    // NOP
label_38fe90:
    // 0x38fe90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe94: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x38FE94u;
    SET_GPR_U32(ctx, 31, 0x38FE9Cu);
    ctx->pc = 0x38FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FE94u;
    // 0x38fe98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x38FE94u, 0x38FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FE9Cu;
label_38fe9c:
    // 0x38fe9c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x38FE9Cu;
    {
        const bool branch_taken_0x38fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fe9c) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x38FEA4u;
    // 0x38fea4: 0x0  nop
    ctx->pc = 0x38fea4u;
    // NOP
label_38fea8:
    // 0x38fea8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38feac: 0xc62c055c  lwc1        $f12, 0x55C($s1)
    ctx->pc = 0x38feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38feb0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x38feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38feb4: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x38FEB4u;
    SET_GPR_U32(ctx, 31, 0x38FEBCu);
    ctx->pc = 0x38FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FEB4u;
    // 0x38feb8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x38FEB4u, 0x38FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FEBCu;
label_38febc:
    // 0x38febc: 0xc62c0560  lwc1        $f12, 0x560($s1)
    ctx->pc = 0x38febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38fec0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x38fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38fec4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x38fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38fec8: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x38FEC8u;
    SET_GPR_U32(ctx, 31, 0x38FED0u);
    ctx->pc = 0x38FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FEC8u;
    // 0x38fecc: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x38FEC8u, 0x38FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FED0u;
label_38fed0:
    // 0x38fed0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x38FED0u;
    SET_GPR_U32(ctx, 31, 0x38FED8u);
    ctx->pc = 0x38FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FED0u;
    // 0x38fed4: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x38FED0u, 0x38FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FED8u;
label_38fed8:
    // 0x38fed8: 0x8e240554  lw          $a0, 0x554($s1)
    ctx->pc = 0x38fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1364)));
    // 0x38fedc: 0xc096c80  jal         func_25B200
    ctx->pc = 0x38FEDCu;
    SET_GPR_U32(ctx, 31, 0x38FEE4u);
    ctx->pc = 0x38FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FEDCu;
    // 0x38fee0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x38FEDCu, 0x38FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FEE4u;
label_38fee4:
    // 0x38fee4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FEE4u;
    {
        const bool branch_taken_0x38fee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fee4) {
            ctx->pc = 0x38FF00u;
            goto label_38ff00;
        }
    }
    ctx->pc = 0x38FEECu;
    // 0x38feec: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x38feecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38fef0: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x38fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x38fef4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x38fef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38fef8: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x38fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    // 0x38fefc: 0x0  nop
    ctx->pc = 0x38fefcu;
    // NOP
label_38ff00:
    // 0x38ff00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FF00u;
    {
        const bool branch_taken_0x38ff00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ff00) {
            ctx->pc = 0x38FF18u;
            goto label_38ff18;
        }
    }
    ctx->pc = 0x38FF08u;
    // 0x38ff08: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x38ff08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38ff0c: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x38ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
    // 0x38ff10: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x38ff10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38ff14: 0x7c430070  sq          $v1, 0x70($v0)
    ctx->pc = 0x38ff14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 3));
label_38ff18:
    // 0x38ff18: 0x92270565  lbu         $a3, 0x565($s1)
    ctx->pc = 0x38ff18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1381)));
    // 0x38ff1c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x38ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x38ff20: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38ff24: 0x24632200  addiu       $v1, $v1, 0x2200
    ctx->pc = 0x38ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8704));
    // 0x38ff28: 0x24422204  addiu       $v0, $v0, 0x2204
    ctx->pc = 0x38ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8708));
    // 0x38ff2c: 0xc62e0558  lwc1        $f14, 0x558($s1)
    ctx->pc = 0x38ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x38ff30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x38ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38ff38: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x38ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38ff3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ff3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38ff40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff44: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x38ff44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x38ff48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x38ff48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ff4c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x38ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x38ff50: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x38ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x38ff54: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x38ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38ff58: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x38ff58u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38ff5c: 0xc0c0928  jal         func_3024A0
    ctx->pc = 0x38FF5Cu;
    SET_GPR_U32(ctx, 31, 0x38FF64u);
    ctx->pc = 0x38FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FF5Cu;
    // 0x38ff60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024A0u, 0x38FF5Cu, 0x38FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FF64u;
label_38ff64:
    // 0x38ff64: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x38ff64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x38ff68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FF68u;
    {
        const bool branch_taken_0x38ff68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF68u;
        // 0x38ff6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff68) {
            ctx->pc = 0x38FF78u;
            goto label_38ff78;
        }
    }
    ctx->pc = 0x38FF70u;
    // 0x38ff70: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x38FF70u;
    {
        const bool branch_taken_0x38ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ff70) {
            ctx->pc = 0x38FFF8u;
            goto label_38fff8;
        }
    }
    ctx->pc = 0x38FF78u;
label_38ff78:
    // 0x38ff78: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x38ff78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x38ff7c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x38ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x38ff80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38ff84: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38ff84u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x38ff88: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x38ff88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x38ff8c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x38FF8Cu;
    {
        const bool branch_taken_0x38ff8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38ff8c) {
            ctx->pc = 0x38FFC8u;
            goto label_38ffc8;
        }
    }
    ctx->pc = 0x38FF94u;
    // 0x38ff94: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x38ff94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x38ff98: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x38ff98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x38ff9c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x38FF9Cu;
    {
        const bool branch_taken_0x38ff9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF9Cu;
        // 0x38ffa0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff9c) {
            ctx->pc = 0x38FFF0u;
            goto label_38fff0;
        }
    }
    ctx->pc = 0x38FFA4u;
    // 0x38ffa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ffa8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x38ffa8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x38ffac: 0x0  nop
    ctx->pc = 0x38ffacu;
    // NOP
    // 0x38ffb0: 0x0  nop
    ctx->pc = 0x38ffb0u;
    // NOP
    // 0x38ffb4: 0x2010  mfhi        $a0
    ctx->pc = 0x38ffb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x38ffb8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38ffb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x38ffbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38FFBCu;
    {
        const bool branch_taken_0x38ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFBCu;
        // 0x38ffc0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ffbc) {
            ctx->pc = 0x38FFF0u;
            goto label_38fff0;
        }
    }
    ctx->pc = 0x38FFC4u;
    // 0x38ffc4: 0x0  nop
    ctx->pc = 0x38ffc4u;
    // NOP
label_38ffc8:
    // 0x38ffc8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x38ffc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x38ffcc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x38ffccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38ffd0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38FFD0u;
    {
        const bool branch_taken_0x38ffd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ffd0) {
            ctx->pc = 0x38FFF0u;
            goto label_38fff0;
        }
    }
    ctx->pc = 0x38FFD8u;
    // 0x38ffd8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x38ffd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x38ffdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ffe0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x38ffe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x38ffe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38FFE4u;
    {
        const bool branch_taken_0x38ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FFE4u;
        // 0x38ffe8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ffe4) {
            ctx->pc = 0x38FFF8u;
            goto label_38fff8;
        }
    }
    ctx->pc = 0x38FFECu;
    // 0x38ffec: 0x0  nop
    ctx->pc = 0x38ffecu;
    // NOP
label_38fff0:
    // 0x38fff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fff4: 0x0  nop
    ctx->pc = 0x38fff4u;
    // NOP
label_38fff8:
    // 0x38fff8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FFF8u;
    {
        const bool branch_taken_0x38fff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fff8) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x390000u;
    // 0x390000: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x390000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x390004: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x390004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x390008: 0xa2230521  sb          $v1, 0x521($s1)
    ctx->pc = 0x390008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
    // 0x39000c: 0x0  nop
    ctx->pc = 0x39000cu;
    // NOP
label_390010:
    // 0x390010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x390010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39001c: 0x3e00008  jr          $ra
    ctx->pc = 0x39001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39001Cu;
        // 0x390020: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390024u;
}
