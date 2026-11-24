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

// Function: sub_00395010
// Address: 0x395010 - 0x395240
void sub_00395010_0x395010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395010_0x395010");
#endif

    switch (ctx->pc) {
        case 0x395028u: goto label_395028;
        case 0x39505cu: goto label_39505c;
        case 0x395088u: goto label_395088;
        case 0x3950a0u: goto label_3950a0;
        case 0x395160u: goto label_395160;
        case 0x3951d8u: goto label_3951d8;
        default: break;
    }

    ctx->pc = 0x395010u;

    // 0x395010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x395010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x395014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x395014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x395018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x395018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39501c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x39501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x395020: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x395020u;
    SET_GPR_U32(ctx, 31, 0x395028u);
    ctx->pc = 0x395024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395020u;
    // 0x395024: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x395020u, 0x395028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395028u;
label_395028:
    // 0x395028: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x395028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x39502c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x39502cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x395030: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x395030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x395034: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x395034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x395038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39503c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x39503cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x395040: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x395040u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x395044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x395044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395048: 0x0  nop
    ctx->pc = 0x395048u;
    // NOP
    // 0x39504c: 0x1012  mflo        $v0
    ctx->pc = 0x39504cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x395050: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x395050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395054: 0xc097080  jal         func_25C200
    ctx->pc = 0x395054u;
    SET_GPR_U32(ctx, 31, 0x39505Cu);
    ctx->pc = 0x395058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395054u;
    // 0x395058: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C200u, 0x395054u, 0x39505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39505Cu;
label_39505c:
    // 0x39505c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x39505cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x395060: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x395060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x395064: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x395064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x395068: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x395068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x39506c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39506cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395070: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x395070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x395074: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x395074u;
    {
        const bool branch_taken_0x395074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x395078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395074u;
        // 0x395078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395074) {
            ctx->pc = 0x395118u;
            goto label_395118;
        }
    }
    ctx->pc = 0x39507Cu;
    // 0x39507c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x39507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x395080: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x395080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x395084: 0x0  nop
    ctx->pc = 0x395084u;
    // NOP
label_395088:
    // 0x395088: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x395088u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39508c: 0x3c0c0068  lui         $t4, 0x68
    ctx->pc = 0x39508cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)104 << 16));
    // 0x395090: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x395090u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395094: 0x258c22a0  addiu       $t4, $t4, 0x22A0
    ctx->pc = 0x395094u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8864));
    // 0x395098: 0x914b0002  lbu         $t3, 0x2($t2)
    ctx->pc = 0x395098u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x39509c: 0x0  nop
    ctx->pc = 0x39509cu;
    // NOP
label_3950a0:
    // 0x3950a0: 0x1569000b  bne         $t3, $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x3950A0u;
    {
        const bool branch_taken_0x3950a0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        if (branch_taken_0x3950a0) {
            ctx->pc = 0x3950D0u;
            goto label_3950d0;
        }
    }
    ctx->pc = 0x3950A8u;
    // 0x3950a8: 0x8d482b28  lw          $t0, 0x2B28($t2)
    ctx->pc = 0x3950a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11048)));
    // 0x3950ac: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x3950acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3950b0: 0x15070011  bne         $t0, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x3950B0u;
    {
        const bool branch_taken_0x3950b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x3950B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950B0u;
        // 0x3950b4: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950b0) {
            ctx->pc = 0x3950F8u;
            goto label_3950f8;
        }
    }
    ctx->pc = 0x3950B8u;
    // 0x3950b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3950b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3950bc: 0xfd4021  addu        $t0, $a3, $sp
    ctx->pc = 0x3950bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x3950c0: 0x8d0700a0  lw          $a3, 0xA0($t0)
    ctx->pc = 0x3950c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 160)));
    // 0x3950c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3950c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3950c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3950C8u;
    {
        const bool branch_taken_0x3950c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3950CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950C8u;
        // 0x3950cc: 0xad0700a0  sw          $a3, 0xA0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 160), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950c8) {
            ctx->pc = 0x395108u;
            goto label_395108;
        }
    }
    ctx->pc = 0x3950D0u;
label_3950d0:
    // 0x3950d0: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x3950d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3950d4: 0x15670008  bne         $t3, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3950D4u;
    {
        const bool branch_taken_0x3950d4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 7));
        ctx->pc = 0x3950D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950D4u;
        // 0x3950d8: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950d4) {
            ctx->pc = 0x3950F8u;
            goto label_3950f8;
        }
    }
    ctx->pc = 0x3950DCu;
    // 0x3950dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3950dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3950e0: 0xfd4021  addu        $t0, $a3, $sp
    ctx->pc = 0x3950e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x3950e4: 0x8d0700a0  lw          $a3, 0xA0($t0)
    ctx->pc = 0x3950e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 160)));
    // 0x3950e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3950e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3950ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3950ECu;
    {
        const bool branch_taken_0x3950ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3950F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950ECu;
        // 0x3950f0: 0xad0700a0  sw          $a3, 0xA0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 160), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950ec) {
            ctx->pc = 0x395108u;
            goto label_395108;
        }
    }
    ctx->pc = 0x3950F4u;
    // 0x3950f4: 0x0  nop
    ctx->pc = 0x3950f4u;
    // NOP
label_3950f8:
    // 0x3950f8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x3950f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x3950fc: 0x29a70003  slti        $a3, $t5, 0x3
    ctx->pc = 0x3950fcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x395100: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x395100u;
    {
        const bool branch_taken_0x395100 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x395104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395100u;
        // 0x395104: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395100) {
            ctx->pc = 0x3950A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3950a0;
        }
    }
    ctx->pc = 0x395108u;
