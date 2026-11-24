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

// Function: sub_0036A4A0
// Address: 0x36a4a0 - 0x36a5d8
void sub_0036A4A0_0x36a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A4A0_0x36a4a0");
#endif

    switch (ctx->pc) {
        case 0x36a4c0u: goto label_36a4c0;
        case 0x36a4d4u: goto label_36a4d4;
        case 0x36a500u: goto label_36a500;
        case 0x36a518u: goto label_36a518;
        default: break;
    }

    ctx->pc = 0x36a4a0u;

    // 0x36a4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a4a4: 0x24051388  addiu       $a1, $zero, 0x1388
    ctx->pc = 0x36a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x36a4a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a4b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4b4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x36a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x36a4b8: 0xc05e3a4  jal         func_178E90
    ctx->pc = 0x36A4B8u;
    SET_GPR_U32(ctx, 31, 0x36A4C0u);
    ctx->pc = 0x36A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4B8u;
    // 0x36a4bc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E90u, 0x36A4B8u, 0x36A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4C0u;
label_36a4c0:
    // 0x36a4c0: 0xaf828bf0  sw          $v0, -0x7410($gp)
    ctx->pc = 0x36a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937584), GPR_U32(ctx, 2));
    // 0x36a4c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x36a4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36a4c8: 0x8f848bf0  lw          $a0, -0x7410($gp)
    ctx->pc = 0x36a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937584)));
    // 0x36a4cc: 0xc049590  jal         func_125640
    ctx->pc = 0x36A4CCu;
    SET_GPR_U32(ctx, 31, 0x36A4D4u);
    ctx->pc = 0x36A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4CCu;
    // 0x36a4d0: 0x24061388  addiu       $a2, $zero, 0x1388 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x36A4CCu, 0x36A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4D4u;
label_36a4d4:
    // 0x36a4d4: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x36a4d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a4d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36a4d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x36a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36a4e0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x36a4e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x36a4e4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x36a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36a4e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x36a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x36a4ec: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x36A4ECu;
    {
        const bool branch_taken_0x36a4ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4ECu;
        // 0x36a4f0: 0x24680002  addiu       $t0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4ec) {
            ctx->pc = 0x36A5C8u;
            goto label_36a5c8;
        }
    }
    ctx->pc = 0x36A4F4u;
    // 0x36a4f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36a4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36a4fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36a500:
    // 0x36a500: 0x94a60002  lhu         $a2, 0x2($a1)
    ctx->pc = 0x36a500u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x36a504: 0x94a90004  lhu         $t1, 0x4($a1)
    ctx->pc = 0x36a504u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36a508: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x36a508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x36a50c: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x36A50Cu;
    {
        const bool branch_taken_0x36a50c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a50c) {
            ctx->pc = 0x36A5A8u;
            goto label_36a5a8;
        }
    }
    ctx->pc = 0x36A514u;
    // 0x36a514: 0x0  nop
    ctx->pc = 0x36a514u;
    // NOP
label_36a518:
    // 0x36a518: 0x28e10032  slti        $at, $a3, 0x32
    ctx->pc = 0x36a518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x36a51c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x36A51Cu;
    {
        const bool branch_taken_0x36a51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a51c) {
            ctx->pc = 0x36A590u;
            goto label_36a590;
        }
    }
    ctx->pc = 0x36A524u;
    // 0x36a524: 0x910b0001  lbu         $t3, 0x1($t0)
    ctx->pc = 0x36a524u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x36a528: 0x29610032  slti        $at, $t3, 0x32
    ctx->pc = 0x36a528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x36a52c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x36A52Cu;
    {
        const bool branch_taken_0x36a52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A52Cu;
        // 0x36a530: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a52c) {
            ctx->pc = 0x36A590u;
            goto label_36a590;
        }
    }
    ctx->pc = 0x36A534u;
    // 0x36a534: 0x910a0000  lbu         $t2, 0x0($t0)
    ctx->pc = 0x36a534u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a538: 0x902915bc  lbu         $t1, 0x15BC($at)
    ctx->pc = 0x36a538u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 5564)));
    // 0x36a53c: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x36a53cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x36a540: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36A540u;
    {
        const bool branch_taken_0x36a540 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a540) {
            ctx->pc = 0x36A590u;
            goto label_36a590;
        }
    }
    ctx->pc = 0x36A548u;
    // 0x36a548: 0x8f8a8bf0  lw          $t2, -0x7410($gp)
    ctx->pc = 0x36a548u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937584)));
    // 0x36a54c: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x36a54cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x36a550: 0x950b0002  lhu         $t3, 0x2($t0)
    ctx->pc = 0x36a550u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x36a554: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x36a554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x36a558: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x36a558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x36a55c: 0xa52b0000  sh          $t3, 0x0($t1)
    ctx->pc = 0x36a55cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x36a560: 0x910b0001  lbu         $t3, 0x1($t0)
    ctx->pc = 0x36a560u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x36a564: 0x8f898bf0  lw          $t1, -0x7410($gp)
    ctx->pc = 0x36a564u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937584)));
    // 0x36a568: 0x950c0002  lhu         $t4, 0x2($t0)
    ctx->pc = 0x36a568u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x36a56c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x36a56cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x36a570: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x36a570u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x36a574: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x36a574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x36a578: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x36a578u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x36a57c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x36a57cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x36a580: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x36a580u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x36a584: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x36a584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x36a588: 0xa52c0000  sh          $t4, 0x0($t1)
    ctx->pc = 0x36a588u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x36a58c: 0x0  nop
    ctx->pc = 0x36a58cu;
    // NOP
label_36a590:
    // 0x36a590: 0x94a90004  lhu         $t1, 0x4($a1)
    ctx->pc = 0x36a590u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x36a594: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36a598: 0xc9482a  slt         $t1, $a2, $t1
    ctx->pc = 0x36a598u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x36a59c: 0x1520ffde  bnez        $t1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x36A59Cu;
    {
        const bool branch_taken_0x36a59c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A59Cu;
        // 0x36a5a0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a59c) {
            ctx->pc = 0x36A518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a518;
        }
    }
    ctx->pc = 0x36A5A4u;
    // 0x36a5a4: 0x0  nop
    ctx->pc = 0x36a5a4u;
    // NOP
label_36a5a8:
    // 0x36a5a8: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x36a5a8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a5ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x36a5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x36a5b0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x36a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x36a5b4: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x36a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x36a5b8: 0xe6302a  slt         $a2, $a3, $a2
    ctx->pc = 0x36a5b8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x36a5bc: 0x14c0ffd0  bnez        $a2, . + 4 + (-0x30 << 2)
    ctx->pc = 0x36A5BCu;
    {
        const bool branch_taken_0x36a5bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5BCu;
        // 0x36a5c0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5bc) {
            ctx->pc = 0x36A500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a500;
        }
    }
    ctx->pc = 0x36A5C4u;
    // 0x36a5c4: 0x0  nop
    ctx->pc = 0x36a5c4u;
    // NOP
label_36a5c8:
    // 0x36a5c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a5cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a5ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5D0u;
        // 0x36a5d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A5D8u;
}