label_395108:
    // 0x395108: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x395108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39510c: 0xa2382a  slt         $a3, $a1, $v0
    ctx->pc = 0x39510cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x395110: 0x14e0ffdd  bnez        $a3, . + 4 + (-0x23 << 2)
    ctx->pc = 0x395110u;
    {
        const bool branch_taken_0x395110 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x395114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395110u;
        // 0x395114: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395110) {
            ctx->pc = 0x395088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395088;
        }
    }
    ctx->pc = 0x395118u;
label_395118:
    // 0x395118: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x395118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x39511c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39511Cu;
    {
        const bool branch_taken_0x39511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39511Cu;
        // 0x395120: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39511c) {
            ctx->pc = 0x395130u;
            goto label_395130;
        }
    }
    ctx->pc = 0x395124u;
    // 0x395124: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x395124u;
    {
        const bool branch_taken_0x395124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395124) {
            ctx->pc = 0x395230u;
            goto label_395230;
        }
    }
    ctx->pc = 0x39512Cu;
    // 0x39512c: 0x0  nop
    ctx->pc = 0x39512cu;
    // NOP
label_395130:
    // 0x395130: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x395130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x395134: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x395134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x395138: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x395138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39513c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x395140: 0x244222b0  addiu       $v0, $v0, 0x22B0
    ctx->pc = 0x395140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
    // 0x395144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x395148: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x395148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39514c: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x39514cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x395150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x395150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395154: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x395154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395158: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x395158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39515c: 0x0  nop
    ctx->pc = 0x39515cu;
    // NOP
label_395160:
    // 0x395160: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x395160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x395164: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x395164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x395168: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x395168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39516c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x39516Cu;
    {
        const bool branch_taken_0x39516c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39516c) {
            ctx->pc = 0x395178u;
            goto label_395178;
        }
    }
    ctx->pc = 0x395174u;
    // 0x395174: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x395174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_395178:
    // 0x395178: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x395178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x39517c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x39517cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x395180: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x395180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x395184: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x395184u;
    {
        const bool branch_taken_0x395184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395184u;
        // 0x395188: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395184) {
            ctx->pc = 0x395160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395160;
        }
    }
    ctx->pc = 0x39518Cu;
    // 0x39518c: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39518Cu;
    {
        const bool branch_taken_0x39518c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x395190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39518Cu;
        // 0x395190: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39518c) {
            ctx->pc = 0x3951A0u;
            goto label_3951a0;
        }
    }
    ctx->pc = 0x395194u;
    // 0x395194: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x395194u;
    {
        const bool branch_taken_0x395194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395194) {
            ctx->pc = 0x395230u;
            goto label_395230;
        }
    }
    ctx->pc = 0x39519Cu;
    // 0x39519c: 0x0  nop
    ctx->pc = 0x39519cu;
    // NOP
label_3951a0:
    // 0x3951a0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3951a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3951a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3951a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3951a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3951a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3951ac: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3951acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3951b0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3951b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3951b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3951b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3951b8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3951b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3951bc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3951bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3951c0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3951c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3951c4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x3951c4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3951c8: 0x0  nop
    ctx->pc = 0x3951c8u;
    // NOP
    // 0x3951cc: 0x0  nop
    ctx->pc = 0x3951ccu;
    // NOP
    // 0x3951d0: 0x2810  mfhi        $a1
    ctx->pc = 0x3951d0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x3951d4: 0x0  nop
    ctx->pc = 0x3951d4u;
    // NOP
label_3951d8:
    // 0x3951d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3951d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3951dc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3951dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3951e0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3951e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3951e4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3951E4u;
    {
        const bool branch_taken_0x3951e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3951e4) {
            ctx->pc = 0x395218u;
            goto label_395218;
        }
    }
    ctx->pc = 0x3951ECu;
    // 0x3951ec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3951ECu;
    {
        const bool branch_taken_0x3951ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3951ec) {
            ctx->pc = 0x395200u;
            goto label_395200;
        }
    }
    ctx->pc = 0x3951F4u;
    // 0x3951f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3951F4u;
    {
        const bool branch_taken_0x3951f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3951F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951F4u;
        // 0x3951f8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951f4) {
            ctx->pc = 0x395218u;
            goto label_395218;
        }
    }
    ctx->pc = 0x3951FCu;
    // 0x3951fc: 0x0  nop
    ctx->pc = 0x3951fcu;
    // NOP
label_395200:
    // 0x395200: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x395200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x395204: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x395204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x395208: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x395208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x39520c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x395210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x395210u;
    {
        const bool branch_taken_0x395210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395210u;
        // 0x395214: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395210) {
            ctx->pc = 0x395230u;
            goto label_395230;
        }
    }
    ctx->pc = 0x395218u;
label_395218:
    // 0x395218: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x395218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x39521c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x39521cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x395220: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x395220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x395224: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x395224u;
    {
        const bool branch_taken_0x395224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395224u;
        // 0x395228: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395224) {
            ctx->pc = 0x3951D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3951d8;
        }
    }
    ctx->pc = 0x39522Cu;
    // 0x39522c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_395230:
    // 0x395230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x395234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395238: 0x3e00008  jr          $ra
    ctx->pc = 0x395238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395238u;
        // 0x39523c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395240u;
}
